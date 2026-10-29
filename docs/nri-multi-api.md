# Multi-API NRI implementation

## Milestone 1: D3D11 isolation

Native D3D11 shader compilation and presentation-overlay interop are isolated in
`src/render/nri/nri_d3d11.cpp`. The scene renderer no longer includes D3D11 or
D3DCompiler headers. ImGui shutdown now releases the renderer/platform backends
before the NRI device is destroyed (including partial initialization cleanup).

Release build and WARP FXAA/SSAA pixel checks pass. Guest target identity,
P8 cache, depth/alpha and mip regressions pass; seven shaders compile; source
audit and diagnostic/non-diagnostic source checks pass. Matching EXE/PDB deployed
to XISO with hash verification. No game launched; visual parity is not yet claimed.

Subsequent milestones: shared NRI UI/shader contract, D3D12, then Vulkan.
Keep D3D11 default and preserve guest command ordering and lifetime fences.

## Milestone 2: D3D12 + shared NRI UI

D3D11 stays default (Backend=0); Backend=1 selects D3D12 after Save/restart.
RECOMP_NRI_API=d3d11|d3d12 overrides the saved choice for a single process.
Unsupported device creation falls back to legacy D3D11 with an explicit log.
Shaders use SM5.1 DXBC and b0/space1 root constants on D3D12; SM5.0 is unchanged.
NRI's bundled ImGui renderer is shared by both APIs (requires official ImGui
v1.92.9b, installed at the existing ignored dependency path, not committed here).
No native graphics interop remains on the NRI presentation path.

Descriptor pools grow in 1024-set blocks below the D3D12 sampler-heap limit;
all blocks survive until the frame fence. Acquire semaphores are frame-owned,
release semaphores swapchain-image-owned. Final submission waits for acquisition,
includes UI commands, signals release and the frame timeline before presentation.
Guest semaphore ordering, command chunk cadence and scene/depth identity unchanged.

The initial synthetic check triggered NRI's default DebugBreak on invalid streamer
heap/descriptor capacity. Test processes were stopped. Corrected both settings;
NRI errors now log/return instead of opening breakpoint dialogs. ImGui archive
copy timestamps initially left stale 1.92.5 objects; all ImGui objects rebuilt.
Headless production-renderer checks now PASS on RTX4080 SUPER for both APIs:
12 frames each, all 12 scene pipelines created, actual draw/clear, Off/FXAA/SSAA2x/4x,
readback orientation/color and post-AA NRI ImGui pixels. These checks are NOT
live-game or swapchain validation. User game testing remains required.

## Milestone 3: Vulkan integration

Backend=2 or RECOMP_NRI_API=vulkan selects Vulkan; default remains D3D11.
`cmake/NriSpirv.cmake` compiles actual production HLSL strings at build time,
using `tools/compile_nri_spirv.py`. Root constants become Vulkan push constants;
sampler registers are shifted by 1 to avoid the t0/s0 collision, matched by
DeviceCreationDesc.vkBindingOffsets. NRI's UI ignores global binding offsets and
uses its own embedded shaders. NRI already flips Vulkan viewports for top-left
origin, so the port must NOT also flip shader Y.

Build tool used: official Microsoft DXC v1.8.2505.1 (`dxc_2025_07_14.zip`), SHA256
`9ad895a6b039e3a8f8c22a1009f866800b840a74b50db9218d13319e215ea8a4`.
Download: https://github.com/microsoft/DirectXShaderCompiler/releases/tag/v1.8.2505.1
No compiler DLL is needed beside the game; compiled SPIR-V is embedded.
NRI fetches Vulkan-Headers v1.4.365, VMA bfb2ca99e1e7e9684dc06546b552ee3eff4b10aa,
and D3D12MA b73737b0b4cde0b5ab80d685209cdc0d81cf878e at configure time.

## Completed local verification (2026-10-29)

All three APIs pass 12-frame offscreen pixel tests and 12-frame hidden-window
production presentation checks on RTX 4080 SUPER, with NRI/native API validation.
D3D11/D3D12 native InfoQueues contain no error/corruption messages. Presentation
covers acquire/release synchronization, resize, same-size recreation, pause and AA
switching. The stress test explicitly establishes shader-resource state/layout
before exercising 1100 descriptor bindings (draw may submit a timed chunk).
Swapchain OUT_OF_DATE triggers safe recreation; new Vulkan images start undefined.
Synthetic ImGui data tests the NRI bridge, not the real Win32 settings panel.

Release EXE/PDB deployed to XISO with matching hashes. WARP AA, seven DXBC shaders,
seven SPIR-V shaders, target/depth/alpha/P8/mip regressions, source audit and both
source configurations pass. No live game launched: gameplay/F1 parity and
performance remain user validation. MSAA/SMAA are not implemented in this change.
All feature branches merge locally into integration/nri-multi-api; main and origin
remain unchanged. Select backend in F1, Save and restart (D3D11 remains default).

## User verification and texture filtering (2026-10-29)

User confirmed rendering-backend selection tested and working. Filtering traced
from live preferences through per-frame sampler index to guest texture bindings;
nearest/bilinear/trilinear and anisotropic 2x/4x/8x/16x are active on all APIs.
`nri_backend_check --filter` pixel checks pass on all three APIs with native/NRI
validation and identical results on RTX4080 SUPER. Movies intentionally stay
bilinear; scene presentation uses its own clamped sampler; UI uses NRI's sampler.
No production renderer correction needed. Live preferences apply on the next
rendered frame; Save persists across launches. Full gameplay appearance remains
user evaluation, separate from synthetic filtering verification.
