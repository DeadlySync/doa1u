# Source layout

| Folder | Responsibility |
| --- | --- |
| `common` | Canonical guest addresses, memory/register access, input masks, diagnostic interface |
| `runtime` | Dispatch hooks, host-backed fibers, functional wait fixes, release diagnostic adapters |
| `game` | Guest frame driver, task registration, match/menu flow and pause |
| `frontend` | Startup logo, frontend graphics, master loop and scene state machine |
| `render/d3d11` | Host GPU backend, textures, presentation and pacing |
| `render/d3d8` | Guest D3D8 state and vertex descriptor repairs |
| `render/fighters` | Fighter rendering shadows and isolation harness |
| `render/background` | Stage geometry, stage drawing and camera hooks |
| `audio` | CRI cue controls, game-owned sample-buffer output and Xbox ADPCM decoder |
| `fmv` | Movie lifecycle, Sofdec demux/video and ADX decoding |
| `assets` | Shared asset-loading shadows |
| `diagnostics` | Optional probes and RenderDoc capture; excluded unless enabled |
| `recomp/gen` | Generated guest code; keep generator layout and reapply rules |
| `third_party` | External dependency headers/source; preserve upstream layout and licenses |
| `xboxrecomp` | Tracked DOA1U runtime overrides applied over the external dependency |

`main.c` remains the host entry point. `source_layout.json` maps former root
filenames to their current locations (documentation paths are port-relative).

## Shared definitions

`common/guest_addresses.h` is the only handwritten address-macro registry.
Use `DOA1U_<ROLE>_VA` names, with the correct guest-width access at each call site.
Old aliases such as `GAME_MODE`, `GAME_MODE_B` and `G_GMODE` are replaced by
`DOA1U_GAME_MODE_VA`. The migration map is `../docs/address_aliases.json`.

Use `common/guest_runtime.h` for guest registers, memory access and TLS linkage.
Shared controller masks live in `common/input_constants.h`; action-button masks
are distinct from the Start-only mask. Keep implementation-local macros near
the top of their own file. Feature macros must precede the headers they configure.

Historical naming catalogs are in `../docs/reference`. Longer research comments
are preserved in `../docs/source_notes.md`, not embedded in executable code.

## Build variants

From the port root, configure either variant (presets require CMake 3.21+):

```powershell
cmake --preset release
cmake --preset diagnostic
```

Release uses `build`; diagnostic uses `build-diagnostic`. Equivalently, set
`-DDOA1U_DIAGNOSTIC=OFF` or `ON` on a normal CMake configure command.

Diagnostic enables `src/diagnostics/*.c`, guest/runtime ABI checks and optional
RenderDoc (`RECOMP_WITH_RENDERDOC=OFF` disables that trigger). Release excludes
those source files and uses minimal no-op/passthrough adapters for symbols still
referenced by generated guest code. Functional rendering/runtime fixes remain
enabled in both variants. This switch does not remove all logging from other
subsystems or from the separate xboxrecomp toolkit.

When builds are requested, the existing release command remains:

```powershell
cmake --build build --config Release --target doa1u_recomp
```

Always deploy both the resulting EXE and matching PDB to `../XISO` after a
successful build. The reorganization was compiled/linked and deployed with the
subsequent banked-audio/opponent-card iteration; gameplay verification is pending.

## Checks without compiling

```powershell
py -3 tools/audit_source.py
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
cmake -DDOA1U_DIAGNOSTIC=ON -P tools/check_source_config.cmake
```

These check macro use/duplicates, local includes, source paths and diagnostic
source selection. They do not establish compiler/linker or runtime correctness.

## Direct-match diagnostics

Use `RECOMP_TEST_MATCH=1` for the existing diagnostic match (Kasumi versus CPU Jann Lee, stage 3 / SHI by default).
`RECOMP_STAGE_ID=0..12` overrides the stage; `-1` restores automatic selection.
The retired force-Arcade harness and its launch scripts have been removed.
`RECOMP_FLOW_TRACE=1` remains a read-only frontend trace.

## xboxrecomp local overrides

`xboxrecomp/` preserves DOA1U changes relative to external xboxrecomp baseline
`ae9cb00b295eb418f120e6f7f02f43be8cea080b`. It is an override set, not a full
runtime fork. Edit these tracked copies, not the external dependency. Upstream
licensing is retained in `xboxrecomp/LICENSE`.

CMake copies unchanged dependency sources into `build/xboxrecomp-runtime`,
then overlays this directory before adding the runtime targets. Source and
header selection therefore agree, including quoted includes. No changes are
written to the original dependency. Reconfigure after adding/removing override
files; edits to existing files also trigger CMake regeneration.

| Files beneath `src/xboxrecomp/` | DOA1U changes |
| --- | --- |
| `src/input/keyboard.c`, `tests/input_keyboard/test_main.c` | Latch short Enter/Start presses between guest polls; cover release/repeat behavior. |
| `src/input/xinput_device.c` | Sample controllers on a worker; avoid blocking gameplay on device discovery and empty-slot polling. |
| `src/kernel/kernel_bridge.c` | Rebase stalled vblank schedules without rapid catch-up; route virtual-device operations. |
| `src/kernel/kernel_virtual_disk.c`, `.h` | Sparse process-local raw partition devices; persistent saves remain ordinary files, not disk images. |
| `src/kernel/kernel_file.c`, `kernel_path.c` | Route raw-device I/O and partition aliases to the virtual backend while retaining native save directories. |
| `src/kernel/CMakeLists.txt` | Compile the virtual-device backend. |
| `src/kernel/nv2a_backend.h` | Share explicit screen-space/presentation metadata with the port renderer. |
| `src/kernel/nv2a_pb_exec.c` | Ordered presentation markers, inline XYZ fixed-function transforms, bulk P8 decode, executor fence handling and opt-in verbose draw logs. |
| `src/kernel/nv2a_pb_scan.c` | Follow actual ring JUMPs and retain split packets/CALL state; fixes skipped commands and user-confirmed flicker while retaining default GET timing. |
| `src/kernel/xbox_memory_layout.c`, `.h` | Executor-owned fence completion, event-assisted GPU waits, real wrap traversal and separation of functional rendering from optional tracing. |

The external dependency still supplies all unchanged runtime code and headers.
Do not replace it with this partial override directory. Generated game code is
tracked in `recomp/gen/`, including manual repairs; do not regenerate blindly.
