if not _G.charSelectExists then return end
if _G.charSelect.character_get_current_number() ~= CT_VIRIDIAN then return end

TEX_CAKE = get_texture_info("viridian-endscreen")

function render_viridian_end()
    if _G.charSelect.character_get_current_number() ~= CT_VIRIDIAN then return end
    if gNetworkPlayers[0].currLevelNum ~= LEVEL_ENDING then return end
    local floor = gMarioStates[0].floor
    if floor ~= nil then return end
    local screenW = djui_hud_get_screen_width()
    local scaleX = screenW / 320 / 1.337
    local renderScaleX = scaleX + 0.01

    djui_hud_set_color(255, 255, 255, 255)
    djui_hud_set_filter(FILTER_NEAREST)
    djui_hud_render_texture_tile(TEX_CAKE, 0, 0, renderScaleX, 1, 0, 0, TEX_CAKE.width, TEX_CAKE.height)
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, function()
    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_font(FONT_HUD)

    djui_hud_set_color(255, 255, 255, 255)
    render_viridian_end()
end)

local function custom_sound(soundBits, pos)
    if _G.charSelect.character_get_current_number() ~= CT_VIRIDIAN then return end
    if soundBits == SOUND_MENU_THANK_YOU_PLAYING_MY_GAME then
        play_character_sound(gMarioStates[0], CHAR_SOUND_HELLO)
        return NO_SOUND
    end
end

hook_event(HOOK_ON_PLAY_SOUND, custom_sound)

-- End Screen Code by King The Memer
