// Headless synthetic rendering using the ACTUAL production renderer functions.
// No guest code, game data or input automation. Optional hidden window. One API per process.
#include "../src/render/nri/nv2a_backend_nri.cpp"
#include "third_party/imgui/imgui.h"
#include <d3d11.h>
#include <d3d11sdklayers.h>
#include <d3d12.h>
#include <d3d12sdklayers.h>

static bool test_sharp2d = true, test_snn2d = false;
static int test_wide = 0;
static uint32_t test_texture_alpha = 255;
static unsigned test_msaa_requested = 4;
static int test_pause_remaining=0;
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
int nv2a_backend_decode_texture(const Nv2aTexture* t, uint32_t* pixels) {
    for (unsigned y=0; y<t->height; ++y)
        for (unsigned x=0; x<t->width; ++x)
            pixels[y*t->width+x] = (test_texture_alpha<<24) | (x % 2 ? 0xFFFFFF : 0);
    return 1;
}
int nv2a_backend_p8_source(const Nv2aTexture*, const uint8_t**, const uint8_t**) { return 0; }
int graphics_widescreen() { return test_wide; }
int graphics_backend() { return 0; }
int graphics_game_paused() { return test_pause_remaining>0; }
void graphics_render_size(unsigned* w, unsigned* h) { *w = 64; *h = 48; }
int graphics_aa_method() { return active_aa; }
unsigned graphics_ssaa_samples() { return ssaa_samples; }
unsigned graphics_msaa_samples() { return test_msaa_requested; }
int graphics_texture_filter() { return 1; }
int graphics_sharp_2d() { return test_sharp2d; }
static bool test_lanczos = false;
static float test_lanczos_ar = 0.8f;
int graphics_lanczos_2d() { return test_lanczos; }
float graphics_lanczos_ar() { return test_lanczos_ar; }
int graphics_snn_2d() { return test_snn2d; }
unsigned graphics_anisotropy() { return 2; }
void graphics_window_apply(void*) {}
void *graphics_take_startup_window() { return nullptr; }
int graphics_window_defer_message(void*,unsigned,uintptr_t,intptr_t) { return 0; }
void graphics_window_dispatch_pending() {}
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
    if(test_pause_remaining>0)--test_pause_remaining;
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
        if (argc < 2 || argc > 3) throw std::runtime_error("Usage: nri_backend_check d3d11|d3d12|vulkan [--present|--filter|--smaa|--msaa|--sharp2d|--snn|--dimming]");
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
        if (active_api == nri::GraphicsAPI::D3D12) {
            ID3D12InfoQueue* info=nullptr;
            auto* native=(IUnknown*)core.GetDeviceNativeObject(device);
            if (SUCCEEDED(native->QueryInterface(IID_PPV_ARGS(&info)))) {
                info->SetBreakOnSeverity(D3D12_MESSAGE_SEVERITY_ERROR,FALSE);
                info->SetBreakOnSeverity(D3D12_MESSAGE_SEVERITY_CORRUPTION,FALSE);
                info->Release();
            }
        }
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
            unsigned device_msaa = supported_msaa;
            for (unsigned i = 0; i < 20; ++i) {
                const int methods[] = {0,4,2,2,3,1,4,2,0,4};
                active_aa = methods[i%10];
                test_msaa_requested = 2u << (i%3);
                if (i == 4 || i == 8) {
                    unsigned w = i == 4 ? 96 : 64, h = i == 4 ? 72 : 48;
                    RECT size = {0,0,(LONG)w,(LONG)h}; AdjustWindowRect(&size, WS_OVERLAPPEDWINDOW,FALSE);
                    SetWindowPos(window,nullptr,0,0,size.right-size.left,size.bottom-size.top,SWP_NOZORDER|SWP_NOACTIVATE);
                    requested_width = w; requested_height = h;
                }
                if (i == 6) output_outdated = true; // Explicit same-size swapchain replacement.
                supported_msaa = i==12 ? 1 : i==13 ? (device_msaa & 3u) : device_msaa;
                if (!ensure()) throw std::runtime_error("Synthetic frame unavailable");
                unsigned expected_samples = active_aa==2 ? test_msaa_requested : 1;
                while (expected_samples>1 && !(supported_msaa & expected_samples)) expected_samples/=2;
                if (scene_samples!=expected_samples) throw std::runtime_error("MSAA capability fallback failed");
                Nv2aVertex verts[3] = {{0,0,0,1,0xFF20A0E0,0,0}, {64,0,0,1,0xFF20A0E0,0,0}, {0,48,0,1,0xFF20A0E0,0,0}};
                Nv2aSurface surface = {}; surface.width = 64; surface.height = 48;
                Nv2aBatch batch = {}; batch.vertices = verts; batch.count = 3;
                test_sharp2d = i != 10;
                test_lanczos = (i % 2) != 0;
                test_lanczos_ar = (i % 3) * 0.5f;
                test_snn2d = (i/2)%2 != 0;
                if (i != 3 && i != 5) {
                    draw(&surface, &batch);
                    Nv2aTexture tex={}; tex.width=tex.height=64; tex.filter=2u<<24|2u<<16;
                    batch.screen_space=0; batch.vertex_domain=NV2A_VERTEX_DOMAIN_SCREEN; batch.texture=&tex;
                    for (auto& v:verts) { v.u=v.x/4; v.v=v.y/4; v.diffuse=0x80FFFFFF; }
                    draw(&surface,&batch);
                } // Pause includes a resolution/AA change with retained 2D.

                if(i==7) {
                    auto before=frame_number;test_pause_remaining=5;
                    backend_flip();
                    if(test_pause_remaining||frame_number-before!=5)throw std::runtime_error("Paused overlay must repaint without guest flips and return after resume");
                } else flip();
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
        bool msaa_check = argc == 3 && !std::strcmp(argv[2], "--msaa");
        bool smaa_check = argc == 3 && !std::strcmp(argv[2], "--smaa");
        bool snn_check = argc == 3 && !std::strcmp(argv[2], "--snn");
        bool sharp_check = snn_check || (argc == 3 && !std::strcmp(argv[2], "--sharp2d"));
        bool dimming_check = argc == 3 && !std::strcmp(argv[2], "--dimming");
        bool filtering_check = argc == 3 && !std::strcmp(argv[2], "--filter");
        double contrast[8] = {};
        if (snn_check) test_texture_alpha=128;
        for (unsigned iteration = 0; iteration < (snn_check ? 20u : filtering_check ? 8u : 12u); ++iteration) {
            active_aa = iteration % 4 == 0 ? 0 : iteration % 4 == 1 ? 3 : 1;
            ssaa_samples = iteration % 4 == 2 ? 2 : 4;
            if (smaa_check) active_aa = 4;
            if (sharp_check) { test_sharp2d=true; active_aa = iteration % 5; scene_samples=active_aa==2?4:1; active_sampler=iteration%7; test_snn2d=snn_check && (iteration/2)%2;
                if (snn_check) { active_aa=(iteration/4)%5; scene_samples=active_aa==2?4:1; } }
            if (msaa_check) { active_aa = 2; scene_samples = 2u << (iteration % 3); if (!(supported_msaa & scene_samples)) continue; }
            if (filtering_check) { active_aa = 0; active_sampler = iteration < 3 ? (iteration == 0 ? 0 : 1) : iteration - 1; }
            render_width = base_width * aa_grid_x(active_aa);
            render_height = base_height * aa_grid_y(active_aa, ssaa_samples);
            core.ResetCommandAllocator(*frame->allocator);
            for (auto* pool : frame->descriptor_pools) core.ResetDescriptorPool(*pool);
            if (frame->smaa_descriptors) core.ResetDescriptorPool(*frame->smaa_descriptors);
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
            unsigned saved_samples = scene_samples; scene_samples = 1;
            create_color_target(result, nri::Format::RGBA8_UNORM);
            scene_samples = saved_samples;
            render_width = saved_w; render_height = saved_h;
            if (dimming_check) test_wide=(iteration/2)%2;
            clear(0xF3, dimming_check ? 0xFFFFFFFF : 0xFF000000, 0xFFFFFF00);
            Nv2aVertex verts[3] = {{0,0,0,1,0xFF20A0E0,0,0}, {64,0,0,1,0xFF20A0E0,0,0}, {0,48,0,1,0xFF20A0E0,0,0}};
            Nv2aSurface surface = {}; surface.width = 64; surface.height = 48;
            Nv2aBatch batch = {}; batch.vertices = verts; batch.count = 3;
            if (smaa_check && iteration % 2) for (auto& v : verts) v.diffuse = 0x8020A0E0;
            Nv2aTexture texture = {}; texture.width = texture.height = 64;
            if (filtering_check) {
                batch.texture = &texture;
                float dx = iteration < 2 || iteration >= 4 ? 0.25f : 8.125f;
                float dy = iteration < 2 ? 0.25f : iteration >= 4 ? (float)(2u << (iteration - 4)) : 8.0f;
                for (auto& v : verts) { v.diffuse = 0xFFFFFFFF; v.u = v.x * dx; v.v = v.y * dy; }
            }
            Nv2aRenderState state = {};
            if (msaa_check) { state.depth_test_enable=state.depth_write=1; batch.state=&state; }
            if (!dimming_check) draw(&surface, &batch);
            if (msaa_check) {
                // Far geometry must not overwrite the nearer samples/depth.
                for (auto& v : verts) { v.z=16777215.0f; v.diffuse=0xFFFF0000; }
                draw(&surface,&batch);
            }
            if (dimming_check) {
                // Captured training overlay: black alpha 0x90, 1/32-pixel bias.
                // Garbage UVs are irrelevant once the executor disables texture 0.
                Nv2aVertex q[6]={{0.03125f,0.03125f,0,1,0x90000000,27.5f,25.25f},
                    {64.03125f,0.03125f,0,1,0x90000000,30.75f,25.25f},
                    {0.03125f,48.03125f,0,1,0x90000000,27.5f,30},
                    {64.03125f,0.03125f,0,1,0x90000000,30.75f,25.25f},
                    {0.03125f,48.03125f,0,1,0x90000000,27.5f,30},
                    {64.03125f,48.03125f,0,1,0x90000000,1e-38f,8e-39f}};
                Nv2aRenderState dim={}; dim.blend_enable=1;
                Nv2aBatch overlay={}; overlay.vertices=q; overlay.count=6;
                overlay.state=&dim; overlay.vertex_domain=NV2A_VERTEX_DOMAIN_SCREEN;
                draw(&surface,&overlay);
                if (!hud_tails[&scene].draws.back().full_canvas)
                    throw std::runtime_error("Biased dimming rectangle not recognized as full canvas");
            }
            // Exercise descriptor-pool rollover without changing the image.
            if (iteration == 0 && !filtering_check && !msaa_check) {
                // draw() may have submitted a timed command chunk.
                end_rendering();
                transition(scene, nri::AccessBits::SHADER_RESOURCE, nri::Layout::SHADER_RESOURCE, nri::StageBits::FRAGMENT_SHADER);
                core.CmdSetPipelineLayout(*frame->commands, nri::BindPoint::GRAPHICS, *layout);
                for (unsigned i = 0; i < 1100; ++i) bind_image(scene.sample_view, 7);
            }
            if (sharp_check) {
                Nv2aVertex quad[6]={{4,14,0,1,0xFFFFFFFF,0.1f,0},{28,14,0,1,0xFFFFFFFF,6.1f,0},{4,22,0,1,0xFFFFFFFF,0.1f,2},
                    {4,22,0,1,0xFFFFFFFF,0.1f,2},{28,14,0,1,0xFFFFFFFF,6.1f,0},{28,22,0,1,0xFFFFFFFF,6.1f,2}};
                Nv2aTexture stripes={}; stripes.width=stripes.height=64; stripes.offset=iteration+100;
                stripes.filter=(2u<<24)|(2u<<16);
                Nv2aBatch hud={}; hud.vertices=quad; hud.count=6; hud.texture=&stripes; hud.screen_space=0; hud.vertex_domain=nv2a_vertex_domain_from_handle(0x144);
                test_wide=1; hud.presentation=NV2A_PRESENTATION_WORLD;
                draw(&surface,&hud);
                if (hud_tails[&scene].draws.back().constants.layout_x!=0.75f)
                    throw std::runtime_error("FVF HUD stretched as world geometry in widescreen");
                test_wide=0;
                if (hud_tails[&scene].draws.size()!=1) throw std::runtime_error("Missing 2D capture");
                // A later world draw must invalidate rather than hoist the old UI.
                draw(&surface,&batch);
                if (hud_tails.count(&scene)) throw std::runtime_error("UI reordered across world draw");
                draw(&surface,&hud);
                Nv2aVertex alpha_quad[6]={{30,14,0,1,0x80FFFFFF,0,0},{36,14,0,1,0x80FFFFFF,0,0},{30,22,0,1,0x80FFFFFF,0,0},
                    {30,22,0,1,0x80FFFFFF,0,0},{36,14,0,1,0x80FFFFFF,0,0},{36,22,0,1,0x80FFFFFF,0,0}};
                Nv2aRenderState alpha_state={}; alpha_state.blend_enable=1;
                Nv2aBatch alpha_hud={}; alpha_hud.vertices=alpha_quad; alpha_hud.count=6; alpha_hud.state=&alpha_state; alpha_hud.screen_space=0; alpha_hud.vertex_domain=nv2a_vertex_domain_from_handle(0x144);
                draw(&surface,&alpha_hud);
                auto* cached=get_texture(&stripes);
                std::vector<uint32_t> changed(64*64,0xFFFF0000);
                upload_texture(*cached,changed.data(),64,64);
                if (test_snn2d) {
                    auto* old_filtered=cached->snn_filtered->object;
                    snn_image(*cached);
                    if (cached->snn_revision!=cached->revision || cached->snn_filtered->object==old_filtered)
                        throw std::runtime_error("SNN cache did not invalidate after source upload");
                }
                if (hud_tails[&scene].draws.size()!=2) throw std::runtime_error("Invalid trailing 2D run");
                test_sharp2d=false;
                if (sampler_2d(&stripes)!=11) throw std::runtime_error("Original 2D filtering not restored");
                test_sharp2d=true;
                test_wide=1;
                auto wide_vp=hud_viewport(1920,1080);
                test_sharp2d=false;
                auto original_wide_vp=hud_viewport(1920,1080);
                if (wide_vp.width!=1920 || wide_vp.height!=1080 || wide_vp.x!=original_wide_vp.x || wide_vp.y!=original_wide_vp.y ||
                    wide_vp.width!=original_wide_vp.width || wide_vp.height!=original_wide_vp.height)
                    throw std::runtime_error("Sharp checkbox changed widescreen HUD size");
                test_sharp2d=true;
                test_wide=0;
                auto vp=hud_viewport(1536,1152);
                test_sharp2d=false;
                auto original_vp=hud_viewport(1536,1152);
                if (vp.width!=1536 || vp.height!=1152 || vp.x!=original_vp.x || vp.y!=original_vp.y ||
                    vp.width!=original_vp.width || vp.height!=original_vp.height)
                    throw std::runtime_error("Sharp checkbox changed 4:3 HUD size");
                test_sharp2d=true;
                Nv2aBatch world=hud; world.presentation=NV2A_PRESENTATION_BACKGROUND;
                if (is_2d(world)) throw std::runtime_error("Stage background classified as HUD");
                world.presentation=0; world.screen_space=1; world.vertex_domain=NV2A_VERTEX_DOMAIN_WORLD;
                if (is_2d(world)) throw std::runtime_error("World FVF overridden by legacy screen hint");
                world.vertex_domain=NV2A_VERTEX_DOMAIN_SCREEN; state.depth_test_enable=1; world.state=&state;
                if (is_2d(world)) throw std::runtime_error("Depth effect classified as HUD");
            }
            Texture& scene_input=(sharp_check || (dimming_check && iteration%2)) ? hud_tails[&scene].before : scene;
            Constants constants = {};
            constants.surf_w = 1.0f/render_width; constants.surf_h = 1.0f/render_height;
            constants.tex_w = (float)aa_grid_x(active_aa); constants.tex_h = (float)aa_grid_y(active_aa, ssaa_samples);
            if (smaa_check || (sharp_check && active_aa==4)) smaa_image(scene_input,result);
            else scale_image(scene_input, result, width, height, false,
                active_aa == 3 ? fxaa_pipeline : active_aa == 1 ? ssaa_pipeline : present_pipeline, &constants);
            if (sharp_check) {
                // Toggle while retaining the very same semantic HUD snapshots.
                test_sharp2d=iteration%2==0;
                render_hud(hud_tails[&scene],result,width,height);
            }
            if (dimming_check && iteration%2) render_hud(hud_tails[&scene],result,width,height);
            transition(result,nri::AccessBits::COLOR_ATTACHMENT,nri::Layout::COLOR_ATTACHMENT,nri::StageBits::COLOR_ATTACHMENT);
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
            if (dimming_check) {
                for (unsigned x : {2u,16u,32u,48u,61u})
                    for (unsigned c=0;c<3;++c)
                        if (std::abs((int)pixel(x,24)[c]-111)>2)
                            throw std::runtime_error("Dimming is not uniform across widescreen/diagonal");
            }
            if (smaa_check || msaa_check) {
                unsigned softened=0;
                for (unsigned y=12;y<22;++y) for (unsigned x=12;x<54;++x) {
                    const auto* c=pixel(x,y);
                    if (c[0]>1 && c[0]<31) ++softened;
                    unsigned expected_alpha = smaa_check && iteration % 2 && ((x+0.5f)/64 + (y+0.5f)/48 < 1) ? 128 : 255;
                    if (c[3]!=expected_alpha) throw std::runtime_error("AA changed source alpha");
                }
                std::fprintf(stderr,"AA %s mode %s samples %u softened %u\n",argv[1],smaa_check?"SMAA":"MSAA",scene_samples,softened);
                if (softened<3) throw std::runtime_error("AA did not smooth geometry edge");
            }
            if (filtering_check) {
                int lo = 255, hi = 0;
                for (unsigned x = 2; x < 26; ++x) { int value = pixel(x,16)[0]; lo = std::min(lo,value); hi = std::max(hi,value); }
                contrast[iteration] = hi-lo;
                std::fprintf(stderr,"FILTER %s case %u sampler %u contrast %.0f center %u\n",argv[1],iteration,active_sampler,contrast[iteration],pixel(8,16)[0]);
            }
            if (sharp_check) {
                unsigned dark=0, light=0, mixed=0;
                for (unsigned x=5;x<27;++x) {
                    auto* c=pixel(x,16);
                    if (c[0]<2 && c[1]<2 && c[2]<2) ++dark;
                    else if (c[0]>253 && c[1]>253 && c[2]>253) ++light;
                    else if (std::abs((int)c[0]-(int)c[1])>1 || std::abs((int)c[1]-(int)c[2])>1)
                        throw std::runtime_error("Mutable source texture leaked into HUD");
                    else ++mixed;
                }
                if (snn_check) {
                    auto source_value=[&](int i) -> float {
                        i=(i%64+64)%64;
                        if (!test_snn2d) return i%2?255.0f:0.0f;
                        if (i==0) return 0;
                        if (i==63) return 255;
                        return i%2?102.0f:153.0f;
                    };
                    for (unsigned x=5;x<27;++x) {
                        float u=0.1f+(x+0.5f-4)*0.25f;
                        float expected;
                        if (test_sharp2d) expected=source_value((int)std::floor(u));
                        else { float p=u-0.5f;int i=(int)std::floor(p);float f=p-i;
                            expected=source_value(i)*(1-f)+source_value(i+1)*f; }
                        const auto* c=pixel(x,16);
                        if (c[3]!=128 || std::abs(c[0]-expected)>2 || std::abs(c[1]-expected)>2 || std::abs(c[2]-expected)>2)
                            throw std::runtime_error("SNN/source-then-sampler combination pixel mismatch");
                    }
                }
                auto* blended=pixel(32,16);
                if (std::abs((int)blended[0]-144)>1 || std::abs((int)blended[1]-208)>1 || std::abs((int)blended[2]-240)>1 || blended[3]!=255)
                    throw std::runtime_error("2D alpha composited twice or against wrong baseline");
                if (!test_snn2d && test_sharp2d && (!dark || !light || mixed)) throw std::runtime_error("Semantic FVF HUD blurred by 3D sampling/AA");
                if (!test_snn2d && !test_sharp2d && mixed<4) throw std::runtime_error("Original 2D linear sampling not restored");
                std::fprintf(stderr,"SHARP2D %s AA %d samples %u: black/white pixels %u/%u\n",argv[1],active_aa,scene_samples,dark,light);
            }
            core.UnmapBuffer(*readback);
            if (!dimming_check && !sharp_check && !filtering_check && (!color_ok || !black || !red_ui)) throw std::runtime_error("Pixel mismatch: scene orientation/color or post-AA ImGui");
            invalidate_hud(&scene);
            destroy(result); destroy(scene); destroy(depth);
        }
        if (filtering_check) {
            if (contrast[0] < 250 || contrast[1] < 150 || contrast[1] > 210 || contrast[2] < 100 || contrast[3] > 3)
                throw std::runtime_error("Nearest/bilinear/trilinear filtering mismatch");
            if (contrast[4] < 100 || contrast[5] < 100 || contrast[6] < 100 || contrast[7] < 100) throw std::runtime_error("Anisotropic filtering did not preserve directional detail");
        }
        core.DestroyBuffer(readback);
        check_api_messages();
        if (validation_errors) throw std::runtime_error("NRI validation reported errors");
        cleanup();
        if (dimming_check) { std::fprintf(stderr,"PASS %s: uniform training dimming across wide canvas, original/AA/HUD replay\n",argv[1]); return 0; }
        if (snn_check) { std::fprintf(stderr,"PASS %s: all four SNN/nearest combinations, source-before-scaling pixels and all AA modes\n",argv[1]); return 0; }
        if (sharp_check) { std::fprintf(stderr,"PASS %s: semantic FVF HUD, independent original/sharp sampling, all AA modes, identical on/off sizing, ordering and immutable snapshots\n",argv[1]); return 0; }
        if (smaa_check || msaa_check) {
            std::fprintf(stderr,"PASS %s: %s geometry-edge smoothing, color/alpha preservation and post-AA UI, 12 frames\n",argv[1],smaa_check?"SMAA 1x HIGH":"MSAA 2x/4x/8x");
            return 0;
        }
        if (filtering_check) {
            std::fprintf(stderr,"PASS %s: textured nearest/bilinear/trilinear and anisotropic 2x/4x/8x/16x pixel checks\n",argv[1]);
            return 0;
        }
        std::fprintf(stderr,"PASS %s: production pipelines/draw/AA/readback + NRI ImGui, 12 frames (Off/FXAA/SSAA2x/4x)\n", argv[1]);
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "FAIL: %s\n", error.what());
        cleanup();
        return 1;
    }
}
