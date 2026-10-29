# Archived implementation notes

Long comments moved out of handwritten source during organization. These are historical notes, not current requirements.

## main.c

```text
/**
 * YOUR_GAME_NAME - Recompiled Game Entry Point
 *
 * This is the Windows executable that hosts the recompiled game code.
 * It performs the following initialization sequence:
 *
 * 1. Load the original XBE file from disk
 * 2. Initialize the Xbox memory layout (map data sections to original VAs)
 * 3. Initialize the Xbox kernel replacement layer
 * 4. Initialize the kernel bridge (thunk table in Xbox memory)
 * 5. Set up game file paths for I/O redirection
 * 6. Initialize the stack pointer
 * 7. Install VEH crash handler for diagnostics
 * 8. Call the game's original entry point (recompiled)
 *
 * Customize this file for your game:
 *   - Set YOUR_GAME_ENTRY_POINT to the XBE entry point address
 *   - Set YOUR_GAME_XBE_PATH to where the XBE file lives
 *   - Set YOUR_GAME_DIR to the game data directory
 *   - Add any CRT global pre-initialization your game needs
 *   - Customize the VEH handler for game-specific crash diagnosis
 *
 * XBE Details (fill in from xbe_parser output):
 *   Title:       YOUR_GAME_NAME
 *   Title ID:    0x00000000
 *   Base addr:   0x00010000
 *   Entry point: 0x00000000
 *   Code size:   ~??? KB (.text)
 *   Sections:    ?? (list them)
 *   Kernel imports: ??
 */
```

## main.c

```text
/*
 * If xboxrecomp.h is not an umbrella header in your setup, include
 * the individual headers directly:
 *
 * #include "kernel.h"
 * #include "xbox_memory_layout.h"
 * #include "d3d8_xbox.h"
 * #include "dsound_xbox.h"
 * #include "xinput_xbox.h"
 */
```

## main.c

```text
/*
 * Vectored Exception Handler for crash diagnostics.
 *
 * When the recompiled game hits an access violation, this handler prints
 * the faulting address, all Xbox register values, and a native stack trace.
 * This is your primary debugging tool during bring-up.
 *
 * Customize this for your game:
 *   - Add game-specific address checks (GPU register probes, etc.)
 *   - Add dumps of game-specific globals (heap handles, state flags)
 *   - Add SEH simulation if your game uses __try/__except
 */
```

## main.c

```text
/* Name the guest function a fault happened in, and recover the call chain.
 *
 * Recompiled code faults as ordinary native code, so the exception record
 * carries a host RIP and nothing else -- there is no guest program counter to
 * report, and the host address changes every build. Two things recover the
 * guest view:
 *
 *   - every generated function is a real symbol in the image (sub_005A03C0
 *     and so on), so the linker's PDB already maps host address back to guest
 *     function. dbghelp turns an anonymous RIP into that name.
 *
 *   - every lifted call pushes its guest return address onto the guest stack
 *     before jumping, so the stack still holds the chain. Scanning up from esp
 *     for values inside the code sections recovers it.
 *
 * ponytail: the stack scan is a scan, not a frame walk -- these are FPO frames
 * with no reliable ebp chain, so there is nothing to walk. It over-reports,
 * since addresses from returned-from calls linger below esp, but naming the
 * guest function is the whole question at a fault.
 *
 * Requires linking dbghelp and keeping the .pdb beside the .exe.
 */
```

## main.c

```text
/* When the frame is gone, say so, and fall back on what is left.
         *
         * A fault inside a block copy leaves no return address in range: the
         * copy is a host memmove and its caller's frame is further up than
         * this reaches. Worse, a copy that ran past its buffer overwrites the
         * stack itself, so the list comes out empty exactly when it is most
         * needed -- and an empty list under a promising heading reads like
         * "nothing to see" rather than "the evidence is destroyed". */
```

## main.c

```text
/* The indirect-call history, which the stack cannot overwrite.
             * recomp_manual.c prints this too, but only from
             * recomp_icall_fail_log -- a page fault inside a block copy
             * never reaches that path, and this is the same information by
             * the route the fault actually took.
             *
             * Declared here rather than included: main.c does not pull in
             * recomp_types.h, and recomp_manual.c spells it the same way. */
```

## main.c

```text
/* The emulated APU.
 *
 * Two entry points that had no callers anywhere in the tree. apu_mmio_hook.c
 * documents apu_hook_handle_mmio as "called from VEH in main.c" and no main.c
 * called it; apu_decode_and_handle's first line is `if (!g_apu_state) return
 * false` and nothing assigned g_apu_state. So with RECOMP_AC97_READY set the
 * APU's registers were unmapped to be trapped, and every trap was then
 * declined and surfaced as an access violation on the first register
 * DirectSound touched.
 *
 * Declared rather than included so this does not depend on src/apu being on
 * the include path. */
```

## main.c

```text
/*
         * GPU register probe at 0xFD000000 range.
         * Some games probe NV2A registers directly. On real hardware this
         * returns GPU state; here we just skip the instruction.
         * TODO: Implement mini x86-64 decoder for instruction skipping,
         * or connect to the xbox_nv2a library for proper handling.
         */
```

## main.c

```text
/* APU registers -> the emulated APU.
         *
         * The other half of RECOMP_AC97_READY: reporting the codec ready is
         * what lets DirectSoundCreate past its first gate, and from there it
         * drives the APU directly, so the registers have to fault to be seen.
         * "Handled" means the access was decoded and the instruction stepped
         * over, so execution resumes instead of unwinding. */
```

## main.c

```text
/* For a fault reading a wild pointer (outside guest RAM), decode the
         * sub_00154CB3-class TLS access -- edi = MEM32(MEM32(fs_base+4) +
         * MEM32(0x96FA28)*4) -- to settle whether the stray value is a
         * corrupted guest DWORD (a memory-write bug the field-watch can catch)
         * or a bad g_fs_base (a lifter/register bug it cannot). If the table
         * pointer MEM32(fs_base+4) is itself garbage => memory corruption;
         * if g_fs_base is nonsensical => lifter corruption. */
```

## main.c

```text
/*
         * TODO: Add game-specific diagnostics here. Examples:
         *
         * Dump CRT heap handle:
         *   uint32_t heap = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + HEAP_HANDLE_VA);
         *   fprintf(stderr, "  CRT heap handle: 0x%08X\n", heap);
         *
         * Dump game state:
         *   uint32_t state = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + GAME_STATE_VA);
         *   fprintf(stderr, "  Game state: %u\n", state);
         */
```

## main.c

```text
/* Baked-in per-title runtime flags, so the shipped exe runs with no env
     * setup. These are presence-checked by the runtime's getenv() calls, so we
     * set them in our own environment before any runtime code reads them.
     * Escape hatch: set RECOMP_NO_DEFAULTS=1 to skip these and drive the
     * runtime purely from the environment (bring-up/debugging).
     * FUNCTIONAL flags only -- diagnostics (RECOMP_NV2A_TRACE,
     * RECOMP_WATCHDOG_SECS, ...) stay env-only. Finalize this list as bring-up
     * proves which subsystems DOA1U actually needs. */
```

## main.c

```text
/* The rest of debug.bat, folded in so a plain launch behaves like the
         * debug launch. These were the only reason the shipped exe hung on a
         * bare double-click: the D3D surface path faults without the WC
         * aperture, the GPU fence never lands without the device VA, and
         * DirectSound init spins forever on the DSP doorbell without the ack.
         * WATCHDOG_SECS is deliberately NOT baked -- it _exit(3)s the process
         * at N seconds, which is a debug cutoff, not game behaviour. */
```

