-- name: [CS] \\#A0C8DC\\Captain Viridian
-- description: Captain Viridian from VVVVVV joins SM64 Coop Deluxe as a character select pack (gravity flipping not included yet)\n\nCredits:\nB. Bones Johnson - Mod Author, Modelling\nPeachyPeach956 - Freeze Frame Effect Code\nKing the Memer - End Screen Code\nTerry Cavanagh - Made VVVVVV\n\nSpecial Thanks to the Coop Community members who helped me create this mod, you're all awesome.

require "data/anims_custom"
require "data/moveset"
require "data/freeze_frame"
require "data/bhvcheckpoint"
require "data/hud"
require "data/endscreen"
require "data/helpers"

local TEXT_MOD_NAME = get_active_mod().name


if not _G.charSelectExists then
    djui_popup_create(
    "\\#ffffdc\\\n" ..
    TEXT_MOD_NAME ..
    "\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!",
        6)
    return 0
end

--- Load Models ---
local E_MODEL_VIRIDIAN = smlua_model_util_get_id("viridian_geo") 
local E_MODEL_TRINKET = smlua_model_util_get_id("viridian_trinket_geo")
local E_MODEL_VIRIDIAN_VC = smlua_model_util_get_id("viridian_vc_geo")

--- Load Textures ---
local TEX_VIRIDIAN_LIFE_ICON = get_texture_info("viridian-icon") 
local TEX_VIRIDIAN_STAR_ICON = get_texture_info("trinket-icon")
local TEX_VIRIDIAN_GRAFITTI = get_texture_info("viridian-grafitti")

