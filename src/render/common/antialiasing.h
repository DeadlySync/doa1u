#ifndef DOA1U_ANTIALIASING_H
#define DOA1U_ANTIALIASING_H

/* Saved INI method IDs are stable: Off=0, SSAA=1, MSAA=2, FXAA=3, SMAA=4. */
static unsigned aa_grid_x(int method) { return method == 1 ? 2u : 1u; }
static unsigned aa_grid_y(int method, unsigned samples) { return method == 1 && samples == 4 ? 2u : 1u; }

/* Compact spatial FXAA: local luma contrast gates an edge-directed filter.
 * Design reference: NVIDIA FXAA white paper (Timothy Lottes, 2011).
 * No frame history, jitter, motion vectors or guest render-state changes. */
static const char *HLSL_FXAA =
"Texture2D t:register(t0);SamplerState s:register(s0);"
"cbuffer C:register(b0){float2 pixel;float2 grid;float4 unused[2];};"
"float luma(float3 c){return dot(c,float3(0.299,0.587,0.114));}"
"float4 main(float4 p:SV_Position,float2 uv:TEXCOORD):SV_Target{"
"float4 m=t.SampleLevel(s,uv,0);"
"float3 nw=t.SampleLevel(s,uv+float2(-1,-1)*pixel,0).rgb;"
"float3 ne=t.SampleLevel(s,uv+float2(1,-1)*pixel,0).rgb;"
"float3 sw=t.SampleLevel(s,uv+float2(-1,1)*pixel,0).rgb;"
"float3 se=t.SampleLevel(s,uv+float2(1,1)*pixel,0).rgb;"
"float lm=luma(m.rgb),lnw=luma(nw),lne=luma(ne),lsw=luma(sw),lse=luma(se);"
"float lo=min(lm,min(min(lnw,lne),min(lsw,lse)));"
"float hi=max(lm,max(max(lnw,lne),max(lsw,lse)));"
"if(hi-lo<max(0.0312,hi*0.125))return m;"
"float2 dir=float2(-((lnw+lne)-(lsw+lse)),(lnw+lsw)-(lne+lse));"
"float reduce=max((lnw+lne+lsw+lse)*(0.25*0.125),1.0/128.0);"
"dir=clamp(dir/(min(abs(dir.x),abs(dir.y))+reduce),-8.0,8.0)*pixel;"
"float3 a=0.5*(t.SampleLevel(s,uv-dir/6.0,0).rgb+t.SampleLevel(s,uv+dir/6.0,0).rgb);"
"float3 b=a*0.5+0.25*(t.SampleLevel(s,uv-dir*0.5,0).rgb+t.SampleLevel(s,uv+dir*0.5,0).rgb);"
"float lb=luma(b);return float4((lb<lo||lb>hi)?a:b,m.a);}";

/* Exact 2x1 or 2x2 box resolve at the selected internal resolution, BEFORE
 * ordinary window scaling. Load() avoids bilinear taps skipping SSAA samples. */
static const char *HLSL_SSAA =
"Texture2D t:register(t0);SamplerState s:register(s0);"
"cbuffer C:register(b0){float2 pixel;float2 grid;float4 unused[2];};"
"float4 main(float4 p:SV_Position,float2 uv:TEXCOORD):SV_Target{"
"int2 g=int2(grid);int2 origin=int2(p.xy)*g;float4 c=0;"
"[unroll]for(int y=0;y<2;y++){[unroll]for(int x=0;x<2;x++){"
"if(x<g.x&&y<g.y)c+=t.Load(int3(origin+int2(x,y),0));}}"
"return c/(g.x*g.y);}";

#endif
