#pragma once
#include <NRI.h>
#include <cstdint>
#include <vector>

// Native D3D11 interop is confined to this bridge, not the scene renderer.
namespace doa1u::d3d11 {
std::vector<uint8_t> compile(const char* source, const char* profile);
bool initialize_ui(void* window, nri::Device& device, const nri::CoreInterface& core);
void draw_ui(const nri::CoreInterface& core, nri::Descriptor& output);
void release_output();
void shutdown();
}

