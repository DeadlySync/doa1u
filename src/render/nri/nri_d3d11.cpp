#include "nri_d3d11.h"
#include "render/graphics_settings.h"
#include <d3d11.h>
#include <d3dcompiler.h>
#include <cstdio>
#include <cstring>
#include <stdexcept>

namespace doa1u::d3d11 {
namespace { ID3D11DeviceContext* context; }

std::vector<uint8_t> compile(const char* source, const char* profile) {
    ID3DBlob *blob = nullptr, *errors = nullptr;
    HRESULT result = D3DCompile(source, std::strlen(source), nullptr, nullptr, nullptr,
        "main", profile, 0, 0, &blob, &errors);
    if (errors) {
        std::fprintf(stderr, "[NRI] Shader: %s\n", (const char*)errors->GetBufferPointer());
        errors->Release();
    }
    if (FAILED(result)) {
        if (blob) blob->Release();
        throw std::runtime_error("Compile NRI/D3D11 shader failed");
    }
    const auto* bytes = (const uint8_t*)blob->GetBufferPointer();
    std::vector<uint8_t> code(bytes, bytes + blob->GetBufferSize());
    blob->Release();
    return code;
}

bool initialize_ui(void* window, nri::Device& device, const nri::CoreInterface& core) {
    auto* native = (ID3D11Device*)core.GetDeviceNativeObject(&device);
    native->GetImmediateContext(&context);
    return graphics_ui_init(window, native, context) != 0;
}

void draw_ui(const nri::CoreInterface& core, nri::Descriptor& output) {
    auto* rtv = (ID3D11RenderTargetView*)(uintptr_t)core.GetDescriptorNativeObject(&output);
    context->OMSetRenderTargets(1, &rtv, nullptr);
    graphics_ui_draw();
    context->OMSetRenderTargets(0, nullptr, nullptr);
}

void release_output() {
    if (context) { context->ClearState(); context->Flush(); }
}

void shutdown() {
    graphics_ui_shutdown();
    if (context) context->Release();
    context = nullptr;
}
}