## main.c

```text
/* GPU completion fence. The v0.14.0 fence-drain hack (our local
         * xbox_memory_layout.c edit, keyed off RECOMP_FENCE_DEV_VA) is obsoleted
         * by xboxrecomp v0.16: register DOA1U's D3D device-ptr global (0x180E48)
         * as a fence mirror, and the runtime's ack thread advances the title's
         * fence word (*(dev+0x30)) to the submitted head (*(dev+0x2c)) on a
         * drained ring, while the executor's KickOff marker keeps PGRAPH 0x400B10
         * consistent -- so D3D_BlockOnTime / the render-walk stop spinning. */
```

## main.c

```text
/* Give ourselves valid stdout/stderr even on a bare Explorer double-click.
     *
     * This is a GUI-subsystem (WinMain) exe, so a double-click starts it with
     * no console and no standard handles -- GetStdHandle(STD_*) returns NULL,
     * and the runtime's unbuffered printf/fprintf then write into dead handles.
     * Measured over 20 boots that is not harmless: with dead handles the boot
     * froze (FPS 0, no progress) ~20% of the time and otherwise ran starved;
     * with real stdio it reached the game every time. That is the whole of the
     * "runs from a launcher, hangs on a double-click" report -- the launcher
     * scripts redirect stdio and so never hit it. So when a handle is missing,
     * reopen it onto a log file beside the exe; a plain double-click then
     * behaves exactly like the redirected launch. When a console or an explicit
     * redirect is already present (run from cmd, or a script's
     * -RedirectStandard*), the handle is valid and left untouched so output
     * still reaches the console / the script's own log. */
```

## main.c

```text
/* Bring up the emulated APU.
     *
     * Gated on the same variable that unmaps its registers, because the two
     * halves are useless apart: a trap with no model declines every access,
     * and a model nothing traps into never sees a register. The APU walks
     * Xbox physical RAM to find voice buffers, so it gets the guest RAM
     * base. */
```

## main.c

```text
/*
     * TODO: Pre-initialize CRT globals if needed.
     *
     * Many Xbox games use the MSVC CRT. The CRT's __heap_init sets up a
     * heap descriptor at a game-specific address. You may need to
     * pre-initialize __active_heap to avoid small-block heap issues:
     *
     *   uint32_t *active_heap = (uint32_t *)((uint8_t *)g_xbox_mem_offset + ACTIVE_HEAP_VA);
     *   *active_heap = 1;  // 1 = system heap (HeapAlloc), avoids SBH init
     *
     * Find ACTIVE_HEAP_VA by searching the disassembly for __heap_init
     * or by looking for the CRT's __active_heap global in the data section.
     */
```

## main.c

```text
/* Build the flat dispatch table before the guest runs.
     *
     * Without this recomp_lookup falls back to a binary search over the
     * whole function table -- roughly log2(n) branches on *every*
     * indirect call, which for a 45,000-function C++ title is about 16
     * every time the game goes through a vtable. Half-Life 2 spent most
     * of its static initialisation inside recomp_lookup for exactly this
     * reason, and it read as a hang.
     *
     * Optional by design: if the allocation fails the search still works,
     * so a failure is worth one line and not a fatal error. */
```

## main.c

```text
/* Arm the hang watchdog. Does nothing unless RECOMP_WATCHDOG_SECS is set,
     * and must be called from this thread -- the guest registers it samples are
     * thread-local, so it has to be handed the copies belonging to the thread
     * that runs guest code.
     *
     * Not optional boilerplate: without this call RECOMP_WATCHDOG_SECS is
     * silently inert, and the one diagnostic that tells a hang from slowness
     * does nothing while appearing to be set. */
```

## assets/loaders.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * loaders.c -- OBSERVABILITY driver for the DOA1U disk / asset load pipeline.
 *
 * Shadows the shared load path (loaders_catalog.h) so we see exactly what the
 * game reads off disk and binds, for fighters / stage / audio alike (the loader
 * is ONE path, typed by an asset byte -- not three). Each shadow logs then tail-
 * calls the real _gen body, so behaviour is unchanged.
 *
 *   load_file_blocking   sub_00027AD0  (cap, nameBuf, destPtr, flags) -- THE
 *                                      synchronous disk read. Logs the filename.
 *   build_asset_filename sub_00030CB0  (charId, variant, type, outBuf) -- builds
 *                                      the name; logs inputs + the built string.
 *   bind_fighter_slot    sub_00028630  (slot, blob) -- registers a loaded blob.
 *
 * Plugs in via the _gen-rename shadow technique (LOAD-TRACE patches in
 * reapply_gen_edits.py). INERT unless RECOMP_LOAD_TRACE is set. Asset type byte
 * (build_asset_filename arg3): 1 = fighter model, 6 = stage.
 * ════════════════════════════════════════════════════════════════════════ */
```

## audio/audio.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * audio.c -- OBSERVABILITY driver for the DOA1U audio pipeline (CRI ADX engine).
 *
 * Goal (user, iter-31): "create the CRI ADX engine so we know what gets called
 * to playback audio and voices." This module shadows the game's SOUND-MANAGER
 * API -- the driver-facing layer (0x4F000-0x51FFF, recomp_0006) over the CRI ADX
 * engine -- and logs each call with its args, so a plain attract run (which
 * plays BGM + the announcer VOICE + SFX) reveals exactly what the game invokes
 * for each. The trace confirms the provisional roles in audio_catalog.h.
 *
 * Plugs in via the _gen-rename shadow technique: reapply_gen_edits.py renames
 * each generated body to sub_<VA>_gen (AUDIO-TRACE patches), and this file
 * provides the real sub_<VA> symbol the dispatch + callers resolve. Each shadow
 * logs then tail-calls the real body, so behaviour is unchanged.
 *
 * INERT by default: shadows pass straight through unless RECOMP_AUDIO_TRACE is
 * set, so the normal build is byte-for-byte unaffected and timing-neutral (the
 * per-sample ADX worker is NOT shadowed -- only the occasional API entries).
 *
 * KEY FINDING carried from the catalogs: voice is NOT a separate code path --
 * BGM / voice / SFX all go through this same API + the one ADX engine; they
 * differ only in which bank/cue the sound-manager selects. This trace is how we
 * tell them apart empirically.  See audio_catalog.h.
 * ════════════════════════════════════════════════════════════════════════ */
```

## audio/audio.c

```text
/* ── playback control (the gate) ──────────────────────────────────────────
 * snd_play_core(cue, type) is THE playback dispatcher, so shadowing it lets us
 * decide per call whether a sound actually reaches the engine. A blocked call
 * is NOT forwarded to the real body -- the sound simply never plays. Controls:
 *   RECOMP_AUDIO_MUTE=1            block ALL playback
 *   RECOMP_AUDIO_BLOCK_CUES=<csv>  block these cue ids   (arg1), e.g. "6,9"
 *   RECOMP_AUDIO_BLOCK_TYPES=<csv> block these type ids  (arg2), e.g. "2"
 * (type is the engine's category selector -- the switch variable in the body --
 *  so blocking a type silences a whole class, e.g. voice vs BGM.)
 * Parsed once; default (nothing set) = everything plays, byte-for-byte as before. */
```

## audio/audio.c

