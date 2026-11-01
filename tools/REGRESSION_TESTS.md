# Retained regression checks

These tools protect the final v0.9.5 implementation. One-off debugger launchers,
raw captures, analysis outputs and historical reports were archived outside the
project. Keep the reusable checks and generated-code repair scripts.

Run from the repository root. Compiler-based Python checks require an x64 MSVC
Developer Command Prompt. CMake outputs belong under `build`, not the game folder.
The image gate and real-window logging check are documented in
[verification](../docs/verification.md).

## CMake check targets

Build with `cmake --build build --config Debug --target <name>` (or Release where
appropriate). These targets are excluded from the normal game build.

| Target | Coverage |
| --- | --- |
| `launcher_check` | Hidden launcher, INI, window modes/geometry, controller routing, remapping and panel focus |
| `nri_backend_check` | Production rendering/presentation checks for the selected NRI API; inspect its CLI options |
| `antialiasing_check` | Production FXAA/SSAA pixel checks using D3D11 WARP |
| `audio_bank_check` | Reusable audio-bank decoder check; game input supplied separately |
| `throw_move_lookup_check` | Production 570E0 selector correction; 131,072 cases and register/stack preservation |
| `training_stage_change_check` | Recovered Training-menu interior switch target |
| `widescreen_shadow_check` | Production widescreen shadow behavior |
| `xiso_reader_check` | Valid/malformed XDVDFS fixtures, explicit-offset reads, bounds and optional complete content comparison |
| `xbox_file_backend_check` | Actual selected host-file backend, saves, relative paths, FATX and virtual disks |
| `xbox_image_file_check` | Actual image API/bridge, handles, duplicates, completion, directories and lifetime |
| `disc_bootstrap_check` | Discovery, supported XBE identity, cleanup and fresh-process behavior |
| `sofdec_io_check` | Actual native acquisition helper across success/fault/short-read cases |
| `fmv_path_check` | Actual wrapper's full guest paths, bounds and register/ABI behavior |
| `sofdec_check` | Actual backend/decoder acquisition and complete BGR/PCM movie manifests |

`launcher_check` and renderer presentation checks create hidden test windows;
they do not claim physical controller/A/V certification or guest gameplay.

## Source, CPU and symbol checks

| Tool | Coverage |
| --- | --- |
| `audit_source.py`, `check_source_config.cmake` | Handwritten includes/macros and normal/diagnostic source selection |
| `check_build_configs.py` | Debug `/Od /Ob0`/symbols and Release `/O2 /Ob2`/no-PDB settings |
| `check_debug_symbols.py` | Offline DbgHelp resolution from a matching Debug EXE/PDB |
| `check_xiso_backend.py`, `check_xiso_bridge.py` | Backend ownership/CMake selector cases and actual bridge-body harness generation |
| `check_pb_submission.c` | Real pushbuffer wraps, split packets, CALL/RETURN and GET timing |
| `check_guest_draw_state.py` | Depth policy and all alpha-test comparisons |
| `check_nri_targets.py`, `check_nri_texture_cache.py` | Guest target identity and same-frame texture/P8 cache behavior |
| `check_nri_mips.py`, `check_nri_shaders.py`, `check_texture_enable.py` | Mip/filtering and shader/texture semantics |
| `check_head_pose_gate.py`, `check_test_match_selection.py` | Original head gate and one-time diagnostic scene initialization |
| `check_audio_wait_cycle.py`, `check_game_loop_cycle.py`, `check_training_loop_cycle.py`, `check_task_frame_cycle.py` | Actual constant-stack guest-loop regressions |
| `check_vblank_schedule.py` | Vblank pacing/rebase behavior |
| `check_collision_trace.py`, `collision_trace.py` | Actual read-only trace hook and its bounded record/CSV format; the parser is a retained test dependency |
| `crash_capture_check.c`, `fiber_runtime_check.c` | Reusable exception-capture and guarded fiber lifecycle harnesses |
| `check_sofdec_parity.py` | Exact manifest comparison against retained `docs/reference/sofdec-baseline.json` |
| `check_release_logging.py` | Real isolated game startup/ESC: quiet flags and actual pure batch opt-in |

Only `check_release_logging.py` intentionally runs the game in this inventory's
release-logging workflow. The integrated headless image gate never launches it.
Consult each check's source/docstring for its command-line inputs and mocked
boundaries; some CPU scripts generate a harness that must then be compiled/run.

## Required build/repair tooling

- `compile_nri_spirv.py` is invoked by CMake; keep it.
- `reapply_gen_edits.py` and `relift_compile_fixes.py` preserve manual generated-code
  repairs if regeneration is deliberately performed. They are not part of a normal build.
- `fix_game_loop_cycle.py`, `fix_audio_wait_cycle.py`, `fix_training_loop_cycle.py`
  and `fix_task_frame_cycle.py` reapply the constant-stack repairs; do not discard them.
- `check_xiso_bridge.py` generates the offline bridge harness through CMake.
- `check_xiso_integration.ps1` orchestrates the existing headless gate and writes
  fresh evidence. It is not a PowerShell game/logging launcher.

No check result is inferred merely from a successful compile.
