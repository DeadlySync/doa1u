#!/usr/bin/env python3
"""
reapply_gen_edits.py  -- re-apply the hand gen-edits that a recomp regen WIPES.

A `tools.recomp` regen overwrites every file in src/recomp/gen, destroying the
manual edits we rely on. This script re-applies them. It is:

  * VA-ANCHORED, not file/line anchored. Functions move between recomp_NNNN.c
    files on every reseed (--split buckets shift), so we never trust a file name
    or line number. Each patch is located by its unique `loc_<VA>: ;` entry
    label (or, for recomp_types.h, by a stable source line), searched across
    ALL gen files. Wherever the anchor now lives, that's where we patch.
  * IDEMPOTENT. Each patch carries a unique marker string; if the marker is
    already present in the target file the patch is skipped. Safe to run on an
    already-edited tree (no-op) or on a fresh regen.
  * LOUD ON MISS. If an anchor can't be found the script reports it as MISSING
    and exits non-zero -- that means the function wasn't lifted or its VA moved,
    which must be investigated, not silently ignored.

Usage:
    py -3 tools/reapply_gen_edits.py [--gen-dir DIR] [--dry-run]

Default gen dir: src/recomp/gen, resolved relative to this script.

================================================================================
v0.14.0 CLEAN RE-LIFT edit set (2026-10-17)
--------------------------------------------------------------------------------
The pre-v0.14.0 lift carried a large gen-edit inventory. The re-lift strips to
stock and re-adds only what demonstrably breaks. This script's ACTIVE set is
deliberately minimal:

    ACTIVE:
        FMV        51B70/51E10/51F50: native Sofdec start/update/stop shadows.
                                   No unconditional movie-finished skip.
        audio-spin loc_001B1484   clear the stubbed-DSP command doorbell so the
                                   per-frame DSOUND/APU wait completes instead of
                                   spinning (draws 0). Gated recomp_audio_spin_shim()
                                   (RECOMP_AUDIO_SPIN_SHIM). TEMPORARY, reversible.

    RE-ADDED (iter-7, 2026-10-17): the 7 XAPILIB host-input bridge overrides.
        DOA1U polls input through its statically-linked XInput/USB stack, which
        enumerates nothing (USB/XID not emulated) -> usb_gamepad_report is never
        called and the key table nobody reads (proved: RECOMP_KEY_TRACE shows the
        window receiving keys, RECOMP_INPUT_DIAG never fires). These overrides of
        XGetDevices / XGetDeviceChanges / XInputOpen / XInputGetCapabilities /
        XInputGetState / XInputClose / XInputSetState (recomp_0087.c) short-circuit
        the guest's XAPILIB input to recomp_host_xinput_* helpers, which read
        xbox_InputGetState(0) (keyboard + any XInput pad). The host bridge is now
        ported into xboxrecomp/src/input/xinput_device.c (where v0.13.1 had it), so
        these no longer fail at link. Keyboard works again -> standard debug flow.

    DEFERRED (knowledge kept in DEFERRED_PATCHES below; NOT applied yet):
        ADX shim   loc_0010BF80   skip the blocking ADX stream stop-wait at the
                                   char-select->match transition. Self-contained;
                                   re-add when we actually drive to a match.

    RE-ADDED (iter-52 + iter-53, 2026-10-17): the ABI-violation family. Stock
        v0.14.0 did NOT fix it -- the game crashed ~1s after the TECMO logo on
        sub_001328F0's esp-leak -> esi/ebx swap. OBJ-abifix (sub_001328F0 esp
        re-pin, verified structurally unchanged in the v0.14.0 lift) + the general
        RECOMP_ABI_CALL ebx/esi/edi repair in recomp_types.h are both ACTIVE above.

    STILL DROPPED (superseded by stock v0.14.0; do NOT re-add without evidence):
        DL-guard / DL-abifix  -- display-list-specific ABI patches. Not needed so
        far on the re-lift; re-derive from the archive if a DL livelock returns.
        CHARDRAW probe  -- iter-55 diagnostic, obsolete.

    Proper FMV objective (roadmap item 4): the shipped RECOMP_FMV_HOST path is a
    .wmv/Media-Foundation bridge and a DEAD END for DOA1U (CRI Sofdec .sfd =
    mpeg1video + adpcm_adx; MF can't decode it and the hook only fires on .wmv).
    The real fix is to decode the .sfd ourselves with a single-file C MPEG-1
    decoder -- pl_mpeg (phoboslab, MIT: MPEG-1 video + MPEG-PS demux,
    handles the 00 00 01 BA program stream directly). pl_mpeg's audio is MP2;
    DOA1U's SFD audio is ADX: src/fmv/sofdec.c decodes it separately, src/fmv/fmv.c
    owns host audio output and the guest lifecycle; the D3D11 flip draws it.
================================================================================
"""
import argparse, glob, os, sys

DEFAULT_GEN = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "src", "recomp", "gen")

# ---- patch definitions --------------------------------------------------
# kind:
#   "after_label"  insert BLOCK on the line after `loc_<ANCHOR>: ;`
#   "before_label" insert BLOCK immediately before the line `loc_<ANCHOR>: ;`
#   "before_line"  insert BLOCK before the first line containing ANCHOR (substr)
# marker: unique substring; if already present in the file, skip (idempotent).