```text
/* ── DRIVE: audition cues through the dispatcher ──────────────────────────
 * The trace proved snd_play_core(cueId, type) is THE playback dispatcher.
 * This module (the core's audio per-frame module) calls it OURSELVES so the
 * user can hear each cue and label BGM vs voice vs SFX by ear -- the piece the
 * attract trace can't give (attract is BGM/UI only). Runs from frame_end
 * (valid g_esp) via the core's gd_guest_call. Gated on RECOMP_AUDIO_DRIVE.
 *
 *   RECOMP_AUDIO_DRIVE=1            enable
 *   RECOMP_AUDIO_AT=<frame>         first play frame (default 600, after boot)
 *   RECOMP_AUDIO_CUE=<n>            cue id (single) / sweep start (default 0)
 *   RECOMP_AUDIO_TYPE=<n>           type arg (default 1)
 *   RECOMP_AUDIO_SWEEP=1            audition cue, cue+1, ... one every _EVERY frames
 *   RECOMP_AUDIO_SWEEP_EVERY=<n>    frames between sweep cues (default 120 = ~2s)
 *   RECOMP_AUDIO_CUE_MAX=<n>        last cue in the sweep (default 32)
 * Caveat: cold-driving may need the sound context start_stage_bgm sets; if a cue
 * is silent, that's a finding (cue needs a bank/context), not necessarily a bug. */
```

## common/guest_runtime.h

```text
/* recomp_shared.h -- common glue for the hand-written override/fix/probe TUs.
 *
 * The recomp runtime (xbox_memory_layout.c) owns the guest register file, the
 * guest-memory window base, and the dispatch lookup.  Several of our own source
 * files (recomp_manual.c, fix_*.c, probes.c, fighter_isolation.c) need the same
 * handful of extern declarations + access macros, so they live here once rather
 * than being re-declared (and drifting) in each file.
 *
 * Declarations only -- the symbols are DEFINED in the runtime.  gmem_ok is a
 * static inline so every TU gets its own copy with no duplicate-symbol risk. */
```

## diagnostics/probes.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * BUG-HUNT PROBES  (diagnostic only -- SAFE TO DELETE at port completion)
 *
 * Every function here is instrumentation added to chase a specific defect; none
 * changes rendering/behaviour (the sub_<VA> shadows log then call the generated
 * body unchanged; the recomp_* helpers are pure loggers called from gen-edits).
 * Extracted from recomp_manual.c so the throwaway probes don't clutter the
 * frozen fixes.  All are env-gated or throttled so the default build is quiet.
 *
 * Readable names (see doa1u_names.h):
 *   d3d_vertexcopy_probe   sub_00166367  FUN_00166367  (over d3d8_vertex_scatter_copy)
 *   matrix_emit_probe      sub_0016AD00  FUN_0016AD00  (over matrix_transpose_copy)
 *   transform_flush_probe  sub_00171600  FUN_00171600  (over transform_flush)
 * plus recomp_char_draw_probe / recomp_dl_* (gen-edit-called loggers).
 * ════════════════════════════════════════════════════════════════════════ */
```

## diagnostics/probes.c

```text
/* ── D3D8 vertex-copy diagnostic ─────────────────────────────────────────
 *
 * sub_00166367 (inside FUN_00166010) is the D3D8 vertex scatter-copy that
 * crashes on the first draw (the TECMO logo): it reads a [count,stride]
 * descriptor array from the caller's frame and rep-movsd's each segment into
 * video memory, but the count/source come out garbage and it overruns. The
 * descriptor-build code checks out in both decomp and recomp, so the garbage
 * is in the data it is handed -- dump the actual values to find which field is
 * wrong and trace its writer. FPO: the function reads the caller's frame via
 * g_seh_ebp (ebp-16 = descriptor ptr, ebp-8/-4 = loop counts, ebp+8 = src,
 * ebp+0x10 = dst). */
```

## diagnostics/probes.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * EMIT-PROBE (iter-20): find the COMPUTATION site of the squashed fighter
 * matrix ("detached pieces" artifact).
 *
 * The four matrix-emit routines are reached by statically-resolved DIRECT calls,
 * so recomp_lookup_manual() never sees them. Instead we instrument their single
 * shared CHOKE POINT: matrix_transpose_copy (sub_0016AD00, recomp_0045.c), the
 * faithful transpose-copy every emitter calls to push a matrix (dest,
 * method_header, src). Via the _gen-rename override we see every model-view
 * (0x400480) / composite (0x400680) emit; when the source matrix carries the
 * squash fingerprint we log the CALLER return VA (inside the specific emitter).
 * Env-gated by RECOMP_EMIT_PROBE (a budget); unset => thin passthrough, default
 * build renders identically. See tools/drive_emit_probe.ps1. */
```

## diagnostics/probes.c

```text
/* Classify the 16-float matrix at guest `p` (row-major). Fills rows[0..2] with
 * |basis row i| (per-axis scale). Returns:
 *   0 HEALTHY  -- all 3 basis rows ~unit (in [0.5,2.0]), no NaN/Inf: identity,
 *                 2D quads, normal objects. Skipped so the probe never floods.
 *   1 SQUASH   -- a collapsed axis (|row| in (0.001,0.75)) AND a healthy axis
 *                 coexist: the clean diag(~0.02,1,~0.02) fingerprint.
 *   2 NAN      -- any of the 16 floats is NaN/Inf.
 *   3 WEIRD    -- some basis row magnitude well outside [0.5,2.0] but not the
 *                 squash pattern (uniform tiny scale, blow-up, etc). */
```

## diagnostics/probes.c

```text
/* UNCONDITIONAL fighter-part WORLD dump (RECOMP_WORLD_DUMP=N). The squash
     * classifier below keys on row MAGNITUDE and so MISSES a pure-rotation error
     * (healthy magnitudes) -- which is exactly the "Y acts as Z" family we're
     * hunting for the scrambled fighter. So whenever a fighter part is being
     * drawn (g_in_fighter_draw>0) dump the raw WORLD matrix + caller VA, up to N
     * matrices, so the axis/rotation can be read off directly. Independent of
     * RECOMP_EMIT_PROBE. */
```

## diagnostics/probes.c

```text
/* iter-55 character-draw probe. Called at the top of sub_00065000 (the per-model
 * submit; __fastcall ecx = model base). 0x6EED70 is the per-frame draw-call count
 * and 0x6EED74 the accumulated vertex/primitive count -- both incremented by the
 * leaf emitter AFTER each DrawIndexedVertices. Sampling them at every submit lets
 * us attribute "draws+N verts+M" to the PREVIOUS model (whose draw has since
 * executed), tagging char-range (0x81760000..0x8176FFFF) vs stage. Decides the
 * missing-fighter bug:
 *   - a CHAR part showing draws+0/verts+0  -> vertex-count/stream is the bug
 *   - a CHAR part showing draws+N/verts+M like the stage, yet no pixels
 *                                           -> fragments rejected downstream =
 *                                              NV2A render-state/vertex-format.
 * Self-terminating after a bounded number of submits so it can't flood the log. */
```

## diagnostics/probes.c

```text
/* ── Display-list walk probes/guard (iter-49/50) ─────────────────────────────
 *
 * The per-frame display-list walker (sub_00067F53) has no guard for a bad opcode
 * or record pointer: a corrupted entry sends it into a non-advancing spin, so the
 * frame never presents -> the NEXT-MATCH render livelock. recomp_dl_badptr is the
 * guard (reapplied by tools/reapply_gen_edits.py) that skips a corrupted entry and
 * logs it; the recomp_dl_trace/esp/cursor_check helpers localise where the cursor
 * (esi / [esp+0x14]) gets clobbered. All throttled. */
```

