if not dynamicHudAPI then return end

function setup_recolor_icons()
    local NONE = dynamicHudAPI.NONE
    dynamicHudAPI.add_head_for_cs(CT_VIRIDIAN, nil, get_texture_info("recolor-viridian-icon"),
        { NONE, NONE, CAP, CAP, CAP, NONE},
        { NONE, NONE, NONE, CAP, CAP, CAP}
    )
end

hook_event(HOOK_ON_MODS_LOADED, setup_recolor_icons)