PATCHES = [
    dict(name="direct shader domain reset shadow", kind="rename_def",
         anchor="void sub_00167870(void)", marker="sub_00167870_gen(void)",
         new="void sub_00167870_gen(void) /* named shader-domain reset shadow */"),
    dict(name="FVF presentation-domain shadow", kind="rename_def",
         anchor="void sub_00167BD0(void)", marker="sub_00167BD0_gen(void)",
         new="void sub_00167BD0_gen(void) /* named FVF presentation shadow */"),
    dict(name="widescreen gameplay projection shadow", kind="rename_def",
         anchor="void sub_001847B3(void)", marker="sub_001847B3_gen(void)",
         new="void sub_001847B3_gen(void) /* named widescreen shadow */"),
    dict(name="widescreen sphere culling shadow", kind="rename_def",
         anchor="void sub_00063420(void)", marker="sub_00063420_gen(void)",
         new="void sub_00063420_gen(void) /* named widescreen shadow */"),
    dict(name="widescreen stage backdrop shadow", kind="rename_def",
         anchor="void sub_0005C850(void)", marker="sub_0005C850_gen(void)",
         new="void sub_0005C850_gen(void) /* named widescreen shadow */"),
    dict(name="GPU cooperative fence event wait", kind="after_label", anchor="0016B5F8",
         marker="HOST_GPU_FENCE_WAIT", block="""
    /* HOST_GPU_FENCE_WAIT: the host executor retires real releases, but does
     * not deliver XDK software-method 5's interrupt. Wait for this fence
     * cooperatively instead of sleeping on the unsupported GPU event. */
    {
        extern void xbox_Nv2aWaitProgress(void);
        uint32_t target = MEM32(ebp);
        uint32_t semaphore = MEM32(esi + 0x30);
        while ((int32_t)(MEM32(semaphore) - target) < 0)
            xbox_Nv2aWaitProgress();
        goto loc_0016B613;
    }
"""),
    dict(name="match pause handler shadow", kind="rename_def",
         anchor="void sub_0004D220(void)", marker="sub_0004D220_gen(void)",
         new="void sub_0004D220_gen(void) /* shadowed by match_pause_tick in game_mode.c */"),
    dict(name="GPU cooperative flush wait", kind="after_label", anchor="0016B310",
         marker="HOST_GPU_PROGRESS_WAIT", block="""    /* HOST_GPU_PROGRESS_WAIT: retain hardware completion, block for executor. */
    if (MEM32(eax + 0x100410) & 0x10000u) {
        extern void xbox_Nv2aWaitProgress(void);
        xbox_Nv2aWaitProgress();
    }
"""),
    dict(name="GPU cooperative vblank ack wait", kind="after_label", anchor="0016E7F0",
         marker="HOST_VBLANK_PROGRESS_WAIT", block="""    /* HOST_VBLANK_PROGRESS_WAIT: publish W1C before blocking for ack. */
    MEM32(edi + 0x600100) = ecx;
    if (MEM32(edi + 0x100) & 0x1000000u) {
        extern void xbox_Nv2aWaitProgress(void);
        xbox_Nv2aWaitProgress();
    }
"""),
    dict(name="frontend match stage selector", kind="rename_def",
         anchor="void sub_000300E0(void)", marker="void sub_000300E0_gen(void)",
         new="void sub_000300E0_gen(void)"),
    dict(name="stage floor and boundary vertex builder", kind="rename_def",
         anchor="void sub_0005B9C0(void)", marker="void sub_0005B9C0_gen(void)",
         new="void sub_0005B9C0_gen(void)"),
    dict(name="fighter material continuation flags", kind="rename_def",
         anchor="void sub_00065282(void)", marker="void sub_00065282_gen(void)",
         new="void sub_00065282_gen(void)"),
    dict(name="fighter renderer model display list", kind="rename_def",
         anchor="void sub_00065000(void)", marker="void sub_00065000_gen(void)",
         new="void sub_00065000_gen(void)"),
    dict(name="CRI movie start", kind="rename_def",
         anchor="void sub_00051B70(void)", marker="void sub_00051B70_gen(void)",
         new="void sub_00051B70_gen(void)"),
    dict(name="CRI movie update", kind="rename_def",
         anchor="void sub_00051E10(void)", marker="void sub_00051E10_gen(void)",
         new="void sub_00051E10_gen(void)"),
    dict(name="CRI movie stop", kind="rename_def",
         anchor="void sub_00051F50(void)", marker="void sub_00051F50_gen(void)",
         new="void sub_00051F50_gen(void)"),

    # Reach-gameplay audio-spin shim (iter-3, re-lift). sub_001B1384 busy-waits
    # at loc_001B1484 for the GP/EP DSP to zero the command doorbell at [ebx+0x810];
    # v0.14.0 stubs that DSP (passthrough) so it never clears -> infinite spin ->
    # frame driver never completes -> draws 0. Force the ack so the frame proceeds.
    # FULLY REVERSIBLE: gated by recomp_audio_spin_shim() (RECOMP_AUDIO_SPIN_SHIM,
    # baked "1"; set 0 to restore the real wait with no rebuild). TEMPORARY -> remove
    # when real GP/EP DSP voice-completion lands (see recomp_manual.c). roadmap #5.
    dict(name="audio-spin shim sub_001B1384", kind="after_label", anchor="001B1484",
         marker="AUDIO-SPIN SHIM",
         block=
"""    { /* AUDIO-SPIN SHIM (iter-3, re-lift): clear the stubbed-DSP command doorbell
       * so this per-frame DSOUND/APU wait completes instead of spinning forever.
       * Reversible: RECOMP_AUDIO_SPIN_SHIM=0 restores the real wait. See recomp_manual.c. */
      extern int recomp_audio_spin_shim(void);
      if (recomp_audio_spin_shim()) MEM32(ebx) = 0; }
"""),

    # Reach-gameplay GPU busy-wait shim (iter-10). The MATCH-render hang (Bug B /
    # roadmap #3): sub_0016B2E4 kicks a GPU op by setting bit 0x10000 at the NV2A
    # status reg (eax = device[0x1C28] + 0x100410, WC aperture) then busy-waits at
    # loc_0016B310 for the hardware to clear it. Our software NV2A never writes it
    # back -> the main render thread spins forever ("Not Responding", audio keeps
    # playing). cdb-proven (GPU path, 2026-10-17). Force-clear bit 0x10000 each
    # iteration so the wait completes (executor already did the geometry).
    # REVERSIBLE: gated recomp_gpu_busywait_shim() (RECOMP_GPU_BUSYWAIT_SHIM, baked
    # "1"; set 0 to restore the real wait with no rebuild). eax holds the reg base
    # at loc_0016B310 (set in loc_0016B2E9, unchanged by the loop). See recomp_manual.c.
    dict(name="GPU busy-wait shim sub_0016B2E4", kind="after_label", anchor="0016B310",
         marker="GPU BUSY-WAIT SHIM",
         block=
"""    { /* GPU BUSY-WAIT SHIM (iter-10): clear the NV2A kick/busy bit the software
       * executor never writes back, so this per-frame match-render wait completes
       * instead of spinning forever. Reversible: RECOMP_GPU_BUSYWAIT_SHIM=0 restores
       * the real wait. See recomp_manual.c. */
      extern int recomp_gpu_busywait_shim(void);
      if (recomp_gpu_busywait_shim()) MEM32(eax + 0x100410) &= ~0x10000u; }
"""),

    # Reach-gameplay ADX audio-worker YIELD shim (iter-12). The real MATCH
    # "(Not Responding)" hang: the two ADX audio-worker threads sub_00109EC0 /
    # sub_00109F40 busy-poll their shutdown flag with no yield, running the ADX
    # decode/mix path every iteration. That path takes the ADXM server lock
    # (guest 0x009A4D00) tens of thousands of times a second; the main render
    # thread needs the same lock per frame, starves, never reaches flip() -> the
    # window freezes. cdb + our own [CS] diagnostics proved it (2026-10-19). On
    # real HW these workers block on an APU/DSP completion event (stubbed here).
    # Insert a ~1 ms yield at each loop TOP (loc_00109ED0 / loc_00109F50), which
    # is OUTSIDE the server lock (taken/released inside the body) -> hands the
    # freed lock + a core to the main thread and collapses the convoy. The worker
    # still polls at ~1 kHz, far above its buffer rate, so audio is unaffected.
    # REVERSIBLE: gated recomp_adx_worker_yield() (RECOMP_ADX_YIELD, baked "1";
    # set 0 to restore the tight spin, no rebuild). TEMPORARY -> remove when the
    # APU raises the real voice-completion event. See recomp_manual.c. roadmap #5.
    dict(name="ADX-yield shim sub_00109EC0", kind="after_label", anchor="00109ED0",
         marker="ADX-YIELD SHIM worker66",
         block=
"""    { /* ADX-YIELD SHIM worker66 (iter-12): yield outside the ADXM server lock
       * so this audio-worker spin stops starving the main render thread.
       * Reversible: RECOMP_ADX_YIELD=0 restores the tight spin. See recomp_manual.c. */
      extern void recomp_adx_worker_yield(void);
      recomp_adx_worker_yield(); }
"""),
    dict(name="ADX-yield shim sub_00109F40", kind="after_label", anchor="00109F50",
         marker="ADX-YIELD SHIM worker67",
         block=
"""    { /* ADX-YIELD SHIM worker67 (iter-12): yield outside the ADXM server lock
       * so this audio-worker spin stops starving the main render thread.
       * Reversible: RECOMP_ADX_YIELD=0 restores the tight spin. See recomp_manual.c. */
      extern void recomp_adx_worker_yield(void);
      recomp_adx_worker_yield(); }
"""),

    # ---- EMIT-PROBE _gen renames (iter-20), 2026-10-22 ----------------------
    # recomp_manual.c defines SHADOWS named sub_0016AD00 / sub_00171600 (the
    # matrix transpose-copy choke point + the transform-flush) that log/trap the
    # squashed fighter WORLD matrix, then tail-call the real generated body under
    # a _gen suffix. The lifter emits the generated DEFINITION as plain
    # `void sub_0016AD00(void)` -- which DUPLICATE-SYMBOL-collides with the shadow
    # at link time. These two patches rename the generated definitions to the
    # _gen names the shadows expect. The CALL SITES and recomp_dispatch.c entries
    # already reference the bare names (-> resolve to the shadows) and regenerate
    # correctly, so no other edit is needed. REVERSIBLE: delete the shadows in
    # recomp_manual.c and drop these two patches to restore stock behaviour.
    # NOTE: kind="rename_def" REPLACES the whole definition line (anchor = the
    # exact regenerated line, searched across all gen files since the function
    # may land in any recomp_NNNN.c on a reseed).
    dict(name="EMIT-PROBE rename sub_0016AD00 def", kind="rename_def",
         anchor="void sub_0016AD00(void)",
         marker="sub_0016AD00_gen(void)",
         new="void sub_0016AD00_gen(void)   /* iter-20 EMIT-PROBE rename: shadowed by recomp_manual.c */"),
    dict(name="EMIT-PROBE rename sub_00171600 def", kind="rename_def",
         anchor="void sub_00171600(void)",
         marker="sub_00171600_gen(void)",
         new="void sub_00171600_gen(void)   /* iter-20 EMIT-PROBE rename: shadowed by recomp_manual.c */"),

    # ---- AUDIO-TRACE _gen renames (iter-31), 2026-10-23 ---------------------
    # audio.c defines logging SHADOWS over the game's sound-manager API (the
    # driver-facing layer over the CRI ADX engine) so we can see exactly what the
    # game calls to play BGM vs voice vs SFX. Each shadow logs its args then tail-
    # calls the real body under _gen. Same mechanism as EMIT-PROBE above. Inert
    # unless RECOMP_AUDIO_TRACE is set. REVERSIBLE: delete audio.c + these patches.
    # Roles are PROVISIONAL (audio_catalog.h "?"): the trace itself confirms them.
    dict(name="AUDIO-TRACE rename sub_000301F0 (start_stage_bgm)", kind="rename_def",
         anchor="void sub_000301F0(void)", marker="sub_000301F0_gen(void)",
         new="void sub_000301F0_gen(void)   /* audio-trace: shadowed by audio.c (start_stage_bgm) */"),
    dict(name="AUDIO-TRACE rename sub_0004F050 (snd_play_core)", kind="rename_def",
         anchor="void sub_0004F050(void)", marker="sub_0004F050_gen(void)",
         new="void sub_0004F050_gen(void)   /* audio-trace: shadowed by audio.c (snd play funnel) */"),
    dict(name="AUDIO-TRACE rename sub_0004FC30 (snd_play)", kind="rename_def",
         anchor="void sub_0004FC30(void)", marker="sub_0004FC30_gen(void)",
         new="void sub_0004FC30_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */"),
    dict(name="AUDIO-TRACE rename sub_000501E5 (snd_play_ex)", kind="rename_def",
         anchor="void sub_000501E5(void)", marker="sub_000501E5_gen(void)",
         new="void sub_000501E5_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */"),
    dict(name="AUDIO-TRACE rename sub_00050790 (snd_play_simple)", kind="rename_def",
         anchor="void sub_00050790(void)", marker="sub_00050790_gen(void)",
         new="void sub_00050790_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */"),
    dict(name="AUDIO-TRACE rename sub_000509F0 (snd_oneshot)", kind="rename_def",
         anchor="void sub_000509F0(void)", marker="sub_000509F0_gen(void)",
         new="void sub_000509F0_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */"),
    dict(name="AUDIO-TRACE rename sub_00050033 (snd_ctl)", kind="rename_def",
         anchor="void sub_00050033(void)", marker="sub_00050033_gen(void)",
         new="void sub_00050033_gen(void)   /* audio-trace: shadowed by audio.c (snd control) */"),

    # ---- LOAD-TRACE _gen renames (iter-31), 2026-10-23 ----------------------
    # loaders.c shadows the disk/asset load path so we see exactly what gets read
    # off disk (filename, type, dest) + bound. Same mechanism as AUDIO-TRACE.
    # Inert unless RECOMP_LOAD_TRACE. REVERSIBLE: delete loaders.c + these patches.
    dict(name="LOAD-TRACE rename sub_00027AD0 (load_file_blocking)", kind="rename_def",
         anchor="void sub_00027AD0(void)", marker="sub_00027AD0_gen(void)",
         new="void sub_00027AD0_gen(void)   /* load-trace: shadowed by loaders.c (disk read) */"),
    dict(name="LOAD-TRACE rename sub_00030CB0 (build_asset_filename)", kind="rename_def",
         anchor="void sub_00030CB0(void)", marker="sub_00030CB0_gen(void)",
         new="void sub_00030CB0_gen(void)   /* load-trace: shadowed by loaders.c (filename) */"),
    dict(name="LOAD-TRACE rename sub_00028630 (bind_fighter_slot)", kind="rename_def",
         anchor="void sub_00028630(void)", marker="sub_00028630_gen(void)",
         new="void sub_00028630_gen(void)   /* load-trace: shadowed by loaders.c (bind) */"),

    # Retain generated bodies behind read-only flow/menu tracing shadows.
    # Reapply diagnostic selections immediately before asset loading.
    dict(name="TEST-MATCH rename sub_00032830 (load_battle_assets)", kind="rename_def",
         anchor="void sub_00032830(void)", marker="void sub_00032830_gen(void)",
         new="void sub_00032830_gen(void) /* diagnostic selection shadow in frontend_pre.c */"),
    dict(name="MODE-HOOK rename sub_00033800 (flow dispatcher)", kind="rename_def",
         anchor="void sub_00033800(void)", marker="sub_00033800_gen(void)",
         new="void sub_00033800_gen(void)   /* mode-hook: shadowed by game_mode.c (flow dispatcher) */"),
    # Menu tracing preserves original behavior; frontend_pre.c owns scene launching.
    dict(name="MODE-HOOK rename sub_0003A403 (menu dispatch)", kind="rename_def",
         anchor="void sub_0003A403(void)", marker="sub_0003A403_gen(void)",
         new="void sub_0003A403_gen(void)   /* mode-hook: shadowed by game_mode.c (menu scene dispatch) */"),
    dict(name="MODE-HOOK rename sub_0003A4CC (menu handler)", kind="rename_def",
         anchor="void sub_0003A4CC(void)", marker="sub_0003A4CC_gen(void)",
         new="void sub_0003A4CC_gen(void)   /* mode-hook: shadowed by game_mode.c (main menu handler) */"),
    dict(name="MODE-HOOK rename sub_00038EB0 (scene launcher)", kind="rename_def",
         anchor="void sub_00038EB0(void)", marker="sub_00038EB0_gen(void)",
         new="void sub_00038EB0_gen(void)   /* mode-hook: shadowed by game_mode.c (scene launcher) */"),
    # iter-35: the FRONT-END MASTER chain (fiber 0 = sub_0003AAC0 loop:
    # menu_tick(38A70) -> post1(372F0) -> post2(38D30) -> scene_launcher). The
    # title/"press start" + menu navigation live in menu_tick -- flow_dispatcher
    # (sub_00033800) only runs once a SCENE is active, not during the menu. These
    # trace shadows log each stage's arg->return + front-end state so we can read
    # the menu decision pipeline per confirm. Logging only (RECOMP_FLOW_TRACE).
    dict(name="MODE-HOOK rename sub_00038A70 (menu_tick)", kind="rename_def",
         anchor="void sub_00038A70(void)", marker="sub_00038A70_gen(void)",
         new="void sub_00038A70_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end menu_tick) */"),
    dict(name="MODE-HOOK rename sub_000372F0 (menu_post1)", kind="rename_def",
         anchor="void sub_000372F0(void)", marker="sub_000372F0_gen(void)",
         new="void sub_000372F0_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end post1) */"),
    dict(name="MODE-HOOK rename sub_00038D30 (menu_post2)", kind="rename_def",
         anchor="void sub_00038D30(void)", marker="sub_00038D30_gen(void)",
         new="void sub_00038D30_gen(void)   /* mode-hook: shadowed by game_mode.c (front-end post2) */"),
    # iter-35: match_handler (sub_00032D20) -- the ONE-SHOT match ENTRY. Logging its
    # entry state (game_mode, p1/p2/stage, flow) captures the exact launch SIGNATURE,
    # and disambiguates attract (game_mode=4) from real arcade (0/1). The signature
    # the code intercept replicates. Logging only (RECOMP_FLOW_TRACE).
    dict(name="MODE-HOOK rename sub_00032D20 (match_handler)", kind="rename_def",
         anchor="void sub_00032D20(void)", marker="sub_00032D20_gen(void)",
         new="void sub_00032D20_gen(void)   /* mode-hook: shadowed by game_mode.c (match_handler entry) */"),

    # ---- SM-HOOK _gen renames (iter-36), 2026-10-24 -------------------------
    # state_machine.c shadows the EXTRACTED front-end state machine control points
    # (scene loop, match launcher, flow handlers 0-4/6, in-match handlers) for
    # trace + control. flow_dispatcher(33800) + match_handler(32D20) are already
    # renamed above (shadowed in game_mode.c). Inert unless RECOMP_SM_*. Same
    # _gen-rename mechanism. REVERSIBLE: delete state_machine.c + these patches.
    dict(name="SM-HOOK rename sub_000338C0 (fe_scene_loop)", kind="rename_def",
         anchor="void sub_000338C0(void)", marker="sub_000338C0_gen(void)",
         new="void sub_000338C0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_scene_loop) */"),
    dict(name="SM-HOOK rename sub_0002FAF0 (fe_match_launcher)", kind="rename_def",
         anchor="void sub_0002FAF0(void)", marker="sub_0002FAF0_gen(void)",
         new="void sub_0002FAF0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_match_launcher) */"),
    dict(name="SM-HOOK rename sub_000312C0 (fe_flow0_title)", kind="rename_def",
         anchor="void sub_000312C0(void)", marker="sub_000312C0_gen(void)",
         new="void sub_000312C0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow0_title) */"),
    dict(name="SM-HOOK rename sub_0002F910 (fe_flow1)", kind="rename_def",
         anchor="void sub_0002F910(void)", marker="sub_0002F910_gen(void)",
         new="void sub_0002F910_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow1) */"),
    dict(name="SM-HOOK rename sub_0002FA70 (fe_flow2)", kind="rename_def",
         anchor="void sub_0002FA70(void)", marker="sub_0002FA70_gen(void)",
         new="void sub_0002FA70_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow2) */"),
    dict(name="SM-HOOK rename sub_00031650 (fe_flow3)", kind="rename_def",
         anchor="void sub_00031650(void)", marker="sub_00031650_gen(void)",
         new="void sub_00031650_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow3) */"),
    dict(name="SM-HOOK rename sub_000319D0 (fe_flow4)", kind="rename_def",
         anchor="void sub_000319D0(void)", marker="sub_000319D0_gen(void)",
         new="void sub_000319D0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow4) */"),
    dict(name="SM-HOOK rename sub_000310F0 (fe_flow6_results)", kind="rename_def",
         anchor="void sub_000310F0(void)", marker="sub_000310F0_gen(void)",
         new="void sub_000310F0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow6_results) */"),
    dict(name="SM-HOOK rename sub_00030F00 (fe_inmatch_a)", kind="rename_def",
         anchor="void sub_00030F00(void)", marker="sub_00030F00_gen(void)",
         new="void sub_00030F00_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_inmatch_a) */"),
    dict(name="SM-HOOK rename sub_0002F7A0 (fe_inmatch_b)", kind="rename_def",
         anchor="void sub_0002F7A0(void)", marker="sub_0002F7A0_gen(void)",
         new="void sub_0002F7A0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_inmatch_b) */"),

    # ---- ABI-violation family (iter-52 + iter-53), re-added 2026-10-17 -------
    # The stock v0.14.0 build crashed ~1s after the TECMO logo: sub_001328F0's
    # indirect vtable call runs a mis-lifted callee (bad `ret N`) that leaks guest
    # esp by +12. Uncontained, that leak shifts sub_001328F0's own epilogue POPs
    # and swaps the callee-saved esi<->ebx it restores, handing the attract
    # dispatch a corrupt object pointer -> AV on a wild ebx/esi (0xE9EDEF6D). The
    # v0.14.0 #199 ABI change did NOT fix it for DOA1U (esp delta +12 still fires).
    # Two complementary known-good fixes, both reversible:
    #   iter-52  per-site esp re-pin in sub_001328F0 (fixes the leak at the source)
    #   iter-53  general RECOMP_ABI_CALL ebx/esi/edi repair in recomp_types.h
    #            (catches the whole family, incl. sub_0012D0F0, from the caller)
    # The v0.14.0 lift of sub_001328F0 is structurally identical to v0.13.1
    # (4 entry pushes ebx/ebp/esi/edi; loop at loc_00132906; epilogue POPs at
    # loc_00132926), so the iter-52 anchors/offset still hold -- verified, not
    # pasted blind.
    dict(name="OBJ-abifix decl sub_001328F0", kind="after_label", anchor="001328F0",
         marker="_frame_esp is esp after the four",
         block=
"""    /* iter-52 reapplied: the vtable method called indirectly in the loop below
     * is mis-lifted (bad ret N) and leaks guest esp by +12. Left uncontained it
     * shifts this function's epilogue POPs, swapping the callee-saved esi<->ebx
     * it restores -- which hands the attract dispatch (sub_0012DB20) a corrupt
     * object pointer that faults at obj+0x34B8. _frame_esp is esp after the four
     * entry pushes (= entry esp - 0x10); re-pin to it at the loop top and before
     * the epilogue so no callee esp leak accumulates or shifts the POPs. */
    uint32_t _frame_esp = esp - 0x10; (void)_frame_esp;
"""),
    dict(name="OBJ-abifix re-pin loop loc_00132906", kind="after_label", anchor="00132906",
         marker="re-pin esp each iteration (drop any leaked slop)",
         block=
"""    esp = _frame_esp; /* iter-52 reapplied: re-pin esp each iteration (drop any leaked slop) */
"""),
    dict(name="OBJ-abifix re-pin epilogue loc_00132926", kind="before_label", anchor="00132926",
         marker="re-pin esp before epilogue POPs (break path leaves it leaked)",
         block=
"""    esp = _frame_esp; /* iter-52 reapplied: re-pin esp before epilogue POPs (break path leaves it leaked) */
"""),

    # iter-53 general fix: graft the callee-saved-register REPAIR into the
    # regenerated recomp_types.h. v0.14.0's default RECOMP_ABI_CALL expands to a
    # plain (fn)() -- no check, no repair -- so a callee that returns with
    # ebx/esi/edi changed silently corrupts its caller. We re-define the macro (in
    # the plain build only; the RECOMP_ABI_CHECK / RECOMP_CALL_PROFILE diagnostic
    # arms are left intact) to restore ebx/esi/edi after the call. Inserted before
    # the "guarded arm of an indirect call" comment, i.e. after the stock macro's
    # #if/#endif chain, so the #undef/#define wins at every .c use-site.
    dict(name="ABI-repair RECOMP_ABI_CALL (iter-53)", kind="before_line",
         target="recomp_types.h", anchor="A guarded arm of an indirect call",
         marker="iter-53 reapplied: repair callee-saved",
         block=
"""/* iter-53 reapplied (DOA1U): repair callee-saved ebx/esi/edi after every
 * RECOMP_ABI_CALL. v0.14.0's stock macro only LOGS the violation (under
 * RECOMP_ABI_CHECK, which this build defines) or expands to a bare (fn)() -- it
 * never repairs, so a mis-lifted callee returning with ebx/esi/edi changed
 * silently corrupts its caller (the iter-52/53 attract-crash family:
 * sub_001328F0 / sub_0012D0F0 leak esp and swap esi<->ebx; the caller then AVs
 * on a wild pointer). Restoring them is correctness under every x86 convention
 * (esp is NOT restored: its correct post-call value depends on cdecl-vs-stdcall
 * and is fixed per-site by iter-52). We re-define the macro for BOTH the
 * diagnostic (ABI_CHECK: log AND repair) and plain (repair silently) builds; the
 * RECOMP_CALL_PROFILE arm is left intact. Define RECOMP_NO_ABI_REPAIR to drop it. */
#if !defined(RECOMP_CALL_PROFILE) && !defined(RECOMP_NO_ABI_REPAIR)
#undef RECOMP_ABI_CALL
#ifdef RECOMP_ABI_CHECK
#define RECOMP_ABI_CALL(va, fn) do { \\
    uint32_t _ab = g_ebx, _as = g_esi, _ad = g_edi, _ap = g_esp; \\
    (fn)(); \\
    if (g_ebx != _ab || g_esi != _as || g_edi != _ad || g_esp < _ap + 4) { \\
        recomp_abi_violation_log((va), _ab, _as, _ad, _ap); \\
        g_ebx = _ab; g_esi = _as; g_edi = _ad; } \\
} while(0)
#else
#define RECOMP_ABI_CALL(va, fn) do { \\
    uint32_t _ab = g_ebx, _as = g_esi, _ad = g_edi; \\
    (fn)(); \\
    if (g_ebx != _ab || g_esi != _as || g_edi != _ad) { \\
        g_ebx = _ab; g_esi = _as; g_edi = _ad; } \\
    (void)(va); \\
} while(0)
#endif
#endif

"""),

    # ---- 7x XAPILIB host-input bridge overrides (iter-7), re-added 2026-10-17 -
    # Short-circuit DOA1U's statically-linked XInput entry points to the host
    # bridge in xboxrecomp/src/input/xinput_device.c. Each replaces the lifted
    # function body with a return that pops the stdcall args (esp += N) and sets
    # eax, so the guest's own input poll (FUN_00052640) reads host controller /
    # keyboard state. Anchors verified present in recomp_0087.c on the re-lift.
    dict(name="XGetDevices override", kind="after_label", anchor="00223C92",
         marker="XAPILIB::XGetDevices override",
         block=
"""    { extern uint32_t recomp_host_xgetdevices(void); /* XAPILIB::XGetDevices override */
      eax = recomp_host_xgetdevices(); esp += 8; return; }
"""),
    dict(name="XGetDeviceChanges override", kind="after_label", anchor="00223CB4",
         marker="XAPILIB::XGetDeviceChanges override",
         block=
"""    { extern void recomp_host_xgetdevicechanges(uint32_t, uint32_t); /* XAPILIB::XGetDeviceChanges override */
      recomp_host_xgetdevicechanges(MEM32(esp + 8), MEM32(esp + 12));
      eax = 1; esp += 16; return; }
"""),
    dict(name="XInputOpen override", kind="after_label", anchor="00224191",
         marker="XAPILIB::XInputOpen override",
         block=
"""    { extern uint32_t recomp_host_xinputopen(uint32_t); /* XAPILIB::XInputOpen override */
      eax = recomp_host_xinputopen(MEM32(esp + 8)); esp += 20; return; }
"""),
    dict(name="XInputClose override", kind="after_label", anchor="002241E7",
         marker="XAPILIB::XInputClose override",
         block="""    { eax = 0; esp += 8; return; } /* XAPILIB::XInputClose override */\n"""),
    dict(name="XInputGetCapabilities override", kind="after_label", anchor="002241F3",
         marker="XAPILIB::XInputGetCapabilities override",
         block=
"""    { extern void recomp_host_xinput_getcaps(uint32_t); /* XAPILIB::XInputGetCapabilities override */
      recomp_host_xinput_getcaps(MEM32(esp + 8)); eax = 0; esp += 12; return; }
"""),
    dict(name="XInputGetState override", kind="after_label", anchor="002243CB",
         marker="XAPILIB::XInputGetState override",
         block=
"""    { extern void recomp_host_xinput_getstate(uint32_t); /* XAPILIB::XInputGetState override */
      recomp_host_xinput_getstate(MEM32(esp + 8)); eax = 0; esp += 12; return; }
"""),
    dict(name="XInputSetState override", kind="after_label", anchor="0022443E",
         marker="XAPILIB::XInputSetState override",
         block="""    { eax = 0; esp += 12; return; } /* XAPILIB::XInputSetState override */\n"""),
]

