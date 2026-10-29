/* Actual production AA shaders on D3D11 WARP. No game, window or hardware GPU. */
#include <d3d11.h>
#include <d3dcompiler.h>
#include <wrl/client.h>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <stdexcept>
#include "render/common/antialiasing.h"
using Microsoft::WRL::ComPtr;
struct Pixel { float r, g, b, a; };
static ComPtr<ID3D11Device> device;
static ComPtr<ID3D11DeviceContext> context;
static void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
static void check(HRESULT hr) { require(SUCCEEDED(hr), "D3D11 operation failed"); }
static ComPtr<ID3DBlob> compile(const char *text, const char *profile)
{
    ComPtr<ID3DBlob> code, errors;
    HRESULT hr = D3DCompile(text, strlen(text), nullptr, nullptr, nullptr, "main", profile, 0, 0, &code, &errors);
    if (FAILED(hr) && errors) std::fprintf(stderr, "%s", (char *)errors->GetBufferPointer());
    check(hr); return code;
}
static std::vector<Pixel> render(const char *shader, const std::vector<Pixel> &input,
    unsigned sw, unsigned sh, unsigned w, unsigned h, unsigned gx=1, unsigned gy=1)
{
    D3D11_TEXTURE2D_DESC desc = {};
    desc.Width=sw; desc.Height=sh; desc.MipLevels=desc.ArraySize=1;
    desc.Format=DXGI_FORMAT_R32G32B32A32_FLOAT; desc.SampleDesc.Count=1;
    desc.BindFlags=D3D11_BIND_SHADER_RESOURCE;
    D3D11_SUBRESOURCE_DATA data = {input.data(), sw*sizeof(Pixel), 0};
    ComPtr<ID3D11Texture2D> source, target, readback;
    check(device->CreateTexture2D(&desc, &data, &source));
    desc.Width=w; desc.Height=h; desc.BindFlags=D3D11_BIND_RENDER_TARGET;
    check(device->CreateTexture2D(&desc, nullptr, &target));
    desc.BindFlags=0; desc.Usage=D3D11_USAGE_STAGING; desc.CPUAccessFlags=D3D11_CPU_ACCESS_READ;
    check(device->CreateTexture2D(&desc, nullptr, &readback));
    ComPtr<ID3D11RenderTargetView> rtv;
    ComPtr<ID3D11ShaderResourceView> srv;
    check(device->CreateRenderTargetView(target.Get(), nullptr, &rtv));
    check(device->CreateShaderResourceView(source.Get(), nullptr, &srv));
    const char *vs_text="struct O{float4 p:SV_Position;float2 uv:TEXCOORD;};"
        "O main(uint id:SV_VertexID){O o;o.uv=float2((id<<1)&2,id&2);"
        "o.p=float4(o.uv*float2(2,-2)+float2(-1,1),0,1);return o;}";
    auto vs_code=compile(vs_text,"vs_5_0"), ps_code=compile(shader,"ps_5_0");
    ComPtr<ID3D11VertexShader> vs; ComPtr<ID3D11PixelShader> ps;
    check(device->CreateVertexShader(vs_code->GetBufferPointer(),vs_code->GetBufferSize(),nullptr,&vs));
    check(device->CreatePixelShader(ps_code->GetBufferPointer(),ps_code->GetBufferSize(),nullptr,&ps));
    float constants[12] = {1.f/sw,1.f/sh,(float)gx,(float)gy};
    D3D11_BUFFER_DESC cbdesc = {}; cbdesc.ByteWidth=sizeof constants; cbdesc.BindFlags=D3D11_BIND_CONSTANT_BUFFER;
    D3D11_SUBRESOURCE_DATA cbdata = {constants,0,0}; ComPtr<ID3D11Buffer> cb;
    check(device->CreateBuffer(&cbdesc,&cbdata,&cb));
    D3D11_SAMPLER_DESC sampler_desc = {};
    sampler_desc.Filter=D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    sampler_desc.AddressU=sampler_desc.AddressV=sampler_desc.AddressW=D3D11_TEXTURE_ADDRESS_CLAMP;
    sampler_desc.MaxLOD=D3D11_FLOAT32_MAX;
    ComPtr<ID3D11SamplerState> sampler; check(device->CreateSamplerState(&sampler_desc,&sampler));
    D3D11_VIEWPORT viewport={0,0,(float)w,(float)h,0,1};
    context->RSSetViewports(1,&viewport);
    context->OMSetRenderTargets(1,rtv.GetAddressOf(),nullptr);
    context->VSSetShader(vs.Get(),nullptr,0); context->PSSetShader(ps.Get(),nullptr,0);
    context->PSSetShaderResources(0,1,srv.GetAddressOf()); context->PSSetSamplers(0,1,sampler.GetAddressOf());
    context->PSSetConstantBuffers(0,1,cb.GetAddressOf());
    context->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    context->Draw(3,0);
    ID3D11ShaderResourceView *none=nullptr; context->PSSetShaderResources(0,1,&none);
    context->OMSetRenderTargets(0,nullptr,nullptr);
    context->CopyResource(readback.Get(),target.Get());
    D3D11_MAPPED_SUBRESOURCE mapped={}; check(context->Map(readback.Get(),0,D3D11_MAP_READ,0,&mapped));
    std::vector<Pixel> result(w*h);
    for(unsigned y=0;y<h;++y) memcpy(result.data()+y*w,(char *)mapped.pData+y*mapped.RowPitch,w*sizeof(Pixel));
    context->Unmap(readback.Get(),0); context->ClearState();
    return result;
}
int main()
{
    try {
        check(D3D11CreateDevice(nullptr,D3D_DRIVER_TYPE_WARP,nullptr,0,nullptr,0,D3D11_SDK_VERSION,&device,nullptr,&context));
        std::vector<Pixel> flat(32*32,{.25f,.5f,.75f,.7f});
        auto result=render(HLSL_FXAA,flat,32,32,32,32);
        for(auto p:result) require(std::abs(p.r-.25f)<1e-5f && std::abs(p.g-.5f)<1e-5f &&
            std::abs(p.b-.75f)<1e-5f && std::abs(p.a-.7f)<1e-5f,"FXAA changed flat color/borders/alpha");
        for(unsigned y=0;y<32;++y)for(unsigned x=0;x<32;++x) {
            float c=x>y?1.f:0.f; flat[y*32+x]={c,c,c,.7f};
        }
        result=render(HLSL_FXAA,flat,32,32,32,32);
        unsigned smooth=0;
        for(auto p:result) {
            require(std::isfinite(p.r)&&p.r>=0&&p.r<=1&&std::abs(p.a-.7f)<1e-5f,"Invalid FXAA result");
            smooth+=p.r>.01f&&p.r<.99f;
        }
        require(smooth>20,"FXAA did not smooth the diagonal");
        require(result[4*32+24].r>.999f&&result[24*32+4].r<.001f,"FXAA blurred distant flat regions");
        for(unsigned samples: {2u,4u}) {
            unsigned gx=aa_grid_x(1),gy=aa_grid_y(1,samples),w=13,h=7,sw=w*gx,sh=h*gy;
            std::vector<Pixel> source(sw*sh);
            for(unsigned y=0;y<sh;++y)for(unsigned x=0;x<sw;++x)
                source[y*sw+x]={(float)x/sw,(float)y/sh,(float)((x+y)&1),.4f};
            auto output=render(HLSL_SSAA,source,sw,sh,w,h,gx,gy);
            for(unsigned y=0;y<h;++y)for(unsigned x=0;x<w;++x) {
                Pixel expected={};
                for(unsigned j=0;j<gy;++j)for(unsigned i=0;i<gx;++i) {
                    auto p=source[(y*gy+j)*sw+x*gx+i]; expected.r+=p.r/samples;
                    expected.g+=p.g/samples; expected.b+=p.b/samples; expected.a+=p.a/samples;
                }
                auto p=output[y*w+x];
                require(std::abs(p.r-expected.r)<1e-5f&&std::abs(p.g-expected.g)<1e-5f&&
                    std::abs(p.b-expected.b)<1e-5f&&std::abs(p.a-expected.a)<1e-5f,"Incorrect SSAA resolve");
            }
        }
        require(aa_grid_x(0)==1&&aa_grid_y(0,4)==1&&aa_grid_x(3)==1&&aa_grid_y(3,4)==1,"Off/FXAA changed render size");
        std::puts("PASS WARP: FXAA diagonal smoothing, flat regions/borders/alpha; exact 2x/4x SSAA resolve including NPOT dimensions");
        return 0;
    } catch(const std::exception &e) { std::fprintf(stderr,"FAIL AA: %s\n",e.what()); return 1; }
}
