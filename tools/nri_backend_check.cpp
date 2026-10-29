// Headless synthetic rendering using the ACTUAL production renderer functions.
// No guest code, window, game data or input automation. One API per process.
#include "../src/render/nri/nv2a_backend_nri.cpp"
#include "third_party/imgui/imgui.h"
#include <d3d11.h>
#include <d3d11sdklayers.h>
#include <d3d12.h>
#include <d3d12sdklayers.h>

extern "C" {
void xbox_InputKeySet(int, int) {}
void xbox_InputKeysClear() {}
void game_soft_restart() {}
void rdoc_maybe_trigger(uint64_t) {}
const uint8_t* fmv_frame_acquire(unsigned*, unsigned*, uint64_t*, float[4]) { return nullptr; }
void fmv_frame_release() {}
long renderer_texture_generation() { return 0; }
const Nv2aBackend* nv2a_d3d11_backend() { return nullptr; }
void nv2a_backend_register(const Nv2aBackend*) {}
int nv2a_backend_decode_texture(const Nv2aTexture*, uint32_t*) { return 0; }
int nv2a_backend_p8_source(const Nv2aTexture*, const uint8_t**, const uint8_t**) { return 0; }
int graphics_widescreen() { return 0; }
int graphics_backend() { return 0; }
void graphics_render_size(unsigned* w, unsigned* h) { *w = 64; *h = 48; }
int graphics_aa_method() { return active_aa; }
unsigned graphics_ssaa_samples() { return ssaa_samples; }
int graphics_texture_filter() { return 1; }
unsigned graphics_anisotropy() { return 2; }
void graphics_window_apply(void*) {}
void graphics_ui_renderer_name(const char*) {}
int graphics_ui_message(void*, unsigned, uintptr_t, intptr_t) { return 0; }
int graphics_ui_init(void*, void*, void*) {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui::GetIO().IniFilename = nullptr;
    ImGui::GetIO().LogFilename = nullptr;
    return 1;
}
void graphics_ui_frame() {
    auto& io = ImGui::GetIO();
    io.DisplaySize = ImVec2(64, 48);
    io.DeltaTime = 1.0f / 60;
    ImGui::NewFrame();
    auto* list = ImGui::GetBackgroundDrawList();
    list->AddRectFilled(ImVec2(40, 4), ImVec2(56, 12), IM_COL32(255, 0, 0, 255));
    list->AddText(ImVec2(2, 24), IM_COL32_WHITE, "NRI");
    ImGui::Render();
}
void graphics_ui_draw() { graphics_ui_frame(); }
void graphics_ui_shutdown() { if (ImGui::GetCurrentContext()) ImGui::DestroyContext(); }
}

void check_api_messages() {
    check(core.DeviceWaitIdle(device), "Wait for API validation messages");
    unsigned errors = 0;
    auto* native = (IUnknown*)core.GetDeviceNativeObject(device);
    if (active_api == nri::GraphicsAPI::D3D11) {
        ID3D11InfoQueue* info = nullptr;
        if (SUCCEEDED(native->QueryInterface(IID_PPV_ARGS(&info)))) {
            for (UINT64 i = 0; i < info->GetNumStoredMessagesAllowedByRetrievalFilter(); ++i) {
                SIZE_T size = 0; info->GetMessage(i, nullptr, &size);
                std::vector<uint8_t> storage(size);
                auto* msg = (D3D11_MESSAGE*)storage.data();
                if (SUCCEEDED(info->GetMessage(i, msg, &size)) && msg->Severity <= D3D11_MESSAGE_SEVERITY_ERROR) {
                    std::fprintf(stderr,"[D3D11 validation] %s\n",msg->pDescription); ++errors;
                }
            }
            info->Release();
        }
    } else if (active_api == nri::GraphicsAPI::D3D12) {
        ID3D12InfoQueue* info = nullptr;
        if (SUCCEEDED(native->QueryInterface(IID_PPV_ARGS(&info)))) {
            for (UINT64 i = 0; i < info->GetNumStoredMessagesAllowedByRetrievalFilter(); ++i) {
                SIZE_T size = 0; info->GetMessage(i, nullptr, &size);
                std::vector<uint8_t> storage(size);
                auto* msg = (D3D12_MESSAGE*)storage.data();
                if (SUCCEEDED(info->GetMessage(i, msg, &size)) && msg->Severity <= D3D12_MESSAGE_SEVERITY_ERROR) {
                    std::fprintf(stderr,"[D3D12 validation] %s\n",msg->pDescription); ++errors;
                }
            }
            info->Release();
        }
    }
    if (errors) throw std::runtime_error("Native API validation errors");
}

