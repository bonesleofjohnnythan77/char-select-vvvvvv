
if not (_G.charSelectExists and _G.charSelect.character_get_current_number) then return end
ACT_VIRIDIAN_DEATH = allocate_mario_action(ACT_GROUP_CUTSCENE | ACT_FLAG_INTANGIBLE | ACT_FLAG_AIR)



function reset_values(m)
    if GameModeOn or isThatHack or _G.charSelect.are_movesets_restricted() then return end
    local s = gPlayerSyncTable[m.playerIndex]
    s.tries = 0
    s.checkpointSpawned = false
    s.viriDied = 0
    s.checkpointX = 0
    s.checkpointY = 0
    s.checkpointZ = 0
    s.deathTimer = 0
    s.viridianGlow = 0
    s.viridianGlowDir = 0
    s.viridianDeadR = 0
    if s.coolDownFrames == nil then
        s.coolDownFrames = 0
    end
    if s.coolDown == nil then
        s.coolDown = 0
    end
end

function act_viridian_death(m)
    local np = gNetworkPlayers[m.playerIndex]
    local s = gPlayerSyncTable[m.playerIndex]



    if m.actionTimer == 0 then
        s.viriDied = 1
        m.hurtCounter = 0
        m.faceAngle.y = 0
        m.invincTimer = 25
        play_character_sound(m, CHAR_SOUND_DYING)
    end


    if m.actionTimer == 23 then
        if s.tries > 0 and s.checkpointSpawned then
            m.pos.x = s.checkpointX
            m.pos.y = s.checkpointY
            m.pos.z = s.checkpointZ
            m.flags = 16
            m.invincTimer = 0
            s.viriDied = 0
            network_player_reset_override_palette(np)
            if m.playerIndex == 0 then
                s.tries = s.tries - 1
                
                m.health = 0x800
                if camera_config_is_free_cam_enabled() then
                    gLakituState.mode = CAMERA_MODE_NEWCAM
                else
                    gLakituState.mode = CAMERA_MODE_ROM_HACK
                end

                if s.tries <= 0 then
                    s.checkpointSpawned = false
                    s.coolDownFrames = 20 * 30
                end
            end
            set_mario_action(m, ACT_IDLE, 0)
        else
            if m.playerIndex == 0 then
                s.viriDied = 1
                level_trigger_warp(m, WARP_OP_DEATH)
            end
            set_mario_action(m, ACT_DISAPPEARED, 0)
        end
    end

        
    

    m.quicksandDepth = 0
    m.squishTimer = 0
    m.forwardVel = 0
    m.marioObj.header.gfx.angle.x = 0
    m.marioObj.header.gfx.angle.z = 0
    m.marioBodyState.eyeState = 8
    set_mario_animation(m, MARIO_ANIM_FIRST_PERSON)
    

    m.actionTimer = m.actionTimer + 1
end

function spawn_player_checkpoint(m)
    if GameModeOn or _G.charSelect.are_movesets_restricted() then return end
    local s = gPlayerSyncTable[m.playerIndex]
    if m.playerIndex == 0 and (m.controller.buttonPressed & X_BUTTON) ~= 0 and not s.checkpointSpawned and s.coolDown <= 0 and (m.action & (ACT_FLAG_AIR | ACT_GROUP_SUBMERGED | ACT_GROUP_CUTSCENE)) == 0 and m.action ~= ACT_BUBBLED then
        spawn_sync_object(bhvViridianCheckpoint, E_MODEL_VIRIDIAN_CHECKPOINT, m.pos.x, m.pos.y, m.pos.z, function(o)
            o.globalPlayerIndex = network_global_index_from_local(0)
        end)
        s.tries = 3
        s.checkpointSpawned = true
        s.checkpointX = m.pos.x
        s.checkpointY = m.pos.y
        s.checkpointZ = m.pos.z
        play_character_sound(m, CHAR_SOUND_UH2)
    end
end

function on_set_action(m, action)
    if m.playerIndex ~= 0 then return end
    if _G.charSelect.character_get_current_number() ~= CT_VIRIDIAN then return end
    if gPlayerSyncTable[0].disable_custom_moveset then return end
    if _G.charSelect.are_movesets_restricted() or GameModeOn then return end

    if burnActs[action] or m.hurtCounter >= 1 then
        return ACT_VIRIDIAN_DEATH
    end

    --in the case player dies in the same area and doesnt enter another level
    if exitActs[m.action] then
        reset_values(m)
        gPlayerSyncTable[0].coolDownFrames = 0
        gPlayerSyncTable[0].coolDown = 0
    end
end

function death_check(m)
    if m.playerIndex ~= 0 then return end
    if GameModeOn or _G.charSelect.are_movesets_restricted() then return end
    if _G.charSelect.character_get_current_number() ~= CT_VIRIDIAN then return end

    local s = gPlayerSyncTable[0]

    if s.viriDied == 0 and not GameModeOn then
        if m.floor and m.floor.type == SURFACE_DEATH_PLANE and (m.pos.y - m.floorHeight <= 2048) and m.action ~= ACT_BUBBLED then
            set_mario_action(m, ACT_VIRIDIAN_DEATH, 0)
        end
    end
end

function health_check(m)
    if m.playerIndex ~= 0 then return end
    if _G.charSelect.character_get_current_number(0) ~= CT_VIRIDIAN then return end
    if GameModeOn or _G.charSelect.are_movesets_restricted() then return end


    local inHazard = (m.input & (INPUT_IN_POISON_GAS | INPUT_IN_WATER)) ~= 0


    if not inHazard or GameModeOn then
        m.health = 0x880
    end
end

hook_mario_action(ACT_VIRIDIAN_DEATH, act_viridian_death)
hook_event(HOOK_BEFORE_SET_MARIO_ACTION, on_set_action)

hook_event(HOOK_ON_PLAYER_CONNECTED, function(m)
    if m and m.playerIndex then
        local s = gPlayerSyncTable[m.playerIndex]
        if s then
            s.coolDownFrames = 0
            s.coolDown = 0
        end
        reset_values(m)
    end
end)

hook_event(HOOK_ON_LEVEL_INIT, function()
    local m = gMarioStates[0]
    local s = gPlayerSyncTable[0]
    if s then
        s.coolDownFrames = 0
        s.coolDown = 0
    end
    reset_values(m)
end)
