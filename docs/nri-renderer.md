> Current multi-API implementation and validation: [nri-multi-api.md](nri-multi-api.md). Older D3D11-only descriptions below are historical.

# NRI renderer migration — 2026-10-27

## Current milestone

The port now defaults to a real NRI/D3D11 rasterizer. This is the first parity
migration milestone, not completion of D3D12/Vulkan. Independent framebuffer
resolution and texture filtering are now implemented; see graphics-settings.md. Runtime visual correctness and performance await the user's testing.
No game launch, GPU capture or automated gameplay test was performed.

## Architecture

```
Recompiled game -> Xbox D3D / NV2A command stream
  -> xboxrecomp NV2A executor (decoding, CPU vertices, guest semaphores)
  -> existing Nv2aBackend clear/draw/flip boundary
  -> doa1u_port/src/render/nri/nv2a_backend_nri.cpp
  -> NRI CoreInterface / SwapChainInterface -> D3D11 -> GPU
```

NRI is a port dependency only. No xboxrecomp files were changed for this
migration. It is not a post-processing hook over an already-rasterized image.

NRI owns the device/queue, swapchain, persistent scene color/depth, sampled
textures, upload/vertex buffers, descriptor pools, shader pipelines, barriers,
draw/clear/copy commands and frame completion fences. Two frame slots retain
upload data and retired textures until the corresponding host fence completes.
Guest semaphore semantics remain in the executor and were not replaced by
these host-resource lifetime fences.

The only native rendering interop is the existing Dear ImGui DX11 backend:
after NRI submits the scene-to-output scaling pass, ImGui draws on the presented image
using NRI's native D3D11 device/immediate context/RTV. Completion is signaled
AFTER this overlay. ImGui never draws into persistent guest scene storage.
A future D3D12/Vulkan milestone must replace this DX11-specific UI bridge.

### Preserved behavior / intended parity

- Existing shared guest shaders, including BGRA vertex color, device-depth
  normalization, alpha-cutout behavior and diffuse scaling.
- Existing renderer's subset of blend/depth/raster state; this migration does
  not claim improved NV2A combiner or general hardware accuracy.
- P8 index/palette change detection and once-per-frame updates.
- Texture-generation invalidation on artwork/asset reloads; resource destruction
  is deferred until GPU completion.
- Ordered world/backdrop markers, Hor+ gameplay and proportional 4:3 UI/movies.
- Persistent scene color/depth across partially redrawn/pause frames.
- Movie mailbox lock/release, per-frame texture upload and original movie rect.
- Live window presets, saved startup size, keyboard input, F1 UI and ESC restart.
- Existing 60 Hz deadline pacing and RECOMP_GPU_FPS override.

D3D11 native diagnostics/capture-specific helpers remain in the legacy renderer;
RECOMP_GPU_DUMP / RECOMP_GPU_DUMP_ASYNC are not implemented on the NRI path yet.
RenderDoc's existing optional trigger is called on the NRI path.

## Selection and fallback

Normal launch uses NRI/D3D11. Its window title is `DOA1U - NRI / D3D11` and the
F1 panel reports `Active renderer: NRI / DirectX 11`. The run log records NRI
version, output dimensions and initialization failures.

To compare the retained renderer, from XISO in PowerShell:

```powershell
$env:RECOMP_RENDERER = 'legacy-d3d11'
.\doa1u_recomp.exe
```

For subsequent NRI launches in that shell:

```powershell
$env:RECOMP_RENDERER = 'nri'
.\doa1u_recomp.exe
```

NRI initialization failure cleans up its partial resources/window and registers
the legacy renderer automatically. A failure after rendering begins is logged
once, rendering stops, and the window continues processing close/ESC input;
there is no unsafe mid-frame backend switch. Restart using the fallback above.

`RECOMP_NRI_VALIDATION=1` enables NRI validation and requests the D3D11 debug
layer (if installed). This is an optional diagnostic setting, off by default.
GPU/backend fields in the INI remain preferences, not the renderer selector.

## Dependency / build

Official NVIDIA-RTX/NRI, version 190, commit
`b5f5c626cfe5dd9e9d7c9e8ffc11007ba97e3b88`, vendored with MIT license under
`src/third_party/NRI`. Built statically: no new runtime DLL deployment required.
Only D3D11 and validation support are compiled. Vendor-extension SDKs,
D3D12/Vulkan, upscalers and NRI's ImGui extension are disabled. Configuration
does not fetch additional dependencies. CMake minimum is now 3.30.