## diagnostics/renderdoc_capture.h

```text
/* renderdoc_capture.h -- optional programmatic RenderDoc frame-capture trigger.
 *
 * Fires RenderDoc's TriggerCapture() on the swapchain frame named by the env var
 * RECOMP_RDOC_CAPTURE_FRAME, when the process is running under renderdoccmd.
 *
 * The real trigger (and the vendored third-party header renderdoc_app.h it needs)
 * is compiled in ONLY when the build defines RECOMP_WITH_RENDERDOC; otherwise
 * rdoc_maybe_trigger() is a no-op and renderdoc_app.h is not referenced, so that
 * header can be removed from the tree entirely without breaking the build.
 *
 *   inject : cmake -S . -B build -DRECOMP_WITH_RENDERDOC=ON   (needs src/renderdoc_app.h)
 *   remove : cmake -S . -B build -DRECOMP_WITH_RENDERDOC=OFF  (src/renderdoc_app.h optional)
 *
 * This is a diagnostic path; the primary D3D11 frame dump is RECOMP_GPU_DUMP
 * (BMP backbuffer), which is always available and needs none of this. */
```

## frontend/frontend_pre.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * frontend_pre.c -- shadows for the FRONT-END / MENU subsystem (iter-37).
 *
 * These are the functions reached (statically) from the fiber-0 front-end
 * master loop (frontend_main_loop, sub_0003AAC0). A full body-by-body
 * confirmation pass (iter-37) showed the original "fe_menu_*" guesses were
 * mostly WRONG: this cluster is the menu GRAPHICS subsystem, not menu-input
 * logic. What's actually here:
 *   - init / teardown: frontend_init (alloc heaps + register FE fibers + load
 *     assets + create menu textures), alloc_frontend_heaps, clear_slot_table,
 *     find_or_add_slot, kill_scene_tasks, reset_round_flags.
 *   - texture/tilemap plotting: plot_texture_cell + blit_texture_quad[2] +
 *     commit_texture (bulk 1280-entry tile table -- NOT a menu "commit").
 *   - quad geometry + draw: init_menu_quads, setup_bg_quad, draw_elem_bar/panel,
 *     update_quad_coords_fx, menu_render_frame, setup_menu_palette_quads.
 *   - surface ops: clear_surface_256 (256KB solid fill), upload_palette_256,
 *     surface_op_38A40.
 *   - match setup / config: apply_match_config (unpacks block 0x305588 into the
 *     gameplay globals), get_match_option + store_match_option{1,2,3},
 *     clear_player_record, set_scene_id, advance_reveal_bits, query_value_div10.
 *   - saved-config I/O: read_saved_config_a/b.
 *
 * Every entry is a PASSTHROUGH override hook (calls the real _gen body) plus a
 * one-time call-order trace. Kept shadowed deliberately: zero runtime cost when
 * the trace env is unset, and every function stays an override point. Plugged in
 * via FE-PRE _gen renames (reapply_gen_edits.py, by VA). Ghidra names mirror
 * these (tools/GhidraRenameSM.java). Map: reference_doa1u_frontend_state_machine.
 *
 *   RECOMP_FE_PRE_TRACE=1   log each function's FIRST call (order + the
 *                           flow/subst/game_mode/title/pad state at that point).
 * ════════════════════════════════════════════════════════════════════════ */
```

## frontend/frontend_pre.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * NATIVE REIMPLEMENTATIONS (iter-38) -- appended per request.
 *
 * frontend_main_loop (sub_0003AAC0) and scene_launcher (sub_00038EB0) are now
 * reimplemented idiomatically instead of passthrough-shadowed; their *_gen
 * bodies are DEAD (never called). Externals are invoked via gd_guest_call(VA,…)
 * which resolves each VA to our SHADOW where one exists (the HOOKs above, plus
 * game_mode.c's post1/post2 and front_end_menu_tick.c's menu_tick), and to the
 * plain lifted body otherwise.
 *
 * menu_ui_tick (sub_0003A2F0) is deliberately NOT reimplemented: it is not a
 * self-contained function -- it falls through into a chain of blocks
 * (3A346/3A403/3A4B3/3A4CC/3A55A/3AA44…) that SHARE one 0xC04 stack frame and
 * are reached only from 3A2F0. It stays the passthrough HOOK above.
 * ════════════════════════════════════════════════════════════════════════ */
```

## frontend/frontend_pre.c

```text
/* ── scene_launcher (sub_00038EB0) ──
 * arg != 0: the real scene is already chosen -> pass the arg straight back.
 * arg == 0: set up attract (game_mode:=0), register the scene loop (fiber 2),
 *   then run the attract demo for up to 0xE10 frames while polling the pad. A
 *   START-class press (0x6E9B48 & 0xFF30) returns 1 (advance to the real scene);
 *   otherwise, when the timer runs out (or 0x314599 cancels it), tear the
 *   attract down and return 0. */
```

## frontend/frontend_pre.c

```text
/* STAGE SELECTOR: edit -1 below to 0..12, rebuild, then restart.
     * -1 = original automatic stage selection. Optional launch override:
     * $env:RECOMP_STAGE_ID='3' (no rebuild required).
     * Original asset-table IDs at 0x2C54D8 (labels, not inferred stage names):
     * 0 WAY, 1 TERAB, 2 KAKU, 3 SHI, 4 ELE, 5 RAI, 6 TERAB,
     * 7 TRE, 8 HASI, 9 NAME, 10 NWAY, 11 HAMA, 12 WEST.
     * 1/6 share an asset prefix but retain their own stage-specific behavior.
     */
```

## frontend/front_end_menu_tick.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * front_end_menu_tick.c -- OUR idiomatic reimplementation of the title /
 * "PRESS START" driver (guest sub_00038A70, 689 bytes, category game_render).
 *
 * This REPLACES the lifted body: sub_00038A70_gen is never called anymore.
 * sub_00038A70 (the ABI entry the dispatch table / direct callers reach) now
 * runs the C below. One call renders one animated pass of the title screen and
 * polls the pad:
 *   - set the title scene mode + upload the 128-entry title palette,
 *   - randomize every tile's target offset (1280-entry tile table),
 *   - run the 0x40-frame reveal/animation loop: per frame, per tile, the tile is
 *     either not-yet-revealed (draw nothing), revealed-this-frame (seed its
 *     velocity toward home and draw), or in-flight (advance toward home, clamp
 *     Y, draw); break out the instant a START-class press is seen,
 *   - on a press, re-blit every tile; then play a short transition (30 frames if
 *     pressed, else 120), still polling,
 *   - return 1 if a START-class press was seen, else 0  (-> g_eax).
 *
 * EXTERNAL guest functions are NOT reimplemented -- they are invoked through the
 * recomp dispatch (gd_guest_call by VA), which resolves each VA to OUR SHADOW
 * where one exists (e.g. 0x37180 -> sub_00037180 -> blit_texture_quad), and only
 * to the plain lifted body for VAs that have no shadow. So this honours the
 * "use the shadows, not the *_gen originals" rule by construction.
 *
 * The one external needing care is the x87 round-to-int helper sub_001502D0:
 * it reads its argument from ST(0), so fe_round() seeds the shared FPU stack
 * (g_fp_stack/g_fp_top) before the call -- the only place we touch the guest
 * FPU model. Everything else is plain C.
 *
 * Data types used by the scene (title_tile_t, the palette word) are defined
 * here, next to the only function that uses them.
 * ════════════════════════════════════════════════════════════════════════ */
