#pragma once
#include <cstdint>
#include <vector>

// Windows DXBC compiler: SM5.0 for D3D11, SM5.1 for D3D12.
namespace doa1u::d3d11 {
std::vector<uint8_t> compile(const char* source, const char* profile);
}
