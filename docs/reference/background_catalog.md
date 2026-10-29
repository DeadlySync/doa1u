# background_catalog

Historical reverse-engineering reference; current source and project memory take precedence.

```text
/* ════════════════════════════════════════════════════════════════════════
 * background_catalog.h -- MAP of the DOA1U stage / world / background pipeline.
 *
 * See fighters_catalog.h for the format contract (catalog, not moved code;
 * keyed off sub_<VA>; "?" = provisional; survives re-lift). Covers the 3D
 * stage (floor, props, shadow blobs, particles) AND the 2D backdrop/attract
 * overlays -- the 2D parts are in-scope exactly as requested; they differ only
 * in that they feed pre-transformed (rhw==1) verts to the same draw path.
 *
 * Exhaustive member list (26 pipeline + 44 shared, depth 3):
 *   tools/catalog_data/background.txt -- regenerate with:
 *     python tools/callgraph.py catalog 0005CC50,0005C330,0005C410,0005C090,0004C200 3
 * ════════════════════════════════════════════════════════════════════════ */
#ifndef DOA1U_BACKGROUND_CATALOG_H
#define DOA1U_BACKGROUND_CATALOG_H

/* ---- PHASE 1: CAMERA + STAGE DRAW ENTRY --------------------------------
 *  set_camera_draw_stage    sub_0005CC50  build VIEW (D3DXMatrixLookAtLH) then
 *                                         draw the stage; 18 callees = the stage
 *                                         render root. NOTE: the 7 LookAt eye/at
 *                                         globals here are what the isolation
 *                                         harness latches to freeze the camera.
 *
 * ---- PHASE 2: STAGE GEOMETRY / DRAW ------------------------------------
 *  build_stage_floor_and_boundary_vertices sub_0005B9C0 arena plane + four
 *                                         boundary strips (XYZ/UV, stride 20).
 *  draw_stage_floor_backdrop sub_0005C330 draws those five strips with the
 *                                         selected floor and boundary textures.
 *  draw_stage_objects       sub_0005C410  props / shadow-blob objects.
 *  draw_particles           sub_0005C090  particle pass; self-gates on pauseflag.
 *  ? stage_sub_setup        sub_0005B930  (5 callees) stage sub-object build.
 *  draw_stage_sunset_backdrop sub_0005C850 pretransformed screen-space backdrop.
 *  setup_stage_render_state sub_00062D30 resets depth, blend and texture state.
 *  ? stage_anim_a           sub_0005B4C0  touches pauseflag (8 callees).
 *  ? stage_anim_b           sub_0005B750  touches pauseflag.
 *
 * ---- PHASE 3: 2D BACKDROP / ATTRACT OVERLAY ----------------------------
 *  draw_attract_wall        sub_0004C200  attract character tiles / ranking
 *                                         overlay (2D, rhw==1 verts).
 *
 * ---- SHARED RENDER PRIMITIVES (same set as fighters; authoritative list in
 *      fighters_catalog.h) -- draws go through:
 *    D3DDevice_SetTransform  sub_00162C20   (fanin 26)
 *    d3d8 state/flush path   sub_00171800 / sub_00171A20 / sub_00166270
 *    CRT/runtime leaves      sub_0016B760 (fanin 112), sub_00160D00 (55), ...
 *      -> these are the "tell NV2A to draw / set state" layer; shared, never
 *         duplicated into a block driver.
 *
 * ---- KEY GLOBALS -------------------------------------------------------
 *    stage      DAT_0030F914     game_mode DAT_003139CB (4=attract)
 *    pauseflag  DAT_0030AE36     world_scratch DAT_00902800 (WORLD upload src)
 *    d3d_ibase  DAT_001809A4
 * ──────────────────────────────────────────────────────────────────────── */

#endif /* DOA1U_BACKGROUND_CATALOG_H */

```