```

## frontend/state_machine.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * state_machine.c -- shadows of the DOA1U front-end STATE MACHINE (iter-36).
 *
 * The machine was EXTRACTED FROM CODE (not inferred from traces) and is mapped in
 * reference_doa1u_frontend_state_machine + doa1u_names.h. Ghidra names mirror the
 * shadow names here (tools/GhidraRenameSM.java). Structure:
 *
 *   fe_scene_loop (sub_000338C0, fiber 2)   -- top orchestrator (infinite fiber loop)
 *     fe_match_launcher (sub_0002FAF0)       -- once at entry: load g_match_config
 *                                               (0x305588) -> set g_flow_state=5
 *     loop: pump; subst = g_scene_subst (0x30AE30)
 *        subst==3 -> fe_inmatch_a (sub_00030F00)   // live fight
 *        subst==2 -> fe_inmatch_b (sub_0002F7A0)
 *        else     -> fe_flow_dispatcher (sub_00033800)  // 7-state machine
 *
 *   fe_flow_dispatcher -> by g_flow_state (0x33227C):
 *        0 fe_flow0_title (312C0) ->1   1 fe_flow1 (2F910) ->2   2 fe_flow2 (2FA70) ->3
 *        3 fe_flow3 (31650) ->4         4 fe_flow4 (319D0)       5 match_handler (32D20)
 *        6 fe_flow6_results (310F0)
 *
 * NOTE: fe_flow_dispatcher (sub_00033800) and state-5 match_handler (sub_00032D20)
 * are shadowed in game_mode.c (NOT here -- one shadow per symbol). This TU shadows
 * the other 10 control points. Plugs in via the _gen-rename technique (SM-HOOK
 * patches in reapply_gen_edits.py). INERT by default -- all gated on RECOMP_SM_*.
 *
 *   RECOMP_SM_TRACE=1        log every shadow: entry + the flow/subst/game_mode it
 *                            reads and the transition it causes (readable names).
 *   RECOMP_SM_FORCE_SUBST=<n> force g_scene_subst to <n> at the scene-loop start
 *                            (and re-assert each flow-handler call) -- drives the
 *                            in-match (2/3) vs flow-machine (else) dispatch.
 *   RECOMP_SM_FREEZE_AT=<st> when the machine is at flow-state <st>, pin the pause
 *                            flag (0x30AE36=1) so animation freezes there (safe --
 *                            the game's own freeze, no flow pinning / fiber churn).
 * ════════════════════════════════════════════════════════════════════════ */
```

## game/game_driver.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * game_driver.c -- core of OUR game-driver (see game_driver.h).
 *
 * Owns the single per-frame guest-context hook frame_end (sub_000689E0) via the
 * _gen-rename shadow technique, maintains the main-loop frame counter, and fans
 * out to each block's per-frame module. Provides the guest-call primitives every
 * block driver shares. Inert by default: the core always runs but each module
 * self-gates on its own RECOMP_* env var.
 * ════════════════════════════════════════════════════════════════════════ */
```

## game/game_driver.h

```text
/* ════════════════════════════════════════════════════════════════════════
 * game_driver.h -- reusable core for OUR OWN game-driver modules.
 *
 * The generalization of fighter_isolation.c: instead of riding the game's
 * attract/menu flow, we let the guest BOOT (xbe_entry_point sets up heap / D3D /
 * globals -- we cannot replace that), then from a valid guest-context per-frame
 * hook we drive chosen pipeline functions ourselves -- register them as task
 * fibers (register_task_fiber) and let the game's own scheduler pump them.
 *
 * WHY A CORE: the per-frame guest hook frame_end (sub_000689E0) can have exactly
 * ONE shadow. This core owns it, maintains the frame counter, and fans out to
 * each block's per-frame "module" (fighters, audio, ...). Each module self-gates
 * on its own RECOMP_* env var, so the default build is inert and zero-cost.
 *
 * CRITICAL: the guest-call primitives below MUST run on a guest fiber with a
 * valid g_esp (i.e. from inside a frame module). The D3D11 present thread has
 * g_esp==0 -- pushing args there faults at guest VA 0xFFFFFFFC.
 *
 * Catalogs that name the functions a driver calls: fighters_catalog.h,
 * background_catalog.h, loaders_catalog.h, audio_catalog.h.
 * ════════════════════════════════════════════════════════════════════════ */
```

## game/game_driver.h

```text
/* ── task-fiber gate (the core owns register_task_fiber / sub_00052240) ──
 * EVERY task-fiber registration -- the game's own and ours -- funnels through
 * the sub_00052240 shadow in game_driver.c, which consults this gate. A blocked
 * id is NOT registered (the game's scheduler never pumps that fiber).
 *   RECOMP_BLOCK_TASK_IDS=<csv>   ids to block, e.g. "2,9,11" (parsed once)
 *   RECOMP_TASK_TRACE=1           log every registration (blocks are always logged)
 * gd_block_task_id() adds programmatic control on top of the env list. */
```

## game/game_mode.c

The obsolete force-Arcade preset, menu pinning, title skipping and automatic
pause/camera-freeze harness have been removed. Original pause handling and
read-only `RECOMP_FLOW_TRACE` remain. Use `RECOMP_TEST_MATCH=1` in
`frontend/frontend_pre.c` for direct-match diagnostics; `RECOMP_STAGE_ID=0..12`
overrides stage selection and `-1` restores automatic selection.
Keep the flow/menu generated-body renames for the remaining tracing shadows.

## runtime/fix_fiber_runtime.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * XBOX FIBER RUNTIME  (XAPILIB CreateFiber / SwitchToFiber / etc.)   [FROZEN FIX]
 *
 * Load-bearing recompilation fix -- do not touch without cause.  Extracted
 * verbatim from recomp_manual.c so it can't be edited by accident.
 *
 * DOA1U's engine (Team Ninja) runs its entire task system -- the boot logo,
 * the opening video, every menu and game state -- as cooperative FIBERS. The
 * XDK fiber routines are statically linked into the XBE, so the recompiler
 * translated them literally: SwitchToFiber swaps the guest esp to the target
 * fiber's stack and executes `ret`. But in a static recompilation `ret` is a C
 * `return` that unwinds to the host C caller -- it cannot jump to the address
 * now on the swapped-in guest stack. So the literal translation swaps the
 * stack pointer but never transfers control, and no fiber task ever runs: the
 * main loop clears and flips a black frame forever.
 *
 * We back each guest fiber with a real Win32 fiber. Win32 fibers preserve the
 * native C call stack across a switch, which is exactly what a guest fiber's
 * nested recompiled C-calls need to be suspended and resumed. The guest CPU
 * registers (g_eax..g_edi, ebp, esp, seh_ebp) live in thread-locals shared by
 * every fiber on the thread, so we save/restore them around each switch.
 *
 * CreateFiber/ConvertThreadToFiber/DeleteFiber still run their generated
 * bodies (sub_X_gen) for the guest-side bookkeeping -- the guest stack
 * allocation and fiber struct the rest of the engine reads -- and we overlay a
 * host fiber keyed by the struct pointer. Only SwitchToFiber is fully replaced,
 * because its control transfer is the part that cannot survive recompilation.
 *
 * Readable names (see doa1u_names.h):
 *   convert_thread_to_fiber  sub_000ADB48  FUN_000ADB48
 *   create_fiber             sub_000ADA63  FUN_000ADA63
 *   delete_fiber             sub_000ADAEF  FUN_000ADAEF
 *   switch_to_fiber          sub_000ADB02  FUN_000ADB02  (fully replaced)
 * ════════════════════════════════════════════════════════════════════════ */
```

