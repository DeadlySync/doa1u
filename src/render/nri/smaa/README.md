# SMAA 1x integration

Official upstream: https://github.com/iryoku/smaa
Pinned commit: `71c806a838bdd7d517df19192a20f0c61b3ca29d`.

`SMAA.hlsl`, `AreaTex.h`, `SearchTex.h` and `LICENSE.txt` are unmodified upstream
files (MIT). Unlike the large external SDKs, these small required assets are
tracked so the AA implementation builds without a separate download.

`wrappers.hlsl` is port integration: spatial SMAA 1x, HIGH preset, color edge
detection. No temporal mode, jitter or reprojection. Edges use RG8 UNORM, weights
RGBA8 UNORM; the original source alpha is retained in the final pass. Existing
UNORM scene color handling is unchanged (no extra gamma conversion).

The build expands upstream into three HLSL strings. Only the two effect-style
sampler declarations are replaced with explicit s0/s1 bindings in generated code.
D3D11 compiles SM5.0 DXBC, D3D12 SM5.1/space1, Vulkan embeds DXC SPIR-V.
Texture registers t8..t10 avoid the Vulkan s0/s1 binding offset (1/2). Lookup
textures are uploaded once; intermediates resize lazily and retire behind frame
fences; each frame owns its descriptor pool. Native ImGui is drawn after AA.