# ---- FE-PRE _gen renames (iter-36) --------------------------------------------
# frontend_pre.c passthrough-hooks the whole PRE-MATCH front-end control path
# (fiber-0 master + menu_tick's world + init + scene-launch helpers) so it is
# overridable. 36 functions; generated in a loop to avoid 36 dict() literals.
# Inert unless RECOMP_FE_PRE_TRACE. REVERSIBLE: delete frontend_pre.c + this loop.
_FE_PRE = [
    "0003AAC0","0003A2F0","00035B00","00039900","0004D080","00035B60","00038140",
    "00035C60","00036BE0","00036AD0","00037180","00037200","00037270","000389D0",
    "00038A40","00038680","00039070","00035870","00036D00","00036F00","00037E00",
    "00037F90","000381D0","00038540","00038A10","00037150","00037350","000373C0",
    "0004DB10","0004DB20","0004DD90","00030B40","0004D0B0","0004D570","0004D610","0004D7C0",
]
for _va in _FE_PRE:
    PATCHES.append(dict(
        name="FE-PRE rename sub_%s" % _va, kind="rename_def",
        anchor="void sub_%s(void)" % _va, marker="sub_%s_gen(void)" % _va,
        new="void sub_%s_gen(void)   /* fe-pre: shadowed by frontend_pre.c */" % _va))

