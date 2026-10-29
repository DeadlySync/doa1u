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