## runtime/reach_gameplay_shims.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * REACH-GAMEPLAY SHIMS  (busy-wait / audio-spin relievers)   [FROZEN, REVERSIBLE]
 *
 * Load-bearing-but-reversible fixes extracted verbatim from recomp_manual.c.
 * Each is called from a gen-edit (tools/reapply_gen_edits.py) at a guest busy-
 * wait that never completes under our stubbed APU/software-NV2A, and is gated on
 * an env var baked "1" by main.c -- set the var to 0 to restore the real wait
 * with NO rebuild, or drop the bake + gen-edit to remove entirely.  These keep
 * their recomp_* names because the gen-edits reference them by name (no shadow
 * wrapper / sub_<VA> symbol involved).
 * ════════════════════════════════════════════════════════════════════════ */
```

## runtime/reach_gameplay_shims.c

```text
/* ── Reach-gameplay audio-spin shim (TEMPORARY, roadmap #5) ────────────────────
 *
 * sub_001B1384 is a per-frame DSOUND/APU update reached from the frame driver
 * (sub_00053020 -> sub_0004E930 -> ... -> sub_001B1384). It writes a DSP command
 * word to a doorbell at [ebx+0x810] and then BUSY-WAITS for the GP/EP DSP to
 * acknowledge it by zeroing the word:
 *
 *     loc_001B1484:  while (*doorbell != 0) ;    // sub_001B1384+0xa6b
 *
 * On real hardware the APU's GP/EP DSP firmware processes the command and clears
 * the doorbell. v0.14.0 runs the GP/EP DSP in STUBBED / passthrough mode (see the
 * "[APU] DSP GP/EP initialized (STUBBED - passthrough mode)" boot line), so the
 * doorbell is never cleared and the loop spins forever -- the frame driver never
 * returns, no geometry is submitted, and the screen stays black (draws 0). The
 * baked RECOMP_APU_DSP_ACK only clears one FIXED doorbell VA; this one lives at a
 * per-context pointer (ebx+0x810), so a fixed-address ack cannot catch it.
 *
 * The gen-edit at loc_001B1484 (tools/reapply_gen_edits.py) calls this and, when
 * enabled, force-clears the doorbell so the wait completes immediately and the
 * frame proceeds to draw. The DSP command's real effect is dropped, so audio for
 * it is silent/approximate -- acceptable to reach a rendered game.
 *
 * FULLY REVERSIBLE: gated on RECOMP_AUDIO_SPIN_SHIM (baked "1" by main.c). Set the
 * env var to 0 to restore the real hardware wait with NO rebuild, or drop the bake
 * line + the gen-edit entirely. REMOVE once real GP/EP DSP voice-completion lands,
 * at which point audio decodes through v0.14's APU/XAudio2 path. */
```

## runtime/reach_gameplay_shims.c

```text
/* GPU busy-wait shim -- the MATCH-render hang (Bug B / roadmap #3).
 *
 * At a 3D match the render walk reaches sub_0016B2E4, which kicks a GPU op by
 * setting bit 0x10000 at an NV2A status register (device[0x1C28] + 0x100410, in
 * the WC/GPU aperture) and busy-waits at loc_0016B310 for the hardware to clear
 * it. Our software NV2A executor does the work synchronously but never writes
 * that bit back, so the main render thread spins forever -- the window goes
 * "Not Responding" while audio (its own thread) keeps playing. cdb proved the
 * main thread stuck in that loop with no deeper frame (GPU-path, 2026-10-17).
 * The 2D title/menus never hit this path, which is why only the match hung.
 *
 * The gen-edit at loc_0016B310 (tools/reapply_gen_edits.py) calls this and, when
 * enabled, force-clears bit 0x10000 so the wait completes at once. The executor
 * already finished the geometry, so instant completion matches real behaviour.
 *
 * FULLY REVERSIBLE: gated on RECOMP_GPU_BUSYWAIT_SHIM (baked "1" by main.c). Set
 * it to 0 to restore the real hardware wait with NO rebuild, or drop the bake +
 * gen-edit. REMOVE once the executor mirrors this register back properly (same
 * class of fix as fence_drain_unblock). */
```

## runtime/reach_gameplay_shims.c

```text
/* ADX audio-worker yield shim -- the real MATCH "(Not Responding)" hang
 * (roadmap #3 symptom, roadmap #5 cause). cdb + our own [CS] diagnostics
 * (2026-10-19) proved the hang is NOT a GPU wait: the two ADX audio-worker
 * threads (sub_00109EC0 / sub_00109F40) busy-poll their shutdown flag
 * (MEM32(0x970364) / MEM32(0x97036C)) with NO yield, running the ADX decode/mix
 * path every iteration. That path takes the ADXM server lock (guest 0x009A4D00)
 * tens of thousands of times a second (enters/leaves climbed to 67000+); the
 * main render thread needs the same lock per frame, gets starved, never reaches
 * flip(), and the window freezes. On real hardware these workers block on an
 * APU/DSP buffer-completion event -- STUBBED here, so the wait is a hot spin.
 *
 * The gen-edits at loc_00109ED0 / loc_00109F50 (tools/reapply_gen_edits.py) call
 * this at each loop top, which is OUTSIDE the server lock (the lock is taken and
 * released deep inside the body, e.g. sub_00117B90 -> ... -> 0x009A4D00). A ~1 ms
 * relinquish there hands the freed lock and a CPU core to the main thread and
 * collapses the convoy. The worker still polls at ~1 kHz -- far faster than its
 * audio buffer rate -- so output is unaffected.
 *
 * FULLY REVERSIBLE: gated on RECOMP_ADX_YIELD (baked "1" by main.c). Set it to 0
 * to restore the tight spin with NO rebuild, or drop the bake + the two gen-edits.
 * REMOVE once the APU raises the real voice/stream-completion event these workers
 * wait on, at which point they block natively (roadmap #5). */
```

## runtime/recomp_manual.c

```text
/**
 * Manual overrides dispatch + ICALL / unimplemented-instruction diagnostics
 *
 * This file provides the recomp runtime's required hand-written hooks:
 *   - recomp_lookup_manual()        : first-chance override of any Xbox VA
 *   - recomp_icall_fail_log()       : log an unresolved indirect-call target
 *   - recomp_icall_not_code_log()   : log an indirect call to a non-code address
 *   - recomp_unimpl()               : log a reached untranslated instruction
 *
 * The recomp pipeline generates an auto-dispatch table (recomp_lookup) that
 * resolves most function addresses. recomp_lookup_manual() is called FIRST,
 * giving a chance to override any function with a custom implementation.
 *
 * The hand-written OVERRIDES themselves now live in dedicated TUs so this file
 * stays small and the two concerns can't be edited by accident:
 *   - fix_fiber_runtime.c     : Win32-backed guest fibers            [frozen fix]
 *   - fix_d3d8_state.c        : D3D8 deferred-state flush + descriptor[frozen fix]
 *   - reach_gameplay_shims.c  : audio/gpu/adx busy-wait relievers     [frozen fix]
 *   - fighter_isolation.c     : original fighter movement and draw-context instrumentation
 *   - probes.c                : throwaway bug-hunt instrumentation
 * All resolve via the _gen-rename shadow technique (see doa1u_names.h), so
 * recomp_lookup_manual() stays a passthrough -- link-time symbol override, not a
 * runtime table.
 */
