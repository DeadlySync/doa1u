#include "nri_imgui.h"
#include <Extensions/NRIImgui.h>
#include <Extensions/NRIStreamer.h>
#include "render/graphics_settings.h"
#include "third_party/imgui/imgui.h"
#include <stdexcept>
#include <cstddef>

namespace doa1u::ui {
namespace {
nri::ImguiInterface ui = {};
nri::StreamerInterface streaming = {};
nri::Imgui* renderer;
nri::Streamer* streamer;
nri::ImguiRenderData data = {};
void check(nri::Result result) {
    if (result != nri::Result::SUCCESS) throw std::runtime_error("NRI ImGui initialization failed");
}
// NRI v190 consumes these public ImGui structures via its bundled ABI.
static_assert(IMGUI_VERSION_NUM >= 19290);
static_assert(sizeof(ImTextureData) == 96);
static_assert(sizeof(ImDrawVert) == 20 && sizeof(ImDrawIdx) == 2);
static_assert(offsetof(ImTextureData, TexID) == 24);
}

void initialize(void* window, nri::Device& device, unsigned queued_frames) {
    check(nri::nriGetInterface(device, NRI_INTERFACE(nri::ImguiInterface), &ui));
    check(nri::nriGetInterface(device, NRI_INTERFACE(nri::StreamerInterface), &streaming));
    nri::ImguiDesc desc = {};
    desc.descriptorPoolSize = 8192;
    check(ui.CreateImgui(device, desc, renderer));
    nri::StreamerDesc sd = {};
    sd.constantBufferMemoryLocation = nri::MemoryLocation::HOST_UPLOAD;
    sd.dynamicBufferMemoryLocation = nri::MemoryLocation::HOST_UPLOAD;
    sd.dynamicBufferDesc.usage = nri::BufferUsageBits::VERTEX | nri::BufferUsageBits::INDEX;
    sd.queuedFrameNum = queued_frames;
    sd.hostDataCapacity = 16 * 1024 * 1024;
    check(streaming.CreateStreamer(device, sd, streamer));
    if (!graphics_ui_init(window, nullptr, nullptr)) throw std::runtime_error("ImGui Win32 initialization failed");
    auto& io = ImGui::GetIO();
    io.BackendRendererName = "doa1u_nri";
    io.BackendFlags |= ImGuiBackendFlags_RendererHasTextures | ImGuiBackendFlags_RendererHasVtxOffset;
    auto& platform = ImGui::GetPlatformIO();
    platform.Renderer_TextureMaxWidth = platform.Renderer_TextureMaxHeight = 16384;
}

void prepare(nri::CommandBuffer& commands) {
    graphics_ui_frame();
    const auto* draws = ImGui::GetDrawData();
    nri::CopyImguiDataDesc copy = {};
    copy.drawLists = draws->CmdLists.Data;
    copy.drawListNum = (uint32_t)draws->CmdLists.Size;
    copy.textures = draws->Textures ? draws->Textures->Data : nullptr;
    copy.textureNum = draws->Textures ? (uint32_t)draws->Textures->Size : 0;
    data = {};
    ui.CmdCopyImguiData(commands, *streamer, *renderer, copy, data);
}

void draw(nri::CommandBuffer& commands, unsigned width, unsigned height, nri::Format format) {
    if (!data.drawCmdNum) return;
    nri::DrawImguiDesc desc = {};
    desc.displaySize = {(nri::Dim_t)width, (nri::Dim_t)height};
    desc.hdrScale = 1.0f;
    desc.attachmentFormat = format;
    ui.CmdDrawImgui(commands, data, desc);
}

void end_frame() { streaming.EndStreamerFrame(*streamer); }

void shutdown() {
    if (renderer) ui.DestroyImgui(renderer);
    renderer = nullptr;
    if (streamer) streaming.DestroyStreamer(streamer);
    streamer = nullptr;
    graphics_ui_shutdown();
}
}