# ---- DEFERRED: valid edits held out of the active set (see header) -------
# Kept verbatim so re-adding is a copy into PATCHES, not a re-derivation.
# (The 7 XAPILIB input overrides graduated into PATCHES at iter-7, once the host
# bridge was ported into xboxrecomp/src/input/xinput_device.c.)
DEFERRED_PATCHES = [
    dict(name="ADX stop-wait shim sub_0010BF70", kind="before_label", anchor="0010BF80",
         marker="SHIM (reach-gameplay, iter-38)",
         block=
"""    /* SHIM (reach-gameplay, iter-38): skip the blocking ADX stream stop-wait.
     * The real loop spins the audio server (sub_00117190) until this stream
     * reports idle (MEM8(esi+1)==1) with nothing pending (MEM32(esi+0x24)==0).
     * At the char-select->match transition the stream's APU voice never reports
     * done, so the wait is infinite and -- because it holds ADXM server lock
     * 0x009A4D00 -- it convoys the whole game to a stop. Force idle + fall to
     * the epilogue. GEN-EDIT: move into PATCHES when driving to a match. */
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x24) = 0;
    goto loc_0010BF92;

"""),
]


def find_target(files, patch):
    """Return (path, lines, insert_index) or (None, None, None) if anchor missing."""
    if patch["kind"] == "before_line":
        path = os.path.join(os.path.dirname(files[0]), patch["target"])
        if not os.path.exists(path):
            return None, None, None
        lines = open(path, encoding="utf-8", errors="surrogateescape").read().splitlines(keepends=True)
        for i, ln in enumerate(lines):
            if patch["anchor"] in ln:
                return path, lines, i
        return None, None, None

    if patch["kind"] == "rename_def":
        # Locate the exact generated definition line (e.g. `void sub_X(void)`),
        # which may live in any recomp_NNNN.c after a reseed. idx = that line.
        for path in files:
            text = open(path, encoding="utf-8", errors="surrogateescape").read()
            if patch["anchor"] not in text:
                continue
            lines = text.splitlines(keepends=True)
            for i, ln in enumerate(lines):
                if ln.strip() == patch["anchor"]:
                    return path, lines, i
        return None, None, None

    label = "loc_%s: ;" % patch["anchor"]
    for path in files:
        text = open(path, encoding="utf-8", errors="surrogateescape").read()
        if label not in text:
            continue
        lines = text.splitlines(keepends=True)
        for i, ln in enumerate(lines):
            if ln.strip() == label:
                idx = i + 1 if patch["kind"] == "after_label" else i
                return path, lines, idx
    return None, None, None