-- All sound files are located in "sound" folder
local VOICETABLE_VIRIDIAN = {
    [CHAR_SOUND_OKEY_DOKEY] = 'sound/souleyeminijingle.mp3',                                     -- Starting game
    [CHAR_SOUND_LETS_A_GO] = 'sound/blip.mp3',                                     -- Starting level
    [CHAR_SOUND_GAME_OVER] = 'sound/combine.mp3',                                       -- Game Overed
    [CHAR_SOUND_PUNCH_YAH] = 'sound/crew1.mp3',                                         -- Punch 1
    [CHAR_SOUND_PUNCH_WAH] = 'sound/crew2.mp3',                                         -- Punch 2
    [CHAR_SOUND_PUNCH_HOO] = 'sound/crew3.mp3',                                         -- Punch 3
    [CHAR_SOUND_YAH_WAH_HOO] = { 'sound/jump2.mp3', 'sound/crew5.mp3', 'sound/crew4.mp3' },  -- First Jump Sounds
    [CHAR_SOUND_HOOHOO] = 'sound/jump.mp3',                                        -- Second jump sound
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = { 'sound/gamesaved.mp3', 'sound/trophy.mp3', 'sound/newrecord.mp3' }, -- Triple jump sounds
    [CHAR_SOUND_UH] = 'sound/crumble.mp3',                                                  -- Soft wall bonk
    [CHAR_SOUND_UH2] = 'sound/save.mp3',                                           -- Quick ledge get up
    [CHAR_SOUND_UH2_2] = 'sound/terminal.mp3',                                       -- Landing after long jump
    [CHAR_SOUND_DOH] = 'sound/crash.mp3',                                                 -- Hard wall bonk
    [CHAR_SOUND_OOOF] = 'sound/preteleport.mp3',                                                -- Attacked in air
    [CHAR_SOUND_OOOF2] = 'sound/preteleport.mp3',                                               -- Land from hard bonk
    [CHAR_SOUND_HAHA] = 'sound/coin.mp3',                                      -- Landing triple jump
    [CHAR_SOUND_HAHA_2] = 'sound/coin.mp3',                                      -- Landing in water from big fall
    [CHAR_SOUND_YAHOO] = 'sound/newrecord.mp3',                                           -- Long jump
    [CHAR_SOUND_DOH] = 'sound/crash.mp3',                                                 -- Long jump wall bonk
    [CHAR_SOUND_WHOA] = 'sound/crew6.mp3',                                           -- Grabbing ledge
    [CHAR_SOUND_EEUH] = 'sound/save.mp3',                                          -- Climbing over ledge
    [CHAR_SOUND_WAAAOOOW] = 'sound/hurt.mp3',                                         -- Falling a long distance
    [CHAR_SOUND_TWIRL_BOUNCE] = 'sound/go.mp3',                                -- Bouncing off of a flower spring
    [CHAR_SOUND_GROUND_POUND_WAH] = 'sound/vanish.mp3',                             -- Ground Pound after startup
    [CHAR_SOUND_WAH2] = 'sound/crashing.mp3',                                               -- Throwing something
    [CHAR_SOUND_HRMM] = 'sound/crew5.mp3',                                                -- Lifting something
    [CHAR_SOUND_HERE_WE_GO] = 'sound/trinket.mp3',                                       -- Star get
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'sound/countdown.mp3',                              -- Throwing Bowser
    --DAMAGE
    [CHAR_SOUND_ATTACKED] = 'sound/hurt.mp3',                                         -- Damaged
    [CHAR_SOUND_PANTING] = 'sound/crew4.mp3',                                          -- Low health
    [CHAR_SOUND_PANTING_COLD] = 'sound/crew2.mp3',                                     -- Getting cold
    [CHAR_SOUND_ON_FIRE] = 'sound/hurt.mp3',                                           -- Burned
    --SLEEP SOUNDS
    [CHAR_SOUND_IMA_TIRED] = 'sound/crew6.mp3',                                          -- Mario feeling tired
    [CHAR_SOUND_YAWNING] = 'sound/blip2.mp3',                                             -- Mario yawning before he sits down to sleep
    [CHAR_SOUND_SNORING1] = 'sound/crew1.mp3',                                           -- Snore Inhale
    [CHAR_SOUND_SNORING2] = 'sound/crew2.mp3',                                          -- Exhale
    [CHAR_SOUND_SNORING3] = 'sound/crew4.mp3',                                       -- Sleep talking / mumbling
    --COUGHING (USED IN THE GAS MAZE)
    [CHAR_SOUND_COUGHING1] = 'sound/crumble.mp3',                                         -- Cough take 1
    [CHAR_SOUND_COUGHING2] = 'sound/crumble.mp3',                                         -- Cough take 2
    [CHAR_SOUND_COUGHING3] = 'sound/blip.mp3',                                         -- Cough take 3
    --DEATH
    [CHAR_SOUND_DYING] = 'sound/hurt.mp3',                                              -- Dying from damage
    [CHAR_SOUND_DROWNING] = 'sound/hurt.mp3',                                        -- Running out of air underwater
    [CHAR_SOUND_MAMA_MIA] = 'sound/hurt.mp3',
    [CHAR_SOUND_HELLO] = 'sound/rescue.mp3',   -- Booted out of level
}

-- All Located in "actors" folder
-- (Models do not exist in template)

local CAPTABLE_VIRIDIAN = {
    normal = smlua_model_util_get_id("viridian_cap_geo"),
    wing = smlua_model_util_get_id("viridian_wc_geo"),
    metal = smlua_model_util_get_id("viridian_mc_geo"),
    metalWing = smlua_model_util_get_id("viridian_wmc_geo")
}


local COURSE_VIRIDIAN = {
    top = get_texture_info("viridian-course-1"),
    bottom = get_texture_info("viridian-course-2"),
}

local HEALTH_METER_VIRIDIAN = {
    label = {
        left = get_texture_info("viridian-hp-left"),
        right = get_texture_info("viridian-hp-right"),
    },
    pie = {
        [1] = get_texture_info("viridian-hp-1"),
        [2] = get_texture_info("viridian-hp-2"),
        [3] = get_texture_info("viridian-hp-3"),
        [4] = get_texture_info("viridian-hp-4"),
        [5] = get_texture_info("viridian-hp-5"),
        [6] = get_texture_info("viridian-hp-6"),
        [7] = get_texture_info("viridian-hp-7"),
        [8] = get_texture_info("viridian-hp-8"),
    }
}

