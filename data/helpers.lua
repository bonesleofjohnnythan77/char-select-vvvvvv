-- Helper function to check if a player is using CT_VIRIDIAN
function is_player_viridian(playerIndex)
    if _G.charSelect and _G.charSelect.character_get_current_number then
        return _G.charSelect.character_get_current_number(playerIndex) == CT_VIRIDIAN
    end
end

for i = 0, MAX_PLAYERS - 1 do
    local s = gPlayerSyncTable[i]
    s.viriDied = 0
    s.viridianGlow = 0
    s.viridianGlowDir = 0
end

--in case of gamemode or the romhack port break glass
GameModeOn = false
isThatHack = false
for i in pairs(gActiveMods) do
    local mod = gActiveMods[i]

    if (mod.incompatible and mod.incompatible:find("romhack")) and (mod.name and mod.name:find("VVVVVV 64")) then
        isThatHack = true
    end

    if (mod.incompatible and mod.incompatible:find("gamemode")) or isThatHack then
        GameModeOn = true
    end
end


--generates truth table
function T(t)
    local t2 = {}

    for _, v in ipairs(t) do
        t2[v] = 1
    end
    return t2
end

burnActs = T {
    ACT_BURNING_FALL,
    ACT_BURNING_JUMP,
    ACT_BURNING_GROUND,
    ACT_CAUGHT_IN_WHIRLPOOL,
    ACT_QUICKSAND_DEATH,
    ACT_SQUISHED,
    ACT_DROWNING,
    ACT_WATER_DEATH,
    ACT_SUFFOCATION
}

exitActs = T {
    ACT_DEATH_EXIT,
    ACT_DEATH_EXIT_LAND,
    ACT_UNUSED_DEATH_EXIT,
    ACT_FALLING_DEATH_EXIT,
    ACT_SPECIAL_DEATH_EXIT,
}

--cooldown timer function
function update_cooldown()
    local m = gMarioStates[0]
    if m.playerIndex ~= 0 then return end

    local s = gPlayerSyncTable[0]

    if s.coolDownFrames and s.coolDownFrames > 0 then
        s.coolDownFrames = s.coolDownFrames - 1


        local seconds = math.floor(s.coolDownFrames / 30)
        s.coolDown = seconds % 60
    else
        s.coolDown = 0
    end
end

--override the palette to glow or turn red on death
function override_palette(m)
    if not _G.charSelectExists then return end
    if isThatHack then return end

    local np = gNetworkPlayers[m.playerIndex]
    local s  = gPlayerSyncTable[m.playerIndex]



    if np.connected and _G.charSelect.character_get_current_number(m.playerIndex) == CT_VIRIDIAN then
        local defaultCap = network_player_get_palette_color(np, CAP)
        if _G.charSelect.character_get_current_palette_number(m.playerIndex) ~= 0 then
            defaultCap = network_player_get_override_palette_color(np, CAP)
        end
        --case 1: glowing effect
        if m.playerIndex == 0 then
            if (s.viridianGlowDir or 0) == 0 then
                s.viridianGlow = (s.viridianGlow or 0) + 2
                if s.viridianGlow >= 62 then s.viridianGlowDir = 1 end
            else
                s.viridianGlow = (s.viridianGlow or 0) - 2
                if s.viridianGlow <= 0 then s.viridianGlowDir = 0 end
            end
        end
        local glow = s.viridianGlow
        if s.viriDied == 0 then
            --clamping needed here else it breaks because ???.
            local r = math.max(0, math.min(255, math.floor(defaultCap.r - (glow / 2) - (math.random() * 20))))
            local g = math.max(0, math.min(255, math.floor(defaultCap.g - (glow / 2))))
            local b = math.max(0, math.min(255, math.floor(defaultCap.b - glow)))

            network_player_set_override_palette_color(np, CAP, { r = r, g = g, b = b })
        end

        if s.viriDied >= 1 then
            s.viridianDeadR = 196 - math.random(0, 64)
            network_player_set_override_palette_color(np, CAP, { r = s.viridianDeadR, g = 10, b = 10 })
        end
    end
end

--renders the box with the numbers. (could be better)
function render_tiled_box_interpolated(tex, prevX, prevY, prevScale, x, y, scale, cols, rows, tileSize, distance)
    for r = 0, rows - 1 do
        for c = 0, cols - 1 do
            -- Map column to texture tile X coordinate (0, 6, 12, 18)
            local tileX = (c == 0) and 0 or ((c == cols - 1) and 18 or (6 + ((c - 1) % 2) * 6))

            -- Map row to texture tile Y coordinate (0, 6, 18)
            local tileY = (r == 0) and 0 or ((r == rows - 1) and 18 or 6)

            -- Current tile target coordinates (scaled relative to top-left origin)
            local curX = x + (c * distance * scale)
            local curY = y + (r * distance * scale)

            -- Interpolated tile target coordinates for previous frame
            local px = prevX + (c * distance * prevScale)
            local py = prevY + (r * distance * prevScale)

            -- Render interpolated tile
            djui_hud_render_texture_tile_interpolated(
                tex,
                px, py, prevScale, prevScale, -- Previous frame X, Y, Scale
                curX, curY, scale, scale,     -- Current frame X, Y, Scale
                tileX, tileY, tileSize, tileSize
            )
        end
    end
end

--trinket and checkpoint colors
function geo_trinket_update(n)
    local node = cast_graph_node(n)
    if not node then return end
    --case trinket
    local trinketcmd = gfx_get_command(gfx_get_from_name("mat_viridian_trinket_trinket"), 14)
    if trinketcmd then
      local  trink_r = 200 - math.random(0, 64);
      local  trink_g = 200 - math.random(0, 128);
      local  trink_b = 164 + math.random(0, 60);
        gfx_set_command(trinketcmd, "gsDPSetEnvColor(%i, %i, %i, 255)", trink_r, trink_g, trink_b)
    end
end

function geo_checkpoint_update(n)
    local node = cast_graph_node(n)
    if not node then return end
    --case checkpoint
    local r = 164 + math.random(0, 64)
    local g = 164 + math.random(0, 64)
    local b = 255 - math.random(0, 64)
    local cmd = gfx_get_command(gfx_get_from_name("mat_viridian_checkpoint_checkpoint"), 14)
    if cmd then
        gfx_set_command(cmd, "gsDPSetEnvColor(%i, %i, %i, 255)", r, g, b)
    end
end

function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end

function geo_anim_if_model(n)
    local node = cast_graph_node(n)
    local o = geo_get_current_object()


    if node and o then
        o.oAnimState = o.oAnimState + 1
    end
end

hook_event(HOOK_MARIO_UPDATE, override_palette)
hook_event(HOOK_UPDATE, update_cooldown)
