# Source layout

The final v0.9.5 build keeps production code, functional runtime fixes and optional
diagnostic hooks separate. See the [main README](../README.md) for running/building.

| Folder | Responsibility |
| --- | --- |
| `common` | Canonical guest addresses, register/memory access, input masks and shared interfaces |
| `runtime` | Dispatch, fibers, constant-stack repairs, restart and optional crash capture |
| `game` | Guest frame/task flow, scene initialization and pause |
| `controller` | Project-owned static SDL3 input adapter, player routing and mapping |
| `render/nri`, `render/common` | Multi-API rendering, shared shaders, scaling and anti-aliasing |
| `render/d3d11`, `render/d3d8` | Existing direct-D3D11 fallback and guest D3D8 state |
| `frontend` | Native launcher/settings, input focus and guest front-end menus |
| `render/fighters`, `render/background` | Fighter/stage rendering shadows and optional read-only diagnostics |
| `audio` | CRI cue controls, sample-buffer output and Xbox ADPCM |
| `fmv` | Original movie lifecycle, Xbox-backed acquisition, Sofdec/ADX decoding |
| `filesystem` | Project-owned Xbox file implementation, XDVDFS reader, image adapter and validated bootstrap |
| `assets` | Asset-loading shadows |
| `diagnostics` | Optional probes and RenderDoc integration |
| `recomp/gen` | Tracked generated guest code with required manual repairs |
| `third_party` | Dependency source/headers and their retained notices |
| `xboxrecomp` | Tracked overrides applied over the external runtime checkout |
| `resources` | Embedded icon resource; does not require a loose ICO to build |

`main.c` owns host startup and verified XBE data loading. `app_version.h` is the
single version definition shared by Windows VERSIONINFO and window titles.
`create_logs.bat` is the pure batch opt-in diagnostic launcher.

## Shared definitions and generated code

`common/guest_addresses.h` is the handwritten guest-address registry; use the
appropriate guest-width access at each site. Shared register/memory access lives
in `common/guest_runtime.h`; controller masks live in `common/input_constants.h`.
`docs/address_aliases.json` retains the address/name migration map.

A normal build uses the tracked generated code as-is. Regeneration can erase
load-bearing repairs. Keep `tools/reapply_gen_edits.py`, `relift_compile_fixes.py`
and the constant-stack `fix_*_cycle.py` scripts; do not regenerate blindly.

## Runtime override integration

The external xboxrecomp baseline is documented in the main README. CMake copies
unchanged runtime source/headers into `build/xboxrecomp-runtime`, then overlays
`src/xboxrecomp` before adding its targets. The external checkout is not edited.
The MIT notice is retained in `xboxrecomp/LICENSE`.

Important overrides include input latching/device sampling; bridge handle and
completion routing; dynamic path resolution; sparse virtual partition devices;
pushbuffer ring/split-packet/CALL state; ordered presentation/fence behavior;
and opt-in host/kernel logging. `kernel_thunks.c` changes only logger setup.

The former `kernel_file.c` override now lives in `filesystem/xbox_file.c`.
`cmake/XboxFileBackend.cmake` selects it exactly once on the existing `xbox_kernel`
target and preserves the public Xbox API. It retains host saves/FATX/virtual disks
and routes mounted disc files through `filesystem/xbox_image_file.cpp`.
The image reader/adapter/bootstrap are not a second competing public API.

## Build variants and verification

Use **Debug** for CDB/source stepping (`/Od /Ob0`, full matching PDB) and **Release**
for the final optimized build (`/O2 /Ob2`, no PDB). `DOA1U_DIAGNOSTIC` is a separate
source-selection option for probes/ABI checks/RenderDoc, not a replacement for
Debug. Functional runtime/rendering fixes remain present in both variants.
Release logs are opt-in; Debug logs by default. See [logging](../docs/logging.md).

- [Retained checks](../tools/REGRESSION_TESTS.md)
- [Verification and coverage](../docs/verification.md)
- [Rendering](../docs/rendering.md), [filesystem](filesystem/README.md), [movies](fmv/README.md)
- [Static SDL3 integration and notices](third_party/SDL3/README.md)

