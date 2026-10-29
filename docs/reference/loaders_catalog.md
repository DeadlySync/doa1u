# loaders_catalog

Historical reverse-engineering reference; current source and project memory take precedence.

```text
/* ════════════════════════════════════════════════════════════════════════
 * loaders_catalog.h -- MAP of the DOA1U disk/asset load pipeline.
 *
 * See fighters_catalog.h for the format contract. ONE loader catalog, not
 * three: the disk path (build_asset_filename -> load_file_blocking -> bind) is
 * SHARED across fighter models, stage, and audio banks -- it is parameterised
 * by an asset TYPE byte (1=fighter model, 6=stage), not duplicated per block.
 * A fighters_loader.c / background_loader.c split at the DRIVER layer is fine,
 * but they both call the same functions below.
 *
 * Exhaustive member list (50 pipeline + 14 shared, depth 3):
 *   tools/catalog_data/loaders.txt -- regenerate with:
 *     python tools/callgraph.py catalog 00027AD0,00030CB0,00028630,00028180,00032830 3
 * ════════════════════════════════════════════════════════════════════════ */
#ifndef DOA1U_LOADERS_CATALOG_H
#define DOA1U_LOADERS_CATALOG_H

/* ---- PHASE 1: FILENAME + SYNCHRONOUS READ -----------------------------
 *  build_asset_filename     sub_00030CB0  (charId, variantByte, type, out[16]).
 *                                         SHADOWED by loaders.c. CONFIRMED type map
 *                                         (RECOMP_LOAD_TRACE, iter-31):
 *     0=DAT (KS_DAT.BIN)   1=MODEL .xpr (kas00.xpr,zac01.xpr -> bind_fighter_slot)
 *     3=TNK (KS0_TNK.BIN)  4=LAD (KL2_LAD.BIN)   6=STAGE .BIN (HAMA3.BIN=stage11)
 *     VOICE = *_VOA.BIN (KS_VOA.BIN=Kasumi) + SYS_VO.BIN; snd_play_core voice cues
 *     read these (audio_catalog.h). Boot: title/chrsel/efc0/ttt.xpr, DOA_SE.BIN.
 *  load_file_blocking       sub_00027AD0  (cap, nameBuf, destPtr, flags) --
 *                                         SYNCHRONOUS disk read into destPtr.
 *                                         fanin 12 = the shared read primitive.
 *  ? read_helper_a          sub_000279E0  load_file_blocking sibling.
 *  ? read_helper_b          sub_00027A70
 *  ? file_open              sub_00027FC0  (1 callee into the read path).
 *
 * ---- PHASE 2: PER-ASSET LOAD DRIVERS -----------------------------------
 *  load_battle_assets       sub_00032830  reads p1id/p2id/stage -> loads both
 *                                         fighter models + stage; completion is
 *                                         polled/pumped by caller (async). 20 callees.
 *  ? load_fighter_one       sub_0001A6F0  calls load_file_blocking +
 *                                         build_asset_filename; touches stage.
 *  ? load_stage_one         sub_0001A790  touches stage (1 callee).
 *  ? load_variant_assets    sub_00032520  calls load_file_blocking+filename;
 *                                         touches game_mode/p1id/p2id.
 *  ? load_extra_assets      sub_00032650  calls load_file_blocking+filename (9 callees).
 *  ? load_mode_assets       sub_0004F120  calls load_file_blocking;
 *                                         touches game_mode/match_state.
 *
 * ---- PHASE 3: IN-MEMORY BIND / RELOCATE --------------------------------
 *  bind_fighter_slot        sub_00028630  (slot, blob) -> bind_fighter_impl.
 *  bind_fighter_impl        sub_00028490  in-memory D3DResource register/relocate
 *                                         pass over the loaded blob.
 *  register_asset_ptr       sub_00028180  (slot, filePtr) model/motion ptr bind.
 *  ? bind_helper_a          sub_000281A0
 *  ? bind_helper_b          sub_000281E0
 *
 *  NOTE: the async load uses the fiber scheduler to yield while the read is in
 *  flight -- create_fiber (sub_000ADA63) / delete_fiber (sub_000ADAEF) appear
 *  in this closure for that reason (see fix_fiber_runtime.c).
 *
 * ---- KEY GLOBALS -------------------------------------------------------
 *    p1id DAT_0030D9A1  p2id DAT_0030D9F9  stage DAT_0030F914
 *    p1dest DAT_0030EC20  p2dest DAT_0030EC3C   (load destination buffers)
 *    loaded-id caches: DAT_003321F4 / DAT_003322CC / DAT_00332204
 *      (set to 0xFF to force a reload)
 *    NOTE: the disk loader is NOT gated on game_mode (DAT_003139CB).
 * ──────────────────────────────────────────────────────────────────────── */

#endif /* DOA1U_LOADERS_CATALOG_H */

```
