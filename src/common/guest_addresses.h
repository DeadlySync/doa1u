/* Canonical guest virtual addresses; access width is specified at each use. */
#ifndef DOA1U_GUEST_ADDRESSES_H
#define DOA1U_GUEST_ADDRESSES_H

#define DOA1U_TECMO_LOGO_VA                        0x00038A70u
#define DOA1U_PUMP_TASK_VA                         0x000520A0u /* pump_task (scheduler pump) */
#define DOA1U_REGISTER_TASK_FIBER_VA               0x00052240u /* register_task_fiber(id, fn) */
#define DOA1U_XBE_ENTRY_VA                         0x000AEE0Cu /* DOA1U XBE entry point VA (from xbe_parser) */
#define DOA1U_TITLE_HUD_TRANSITION_ARGS_VA         0x0022D1B8u /* const ptr handed to 0x69550 (transition) */
#define DOA1U_TITLE_HUD_ANIM_ARGS_VA               0x0022D1C8u /* const ptr handed to 0x69550 (anim frames) */
#define DOA1U_TITLE_Y_CLAMP_MAX_VA                 0x0022D1D8u /* float: max live Y during the slide-in */
#define DOA1U_TITLE_VELOCITY_SCALE_VA              0x0022D1DCu /* float: velocity scale applied at reveal */
#define DOA1U_TITLE_PALETTE_VA                     0x002C6900u /* source of the 128 ARGB title-palette words */
#define DOA1U_TITLE_TILES_VA                       0x002C6A00u /* base of the 1280-entry title_tile_t table */
#define DOA1U_MATCH_CONFIG_VA                      0x00305588u /* g_match_config */
#define DOA1U_TITLE_STATE_VA                       0x00307604u /* MEM8 : title/attract sub-state byte */
#define DOA1U_MATCH_SUBSTATE_VA                    0x0030AE18u
#define DOA1U_SCENE_SUBSTATE_VA                    0x0030AE30u /* DAT_0030AE30: ==4 at entry diverts match_handler into a default-id-table branch; !=4 = normal. */
#define DOA1U_PAUSE_FLAG_VA                        0x0030AE36u /* hit-stop / pause: !=0 => freeze + draw only */
#define DOA1U_SCENE_MODE_VA                        0x0030C680u /* u8  : render/scene mode (title = 2) */
#define DOA1U_P1_HUMAN_VA                          0x0030D9A0u
#define DOA1U_P1_FIGHTER_ID_VA                     0x0030D9A1u /* DAT_0030D9A1 P1 char id (stride 0x58) */
#define DOA1U_P1_COSTUME_VA                        0x0030D9A2u /* DAT_0030D9A2 P1 costume/variant byte */
#define DOA1U_P2_FIGHTER_ID_VA                     0x0030D9F9u /* DAT_0030D9F9 P2 char id (stride 0x58) */
#define DOA1U_P2_COSTUME_VA                        0x0030D9FAu /* DAT_0030D9FA P2 costume/variant byte */
#define DOA1U_STAGE_ID_VA                          0x0030F914u /* stage id */
#define DOA1U_P1_CONTROLLER_PORT_VA                0x0030F9B4u
#define DOA1U_GAME_MODE_VA                         0x003139CBu /* MEM8 : match-type; match_handler load gate ==1 */
#define DOA1U_LOAD_BUSY_VA                         0x00316FF1u /* DAT_00316FF1: 1 while load_battle_assets runs, 0 when done */
#define DOA1U_LOADED_P1_FIGHTER_ID_VA              0x003321F4u /* +0 = loaded P1 id, +1 = loaded P2 id */
#define DOA1U_LOADED_P2_FIGHTER_ID_VA              0x003321F5u
#define DOA1U_LOADED_STAGE_ID_VA                   0x00332204u /* loaded stage id */
#define DOA1U_FLOW_STATE_VA                        0x0033227Cu /* MEM32: scene-flow selector (sub_00033800 switch) */
#define DOA1U_MATCH_START_COUNTDOWN_VA             0x00334848u
#define DOA1U_TITLE_ANIM_PHASE_VA                  0x00335990u /* u32 : per-frame anim accumulator (reset 0) */
#define DOA1U_MENU_CURSOR_VA                       0x00335994u /* MEM32: main-menu cursor (= selected mode index) */
#define DOA1U_TITLE_PALETTE_TARGET_VA              0x00335ADCu /* u32 : palette-target object (arg to 0x160590) */
#define DOA1U_PAUSE_OWNER_VA                       0x0034AD4Cu
#define DOA1U_PAD_PRESSED_EDGES_VA                 0x006E9A98u
#define DOA1U_PAD_BUTTONS_VA                       0x006E9B48u /* u32 : aggregated pad word */
#define DOA1U_APU_TRAP_BASE_VA                     0xFE800000u
#define DOA1U_APU_TRAP_END_VA                      0xFE880000u

