# Retained regression checks

These are offline CPU/source checks, not live-game automation. Keep them: they
protect fixes rather than collecting one-off investigation artifacts. Run from
the workspace root in an x64 Visual Studio Developer Command Prompt with Python.

| Check in doa1u_port/tools | Purpose |
| --- | --- |
| antialiasing_check.cpp | Production FXAA/SSAA shaders on headless D3D11 WARP, with pixel readback |
| check_pb_submission.c | Real pushbuffer decoder: wraps, split packets, CALL/RETURN, GET timing |
| check_head_pose_gate.py | Lifted head gate including observed downed/victory cases |
| check_test_match_selection.py | Diagnostic selection and one-time scene-mode initialization |
| check_nri_targets.py | Guest color/depth identity and draw-selected presentation |
| check_nri_texture_cache.py | Same-frame P8 palette/index changes and reuse |
| check_nri_mips.py | Mip dimensions and transparent-pixel weighting |
| check_guest_draw_state.py | Depth policy and all alpha comparison operations |
| check_nri_shaders.py | Shared shader compilation |
| check_game_loop_cycle.py | Game-loop stack-cycle regression |
| check_vblank_schedule.py | Vblank schedule regression |
| check_source_config.cmake, audit_source.py | Source/configuration checks |

Python compiler-based checks build into doa1u_port/build, not the game directory.
The selection script generates its C test; compile and run that generated file.

Example decoder regression (no game launched):

```bat
cl /nologo /O2 doa1u_port/tools/check_pb_submission.c /Fodoa1u_port/build/check_pb_submission.obj /Fedoa1u_port/build/check_pb_submission.exe
doa1u_port\build\check_pb_submission.exe
```

The resolved rendering investigation record is in
reference/investigations/resolved-rendering-20261028/README.md.

AA regression, from the port root (no game/window/hardware GPU):

```powershell
cmake --build build --config Release --target antialiasing_check
./build/Release/antialiasing_check.exe
```

## Multi-API production renderer check

Build `nri_backend_check` in Release. Run once per API (`d3d11`, `d3d12`, `vulkan`).
This synthetic headless check includes the actual production backend and NRI UI
bridge. It creates all scene/AA pipelines and reads back known scene/UI pixels
across 12 Off/FXAA/SSAA2x/4x frames. No game, guest code, files or input injection.
NRI validation is enabled; optional API validation uses RECOMP_NRI_VALIDATION=1.
Errors log/return failure without NRI's default breakpoint dialog. Run with an
external timeout when automating. This does not establish full game parity.

Add `--present` to each API invocation for hidden-window swapchain tests (the
window is never shown): acquire/present, resize/recreate, pause and AA switching.
Set `$env:RECOMP_NRI_VALIDATION='1'` for native API validation; D3D11/12 InfoQueue
errors/corruption fail the check. Require exit zero AND a PASS marker. The real
Win32 F1 settings panel and gameplay still require user testing.

Texture filtering: run `nri_backend_check d3d11 --filter` (also `d3d12`, `vulkan`).
Eight frames exercise actual texture cache/decode/upload/mip generation, textured
production draw and readback: nearest vs bilinear magnification, bilinear vs
trilinear minification, anisotropic 2x/4x/8x/16x with matching directional footprints.
The synthetic decoder supplies alternating black/white columns. Assert measured
contrast: nearest >=250, bilinear magnification 150..210, bilinear minification
>=100 vs trilinear <=3, directional anisotropic detail >=100. AA disabled to isolate
filtering. These test sampler execution; saved-setting mapping is code-reviewed.

SMAA/MSAA: run `nri_backend_check <api> --smaa` / `--msaa` for each API.
SMAA checks actual three-pass HIGH output: diagonal smoothing, flat colors, source
alpha (opaque/translucent) and post-AA UI. MSAA cycles supported 2x/4x/8x targets,
checks resolved edge coverage and rejects farther geometry using multisampled
depth. `--present` now runs 20 frames switching all five modes and MSAA sample
counts; simulates reduced capability masks to check fallback, plus resize,
same-size recreation and pause. No game launched. Original offscreen/filter and
WARP regressions remain required. Native D3D12 breaks are disabled in the test
only; errors still fail through InfoQueue and NRI validation.


Sharp 2D: `nri_backend_check <api> --sharp2d` with native validation enabled
checks actual production snapshots/composition/readback: binary texture edges
under anisotropic scene filtering and all five AA modes, single alpha blending,
texture-mutation isolation, invalidation at later world draws, original-sampler
mapping and integer 4:3/16:9 viewport sizing. `--present` also submits translucent
2D, toggles Sharp 2D, and retains snapshots through pause, resize and AA changes.
Run on D3D11/D3D12/Vulkan; no game or visible window is launched.


FVF HUD regression: `--sharp2d` now deliberately clears the old screen-space hint
and supplies the real `0x144` FVF domain. It varies the 3D sampler and toggles
original/sharp rendering on retained snapshots, checks semantic world overrides,
16:9 HUD layout and post-AA pixels. `widescreen_shadow_check` also checks XYZRHW
FVF variants, world/program handles, ABI-preserving ordered metadata and direct
shader-selection reset. `check_pb_submission.c` tests domain packets split across
submissions with an intervening draw, preserving order and existing GET timing.


Same-size toggle revision: `--sharp2d` now asserts identical on/off viewport
bounds in 4:3 and 16:9, replacing integer-size expectations. Original/sharp
pixel checks, all AA modes and hidden presentation regressions remain enabled.

SNN preview: nri_backend_check <api> --snn checks all four SNN/nearest
combinations across all five AA methods. Analytical stripe readback verifies
source-resolution SNN before scaling, original/nearest sampling and preserved
semi-transparent alpha. Also checks revision-cache invalidation and raw snapshot
isolation. --present exercises SNN toggles during hidden presentation, pause
and resize. Run native/NRI validation on d3d11, d3d12 and vulkan.
