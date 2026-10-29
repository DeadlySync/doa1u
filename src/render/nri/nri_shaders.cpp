#include "nri_shaders.h"
#include "nri_d3d11.h"
#include <string>
#include <stdexcept>

namespace doa1u {
std::vector<uint8_t> compile_shader(nri::GraphicsAPI api, const char* source, const char* profile) {
    if (api == nri::GraphicsAPI::D3D11) return d3d11::compile(source, profile);
    if (api == nri::GraphicsAPI::D3D12) {
        std::string text(source);
        const std::string binding = "register(b0)";
        for (size_t pos = 0; (pos = text.find(binding, pos)) != std::string::npos;) {
            text.replace(pos, binding.size(), "register(b0, space1)");
            pos += 20;
        }
        std::string model(profile);
        model.replace(3, 3, "5_1");
        return d3d11::compile(text.c_str(), model.c_str());
    }
    throw std::runtime_error("Unsupported shader backend");
}
}
