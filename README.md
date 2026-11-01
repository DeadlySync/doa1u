# Dead or Alive 1: ULTIMATE

**Final release: v0.9.5** — a native Windows recompilation of the original Xbox game.

Arcade, Training, Time Attack, Survival, Kumite and the Secret Menu are playable,
with music, voices, sound effects and movies. Online play is not supported.

## Features

- Direct3D 11, Direct3D 12 and Vulkan rendering through NRI.
- Independent window size and internal resolution; 4:3 and 16:9 gameplay.
  Menus, HUD and movies retain their original 4:3 proportions.
- Windowed/full-screen presentation with independent borderless selection.
  Full Screen uses the desktop size without changing the monitor's display mode.
- Nearest, bilinear, trilinear and anisotropic filtering; Lanczos2 anti-ringing
  for 2D scaling; FXAA, 2x/4x SSAA, 2x/4x/8x MSAA and SMAA 1x High.
- F1 settings for Display, Graphics and Controls, with saved preferences.
- PS4, PS5, Xbox and Nintendo Pro controllers through statically linked SDL3.
  No SDL3 DLL is required. Keyboard/controller remapping and hotplug are supported.
- Last-active keyboard/controller input sharing on P1; independent P2 controller.
- Direct read-only `.iso`/`.xiso` access: no game-data extraction required.
- Quiet Release builds, with an optional pure batch launcher for diagnostic logs.

## Play

You provide the original game image. Place exactly **one** supported `.iso` or
`.xiso` beside the executable; names ending in `.xiso.iso` or `.iso.xiso` also work.
The image is found automatically, independently of the working directory.

```text
DOA1U/
  doa1u_recomp.exe
  Game.xiso.iso
  create_logs.bat       optional diagnostic launcher
  licenses/
```

The image must contain the supported root `Doa1.xbe`. Its certificate title ID
and full-XBE SHA-256 are checked before boot; modified or unsupported executables
are rejected. Multiple adjacent images are rejected rather than guessed between.
With **no adjacent image**, the original extracted-folder layout remains supported.
See [filesystem details](src/filesystem/README.md) for the supported identity.

On first launch, choose settings and press **Play**. Preferences are stored in
`doa1u_graphics.ini`; saves remain in ordinary `UDATA`/`TDATA` directories beside
the EXE. Carry those files/directories with you when moving an existing install.

| Shortcut | Action |
| --- | --- |
| **F1** | Open the Display/Graphics/Controls settings; return to the same game |
| **ESC** | Restart the game in a fresh process |

Backend changes apply after restart. See the [launcher guide](docs/launcher.md)
and [graphics settings](docs/graphics-settings.md).

### Diagnostic logs

Release does **not** create logs by default. To collect `run.log`, `run.err` and
`xbox_kernel.log`, run [create_logs.bat](src/create_logs.bat) beside the EXE.
Existing logs are replaced when logging is enabled. It does not change gameplay defaults.
See [logging instructions](docs/logging.md).

## Build

Requires 64-bit Windows, MSVC C/C++ tools, a Windows SDK/resource compiler,
**CMake 3.30+**, Python 3 and DXC with SPIR-V support. The supplied presets use
**Visual Studio 18 2026**. For another compatible MSVC generator, configure a
separate build directory with `cmake -S . -B build-local -G "<generator>"`.

### Dependencies

Install the external dependencies below before configuring. SDL3 and the SMAA
shader/lookup files are already included with their notices. NRI's configure step
fetches its pinned allocator/Vulkan-header dependencies.

