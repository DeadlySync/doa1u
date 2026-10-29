# doa1u_names

Historical reverse-engineering reference; current source and project memory take precedence.

```text
/* doa1u_names.h -- human-readable name map for the recompiled DOA1U guest code.
 *
 * WHY THIS FILE EXISTS
 *   The recompiler emits every guest routine as the symbol `sub_<VA>` (upper-
 *   case 8-hex guest virtual address), and the dispatch table + every direct
 *   call site reference that EXACT symbol.  The generated recomp_*.c files are
 *   also regenerated (wiped) on every re-lift.  So we CANNOT rename the
 *   generated definitions -- doing so would break the build and be lost on the
 *   next lift.
 *
 *   Instead:
 *     - In the code WE own (shadows in recomp_manual.c) we define the function
 *       under a readable name with the guest `// FUN_<VA>` as a comment above
 *       it, then add a one-line wrapper that keeps the `sub_<VA>` symbol the
 *       dispatch/callers need:
 *           // FUN_0005CC50
 *           void set_camera_draw_stage(void) { ... sub_0005CC50_gen(); }
 *           void sub_0005CC50(void) { set_camera_draw_stage(); }
 *     - This header is the single reference TABLE mapping readable name <->
 *       sub_<VA> <-> FUN_<VA> (Ghidra) <-> role, so we always have something to
 *       map back to when dealing with recomp / rebuild / shimming / re-pulling.
 *
 *   This header is documentation only (no #define aliases) precisely so a
 *   readable name can also be used as a real C identifier for a shadow without
 *   colliding.  Keep it in sync as functions get identified/renamed.
 *
 * ====================================================================
 *  readable name            sub_<VA>        FUN_<VA>      role
 * ====================================================================
 *  -- FIGHT SCENE / MATCH FLOW --
 *  fight_scene_loop          sub_00044140    FUN_00044140  in-fight per-frame loop (infinite do/while);
 *                                                          REQUIRES P1/P2 model files preloaded
 *                                                          (reads+derefs DAT_0030739C / DAT_003073C8).
 *  match_handler             sub_00032D20    FUN_00032D20  ONE-SHOT match ENTRY (not per-frame): sets up ids,
 *                                                          calls load_battle_assets if the requested fighters
 *                                                          aren't resident, PUMPS the fiber scheduler until the
 *                                                          async load completes, then register_task_fiber(9,
 *                                                          fight_scene). Load gated on DAT_003139CB(mode)==1.
 *                                                          *** direct-call target *** (preset p1id/p2id/stage/mode/state)
 *  load_battle_assets        sub_00032830    FUN_00032830  reads p1id/p2id/stage -> ASYNC load of fighter models
 *                                                          + stage from disk; completion is polled+pumped by the
 *                                                          caller (NOT synchronous -- needs pump_task running).
 *  attract_demo_driver       sub_0004C110    FUN_0004C110  attract demo: sets stage 9 (DAT_0030F914=9) +
 *                                                          demo AI; what we inject TODAY via fiber id 2.
 *  demo_match_setup          sub_0004B850    FUN_0004B850  attract-side match setup; also calls fight_scene_loop.
 *  init_fighter_spawn_state  sub_00030450    FUN_00030450  per-match init: both fighters' spawn X/facing
 *                                                          (-1.0 left / +1.0 right), health (DAT_0030AE3C),
 *                                                          and clears each per-round state block. Called by
 *                                                          match_handler right after the load. *** NEEDED ***
 *  start_stage_bgm           sub_000301F0    FUN_000301F0  plays the stage BGM (stageSoundTable[stage]).
 *                                                          AUDIO -- skipped in the fighter-isolation load path.
 *
 *  -- MENU / SCENE LAUNCH (iter-34; shadowed by game_mode.c) --
 *  flow_dispatcher           sub_00033800    FUN_00033800  per-SCENE flow dispatcher: switch on FLOW_STATE
 *                                                          MEM32(0x33227C); case 5 -> match_handler. Runs only
 *                                                          once a scene is active (not during title/menu).
 *  menu_scene_dispatch       sub_0003A403    FUN_0003A403  menu scene: polls pad (sub_0002CFE0 -> 0x6E9B48),
 *                                                          navigates, hands off to main_menu_handler.
 *  main_menu_handler         sub_0003A4CC    FUN_0003A4CC  main menu: 8-case switch on cursor MEM32(0x335994);
 *                                                          each case sets game_mode(0x3139CB)=cursor + flags.
 *  scene_launcher            sub_00038EB0    FUN_00038EB0  launch a scene. arg==0 => ATTRACT (hardcodes
 *                                                          game_mode:=0, demo camera); arg!=0 => REAL mode
 *                                                          (keeps menu game_mode, player camera). Registers
 *                                                          the scene loop sub_000338C0 as fiber 2, subst=4.
 *  (launch arg chain)        sub_00038A70 -> sub_000372F0 -> sub_00038D30 -> scene_launcher  (menu @0x3AAEC)
 *  MENU GLOBALS: 0x335994 = menu cursor/selected index;  0x3139CB = game_mode (== selected index);
 *                0x30D998 = title idle counter (NOT the attract trigger); 0x307604 = title sub-state.
 *
 *  -- FRONT-END STATE MACHINE (iter-36; extracted from code; Ghidra names mirror these;
 *     shadowed by state_machine.c; full map: reference_doa1u_frontend_state_machine) --
 *  fe_scene_loop             sub_000338C0    FUN_000338C0  scene loop (fiber 2): calls fe_match_launcher once,
 *                                                          then loops: pump + dispatch on g_scene_subst
 *                                                          (0x30AE30): ==3 -> fe_inmatch_a, ==2 -> fe_inmatch_b,
 *                                                          else -> fe_flow_dispatcher.
 *  fe_match_launcher         sub_0002FAF0    FUN_0002FAF0  loads g_match_config (0x305588) into live globals,
 *                                                          sets g_flow_state=5 + g_scene_substate2=5, clears
 *                                                          pause; the real match launch (no dispatcher edge).
 *  fe_flow_dispatcher        sub_00033800    FUN_00033800  switch(g_flow_state 0x33227C, 0..6) tail-jumps the
 *                                                          state handler. game_mode==1 special-case: flow 1->4.
 *  fe_flow0_title            sub_000312C0    FUN_000312C0  state0 title/intro -> flow=1 (calls init_fighter_spawn).
 *  fe_flow1                  sub_0002F910    FUN_0002F910  state1 (gated match_gate_b 0x77660) -> flow=2.
 *  fe_flow2                  sub_0002FA70    FUN_0002FA70  state2 -> flow=3.
 *  fe_flow3                  sub_00031650    FUN_00031650  state3 (title_state=5) -> flow=4.
 *  fe_flow4                  sub_000319D0    FUN_000319D0  state4: game_mode checks (==1,==5); sets subst.
 *  fe_flow5_match_handler    sub_00032D20    FUN_00032D20  state5 match entry (== match_handler): load assets,
 *                                                          register_task_fiber(fiber 9=fight_scene); gated game_mode==1.
 *  fe_flow6_results          sub_000310F0    FUN_000310F0  state6 results: audio snd_play_core, subst=1.
 *  fe_inmatch_a              sub_00030F00    FUN_00030F00  scene-loop subst==3 handler (live fight).
 *  fe_inmatch_b              sub_0002F7A0    FUN_0002F7A0  scene-loop subst==2 handler.
 *  frontend_main_loop        sub_0003AAC0    FUN_0003AAC0  fiber 0 front-end master loop (fanin=0; indirect only):
 *                                                          frontend_init; clear_slot_table; loop menu_tick->chain->
 *                                                          scene_launcher until it returns !=0. (was mis-named fe_master)
 *  title_idle_counter        sub_0002FAC0    FUN_0002FAC0  increments g_title_idle vs 0x5D/0xD1.
 *  match_gate_a/b/c/d        sub_0002FEA0/sub_00077660/sub_00071830/sub_00071F00  match_handler entry gates.
 *  SM GLOBALS: g_flow_state 0x33227C; g_scene_subst 0x30AE30 (2/3=in-match, else flow machine);
 *              g_game_mode 0x3139CB; g_match_config 0x305588; g_title_state 0x307604;
 *              g_scene_substate2 0x30AE18; g_pause_flag 0x30AE36; g_pad_buttons 0x6E9B48.
 *
 *  -- FRONT-END / MENU SUBSYSTEM (iter-37; full body-confirmation; shadowed by frontend_pre.c;
 *     Ghidra names mirror these. The earlier "fe_menu_ / fe_item_ / fe_scene_" guesses were WRONG --
 *     this cluster is the menu GRAPHICS subsystem, not menu-input logic.) --
 *  frontend_init             sub_00039900  alloc heaps + register FE fibers + load assets + create menu textures.
 *  alloc_frontend_heaps      sub_00038540  A9EA8 allocator xN -> 0x30EBF8/0x30EC.. buffer ptrs.
 *  clear_slot_table          sub_00035B00  zero 16-entry table 0x3346B8 (via zero_record20 sub_00035870).
 *  find_or_add_slot          sub_00035B60  search/fill slot table 0x3346B8, return entry ptr.
 *  kill_scene_tasks          sub_000381D0  unregister task fibers 2,4,5,6,7,8,9,A,B (via sub_000522A0).
 *  reset_round_flags         sub_00038140  zero state flags + 0xFF sentinels (3321F4..332204).
 *  plot_texture_cell         sub_00037150  2-D cell addr (row*512 + col + 0x1E0B0) -> plot one cell.
 *  blit_texture_quad[2]      sub_00037180 / sub_00037200  plot one 2x2 quad from an entry (4x plot_texture_cell).
 *  commit_texture            sub_00037270  plot the WHOLE 1280-entry tile table @0x2C6A02 (NOT a menu "commit").
 *  init_menu_quads           sub_00036D00  pump + build menu quad geometry block (0x335998..).
 *  setup_bg_quad             sub_00036AD0  transform block 0x3358D8 + submit (sub_0005EAB0).
 *  update_quad_coords_fx     sub_00036F00  float args -> two quad coords + submit.
 *  draw_elem_bar/panel       sub_00037350 / sub_000373C0  fixed coord block + submit (sub_00035600).
 *  setup_menu_palette_quads  sub_00039070  upload_palette_256(0x2D6A00) then jmp init_menu_quads.
 *  clear_surface_256         sub_000389D0  256KB (256x256x4) solid-color fill via sub_00168430.
 *  upload_palette_256        sub_00038A10  copy 256-dword palette (object 0x335ADC).
 *  surface_op_38A40          sub_00038A40  sub_00168430 with buffer 0x334874.
 *  frontend_frame_report     sub_00038680  sub_000AA04A + sub_000695B0 x2 (timing/progress report).
 *  apply_match_config        sub_00037F90  unpack config block 0x305588 -> gameplay globals.
 *  clear_player_record       sub_00037E00  zero per-player record (index*0x58) at 0x30D9A0.
 *  get_match_option          sub_0004D570  switch(idx 0..3) -> config-derived value (0x305590..).
 *  store_match_option{1,2,3} sub_0004DD90 / sub_0004DB10 / sub_0004DB20  get_match_option(n) -> 0x2DF87C/880/884.
 *  set_scene_id              sub_00035C60  store u16 arg -> 0x334808, set flag 0x334804=1.
 *  advance_reveal_bits       sub_00030B40  timer 0x34CD64 threshold -> set bit in mask 0x3055AC.
 *  query_value_div10         sub_00036BE0  call sub_00150390, return result / 10.
 *  menu_ui_tick              sub_0003A2F0  gfx init (334880 gate) + draw, then dispatch to 3A403/3A346 UI.
 *  read_saved_config_a/b     sub_0004D610 / sub_0004D7C0  sub_000AB63A parse/format + io (game_io).
 *  noop_4D080 / noop_4D0B0   sub_0004D080 / sub_0004D0B0  1-byte ret stubs.
 *
 *  -- PER-FRAME / RENDER --
 *  main_loop                 sub_00053090    FUN_00053090  top-level game main loop.
 *  frame_end                 sub_000689E0    FUN_000689E0  per-frame guest-context hook (valid g_esp).
 *  pump_task                 sub_000520A0    FUN_000520A0  fiber-task scheduler pump.
 *  register_task_fiber       sub_00052240    FUN_00052240  register_task_fiber(id, fn).
 *  fighter_tick              sub_00043400    FUN_00043400  per-fighter state machine + redraw (P1 then P2);
 *                                                          skips the state machine when DAT_0030AE36 != 0.
 *  fighter_move_advance      sub_00042C50    FUN_00042C50  advance current move frame (called by fighter_tick).
 *  draw_fighter              sub_000701B0    FUN_000701B0  draw one fighter (returning, per-player).
 *  set_camera_draw_stage     sub_0005CC50    FUN_0005CC50  build VIEW (D3DXMatrixLookAtLH) + draw stage.
 *  build_stage_floor_and_boundary_vertices sub_0005B9C0  arena XYZ/UV vertex buffers.
 *  draw_stage_floor_backdrop sub_0005C330    FUN_0005C330  emblem floor / grid border strips.
 *  draw_stage_objects        sub_0005C410    FUN_0005C410  stage props / shadow-blob objects.
 *  draw_particles            sub_0005C090    FUN_0005C090  particle pass (self-gates on DAT_0030AE36).
 *  draw_attract_wall         sub_0004C200    FUN_0004C200  attract character tiles / ranking overlay.
 *  face_morph_setup          sub_00012170    FUN_00012170  per-fighter FACE/expression morph: locks the
 *                                                          fighter VB + walks an index list; only does work
 *                                                          for char ids 1/5/0xC/10 (else returns). Called by
 *                                                          fight_scene & FUN_00046840 only when DAT_0030AA65!=0.
 *                                                          AVs if match setup (DAT_00336BE4 model-info ptr,
 *                                                          VB regs) is incomplete -> we skip it via DAT_0030AA65=0.
 *
 *  -- FIGHTER DISK-LOAD CHAIN (confirmed from load_battle_assets decomp) --
 *  build_asset_filename      sub_00030CB0    FUN_00030CB0  build_asset_filename(charId, variantByte, type,
 *                                                          outBuf[16]); type 1=fighter model, 6=stage.
 *  load_file_blocking        sub_00027AD0    FUN_00027AD0  load_file_blocking(cap, nameBuf, destPtr, flags) --
 *                                                          SYNCHRONOUS disk read into destPtr. *** the disk read ***
 *  bind_fighter_slot         sub_00028630    FUN_00028630  bind_fighter_slot(slot, blob) -> bind_fighter_impl;
 *                                                          registers the loaded blob's D3D resources to a slot.
 *  bind_fighter_impl         sub_00028490    FUN_00028490  in-memory D3DResource register/relocate pass over blob.
 *  register_asset_ptr        sub_00028180    FUN_00028180  register_asset_ptr(slot, filePtr) (model/motion ptr bind).
 *  post_load_setup_fiber     sub_0001AFA0    FUN_0001AFA0  body of fiber 0xB that load_battle_assets registers.
 *    load_battle_assets order per fighter: build_asset_filename -> load_file_blocking -> bind_fighter_slot.
 *    Reads: p1id(DAT_30D9A1)/p1costume(DAT_30D9A2), p2id(DAT_30D9F9)/p2costume(DAT_30D9FA), stage(DAT_30F914).
 *    Load dest buffers: DAT_0030EC20 (P1), DAT_0030EC3C (P2). Loaded-id cache: DAT_003321F4/DAT_003322CC/
 *    DAT_00332204 (set 0xFF to force a reload). NOT gated on game mode (DAT_003139CB).
 *
 *  -- FROZEN FIX: XBOX FIBER RUNTIME (fix_fiber_runtime.c) --
 *  convert_thread_to_fiber   sub_000ADB48    FUN_000ADB48  ConvertThreadToFiber (stdcall ret 4).
 *  create_fiber              sub_000ADA63    FUN_000ADA63  CreateFiber (stdcall ret 12).
 *  delete_fiber              sub_000ADAEF    FUN_000ADAEF  DeleteFiber (stdcall ret 4).
 *  switch_to_fiber           sub_000ADB02    FUN_000ADB02  SwitchToFiber (stdcall ret 4) -- fully replaced.
 *
 *  -- AUDIO / SOUND MANAGER (CRI ADX) -- confirmed by RECOMP_AUDIO_TRACE (audio.c) --
 *  snd_play_core             sub_0004F050    FUN_0004F050  THE PLAYBACK DISPATCHER:
 *                                                          snd_play_core(cueId, type).
 *                                                          Attract fired cues 9/6/0.
 *  start_stage_bgm           sub_000301F0    FUN_000301F0  start_stage_bgm(ctxPtr); sets
 *                                                          BGM context, feeds snd_play_core.
 *  snd_audio_service         sub_000501E5    FUN_000501E5  per-frame audio service pump
 *                                                          (~44/sec; NOT a play entry).
 *  snd_play                  sub_0004FC30    FUN_0004FC30  setup-time play entry (funnels
 *                                                          to snd_play_core).
 *  snd_play_simple           sub_00050790    FUN_00050790  sound-manager entry (unverified).
 *  snd_oneshot               sub_000509F0    FUN_000509F0  sound-manager entry (unverified).
 *  snd_ctl                   sub_00050033    FUN_00050033  sound control stop/set (unverified).
 *    Full subsystem map: audio_catalog.h. CRI ADX engine internals = 0x106000-0x10Bxxx.
 *
 *  -- D3D8 DRAW / DISPLAY-LIST --
 *  D3DDevice_DrawIndexedVertices sub_001665C0 FUN_001665C0  D3D8 indexed draw (TRISTRIP); copies pIndexData
 *                                                          into the pushbuffer. pIndexData = DAT_001809A4 +
 *                                                          offset*2; AVs if the index base/offset is garbage.
 *  draw_displaylist_a        sub_00067B30    FUN_00067B30  walks a model display-list, emits DrawIndexedVertices
 *  draw_displaylist_b        sub_00067F00    FUN_00067F00  (variant) display-list drawer
 *  draw_displaylist_skin     sub_00065000    FUN_00065000  skinned display-list drawer (opcode 0/1/2 records)
 *  draw_displaylist_c        sub_00063E90    FUN_00063E90  display-list drawer (sets index-stream state)
 *  draw_displaylist_d        sub_00064330    FUN_00064330  display-list drawer variant
 *  draw_displaylist_shadow   sub_000644E0    FUN_000644E0  shadow/silhouette display-list drawer
 *  draw_displaylist_cb       sub_00064A60    FUN_00064A60  display-list drawer w/ per-record callbacks
 *    DAT_001809A4 = D3D8 index-buffer base register (pIndexData base for the draws above).
 *    DAT_00902800 = WORLD-matrix scratch buffer the display-list drawers fill then upload via
 *                   D3DDevice_SetTransform(D3DTS_WORLD, &DAT_00902800).
 *    device+0xDE0 = D3D device WORLD-matrix slot;  device+0xC60 = VIEW slot (read by transform_flush).
 *    DAT_0030D89C..DAT_0030D8C8 = per-node WORLD-matrix components staged before SetTransform.
 *    FINDING (this session): the fighter's per-part WORLD matrices are CLEAN (orthonormal, coherent
 *    standing-figure translations, no axis/rotation bug) -> the scramble is in the vertex/index geometry,
 *    NOT the transform (unlike the floor-dome squashed WORLD). See RECOMP_WORLD_DUMP probe in probes.c.
 *
 *  -- FROZEN FIX: D3D8 DEFERRED-STATE FLUSH (fix_d3d8_state.c) --
 *  d3d8_flush_leaf_esp_fix   sub_001756E0    FUN_001756E0  esp-leak leaf (bit 0x800 handler).
 *  d3d8_deferred_state_flush sub_00171800    FUN_00171800  flush esp-leak firewall.
 *  d3d8_set_state_up         sub_00171A20    FUN_00171A20  CDevice_SetStateUP vertex-descriptor rebuild.
 *
 *  -- PROBE TARGETS (probes.c; shadows are diagnostic-only) --
 *  d3d8_vertex_scatter_copy  sub_00166367    FUN_00166367  vertex scatter-copy (probe: d3d_vertexcopy_probe).
 *  matrix_transpose_copy     sub_0016AD00    FUN_0016AD00  matrix emit choke (probe: matrix_emit_probe).
 *  transform_flush           sub_00171600    FUN_00171600  modelview/composite fold (probe: transform_flush_probe).
 *
 *  -- VERIFIED FIGHTER MATERIAL RENDERING (2026-10-26, Ghidra + D3D11 A/B) --
 *  fighter_model_render sub_00065000 FUN_00065000: model header in ECX;
 *    material/strip stream starts at +0x60, bounds sphere at +0x50.
 *  model_sphere_visible sub_00063420 FUN_00063420: ECX = xyz/radius sphere.
 *  model_material_list_continue loc_00065282: INTERNAL LABEL, not a callable
 *    function. JNZ consumes CMP ESI,EBP at 00065280. Shadow in fighters_renderer.c
 *    repairs lost flags across the lifted split; keeps subsequent materials.
 *  DAT_00902800 g_model_world_matrix; DAT_0030D8A0 model material-culling gate;
 *  DAT_00336BE4 g_fighter_part_tables; DAT_003495C0 g_fighter_part_world_matrices.
 *
 *  -- KEY GLOBALS (for reference) --
 *  match_pause_tick sub_0004D220 FUN_0004D220_match_pause_tick: original match
 *    Start-edge/disconnect pause handler. Requires scene=1, substate2=1,
 *    mode!=1/6, countdown 0. Preserves task and audio freeze/resume semantics.
 *  DAT_0034AD4C pause owner (0 none, 1 P1, 2 P2); DAT_0034CDEC pause menu owner.
 *  DAT_0030F9B4 / DAT_0030F9B8 player controller ports (6 = unassigned).
 *  DAT_006E9A98 per-pad pressed edges, stride 0x2C; bit 0x10 = Start.
 *  DAT_0030D9A1  p1id (P1 char)      DAT_0030D9F9  p2id (P2 char)   (stride 0x58)
 *  DAT_0030D9A2  P1 costume/variant  DAT_0030D9FA  P2 costume/variant
 *  DAT_0030F914  stage id            DAT_0030AE36  hit-stop / pause flag (byte)
 *  DAT_0030739C  P1 model-file base  DAT_003073C8  P2 model-file base
 *  DAT_003139CB  game_mode           DAT_0030AE30  match_entry_state
 *     game_mode: set by mode-select (FUN_0003A2F0) from the menu index; ==1 is the
 *                fighter-loading match path that gates match_handler's load branch.
 *                (4 = attract/ComComDemo, 5 = ?, 6 = extra-asset load). NOT needed
 *                for the direct load_battle_assets path (that loader ignores mode).
 *  DAT_003321F4  loaded p1/p2 id cache   DAT_003322CC  loaded costume cache
 *  DAT_00332204  loaded stage cache      DAT_0030EC20/EC3C  P1/P2 load dest buffers
 *    char ids: 0=Zack, 5=Kasumi
 * ==================================================================== */

```
