-- Hud Rendering stuff

if GameModeOn or _G.charSelect.are_movesets_restricted() then return end
if gPlayerSyncTable[0].disable_custom_moveset then return end
local extraStates = {}
for i = 0, MAX_PLAYERS - 1 do
    extraStates[i] = {
        prevPos = { x = 0, y = 0, z = 0 },
        prevScale = 0,
        inited = false
    }
end

-- Function to completely wipe a player's saved state
local function reset_player_state(index)
    if extraStates[index] then
        extraStates[index].inited = false
        extraStates[index].prevScale = 0
        extraStates[index].prevPos = { x = 0, y = 0, z = 0 }
    end
end

-- Actions that hide the box for remote players only
local hideRemoteActs = {
    [ACT_START_CROUCHING] = true,
    [ACT_CROUCHING]       = true,
    [ACT_STOP_CROUCHING]  = true,
    [ACT_START_CRAWLING]  = true,
    [ACT_CRAWLING]        = true,
    [ACT_STOP_CRAWLING]   = true
}

-- Actions that ALWAYS hide the box for everyone (including local player)
local hideAllActs = {
    [ACT_IN_CANNON]      = true,
    [ACT_DISAPPEARED]    = true,
    [ACT_VIRIDIAN_DEATH] = true
}

local function checkpoint_cooldown()
    djui_hud_set_resolution(RESOLUTION_N64)

    local tex = get_texture_info("viridianbox")
    local opacity = 255
    local offsetX = -3

    local localNp = gNetworkPlayers[0]

    for i = 0, MAX_PLAYERS - 1 do
        local np = gNetworkPlayers[i]
        local s  = gPlayerSyncTable[i]

        -- a lot of checks
        if np and np.connected and s and s.coolDown and s.coolDown > 0 and s.viriDied ~= 1 then
            if _G.charSelect and _G.charSelect.character_get_current_number(i) == CT_VIRIDIAN then
                local m = gMarioStates[i]
                local e = extraStates[i]

                -- verify the remote player is actually in the local player's level/area
                local sameArea = (np.currLevelNum == localNp.currLevelNum and np.currAreaIndex == localNp.currAreaIndex)

                -- hide
                local isRemoteOnlyHidden = (i ~= 0 and hideRemoteActs[m.action])

                local shouldHide = hideAllActs[m.action]
                    or isRemoteOnlyHidden
                    or not sameArea
                    or not is_player_active(m)
                    or not np.currAreaSyncValid
                    or (i == 0 and m.action == ACT_FIRST_PERSON)
                    or find_object_with_behavior(get_behavior_from_id(id_bhvActSelector)) ~= nil

                if shouldHide then
                    e.inited = false
                    e.prevScale = 0
                else
                    local color = network_player_get_override_palette_color(np, CAP)

                    -- height offset adjustment
                    local heightOffset = 110
                    if i ~= 0 and (gServerSettings.nametags == 1 or gServerSettings.nametags == true) then
                        heightOffset = 160
                    end

                    local mPos = {
                        x = m.marioBodyState.headPos.x,
                        y = m.marioBodyState.headPos.y + heightOffset,
                        z = m.marioBodyState.headPos.z
                    }

                    local pos = { x = 0, y = 0, z = 0 }

                    if djui_hud_world_pos_to_screen_pos(mPos, pos) then
                        local perspectiveScale = -400 / pos.z * djui_hud_get_fov_coeff()
                        local boxSizeMultiplier = 1.5
                        local boxScale = perspectiveScale * boxSizeMultiplier

                        local cols, rows, distance = 4, 4, 6
                        local boxWidth = (cols - 1) * distance * boxScale
                        local boxHeight = (rows - 1) * distance * boxScale

                        if not e.inited or e.prevScale == 0 then
                            vec3f_copy(e.prevPos, pos)
                            e.prevScale = boxScale
                            e.inited = true
                        end

                        local prevPos = { x = e.prevPos.x, y = e.prevPos.y }
                        local prevScale = e.prevScale
                        local prevBoxWidth = (cols - 1) * distance * prevScale
                        local prevBoxHeight = (rows - 1) * distance * prevScale

                        local curBoxX = (pos.x + (offsetX * boxScale)) - (boxWidth * 0.5)
                        local curBoxY = pos.y - (boxHeight * 0.5)
                        local prevBoxX = (prevPos.x + (offsetX * prevScale)) - (prevBoxWidth * 0.5)
                        local prevBoxY = prevPos.y - (prevBoxHeight * 0.5)

                        djui_hud_set_color(color.r, color.g, color.b, opacity)
                        render_tiled_box_interpolated(
                            tex,
                            prevBoxX, prevBoxY, prevScale,
                            curBoxX, curBoxY, boxScale,
                            cols, rows, 6, 6
                        )

                        djui_hud_set_font(FONT_SPECIAL)

                        local textStr = tostring(math.ceil(s.coolDown))
                        local len = #textStr

                        local fontScale = boxScale * 0.5
                        local prevFontScale = prevScale * 0.5

                        local baseCharWidth = (len == 1) and 4.25 or 5.2
                        local textOffsetX = (len * baseCharWidth - 6)
                        local textOffsetY = 6.0

                        if s.coolDown <= 9 then
                            textOffsetX = (len * baseCharWidth - 3)
                        end

                        local curTextX = (pos.x + (offsetX * boxScale)) - (textOffsetX * boxScale)
                        local curTextY = pos.y - (textOffsetY * boxScale)

                        local prevTextX = (prevPos.x + (offsetX * prevScale)) - (textOffsetX * prevScale)
                        local prevTextY = prevPos.y - (textOffsetY * prevScale)

                        djui_hud_print_text_interpolated(
                            textStr,
                            prevTextX, prevTextY, prevFontScale, prevFontScale,
                            curTextX, curTextY, fontScale, fontScale
                        )

                        vec3f_copy(e.prevPos, pos)
                        e.prevScale = boxScale
                    end
                end
            else
                reset_player_state(i)
            end
        else
            reset_player_state(i)
        end
    end
end


hook_event(HOOK_ON_PLAYER_DISCONNECTED, function(m)
    if m and m.playerIndex then
        local s = gPlayerSyncTable[m.playerIndex]
        if s then
            s.coolDownFrames = 0
            s.coolDown = 0
        end
        reset_player_state(m.playerIndex)
    end
end)


hook_event(HOOK_ON_LEVEL_INIT, function()
    reset_player_state(0)
end)

hook_event(HOOK_ON_HUD_RENDER_BEHIND, checkpoint_cooldown)
