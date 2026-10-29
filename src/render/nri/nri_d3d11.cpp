#include "nri_d3d11.h"
#include <d3dcompiler.h>
#include <cstdio>
#include <cstring>
#include <stdexcept>

namespace doa1u::d3d11 {

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

}