local ANIMS_VIRIDIAN = {

    [CHAR_ANIM_FIRST_PERSON] = 'viridian_idle',
    [CHAR_ANIM_IDLE_HEAD_LEFT] = 'viridian_idle',
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = 'viridian_idle',
    [CHAR_ANIM_IDLE_HEAD_CENTER] = 'viridian_idle',
    [CHAR_ANIM_RUNNING] = 'viridian_walk',
    [CHAR_ANIM_WALKING] = 'viridian_walk',
    [CHAR_ANIM_CLIMB_UP_POLE] = 'viridian_climb_pole',
    [CHAR_ANIM_IDLE_WITH_LIGHT_OBJ] = 'viridian_idle_object',
    [CHAR_ANIM_RUN_WITH_LIGHT_OBJ] = 'viridian_walk_object',
    [CHAR_ANIM_WALK_WITH_LIGHT_OBJ] = 'viridian_walk_object',
    [CHAR_ANIM_JUMP_LAND_WITH_LIGHT_OBJ] = 'viridian_idle_object',
    [CHAR_ANIM_FALL_LAND_WITH_LIGHT_OBJ] = 'viridian_idle_object',
    [CHAR_ANIM_SLOW_WALK_WITH_LIGHT_OBJ] = 'viridian_walk_object',
    [CHAR_ANIM_JUMP_WITH_LIGHT_OBJ] = 'viridian_jump_object',
    [CHAR_ANIM_SINGLE_JUMP] = 'viridian_jump',
    [CHAR_ANIM_LAND_FROM_SINGLE_JUMP] = 'viridian_idle',
    [CHAR_ANIM_DOUBLE_JUMP_RISE] = 'viridian_double_jump',
    [CHAR_ANIM_DOUBLE_JUMP_FALL] = 'viridian_double_jump',
    [CHAR_ANIM_LAND_FROM_DOUBLE_JUMP] = 'viridian_idle',


}
local PALETTE_VIRIDIAN = {
    [PANTS]  = "A0C8DC",
    [SHIRT]  = "A0C8DC",
    [GLOVES] = "A0C8DC",
    [SHOES]  = "A0C8DC",
    [HAIR]   = "A0C8DC",
    [SKIN]   = "A0C8DC",
    [CAP]    = "A0C8DC",
    [EMBLEM] = "000000"
}

local PALETTE_VERMILLION = {
    [PANTS]  = "FF4646",
    [SHIRT]  = "FF4646",
    [GLOVES] = "FF4646",
    [SHOES]  = "FF4646",
    [HAIR]   = "FF4646",
    [SKIN]   = "FF4646",
    [CAP]    = "FF4646",
    [EMBLEM] = "000000"
}

local PALETTE_VERDIGRIS = {
    [PANTS]  = "78DC78",
    [SHIRT]  = "78DC78",
    [GLOVES] = "78DC78",
    [SHOES]  = "78DC78",
    [HAIR]   = "78DC78",
    [SKIN]   = "78DC78",
    [CAP]    = "78DC78",
    [EMBLEM] = "000000"
}

local PALETTE_VITELLARY = {
    [PANTS]  = "DCD278",
    [SHIRT]  = "DCD278",
    [GLOVES] = "DCD278",
    [SHOES]  = "DCD278",
    [HAIR]   = "DCD278",
    [SKIN]   = "DCD278",
    [CAP]    = "DCD278",
    [EMBLEM] = "000000"
}

local PALETTE_VIOLET = {
    [PANTS]  = "DC78D2",
    [SHIRT]  = "DC78D2",
    [GLOVES] = "DC78D2",
    [SHOES]  = "DC78D2",
    [HAIR]   = "DC78D2",
    [SKIN]   = "DC78D2",
    [CAP]    = "DC78D2",
    [EMBLEM] = "000000"
}

