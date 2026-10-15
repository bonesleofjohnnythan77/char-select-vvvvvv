if not _G.charSelectExists or GameModeOn then return end
E_MODEL_VIRIDIAN_CHECKPOINT = smlua_model_util_get_id("viridian_checkpoint_geo")

--checkpoint init
local function bhv_viridian_checkpoint_init(o)
    o.oFlags = 0x0001
    o.oIntangibleTimer = 0
    o.oInteractStatus = 0
    o.hitboxRadius = 80
    o.hitboxHeight = 10
    network_init_object(o, true, nil)
end

--checkpoint loop
local function bhv_viridian_checkpoint_loop(o)
    local localIndex = network_local_index_from_global(o.globalPlayerIndex)
    local np = gNetworkPlayers[localIndex]
    local s = gPlayerSyncTable[localIndex]
    local m = gMarioStates[localIndex]
    s.checkpointSpawned = true
    if not np.connected or is_player_in_local_area(m) == 0 or s.tries == 0 or _G.charSelect.character_get_current_number(localIndex) ~= CT_VIRIDIAN then
        reset_values(m)
        obj_mark_for_deletion(o)
    end

    s.checkpointX = o.oPosX
    s.checkpointY = o.oPosY
    s.checkpointZ = o.oPosZ
    o.oTimer = o.oTimer + 1


end

bhvViridianCheckpoint = hook_behavior(
    nil,
    OBJ_LIST_GENACTOR,
    true,
    bhv_viridian_checkpoint_init,
    bhv_viridian_checkpoint_loop,
    "bhvViridianCheckpoint"
)
