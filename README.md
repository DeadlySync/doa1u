# Dead or Alive ULTIMATE
Recompilation for Dead or Alive 1 - ULTIMATE from the OG XBOX

# Features
* Windows only. :( 
  - I don't have a Linux box for testing
* No online mode. :(
  - I have no idea how to code netcode.
* Direct3D 11/12 rendering through NRI; backend selection applies on restart.
* Independent internal resolution and downsampling.
* Non-temporal anti-aliasing: FXAA and 2x/4x SSAA (NRI/D3D11 and D3D12).
  - MSAA/SMAA are not implemented; their selectors are disabled.
* Texture Filtering
  - Nearest-neighbor
  - Bilinear
  - Trilinear
  - Anisotropic 
* PS4, PS5, XBOX and Nintendo Pro Controller support (soon.)

# Made With
* xboxrecomp (MIT) https://github.com/sp00nznet/xboxrecomp

# Dependencies

Third-party source remains excluded from this repository. Install it at the
paths below before configuring; README entries do not download dependencies.
Keep upstream license notices with each dependency.

| Dependency | Upstream / tested revision | Required location |
| --- | --- | --- |
| xboxrecomp (MIT) | https://github.com/sp00nznet/xboxrecomp — baseline `ae9cb00b295eb418f120e6f7f02f43be8cea080b` | Sibling `../xboxrecomp`, or configure `XBOXRECOMP_DIR` |
| NVIDIA Rendering Interface, NRI (MIT) | https://github.com/NVIDIA-RTX/NRI — `b5f5c626cfe5dd9e9d7c9e8ffc11007ba97e3b88` | `src/third_party/NRI` |
| Dear ImGui (MIT) | https://github.com/ocornut/imgui — pinned tag **v1.92.9b** (required by NRI ImGui extension) | `src/third_party/imgui` |
| pl_mpeg (MIT) | https://github.com/phoboslab/pl_mpeg — single header | `src/third_party/pl_mpeg.h` |
| RenderDoc API header (MIT) | https://github.com/baldurk/renderdoc — `renderdoc/api/app/renderdoc_app.h` | `src/third_party/renderdoc_app.h` |

The pl_mpeg header used here has SHA256
`3A8CB30C83C2A1147719C30FE0C8B93DA2987AA43140077C575B39AAA75FC2C9`;
the RenderDoc API header has SHA256
`B7005E7DC34C3635046868BBD76D81B9B055AEDE0F56DAA0BD39FEDEE0639FFB`.
Their exact upstream commits are not recorded, so these checksums identify the
current copies but do not provide immutable download URLs. ImGui is tag-pinned. Dependency documentation is sufficient
for manual setup, not yet a fully automated, byte-reproducible checkout.
RenderDoc capture integration is optional and diagnostic-only.

DOA1U's xboxrecomp modifications are **tracked in `src/xboxrecomp`**. CMake
combines them with unchanged external dependency sources under the build
folder; the external checkout is not patched or edited. See
[src/README.md](src/README.md#xboxrecomp-local-overrides) for the fix inventory.
The complete patched `src/recomp/gen` tree is tracked too; rebuilding does not
require regenerating it from an XBE. Original game data is not included.

# Building

Requires Windows, MSVC with C/C++ tools, a Windows SDK/resource compiler, and
CMake **3.30+**. Optional development checks also require Python.
NRI configure fetches its pinned D3D12 memory allocator dependency. Install the dependencies above, then run from this repository's root:

```powershell
cmake --preset release
cmake --build --preset release
```

For a non-sibling runtime checkout, pass a user-chosen path at configure time:

```powershell
cmake --preset release -DXBOXRECOMP_DIR="<path-to-xboxrecomp>"
```

The supplied presets select Visual Studio 18 2026. For another compatible MSVC
generator, configure a separate build directory with `cmake -S . -B build-local`
and an appropriate `-G` option, then build `doa1u_recomp` in Release.
Build outputs and local game data remain ignored. Selected reusable checks are
listed in [tools/REGRESSION_TESTS.md](tools/REGRESSION_TESTS.md); investigation
artifacts, captures, reports, and machine-specific helper scripts remain ignored.

# Status
Fully playable. Audio, FX and Voices are all available and working.\
Arcade, Training, Time Attack, Survival, Kumite - all fully working.\
"Secret Menu" also works.\
No online mode, sorry.
 
# Disclaimer
AI Assisted. Codex and Claude Code.
