# fighters_catalog

Historical reverse-engineering reference; current source and project memory take precedence.

```text
/* ════════════════════════════════════════════════════════════════════════
 * fighters_catalog.h -- MAP of the DOA1U fighter pipeline (NOT moved code).
 *
 * WHAT THIS IS
 *   A curated, phase-organised index of the lifted guest functions that make
 *   up the fighter subsystem: match entry, per-frame logic, geometry/draw,
 *   face morph. It is a *catalog* -- the generated bodies stay in
 *   src/recomp/gen/ under their sub_<VA> symbols; we never copy them. This
 *   header keys off sub_<VA> (stable across re-lifts) so it survives a re-lift
 *   the way doa1u_names.h does. The game shipped stripped: every readable name
 *   here is one WE coined.
 *
 *   The driver that will ORCHESTRATE these (fighters.c) consumes this map.
 *   The disk-load half lives in loaders_catalog.h (shared with stage/audio).
 *   The exhaustive machine-generated member list (212 pipeline + 55 shared, at
 *   call-depth 3) is tools/catalog_data/fighters.txt -- regenerate with:
 *     python tools/callgraph.py catalog \
 *       00032830,00032D20,00030450,00044140,00043400,00042C50,000701B0,00012170 3
 *   "?" = provisional role inferred from call/global fingerprint, not yet
 *   body-confirmed. Promote to doa1u_names.h once verified in Ghidra.
 *
 * INDIRECT DISPATCH (why the draw chain looks short in a direct call graph)
 *   draw_fighter is a thin wrapper; the real geometry submission runs through
 *   the display-list INTERPRETER family (draw_displaylist_*, see below) which
 *   is invoked via function pointers stored in the model blob -- a direct call
 *   graph cannot follow those edges. Those functions are listed explicitly.
 * ════════════════════════════════════════════════════════════════════════ */
#ifndef DOA1U_FIGHTERS_CATALOG_H
#define DOA1U_FIGHTERS_CATALOG_H

/* ---- PHASE 1: MATCH ENTRY / FLOW --------------------------------------
 *  match_handler            sub_00032D20  one-shot match entry; sets ids, calls
 *                                         load_battle_assets, pumps scheduler,
 *                                         register_task_fiber(9, fight_scene).
 *  fight_scene_loop         sub_00044140  in-fight per-frame loop (infinite).
 *  init_fighter_spawn_state sub_00030450  spawn X/facing, health, per-round clear.
 *  ? match_setup_gate       sub_0002FEA0  touches game_mode/match_state/p1id/p2id
 *                                         -> the iter-29 entry GATE; see
 *                                         project_doa1u_next_steps (caller trace).
 *  ? stage_mode_gate        sub_000300E0  touches game_mode/match_state/stage.
 *  ? round_state_init       sub_00030220  touches health/match_state.
 *  ? char_select_commit     sub_00043960  touches p1/p2 id+costume.
 *
 * ---- PHASE 2: PER-FRAME FIGHTER LOGIC ----------------------------------
 *  fighter_tick             sub_00043400  P1/P2 state machine + redraw; skips
 *                                         state machine when pauseflag != 0.
 *  fighter_move_advance     sub_00042C50  advance current move frame.
 *  ? hitstop_gate           sub_000431C0  touches match_state/pauseflag.
 *  ? pause_render_gate      sub_000465F0  touches game_mode/pauseflag.
 *  ? model_ptr_setup        sub_00034690  touches p1model/p2model (binds bases).
 *  ? model_ptr_setup2       sub_00040B40  touches p1model/p2model.
 *
 * ---- PHASE 3: GEOMETRY / DRAW ------------------------------------------
 *  ? fighter_render_pass    sub_00047E80  per-frame render orchestrator: CALLS
 *                                         draw_fighter; touches facemorph_en,
 *                                         pauseflag; 16 callees (sub-passes
 *                                         00044EE0/00047840 + D3D state leaves).
 *  draw_fighter             sub_000701B0  draw one fighter (per-player wrapper).
 *  face_morph_setup         sub_00012170  FACE/expression morph; only char ids
 *                                         1/5/0xC/10; gated on facemorph_en;
 *                                         AVs if modelinfo (DAT_00336BE4) unset.
 *    -- display-list INTERPRETERS (invoked indirectly from the model blob) --
 *    draw_displaylist_a     sub_00067B30  walks model DL -> DrawIndexedVertices
 *    draw_displaylist_b     sub_00067F00  variant
 *    draw_displaylist_skin  sub_00065000  skinned (opcode 0/1/2 records)
 *    draw_displaylist_c     sub_00063E90  sets index-stream state
 *    draw_displaylist_d     sub_00064330  variant
 *    draw_displaylist_shadow sub_000644E0 shadow/silhouette
 *    draw_displaylist_cb    sub_00064A60  per-record callbacks
 *
 * ---- SHARED RENDER PRIMITIVES (also used by background; see background_catalog) -
 *    D3DDevice_DrawIndexedVertices sub_001665C0  TRISTRIP indexed draw
 *    D3DDevice_SetTransform        sub_00162C20  WORLD/VIEW/PROJ upload
 *    d3d8_deferred_state_flush     sub_00171800  esp-leak firewall flush
 *    d3d8_set_state_up             sub_00171A20  vertex-descriptor rebuild
 *    transform_flush               sub_00171600  modelview/composite fold
 *
 * ---- KEY GLOBALS (set by the driver before entry) ----------------------
 *    p1id         DAT_0030D9A1   (0=Zack, 5=Kasumi)   p2id   DAT_0030D9F9
 *    p1costume    DAT_0030D9A2                         p2costume DAT_0030D9FA
 *    stage        DAT_0030F914                         game_mode DAT_003139CB (==1)
 *    match_state  DAT_0030AE30                         pauseflag DAT_0030AE36
 *    health       DAT_0030AE3C   p1model DAT_0030739C  p2model DAT_003073C8
 *    modelinfo    DAT_00336BE4   facemorph_en DAT_0030AA65
 * ──────────────────────────────────────────────────────────────────────── */

#endif /* DOA1U_FIGHTERS_CATALOG_H */

```
