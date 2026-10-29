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
| `third_party` | Vendored headers; preserve upstream layout and licenses |

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
