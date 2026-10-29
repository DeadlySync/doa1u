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
