if not retroCharAPI then return end
if not soRetroAPI then return end
--retro API support

SMB_RED = retroCharAPI.SMB_RED


function setup_retro_sprites()
    retroCharAPI.add_cs_character_sprites(CT_VIRIDIAN, get_texture_info("viridian_0"), get_texture_info("viridian_1"))
    retroCharAPI.add_cs_character_palette(CT_VIRIDIAN, { CAP, EMBLEM, CAP }, { SMB_RED, EMBLEM, CAP }, 1, 2)
end

hook_event(HOOK_ON_MODS_LOADED, setup_retro_sprites)
