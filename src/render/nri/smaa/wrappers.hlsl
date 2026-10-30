// Port integration of official SMAA 1x, HIGH preset. No temporal reprojection.
cbuffer C:register(b0){float2 pixel;float2 extent;float4 unused[2];};
#define SMAA_HLSL_4 1
#define SMAA_PRESET_HIGH 1
#define SMAA_RT_METRICS float4(pixel,extent)
#include "SMAA.hlsl"
Texture2D source0:register(t8);
Texture2D source1:register(t9);
Texture2D source2:register(t10);
float4 main(float4 p:SV_Position,float2 uv:TEXCOORD):SV_Target {
#if SMAA_PASS == 0
    float4 offsets[3]; SMAAEdgeDetectionVS(uv,offsets);
    return float4(SMAAColorEdgeDetectionPS(uv,offsets,source0),0,0);
#elif SMAA_PASS == 1
    float2 pixcoord; float4 offsets[3];
    SMAABlendingWeightCalculationVS(uv,pixcoord,offsets);
    return SMAABlendingWeightCalculationPS(uv,pixcoord,offsets,source0,source1,source2,0);
#else
    float4 offset; SMAANeighborhoodBlendingVS(uv,offset);
    float4 c=SMAANeighborhoodBlendingPS(uv,offset,source0,source1);
    c.a=source0.SampleLevel(PointSampler,uv,0).a; // preserve original alpha
    return c;
#endif
}