Release build/link passed. Source audit passed: 39 handwritten C/header files,
124 macros, 78 addresses. Release/diagnostic source selections passed: 118/119
sources. The existing generated-C recursion/shift warnings appeared during the
first full rebuild; generated code was not changed by this migration.

Matching Release artifacts copied to XISO and SHA256 verified:

- EXE: `982BB11C18E73804A5EB28D38EA102F014A5C39C6822696F540CB222777A0B03`
- PDB: `DC0216E779D697163AF56CEB4EA0B45F5733A9598B3A9162CD97C586A7613BFA`

## User testing handoff

Check normal boot/logo/movie/title, fighter selection and successive Arcade
opponent cards, a match on several stages, pause/resume, ring-out, shadows and
transparency. Check 4:3/16:9 framing, window-size changes (also during a movie
and pause), F1/X, Save configuration, and ESC restart/loading the saved settings.
Compare frame pacing and visual output with the legacy renderer if needed.
User testing is deliberately pending; compilation is not proof of visual parity.

After parity: implement independent internal scene resolution/presentation
scaling, then enable D3D12/Vulkan with proper shaders, synchronization, ImGui
integration and GPU selection. Retire the legacy renderer only after validation.

## Audio-sync regression follow-up - 2026-10-27

User reports voices/FX can play both early and late relative to the action,
and replay skips add to the drift. Treat NRI audio/visual timing parity as OPEN.
The user-run log confirms NRI initialized on RTX 4080 SUPER, no renderer failure
messages, and emulated vblank at 60 Hz. It does not measure actual presentation
throughput, so vblank alone cannot establish rendering performance or root cause.

Confirmed integration difference: without NVAPI, this NRI version uses CPU
command-buffer emulation (DeviceD3D11.hpp). Our first integration held all native
graphics execution until flip; the legacy renderer issued draws as decoded.
A new candidate streams ordered command chunks after 32 draws or after 2 ms
when the next draw arrives. Each chunk has its own command buffer, retained
with frame uploads/descriptors until the existing host frame fence completes.
No command allocator/pool is reset while any of its chunks can still be in use.
The presentation queue is now limited to one frame; two resource-lifetime slots
remain. No audio clock, voice buffering, guest semaphore or vblank changes.

Lightweight `[NRI timing]` log every five seconds reports real presentation FPS,
chunk count and CPU submission cost. It runs only during the user's normal game
session. No game launch/capture or live timing verification was performed here.
These changes address a plausible source of variable visual latency; the cause
of the reported drift is NOT proven, and a successful fix is NOT yet claimed.

Release build and source audit passed; matching EXE/PDB deployed and verified:

- EXE: `09E6B4E11D604C244A0562915A66BD63B4A4CFFB45F1E1AFCCD23A664F046A6E`
- PDB: `E8378B65EE595E98D37947C36EDCDD5DDC978887C5CD794A7823B5EBA06DDEBE`

Retest impacts/voices, replay skipping and round transitions. If drift persists,
compare the retained legacy renderer and inspect `[NRI timing]` in run.err
before further changes. Independent framebuffer resolution remains deferred.

Latest user retest: audio desync is NOT fixed. Leave OPEN; further investigation deferred at user request.

## Resolution/filtering checkpoint - 2026-10-27

Implemented independent scene/depth dimensions and NRI scaling presentation;
window resizing preserves scene/depth. Internal resize resamples retained scene
color, resets depth and defers old-target destruction until frame completion.
ImGui remains presentation-resolution only. Descriptor sets now carry texture
and dynamic sampler: nearest, bilinear, trilinear, anisotropic2/4/8/16x.
Complete host-generated alpha-weighted mips include mutable P8 refreshes.
Movies remain bilinear. No vendor NRI, xboxrecomp, audio, clock or guest-fence edits.
Release and offline shader/mip/source checks passed; user runtime tests pending.
Audio desync, non-temporal AA and D3D12/Vulkan remain OPEN.
Matching build/deployed SHA256:
- EXE: E5BD7267551C24DFE94112781C015DD994B3DFC21C7BAA8D1727089F6026F139
- PDB: 55C21DEDC44BD9B4889AD741A93E87F6F53C81797C190B60C03C3B9D69324A67