#define DOA1U_CLEAR_SLOT_TABLE_VA                  0x00035B00u /* code: guest entry point */
#define DOA1U_SET_SCENE_ID_VA                      0x00035C60u /* code: guest entry point */
#define DOA1U_SETUP_BG_QUAD_VA                     0x00036AD0u /* code: guest entry point */
#define DOA1U_QUERY_VALUE_DIV10_VA                 0x00036BE0u /* code: guest entry point */
#define DOA1U_BLIT_QUAD_VA                         0x00037180u /* code: guest entry point */
#define DOA1U_BLIT_QUAD_BG_VA                      0x00037200u /* code: guest entry point */
#define DOA1U_COMMIT_TEXTURE_VA                    0x00037270u /* code: guest entry point */
#define DOA1U_POST1_VA                             0x000372F0u /* code: guest entry point */
#define DOA1U_DRAW_ELEM_BAR_VA                     0x00037350u /* code: guest entry point */
#define DOA1U_DRAW_ELEM_PANEL_VA                   0x000373C0u /* code: guest entry point */
#define DOA1U_CLEAR_PLAYER_RECORD_VA               0x00037E00u /* code: guest entry point */
#define DOA1U_RESET_ROUND_FLAGS_VA                 0x00038140u /* code: guest entry point */
#define DOA1U_KILL_SCENE_TASKS_VA                  0x000381D0u /* code: guest entry point */
#define DOA1U_CLEAR_SURFACE_256_VA                 0x000389D0u /* code: guest entry point */
#define DOA1U_SURFACE_OP_VA                        0x00038A40u /* code: guest entry point */
#define DOA1U_POST2_VA                             0x00038D30u /* code: guest entry point */
#define DOA1U_FRONTEND_INIT_VA                     0x00039900u /* code: guest entry point */
#define DOA1U_MENU_UI_TICK_VA                      0x0003A2F0u /* code: guest entry point */
#define DOA1U_NOOP_4D080_VA                        0x0004D080u /* code: guest entry point */
#define DOA1U_STORE_MATCH_OPT2_VA                  0x0004DB10u /* code: guest entry point */
#define DOA1U_STORE_MATCH_OPT3_VA                  0x0004DB20u /* code: guest entry point */
#define DOA1U_STORE_MATCH_OPT1_VA                  0x0004DD90u /* code: guest entry point */
#define DOA1U_SCENE_GFX_PREP_VA                    0x0005D8B0u /* code: guest entry point */
#define DOA1U_FRAME_HUD_VA                         0x00069550u /* code: guest entry point */
#define DOA1U_ATTRACT_STEP_VA                      0x0006FDD0u /* code: guest entry point */
#define DOA1U_ROUND_TO_INT_VA                      0x001502D0u /* code: guest entry point */
#define DOA1U_RNG_VA                               0x00150390u /* code: guest entry point */
#define DOA1U_MAKE_PAL_TARGET_VA                   0x00160590u /* code: guest entry point */

#define DOA1U_SOUND_BUFFER_POOL_VA				   0x0040D850u
#define DOA1U_CULL_HORIZONTAL_SLOPE_VA			   0x0030C3C4u
#define DOA1U_CULL_HORIZONTAL_RADIUS_VA			   0x0030EDC4u

#endif /* DOA1U_GUEST_ADDRESSES_H */