# Banked Xbox ADPCM output and reused opponent-card textures.
for _va in ['00032650', '0004E2F0', '0004F2B0', '001ADACB', '001AB2BB', '001AB39F', '001AB3BB', '001AB3DB', '001AB1F7', '001AD0B3', '001AB37F', '001AB303', '001AB31B', '001AB33F', '001A8E34']:
    PATCHES.append({"name": "bank-card-" + _va, "kind": "rename_def",
                    "anchor": "void sub_" + _va + "(void)",
                    "new": "void sub_" + _va + "_gen(void)",
                    "marker": "void sub_" + _va + "_gen(void)"})


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--gen-dir", default=DEFAULT_GEN)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    files = sorted(glob.glob(os.path.join(args.gen_dir, "recomp_*.c")))
    if not files:
        print("ERROR: no recomp_*.c under %s" % args.gen_dir); return 2

    applied = skipped = missing = 0
    for p in PATCHES:
        # rename_def consumes its own anchor line, so an already-applied tree no
        # longer matches the anchor -> check the marker across all files FIRST,
        # or a re-run would falsely report MISSING.
        if p["kind"] == "rename_def":
            if any(p["marker"] in open(f, encoding="utf-8", errors="surrogateescape").read()
                   for f in files):
                print("  skip     %-34s already renamed" % p["name"])
                skipped += 1
                continue

        path, lines, idx = find_target(files, p)
        if path is None:
            print("  MISSING  %-34s (anchor %s not found!)" % (p["name"], p["anchor"]))
            missing += 1
            continue
        if p["kind"] != "rename_def" and p["marker"] in "".join(lines):
            print("  skip     %-34s already present in %s" % (p["name"], os.path.basename(path)))
            skipped += 1
            continue

        if p["kind"] == "rename_def":
            # Replace the whole definition line, preserving its trailing newline.
            nl = "\n" if lines[idx].endswith("\n") else ""
            lines[idx] = p["new"] + nl
            what = "RENAMED "
        else:
            block = p["block"] if p["block"].endswith("\n") else p["block"] + "\n"
            lines[idx:idx] = [block]
            what = "APPLIED "
        if not args.dry_run:
            open(path, "w", encoding="utf-8", errors="surrogateescape").write("".join(lines))
        print("  %s %-34s -> %s @ line %d%s"
              % (what, p["name"], os.path.basename(path), idx + 1, "  [dry-run]" if args.dry_run else ""))
        applied += 1

    # A guest jump cycle split into two C functions must remain one native
    # activation. Apply after ordinary edits; never rely on tail-call elision.
    from fix_game_loop_cycle import apply as apply_game_loop_cycle
    try:
        apply_game_loop_cycle(files, args.dry_run)
    except ValueError as exc:
        print("  MISSING  constant-stack game loop: %s" % exc)
        missing += 1

    print("\n%d applied, %d already-present, %d MISSING" % (applied, skipped, missing))
    print("(%d deferred patch(es) held out of the active set -- see DEFERRED_PATCHES)"
          % len(DEFERRED_PATCHES))
    return 1 if missing else 0


if __name__ == "__main__":
    sys.exit(main())