| Dependency | Tested revision / identification | Location |
| --- | --- | --- |
| [xboxrecomp](https://github.com/sp00nznet/xboxrecomp/tree/v0.16.0) — MIT | `v0.16.0` | `../xboxrecomp`, or set `XBOXRECOMP_DIR` |
| [NRI](https://github.com/NVIDIA-RTX/NRI) — MIT | `b5f5c626cfe5dd9e9d7c9e8ffc11007ba97e3b88` | `src/third_party/NRI` |
| [Dear ImGui](https://github.com/ocornut/imgui) — MIT | `v1.92.9b` | `src/third_party/imgui` |
| [pl_mpeg](https://github.com/phoboslab/pl_mpeg) — MIT | Header SHA-256 below | `src/third_party/pl_mpeg.h` |
| [RenderDoc API header](https://github.com/baldurk/renderdoc) — MIT | Header SHA-256 below; optional diagnostic capture integration | `src/third_party/renderdoc_app.h` |
| [SDL3](src/third_party/SDL3/README.md) — zlib/HIDAPI notices | `3.4.18`, vendored and statically built | `src/third_party/SDL3/upstream` |

The installed header snapshots are identified by SHA-256 because their exact
upstream commits were not recorded:

```text
pl_mpeg.h:       3A8CB30C83C2A1147719C30FE0C8B93DA2987AA43140077C575B39AAA75FC2C9
renderdoc_app.h: B7005E7DC34C3635046868BBD76D81B9B055AEDE0F56DAA0BD39FEDEE0639FFB
```

DXC must support SPIR-V; some Windows SDK copies do not. Set
`-DDOA1U_DXC="<path-to-dxc.exe>"` if required. DXC and Python are build-only;
compiled shaders are embedded in the executable.

### Release and Debug

From the repository root:

```powershell
cmake --preset release
cmake --build --preset release

# Use Debug for CDB, source stepping and stack investigations:
cmake --build build --config Debug --target doa1u_recomp
```

For a non-sibling xboxrecomp checkout, add
`-DXBOXRECOMP_DIR="<path-to-xboxrecomp>"` to the configure command.

| Configuration | Compiler settings | Symbols | Default logging |
| --- | --- | --- | --- |
| Release | `/O2 /Ob2` | No PDB generation | Off |
| Debug | `/Od /Ob0`, frame pointers | Full matching EXE/PDB | On |

Outputs are under `build/Release` and `build/Debug`, with `create_logs.bat` beside
the EXE. Keep the matching Debug EXE/PDB together when debugging. Diagnostic
probes are a separate `DOA1U_DIAGNOSTIC` option, not a substitute for Debug.
See [build configurations](docs/build-configurations.md).

The patched generated code is already tracked: a normal build does **not** need
an XBE, game image or regeneration step. Do not regenerate it blindly.
Project-owned xboxrecomp changes are tracked in `src/xboxrecomp`; CMake applies
those over an isolated build-local runtime copy without editing the external
checkout. The project-owned file backend is selected exactly once.

## Documentation and maintenance

- [Documentation index](docs/README.md)
- [Source layout and runtime overrides](src/README.md)
- [Rendering architecture](docs/rendering.md)
- [Filesystem and identity validation](src/filesystem/README.md)
- [Movie acquisition and decoder behavior](src/fmv/README.md)
- [Verification commands](docs/verification.md) and [retained regression checks](tools/REGRESSION_TESTS.md)

Reusable checks, decoder baseline metadata, repair scripts, active release
assets and dependency licenses are retained. Build outputs and local game data
remain ignored.

## Credits and notices

Built with xboxrecomp, NRI, Dear ImGui, SDL3, pl_mpeg and the credited shader
components. Keep each dependency's license and attribution notices. Original
Dead or Alive artwork belongs to its respective owners; see the
[logo provenance](docs/assets/launcher-logo.README.md). You supply the game image.

### 2D shaders and filtering credits

| Filter | Code and attribution |
| --- | --- |
| **NN — nearest-neighbor** | [Project implementation](src/render/nri/nv2a_backend_nri.cpp); [Microsoft reference](https://learn.microsoft.com/en-us/windows/win32/direct3d9/nearest-point-sampling) (not an imported shader). Used for testing before settling on Lanczos2. |
| **SNN — symmetric nearest-neighbor** | Project implementation: [`HLSL_SNN`](src/render/common/guest_shaders.h); [GIMP reference](https://docs.gimp.org/2.10/en/gimp-filter-snn-mean.html) (not imported GIMP code). Used for testing before settling on Lanczos2. |
| **Lanczos2 + anti-ringing — final 2D filter** | [`HLSL_PS_LANCZOS`](src/render/common/guest_shaders.h), adapted from [Hyllian/Jararaca's `lanczos2-sharp.cg`](https://github.com/libretro/common-shaders/blob/master/windowed/shaders/lanczos2-sharp.cg) in libretro/common-shaders. Copyright 2011–2014 Hyllian/Jararaca; **GPL-2.0-or-later**. See the [adaptation and license notice](src/render/common/lanczos2-LICENSE.txt). |

## Legal Notice

No code from the original owners is present on this repository.
Included art is part of public domain and freely available on the internet.
Final user must provide a legally obtained backup image of the original XBOX game disk.

## AI Use Disclosure

AI-assisted development: Codex and Claude Code.