```

## runtime/recomp_manual.c

```text
/* ── Manual function overrides ─────────────────────────────────────────────
 *
 * Return a function pointer to override the given Xbox VA, or NULL to fall
 * through to the auto-generated dispatch table. Our overrides use the
 * _gen-rename link-time technique instead (the generated body is renamed
 * sub_<VA>_gen and our TU defines the sub_<VA> symbol all callers reference),
 * so there is nothing to register here. */
```

## runtime/recomp_manual.c

```text
/* ── ICALL failure logging ─────────────────────────────────────────────────
 *
 * Called when RECOMP_ICALL cannot resolve a target address (vtable dispatch to
 * an address not in the dispatch table, a function pointer from corrupt memory,
 * an unhandled kernel thunk, ...).
 *
 * Rate-limited per address. An in-range-but-unlifted target can fail tens of
 * thousands of times a second when the caller retries in a per-frame loop;
 * seventeen fprintf lines + fflush per failure turns that into a synchronous
 * WriteFile storm on the redirected stderr, which presents as a render livelock
 * (fps -> 0) with the game otherwise healthy. Log at 1, 10, 100, 1000 ... per
 * distinct VA so the progression still shows a loop without throttling the game
 * to death. */
```

## runtime/recomp_manual.c

```text
/* An indirect call whose target is not code: a null or wild function pointer.
 *
 * Skipping these is right -- calling a data address is worse -- but skipping
 * them *silently* is not. They almost always arrive inside a loop, so the
 * symptom is a hang with no output rather than a diagnosable null vtable call.
 * Rate-limited per address: the useful information is which addresses occur,
 * not how often. */
```

## runtime/recomp_manual.c

```text
/* ── Untranslated instructions ──────────────────────────────────────────────
 *
 * The lifter emits RECOMP_UNIMPL(text, va) at every instruction it has no
 * translation for, in place of the bare comment it used to leave. The
 * instruction is still a no-op; this only stops the omission being silent.
 * RECOMP_UNIMPL_TRAP=1 aborts at the first hit, at the guest address of the
 * cause rather than wherever the damage surfaces. */
```




## render/d3d11/nv2a_backend_d3d11.c

```text
/*
 * nv2a_backend_d3d11.c -- GPU (Direct3D 11) render back end for the NV2A
 * pushbuffer executor. ROADMAP #7, PROOF-OF-CONCEPT stage.
 *
 * The executor (xboxrecomp/src/kernel/nv2a_pb_exec.c) decodes what the title
 * asks the GPU to do and, when a back end is registered, hands us the work in
 * already-decoded form: a colour surface + clears, and triangle batches whose
 * vertices are ALREADY transformed to surface pixels (with 1/w in rhw,
 * per-vertex diffuse colour and texel-space UVs), plus the texture each batch
 * samples and the NV2A render state. See nv2a_backend.h.
 *
 * So this file is deliberately small: the CPU side has done T&L, near-plane
 * clipping and vertex programs. We run a PASS-THROUGH vertex shader that only
 * maps surface pixels to clip space (reconstructing w from rhw so perspective-
 * correct texturing still works), a textured/untextured pixel shader with
 * alpha-test, and a handful of blend/depth states.
 *
 * END-GOAL (user, 2026-10-17): push ALL rendering AND transform maths onto the
 * GPU so the CPU only runs audio + gameplay. This POC is step 1 -- prove GPU
 * output matches the software rasteriser on the attract scene. Transform stays
 * CPU for now (the interface hands us pre-transformed verts); a later step
 * extends the interface to hand raw verts + matrices and moves T&L into the VS.
 *
 * Lifecycle: every call arrives on the NV2A poll thread, one at a time, so we
 * create the window + device lazily on the first clear/draw and pump window
 * messages from flip(). Enabled by RECOMP_GPU (registered from main.c); when
 * off, the software path (GDI framebuffer window) runs unchanged.
 *
 * NOT reversible-by-env alone: it is a separate translation unit gated at
 * registration, so leaving RECOMP_GPU unset (the default) excludes it entirely.
 */
```

## render/d3d11/nv2a_backend_d3d11.c

```text
/* 3D CUTOUT FIX. The NV2A register combiner (never handed to a back end --
     * see nv2a_backend.h) outputs OPAQUE alpha for solid model parts whose DXT3
     * texture stores alpha=0 in dark regions (dark clothing, hair). The title
     * alpha-tests GL_GREATER ref=1 ("discard alpha~=0"); on hardware that passes
     * (combiner alpha=1), but testing our raw tex.a discards the WHOLE part ->
     * invisible jackets / hair / shirts and missing legs (RenderDoc-class bug,
     * confirmed 2026-10-23: RECOMP_GPU_NOAT restores the fighters with depth
     * intact, RECOMP_GPU_NODEPTH does not). Skip the discard for 3D model draws
     * (not pre-transformed: rhw != 1); keep it for pre-transformed 2D draws
     * (rhw == 1: the DOA logo / UI) whose alpha-key is genuine. Depth, blend and
     * RGB shading are untouched. */
```

## render/d3d11/nv2a_backend_d3d11.c

```text
/* Pre-transformed 2D screen-space batches (rhw==1: backgrounds/overlays) must
     * NOT write the depth buffer. This title emits its fullscreen backdrop at the
     * NEAR plane (z=0) with depth-write latched on; writing z=0 across the screen
     * poisons the Z24 buffer (cleared to far=1.0) and depth-rejects every 3D draw
     * behind it -- RenderDoc proved the fighters arrive on-screen at ndcZ~0.93,
     * NoCull, but lose LessEqual against the backdrop's 0. Let these quads still
     * depth-TEST (so they draw) but keep the buffer intact so the 3D fighters and
     * ring floor sort normally. 3D batches (rhw!=1, perspective) are untouched. */
```

## render/d3d11/nv2a_backend_d3d11.c

```text
/* RECOMP_GPU_DIAG: log the geometry the title submits so we can tell whether
     * the 3D model / ring-floor draws arrive on-screen or land off-screen /
     * degenerate. The 2D HUD is pre-transformed (dtest=0, z=0, rhw=1); the 3D
     * fighters and floor use the depth buffer (dtest=1) and perspective
     * (rhw!=1). Split the two: log the first few 2D draws, then a wider window
     * of 3D draws (textured OR not) with full xyz/rhw ranges, a cull/depth
     * dump, and ON-SCREEN / DEGENERATE flags against the backbuffer box.
     * A per-category off-screen tally is printed periodically. The old diag only
     * logged textured draws (srv!=NULL) and capped at 14 -- it never showed the
     * untextured / off-screen model geometry, which is exactly the frontier. */
```

## render/d3d11/nv2a_backend_d3d11.c

```text
/* Frame pacer. Present(,0,0) flips as fast as the CPU can push, so the GPU path
 * runs unbounded -- which outruns the guest's own timing and hangs the game.
 * Hold each flip to a fixed period (default 60 fps; RECOMP_GPU_FPS overrides it,
 * 0 = uncapped). QPC for the clock, timeBeginPeriod(1) so Sleep lands near 1 ms,
 * Sleep for the bulk and a light yield for the tail. The deadline advances by one
 * period per flip, but resyncs if a frame ran long so a stall never makes the
 * next frames burst to "catch up". */