int main(int argc, char** argv) {
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    try {
        if (argc < 2 || argc > 3) throw std::runtime_error("Usage: nri_backend_check d3d11|d3d12|vulkan");
        active_api = !std::strcmp(argv[1], "d3d11") ? nri::GraphicsAPI::D3D11 :
            !std::strcmp(argv[1], "d3d12") ? nri::GraphicsAPI::D3D12 : nri::GraphicsAPI::VK;
        QueryPerformanceFrequency(&timing_frequency);
        nri::DeviceCreationDesc dc = {};
        dc.graphicsAPI = active_api;
        dc.vkBindingOffsets.sRegister = 1;
        dc.enableNRIValidation = true;
        dc.enableGraphicsAPIValidation = option("RECOMP_NRI_VALIDATION");
        dc.callbackInterface.MessageCallback = message;
        dc.callbackInterface.AbortExecution = abort_execution;
        check(nri::nriCreateDevice(dc, device), "Create check device");
        check(nri::nriGetInterface(*device, NRI_INTERFACE(nri::CoreInterface), &core), "Get core");
        check(core.GetQueue(*device, nri::QueueType::GRAPHICS, 0, queue), "Get queue");
        nri::FenceDesc fd = {};
        check(core.CreateFence(*device, fd, fence), "Create fence");
        for (auto& slot : frames) {
            check(core.CreateCommandAllocator(*queue, slot.allocator), "Create allocator");
            slot.chunks.push_back(nullptr);
            check(core.CreateCommandBuffer(*slot.allocator, slot.chunks.back()), "Create commands");
            slot.commands = slot.chunks.back();
            nri::DescriptorPoolDesc pool = {};
            pool.descriptorSetMaxNum = pool.textureMaxNum = pool.samplerMaxNum = 1024;
            check(core.CreateDescriptorPool(*device, pool, slot.descriptors), "Create descriptor pool");
            slot.descriptor_pools.push_back(slot.descriptors);
            fd.initialValue = nri::SWAPCHAIN_SEMAPHORE;
            check(core.CreateFence(*device, fd, slot.image_acquired), "Create acquire semaphore");
        }
        frame = &frames[0];
        if (argc == 3 && !std::strcmp(argv[2], "--present")) {
            check(nri::nriGetInterface(*device, NRI_INTERFACE(nri::SwapChainInterface), &presentation), "Get swapchain");
            WNDCLASSW wc = {}; wc.lpfnWndProc = wndproc; wc.hInstance = GetModuleHandleW(nullptr);
            wc.lpszClassName = L"DOA1UNRICheck"; RegisterClassW(&wc);
            RECT rect = {0,0,64,48}; AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, FALSE);
            window = CreateWindowExW(0, wc.lpszClassName, L"NRI synthetic check (hidden)", WS_OVERLAPPEDWINDOW,
                0,0,rect.right-rect.left,rect.bottom-rect.top,nullptr,nullptr,wc.hInstance,nullptr);
            if (!window) throw std::runtime_error("Create hidden check window failed");
            // Deliberately never ShowWindow: this is not an interactive/game test.
            base_width = width = requested_width = render_width = 64;
            base_height = height = requested_height = render_height = 48;
            create_output();
            doa1u::ui::initialize(window, *device, FrameCount);
            initialized = true;
            for (unsigned i = 0; i < 12; ++i) {
                active_aa = i % 3 == 0 ? 0 : i % 3 == 1 ? 3 : 1;
                if (i == 4 || i == 8) {
                    unsigned w = i == 4 ? 96 : 64, h = i == 4 ? 72 : 48;
                    RECT size = {0,0,(LONG)w,(LONG)h}; AdjustWindowRect(&size, WS_OVERLAPPEDWINDOW,FALSE);
                    SetWindowPos(window,nullptr,0,0,size.right-size.left,size.bottom-size.top,SWP_NOZORDER|SWP_NOACTIVATE);
                    requested_width = w; requested_height = h;
                }
                if (i == 6) output_outdated = true; // Explicit same-size swapchain replacement.
                if (!ensure()) throw std::runtime_error("Synthetic frame unavailable");
                Nv2aVertex verts[3] = {{0,0,0,1,0xFF20A0E0,0,0}, {64,0,0,1,0xFF20A0E0,0,0}, {0,48,0,1,0xFF20A0E0,0,0}};
                Nv2aSurface surface = {}; surface.width = 64; surface.height = 48;
                Nv2aBatch batch = {}; batch.vertices = verts; batch.count = 3;
                if (i != 3) draw(&surface, &batch); // Pause/retained-scene presentation.
                flip();
            }
            check_api_messages();
            if (validation_errors) throw std::runtime_error("Presentation validation errors");
            cleanup();
            std::fprintf(stderr,"PASS %s: hidden swapchain, acquire/present, resize/recreate, pause and AA switching\n",argv[1]);
            return 0;
        }
        create_pipelines(nri::Format::RGBA8_UNORM);
        doa1u::ui::initialize(nullptr, *device, FrameCount);
        base_width = width = 64; base_height = height = 48;
        Texture result;
        nri::Buffer* readback = nullptr;
        const auto& limits = core.GetDeviceDesc(*device).memoryAlignment;
        unsigned pitch = (unsigned)align_up(width * 4, limits.uploadBufferTextureRow);
        nri::BufferDesc bd = {};
        bd.size = align_up(pitch * height, limits.uploadBufferTextureSlice);
        check(core.CreateCommittedBuffer(*device, nri::MemoryLocation::HOST_READBACK, 0, bd, readback), "Create readback");
        for (unsigned iteration = 0; iteration < 12; ++iteration) {
            active_aa = iteration % 4 == 0 ? 0 : iteration % 4 == 1 ? 3 : 1;
            ssaa_samples = iteration % 4 == 2 ? 2 : 4;
            render_width = base_width * aa_grid_x(active_aa);
            render_height = base_height * aa_grid_y(active_aa, ssaa_samples);
            core.ResetCommandAllocator(*frame->allocator);
            for (auto* pool : frame->descriptor_pools) core.ResetDescriptorPool(*pool);
            frame->descriptor_pool_index = frame->descriptor_sets_used = 0;
            frame->descriptors = frame->descriptor_pools.front();
            for (auto& arena : frame->vertices) arena.used = 0;
            for (auto& arena : frame->uploads) arena.used = 0;
            frame->chunk_index = frame->chunk_draws = 0;
            frame->commands = frame->chunks.front();
            check(core.BeginCommandBuffer(*frame->commands, frame->descriptors), "Begin check");
            QueryPerformanceCounter(&chunk_started);
            create_scene(nri::Format::RGBA8_UNORM);
            // Output remains base-resolution even when the scene is supersampled.
            unsigned saved_w = render_width, saved_h = render_height;
            render_width = base_width; render_height = base_height;
            create_color_target(result, nri::Format::RGBA8_UNORM);
            render_width = saved_w; render_height = saved_h;
            clear(0xF3, 0xFF000000, 0xFFFFFF00);
            Nv2aVertex verts[3] = {{0,0,0,1,0xFF20A0E0,0,0}, {64,0,0,1,0xFF20A0E0,0,0}, {0,48,0,1,0xFF20A0E0,0,0}};
            Nv2aSurface surface = {}; surface.width = 64; surface.height = 48;
            Nv2aBatch batch = {}; batch.vertices = verts; batch.count = 3;
            draw(&surface, &batch);
            // Exercise descriptor-pool rollover without changing the image.
            if (iteration == 0) {
                // draw() may have submitted a timed command chunk.
                end_rendering();
                transition(scene, nri::AccessBits::SHADER_RESOURCE, nri::Layout::SHADER_RESOURCE, nri::StageBits::FRAGMENT_SHADER);
                core.CmdSetPipelineLayout(*frame->commands, nri::BindPoint::GRAPHICS, *layout);
                for (unsigned i = 0; i < 1100; ++i) bind_image(scene.sample_view, 7);
            }
            Constants constants = {};
            constants.surf_w = 1.0f/render_width; constants.surf_h = 1.0f/render_height;
            constants.tex_w = (float)aa_grid_x(active_aa); constants.tex_h = (float)aa_grid_y(active_aa, ssaa_samples);
            scale_image(scene, result, width, height, false,
                active_aa == 3 ? fxaa_pipeline : active_aa == 1 ? ssaa_pipeline : present_pipeline, &constants);
            doa1u::ui::prepare(*frame->commands);
            nri::AttachmentDesc color = {}; color.descriptor = result.view;
            nri::RenderingDesc rendering_desc = {}; rendering_desc.colors = &color; rendering_desc.colorNum = 1;
            core.CmdBeginRendering(*frame->commands, rendering_desc);
            doa1u::ui::draw(*frame->commands, width, height, nri::Format::RGBA8_UNORM);
            core.CmdEndRendering(*frame->commands);
            transition(result, nri::AccessBits::COPY_SOURCE, nri::Layout::COPY_SOURCE, nri::StageBits::COPY);
            nri::TextureRegionDesc region = {}; region.width = width; region.height = height; region.depth = 1;
            nri::TextureDataLayoutDesc data_layout = {0, pitch, (uint32_t)bd.size};
            core.CmdReadbackTextureToBuffer(*frame->commands, *readback, data_layout, *result.object, region);
            submit_commands();
            nri::FenceSubmitDesc signal = {fence, iteration + 1, nri::StageBits::ALL};
            nri::QueueSubmitDesc submit = {}; submit.signalFences = &signal; submit.signalFenceNum = 1;
            check(core.QueueSubmit(*queue, submit), "Signal readback");
            core.Wait(*fence, iteration + 1);
            doa1u::ui::end_frame();
            auto* pixels = (const uint8_t*)core.MapBuffer(*readback, 0, bd.size);
            if (!pixels) throw std::runtime_error("Map readback failed");
            auto pixel = [&](unsigned x, unsigned y) { return pixels + y*pitch + x*4; };
            bool color_ok = std::abs((int)pixel(8,8)[0] - 32) <= 1 && std::abs((int)pixel(8,8)[1] - 160) <= 1 && std::abs((int)pixel(8,8)[2] - 224) <= 1;
            bool black = pixel(60,44)[0] < 3 && pixel(60,44)[1] < 3 && pixel(60,44)[2] < 3;
            bool red_ui = pixel(48,8)[0] > 250 && pixel(48,8)[1] < 3 && pixel(48,8)[2] < 3;
            core.UnmapBuffer(*readback);
            if (!color_ok || !black || !red_ui) throw std::runtime_error("Pixel mismatch: scene orientation/color or post-AA ImGui");
            destroy(result); destroy(scene); destroy(depth);
        }
        core.DestroyBuffer(readback);
        check_api_messages();
        if (validation_errors) throw std::runtime_error("NRI validation reported errors");
        cleanup();
        std::fprintf(stderr,"PASS %s: production pipelines/draw/AA/readback + NRI ImGui, 12 frames (Off/FXAA/SSAA2x/4x)\n", argv[1]);
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "FAIL: %s\n", error.what());
        cleanup();
        return 1;
    }
}
