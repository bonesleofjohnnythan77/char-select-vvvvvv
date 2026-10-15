--Code by PeachyPeach956
if not _G.charSelectExists then return end

local ANIM_FREEZE_FRAMES = 4

local sMarioAnimStates = {}
for i = 0, MAX_PLAYERS - 1 do
    sMarioAnimStates[i] = {
        animIndex = -1,
        animFrame = 0,
        freezeFrame = false,
        nextAnimFrame = 0,
        nextAnimAccel = 0,
        nextAnimFrameAccelAssist = 0,
    }
end



local function geo_get_animation_next_frame(animInfo)
    local anim = animInfo.curAnim
    if not anim then
        return animInfo.animFrame, animInfo.animFrameAccelAssist
    end


    if animInfo.animTimer == get_area_update_counter() or anim.flags & ANIM_FLAG_2 ~= 0 then
        return animInfo.animFrame, animInfo.animFrameAccelAssist
    end

    local animFrameAccelAssist = 0
    if anim.flags & ANIM_FLAG_BACKWARD ~= 0 then
        if animInfo.animAccel ~= 0 then
            animFrameAccelAssist = animInfo.animFrameAccelAssist - animInfo.animAccel
        else
            animFrameAccelAssist = (animInfo.animFrame - 1) << 16
        end
        if (animFrameAccelAssist >> 16) < anim.loopStart then
            if anim.flags & ANIM_FLAG_NOLOOP ~= 0 then
                animFrameAccelAssist = (animFrameAccelAssist & 0xFFFF) | (anim.loopStart << 16)
            else
                animFrameAccelAssist = (animFrameAccelAssist & 0xFFFF) | ((anim.loopEnd - 1) << 16)
            end
        end
    else
        if animInfo.animAccel ~= 0 then
            animFrameAccelAssist = animInfo.animFrameAccelAssist + animInfo.animAccel
        else
            animFrameAccelAssist = (animInfo.animFrame + 1) << 16
        end
        if (animFrameAccelAssist >> 16) >= anim.loopEnd then
            if anim.flags & ANIM_FLAG_NOLOOP ~= 0 then
                animFrameAccelAssist = (animFrameAccelAssist & 0xFFFF) | ((anim.loopEnd - 1) << 16)
            else
                animFrameAccelAssist = (animFrameAccelAssist & 0xFFFF) | (anim.loopStart << 16)
            end
        end
    end

    return (animFrameAccelAssist >> 16), animFrameAccelAssist
end

hook_event(HOOK_MARIO_UPDATE, function(m)
    if is_player_viridian(m.playerIndex) then
        m.marioObj.hookRender = 1
        m.marioObj.header.gfx.sharedChild.hookProcess = 1
    end
end)

hook_event(HOOK_ON_OBJECT_RENDER, function(o)
    if obj_has_behavior_id(o, id_bhvMario) == 1 then
        local playerIndex = o.oBehParams - 1


        if not is_player_viridian(playerIndex) then return end

        local mas = sMarioAnimStates[playerIndex]
        if not mas then return end

        mas.freezeFrame = false
        obj_anim_skip_interpolation(o)

        local animInfo = o.header.gfx.animInfo
        if animInfo then
            local animIndex = animInfo.animID
            if animIndex == mas.animIndex then
                if get_global_timer() % ANIM_FREEZE_FRAMES ~= 0 then
                    local nextAnimFrame, nextAnimFrameAccelAssist = geo_get_animation_next_frame(animInfo)
                    mas.nextAnimFrame = nextAnimFrame
                    mas.nextAnimAccel = animInfo.animAccel
                    mas.nextAnimFrameAccelAssist = nextAnimFrameAccelAssist
                    mas.freezeFrame = true
                    animInfo.animAccel = 1
                    animInfo.animFrame = mas.animFrame
                    animInfo.animFrameAccelAssist = (mas.animFrame << 16) + 1
                else
                    mas.animFrame = animInfo.animFrame
                end
            else
                mas.animIndex = animIndex
                mas.animFrame = 0
            end
        end
    end
end)

hook_event(HOOK_ON_GEO_PROCESS, function()
    local o = geo_get_current_object()
    if obj_has_behavior_id(o, id_bhvMario) == 1 then
        local playerIndex = o.oBehParams - 1

        -- restore animation state ONLY for viridian
        if not is_player_viridian(playerIndex) then return end

        local mas = sMarioAnimStates[playerIndex]
        local animInfo = o.header.gfx.animInfo
        if animInfo and mas and mas.freezeFrame then
            animInfo.animFrame = mas.nextAnimFrame
            animInfo.animAccel = mas.nextAnimAccel
            animInfo.animFrameAccelAssist = mas.nextAnimFrameAccelAssist
            mas.freezeFrame = false
        end
    end
end)