```

## render/d3d8/fix_d3d8_state.c

```text
/* ════════════════════════════════════════════════════════════════════════
 * D3D8 DEFERRED-STATE FLUSH + VERTEX-DESCRIPTOR REBUILD            [FROZEN FIX]
 *
 * Load-bearing recompilation fix -- do not touch without cause.  Extracted
 * verbatim from recomp_manual.c so it can't be edited by accident.
 *
 * The first real draw (the TECMO logo) crashed because the lifted D3D8 deferred-
 * state flush leaks guest esp and drops a dirty-flag bit, so CDevice_SetStateUP
 * never builds the vertex-stride descriptor and DrawVerticesUP's copy loop
 * underflows.  The three shadows here enforce the real ABI contract of that
 * flush chain and re-apply the one dirty-flag bit the jumptable lift cannot
 * reproduce.  Diagnostic fprintf()s are throttled (first few calls) and
 * incidental -- the behavioural part is the register/esp restore + the rebuild.
 *
 * Readable names (see doa1u_names.h):
 *   d3d8_flush_leaf_esp_fix   sub_001756E0  FUN_001756E0  esp-leak leaf (bit 0x800)
 *   d3d8_deferred_state_flush sub_00171800  FUN_00171800  flush esp-leak firewall
 *   d3d8_set_state_up         sub_00171A20  FUN_00171A20  CDevice_SetStateUP rebuild
 * ════════════════════════════════════════════════════════════════════════ */
```

## render/d3d8/fix_d3d8_state.c

```text
/* ── sub_001756E0: esp-leak leaf inside the flush (bit 0x800 handler) ─────────
 *
 * `sub esp,0xB8` then on the logo-draw branch it tail-jumps to sub_00175704 and
 * returns WITHOUT the matching `add esp,0xB8` -- leaking 0xB8 (the [ABI] report
 * flags it: "ebx esi edi esp(epilogue never ran)"). The flush calls it as
 * uVar2 = FUN_001756e0(device, flags) and then does `ebx = eax; ...; DAT =
 * ebx & 0xc0000070`. With esp leaked after this call, the flush's remaining
 * sub-calls run on a shifted stack and its working flags come out 0, so DAT is
 * left 0 instead of 0x70 and CDevice_SetStateUP's 0x20 gate stays shut -- the
 * descriptor is never built. Forcing the clean __stdcall ret-8 contract here
 * (esp = pre + 12, preserve ebx/esi/edi; eax, the return value, is left
 * untouched) absorbs this leak AND anything transitive under sub_00175704, so
 * the flush completes with correct esp and leaves DAT = 0x70. Pairs with the
 * d3d8_deferred_state_flush firewall below, which restores the device pointer
 * (edi) the flush does not preserve for its caller. Build-8 had only this
 * wrapper and failed because the edi clobber still zeroed the caller's device. */
```

## render/d3d8/fix_d3d8_state.c

```text
/* ── sub_00171800: D3D8 deferred-state flush — esp-leak firewall ──────────────
 *
 * The flush pushes ebx+esi, loads esi = device (MEM32(0x180E48)), then fires a
 * chain of conditional sub-calls (d3d8_flush_leaf_esp_fix etc.), and its real
 * epilogue is `POP esi; POP ebx; ret` -- i.e. its contract is: preserve callee-
 * saved ebx/esi/edi and return clean (no stack args). But at least one callee on
 * the logo-draw path leaks esp: sub_001756E0 does `sub esp,0xB8` then tail-jumps
 * to sub_00175704 WITHOUT the matching `add esp,0xB8`. A leaked esp makes the
 * flush's own POP esi / POP ebx read the wrong stack slots, so it returns a
 * GARBAGE esi to its caller CDevice_SetStateUP -- which immediately uses esi as
 * the device (MEM32(esi+0x794)) and writes the vertex descriptor to esi+0xBD4.
 * With esi wrong, device[0x2f5] is never written (proven by watchpoint + the
 * [SETUP] dump: 2f5 stays 0 though the gate is open and the declaration valid),
 * the descriptor stays zero, and DrawVerticesUP's device pointer (edi) comes
 * back zero too (desc=0x00000BD4) -> the copy loop underflows -> crash.
 *
 * Wrapping the flush itself (rather than the individual leaking leaves, which
 * build-8 tried on sub_001756E0 alone and failed) enforces the contract for the
 * WHOLE chain at once: snapshot esp + ebx/esi/edi, run the generated body for
 * its memory side effects (it flushes real D3D state and rewrites DAT_001809a8,
 * which SetStateUP re-reads from memory, not from a register), then restore the
 * callee-saved registers and set esp past the return address (plain `ret`). */
```

## render/d3d8/fix_d3d8_state.c

```text
/* ── sub_00171A20: CDevice_SetStateUP — vertex-descriptor builder ─────────────
 *
 * __fastcall(device in ecx). Flushes deferred state, then IF the global dirty-
 * flags DAT_001809a8 has bit 0x20 set, rebuilds the vertex descriptor at
 * device[0x2f5] from the vertex declaration at device[0x1e5]. The jumptable lift
 * drops the 0x20 bit, so the rebuild gate wrongly stays shut; we re-run the build
 * path once with the flush suppressed to restore it. The heavy [SETUP]/[SETUP-PB]
 * dumps are diagnostic; the behavioural part is the gated re-run below. */
```

## render/d3d8/fix_d3d8_state.c

```text
/* FUN_001756e0's indirect-jumptable handler builds GPU vertex-format methods
     * but its lifted return value drops the dirty-flag bit (0x20) that signals
     * "vertex declaration changed -> rebuild the stride descriptor". The flush
     * (sub_00171800) then masks DAT_001809a8 with 0xc0000070, so the 0x20 that
     * was set at entry is lost and CDevice_SetStateUP's build gate wrongly stays
     * shut: device[0x2f5] is never written and DrawVerticesUP's copy loop runs
     * on a zero descriptor and overruns. When the rebuild was intended (0x20 set
     * at entry) but did not happen (the build always sets bit 0x40 via |0x50;
     * its absence means the gate was skipped), run the build path once more with
     * the flush suppressed -- DAT=0x20 keeps the 0x3fffff8f flush gate closed and
     * opens the 0x20 build gate, and the build leaves DAT=0x50 exactly as the
     * correct path would. This is a targeted stand-in for the one dirty-flag bit
     * the jumptable lift cannot reproduce; the descriptor it builds comes
     * entirely from the (valid) vertex declaration at device[0x1e5]. */
```

## render/fighters/fighters_renderer.c

```text
/* 00065280: cmp esi,ebp; 00065282: jne 000650C0.
 * ESI holds the next material-record tag and the renderer's EBP is zero.
 * The lifter split the compare from the branch and initialized a new local
 * _flags to zero in sub_00065282, truncating every model at its first material.
 * This is an internal continuation, NOT a callable function: do not pop a
 * return address or change the shared guest frame before tail-dispatching.
 */
```







## render/background/background.c

Stage floor/boundary generation, original draw calls, widescreen camera hooks
and read-only `RECOMP_BG_TRACE` remain. Background suppression and camera
snapshot controls, their frame module and unused control header were removed.

## render/fighters/fighter_isolation.c

The fighter-only environment harness, frame module, driver injection, staged
asset loading, presets, counters and remaining harness flags were removed.
Only original movement passthrough and draw-context instrumentation for optional
world-matrix probes remain. Use `RECOMP_TEST_MATCH=1` for direct-match diagnostics.
