#pragma once
#include <NRI.h>
#include <cstdint>
#include <vector>

namespace doa1u {
// Root constants are b0/space1 on D3D12 and push constants on Vulkan.
std::vector<uint8_t> compile_shader(nri::GraphicsAPI api, const char* source, const char* profile);
}