local PALETTE_VICTORIA = {
    [PANTS]  = "4B4BFF",
    [SHIRT]  = "4B4BFF",
    [GLOVES] = "4B4BFF",
    [SHOES]  = "4B4BFF",
    [HAIR]   = "4B4BFF",
    [SKIN]   = "4B4BFF",
    [CAP]    = "4B4BFF",
    [EMBLEM] = "000000"
}


local function on_character_select_load()
    -- Adds the custom character to the Character Select Menu
    CT_VIRIDIAN = _G.charSelect.character_add(
        "Viridian",                        -- Character Name
        "Captain Viridian has been mysteriously teleported to a mysterious and mushroomy dimension. And it looks like it has an abundance of Shiny Trinkets to find! Could he find a way out of this new dimension by collecting enough of them? - When playing as Viridian, you won't suffer from fall damage, but every other hit means instant death! And by pressing the X button you can spawn a checkpoint to save your position if you die, but use it wisely! As it'll disappear after dying three times. - (gravity flip not included yet sorry)",                -- Description
        "Terry Cavanagh/B. Bones Johnson", -- Credits
        "A0C8DC",                          -- Menu Color
        E_MODEL_VIRIDIAN,                  -- Character Model
        CT_MARIO,                          -- Override Character
        TEX_VIRIDIAN_LIFE_ICON,            -- Life Icon
        1                                  -- Camera Scale
    )

    -- Adds cap models to your character
    _G.charSelect.character_add_caps(E_MODEL_VIRIDIAN, CAPTABLE_VIRIDIAN)

    -- Adds a voice to your character
    _G.charSelect.character_add_voice(E_MODEL_VIRIDIAN, VOICETABLE_VIRIDIAN)

    -- Adds a celebration star to your character
    _G.charSelect.character_add_celebration_star(E_MODEL_VIRIDIAN, E_MODEL_TRINKET, TEX_VIRIDIAN_STAR_ICON)

    _G.charSelect.character_add_graffiti(CT_VIRIDIAN, TEX_VIRIDIAN_GRAFITTI)
    _G.charSelect.character_add_course_texture(CT_VIRIDIAN, COURSE_VIRIDIAN)
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VIRIDIAN, "Viridian")
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VERMILLION, "Vermillion")
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VERDIGRIS, "Verdigris")
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VITELLARY, "Vitellary")
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VIOLET, "Violet")
    _G.charSelect.character_add_palette_preset(E_MODEL_VIRIDIAN, PALETTE_VICTORIA, "Victoria")
    _G.charSelect.character_add_animations(E_MODEL_VIRIDIAN, ANIMS_VIRIDIAN, nil, nil)
    _G.charSelect.character_add_health_meter(CT_VIRIDIAN, HEALTH_METER_VIRIDIAN)
    _G.charSelect.character_set_category(CT_VIRIDIAN, TEXT_MOD_NAME)
    _G.charSelect.credit_add(TEXT_MOD_NAME, "B. Bones Johnson", "[CS] Viridian")


    _G.charSelect.character_hook_moveset(CT_VIRIDIAN, HOOK_MARIO_UPDATE, function(m)
        if _G.charSelect.are_movesets_restricted() or GameModeOn then return end
        health_check(m)
        m.peakHeight = m.pos.y

        death_check(m)
        spawn_player_checkpoint(m)
        if not is_player_viridian(m.playerIndex) then
            reset_values(m)
        end
    end)
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)

hook_event(HOOK_UPDATE, function()
    for_each_object_with_behavior(id_bhvVanishCap, function (o)
        if obj_has_model_extended(o, CAPTABLE_VIRIDIAN.normal) ~= 0 then
            obj_set_model_extended(o, E_MODEL_VIRIDIAN_VC)
        end
    end)
end)
