/* Standalone synthetic UI/input check. No guest memory, no live game. */
#include <windows.h>
#include <d3d11.h>
#include <SDL3/SDL.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <wincodec.h>
#undef ERROR
#include "NRI.h"
#include "Extensions/NRIDeviceCreation.h"
#include "Extensions/NRISwapChain.h"
#include "xinput_xbox.h"
#include "third_party/imgui/imgui_internal.h"
#include "frontend/host_input.h"
#include "../src/render/graphics_settings.cpp"
#include "../src/frontend/launcher_startup.cpp"
extern "C" void xbox_InputKeysClear()
{
}

static bool test_audio_paused = false;
extern "C" void audio_host_pause(int paused)
{
	test_audio_paused = paused != 0;
}

static void require(bool condition, const char* message)
{
	if (!condition)
	{
		fprintf(stderr, "FAIL: %s\n", message); 
		exit(1);
	}
}

struct VirtualPad
{
	SDL_JoystickID id; 
	SDL_Joystick* joystick;
};

static VirtualPad virtual_pad(const char* name)
{
	SDL_VirtualJoystickDesc d; 
	SDL_INIT_INTERFACE(&d); 
	
	d.type = SDL_JOYSTICK_TYPE_GAMEPAD; 
	d.naxes = 6; 
	d.nbuttons = 15; 
	d.button_mask = (1u << 15) - 1; 
	d.axis_mask = (1u << 6) - 1; 
	d.name = name; 
	
	auto id = SDL_AttachVirtualJoystick(&d); 
	require(id != 0, "attach virtual gamepad"); 
	
	auto* j = SDL_OpenJoystick(id); 
	require(j != nullptr, "open virtual joystick"); 
	
	SDL_SetJoystickVirtualAxis(j, 4, -32768); 
	SDL_SetJoystickVirtualAxis(j, 5, -32768); 
	SDL_UpdateGamepads(); 
	
	return { id, j };
}

static void press(VirtualPad p, int button, bool down)
{
	require(SDL_SetJoystickVirtualButton(p.joystick, button, down), "virtual button"); 
	host_input_update();
}

static void screenshot(ID3D11Device* dev, ID3D11DeviceContext* ctx, ID3D11Texture2D* image, const wchar_t* path)
{
	D3D11_TEXTURE2D_DESC d; 
	image->GetDesc(&d); 
	
	d.Usage = D3D11_USAGE_STAGING; 
	d.BindFlags = 0; 
	d.CPUAccessFlags = D3D11_CPU_ACCESS_READ; 
	
	ID3D11Texture2D* staging = nullptr; 
	require(SUCCEEDED(dev->CreateTexture2D(&d, nullptr, &staging)), "staging image"); 
	ctx->CopyResource(staging, image); 
	
	D3D11_MAPPED_SUBRESOURCE pixels; 
	require(SUCCEEDED(ctx->Map(staging, 0, D3D11_MAP_READ, 0, &pixels)), "readback image");
	CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED); 
	
	IWICImagingFactory* f = nullptr; 
	IWICStream* s = nullptr; 
	IWICBitmapEncoder* e = nullptr; 
	IWICBitmapFrameEncode* frame = nullptr; 
	IPropertyBag2* props = nullptr; 
	HRESULT hr = CoCreateInstance(CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&f)); 
	
	if (SUCCEEDED(hr))
		hr = f->CreateStream(&s); 
	
	if (SUCCEEDED(hr))
		hr = s->InitializeFromFilename(path, GENERIC_WRITE); 
	
	if (SUCCEEDED(hr))
		hr = f->CreateEncoder(GUID_ContainerFormatPng, nullptr, &e); 
	
	if (SUCCEEDED(hr))
		hr = e->Initialize(s, WICBitmapEncoderNoCache); 
	
	if (SUCCEEDED(hr))
		hr = e->CreateNewFrame(&frame, &props); 
	
	if (SUCCEEDED(hr))
		hr = frame->Initialize(props); 
	
	if (SUCCEEDED(hr))
		hr = frame->SetSize(d.Width, d.Height); 
	
	WICPixelFormatGUID format = GUID_WICPixelFormat32bppRGBA; 
	if (SUCCEEDED(hr))
		hr = frame->SetPixelFormat(&format); 
	
	std::vector<BYTE> rgba((BYTE*)pixels.pData, (BYTE*)pixels.pData + pixels.RowPitch * d.Height); 
	
	if (format == GUID_WICPixelFormat32bppBGRA)
		for (UINT y = 0; y < d.Height; ++y)
			for (UINT x = 0; x < d.Width; ++x)
				std::swap(rgba[y * pixels.RowPitch + x * 4], rgba[y * pixels.RowPitch + x * 4 + 2]); 
	
	if (SUCCEEDED(hr))
		hr = frame->WritePixels(d.Height, pixels.RowPitch, pixels.RowPitch * d.Height, rgba.data()); 
	
	if (SUCCEEDED(hr))
		hr = frame->Commit(); 
	
	if (SUCCEEDED(hr))
		hr = e->Commit(); 
	
	require(SUCCEEDED(hr), "PNG capture"); 
	
	if (props)
		props->Release(); 
	
	if (frame)
		frame->Release(); 
	
	if (e)
		e->Release(); 
	
	if (s)
		s->Release(); 
	
	if (f)
		f->Release(); 
	
	CoUninitialize(); 
	ctx->Unmap(staging, 0); 
	staging->Release();
}
static DWORD delivered_thread = 0;
static LRESULT CALLBACK handoff_proc(HWND w, UINT m, WPARAM p, LPARAM l)
{
	if (graphics_window_defer_message(w, m, p, l))
		return 0;

	if (m == WM_KEYDOWN)
		delivered_thread = GetCurrentThreadId();

	if (m == WM_APP + 9)
	{
		DestroyWindow(w); 
		PostQuitMessage(0); 

		return 0;
	}

	if (graphics_ui_message(w, m, p, l))
		return 0;

	return DefWindowProcW(w, m, p, l);
}

int main()
{
	SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);
	setvbuf(stdout, nullptr, _IONBF, 0); setvbuf(stderr, nullptr, _IONBF, 0);
	puts("launcher_check: initializing SDL3");
	require(SDL_Init(SDL_INIT_GAMEPAD), "SDL gamepad subsystem");
	auto first = virtual_pad("DOA1U synthetic controller 1"), second = virtual_pad("DOA1U synthetic controller 2");
	host_input_init(); host_input_update();
	require(!host_input_connected(0) && !host_input_connected(1), "preconnected controllers wait to join");
	press(second, SDL_GAMEPAD_BUTTON_SOUTH, true); require(host_input_connected(0) && !host_input_connected(1), "first pressed controller joins P1"); press(second, SDL_GAMEPAD_BUTTON_SOUTH, false);
	press(first, SDL_GAMEPAD_BUTTON_EAST, true); require(host_input_connected(0) && host_input_connected(1), "second distinct controller joins P2"); press(first, SDL_GAMEPAD_BUTTON_EAST, false);
	host_input_menu(0); host_input_update();
	press(first, SDL_GAMEPAD_BUTTON_WEST, true); XBOX_INPUT_STATE state {}; require(host_input_read(1, &state) && state.Gamepad.bAnalogButtons[XBOX_BUTTON_X], "P2 routed to guest port 1"); require(host_input_read(0, &state) && !state.Gamepad.bAnalogButtons[XBOX_BUTTON_X], "P2 not merged into P1"); press(first, SDL_GAMEPAD_BUTTON_WEST, false);
	auto third = virtual_pad("DOA1U synthetic extra controller"); host_input_update(); press(third, SDL_GAMEPAD_BUTTON_NORTH, true); require(host_input_read(0, &state) && !state.Gamepad.bAnalogButtons[XBOX_BUTTON_Y], "third controller ignored for P1"); require(host_input_read(1, &state) && !state.Gamepad.bAnalogButtons[XBOX_BUTTON_Y], "third controller ignored for P2");
	SDL_CloseJoystick(second.joystick); SDL_DetachVirtualJoystick(second.id); host_input_update(); require(host_input_disconnected() && !host_input_connected(0) && host_input_connected(1), "disconnect notifies pause and retains surviving P2 slot");
	auto replacement = virtual_pad("DOA1U synthetic replacement"); host_input_update(); require(host_input_connected(0) && host_input_connected(1), "new controller fills empty P1 slot");
	host_input_menu(1); press(first, SDL_GAMEPAD_BUTTON_WEST, true); require(host_input_read(1, &state) && !state.Gamepad.bAnalogButtons[XBOX_BUTTON_X], "launcher suppresses guest gameplay"); press(first, SDL_GAMEPAD_BUTTON_WEST, false);
	int padType = host_input_type(1); host_capture_begin(1, padType, 11); press(first, SDL_GAMEPAD_BUTTON_EAST, true); require(!host_capture_active() && host_binding_get(1, padType, 11) == 101, "B button captured rather than Undo"); host_input_update(); require(host_binding_get(1, padType, 11) == 101, "captured held input does not self-undo"); press(first, SDL_GAMEPAD_BUTTON_EAST, false); press(first, SDL_GAMEPAD_BUTTON_NORTH, true); require(host_binding_get(1, padType, 11) == 103 && host_binding_get(1, padType, 9) == 101, "Undo follows remapped logical B"); press(first, SDL_GAMEPAD_BUTTON_NORTH, false);
	host_capture_begin(0, host_input_type(0), 8); press(third, SDL_GAMEPAD_BUTTON_NORTH, false); press(third, SDL_GAMEPAD_BUTTON_SOUTH, true); require(host_capture_active(), "ignored third pad cannot capture bindings"); host_capture_cancel();
	for (auto pad : { first,third,replacement })
	{
		SDL_CloseJoystick(pad.joystick); SDL_DetachVirtualJoystick(pad.id);
	}host_input_update(); host_input_disconnected();
	puts("launcher_check: virtual controller slots, hotplug and suppression passed");
	puts("launcher_check: bindings");
	for (int t = 0; t < HOST_TYPES; ++t)for (int p = 0; p < 2; ++p)for (int i = 0; i < HOST_TARGETS; ++i)for (int j = 0; j < i; ++j)require(host_binding_get(p, t, i) != host_binding_get(p, t, j), "unique defaults");
	int x = host_binding_get(0, 1, 10), y = host_binding_get(0, 1, 11);
	host_binding_set(0, 1, 11, x); require(host_binding_get(0, 1, 10) == y && host_binding_get(0, 1, 11) == x, "conflict swaps both bindings");
	require(host_binding_get(1, 1, 10) == x, "P2 unaffected"); host_binding_undo(0, 1); require(host_binding_get(0, 1, 10) == x && host_binding_get(0, 1, 11) == y, "undo swap");
	host_binding_set(0, 1, 11, x); host_binding_defaults(0, 1); host_binding_undo(0, 1); require(host_binding_get(0, 1, 10) == x, "default restoration not undoable");
	for (int reserved : {VK_ESCAPE, VK_F1})
	{
		int v = host_binding_get(0, 0, 8); host_binding_set(0, 0, 8, reserved); require(host_binding_get(0, 0, 8) == v, "host shortcuts reserved");
	}
	require(host_binding_get(0, 0, 4) == VK_RETURN, "Enter defaults to Xbox Start");
	host_input_menu(0); host_input_key(VK_RETURN, 1); host_input_update(); require(host_input_read(0, &state) && (state.Gamepad.wButtons & 0x10), "Enter routed through ordinary Start mapping"); host_input_key(VK_RETURN, 0);
	host_input_menu(1); host_capture_begin(0, 0, 8); host_input_key(VK_RETURN, 1); require(!host_capture_active() && host_binding_get(0, 0, 8) == VK_RETURN, "Enter is assignable during capture"); host_input_key(VK_RETURN, 0); host_binding_undo(0, 0);
	host_capture_begin(0, 0, 8); host_input_key(VK_F1, 1); require(host_capture_active(), "F1 remains reserved during capture"); host_input_key(VK_F1, 0); host_capture_cancel();
	host_capture_begin(0, 0, 8); host_input_key(VK_BACK, 1); require(!host_capture_active() && host_binding_get(0, 0, 8) == VK_BACK, "Backspace assignable during capture"); host_input_key(VK_BACK, 0); host_binding_undo(0, 0); host_binding_defaults(0, 0);
	puts("launcher_check: INI");
	wchar_t temp[MAX_PATH], path[MAX_PATH]; GetTempPathW(MAX_PATH, temp); GetTempFileNameW(temp, L"doa", 0, path); ini_path = path;
	prefs = Preferences {}; require(save(), "atomic configuration save"); require(ini_syntax_valid(), "saved INI syntax");
	host_binding_set(0, 0, 4, 'P'); require(save(), "save old provisional defaults"); require(host_input_load(path) && host_binding_get(0, 0, 4) == VK_RETURN, "old untouched defaults migrate Start to Enter");
	host_binding_set(0, 0, 4, 'P'); host_binding_set(0, 0, 8, 'R'); require(save(), "save customized keyboard profile"); require(host_input_load(path) && host_binding_get(0, 0, 4) == 'P', "customized profiles retain user Start binding"); host_binding_defaults(0, 0); require(save(), "restore test defaults");
	startup = true; visible = true; dismiss(false); require(startup && visible && !save_error, "first-run Save never starts gameplay");
	dismiss(true); require(!startup && !visible && !save_error, "Play saves and dismisses startup");
	guest_started = true; visible = true; menu_owned_pause = false; pause_command.store(0); dismiss(false); require(visible && pause_command.load() == 0, "Save leaves F1 menu open and preserves guest pause");
	visible = true; menu_owned_pause = true; dismiss(true); require(!visible && pause_command.load() == 0, "Play never changes original guest pause state"); pause_command.store(0); guest_started = false;
	std::wstring validPath = ini_path; ini_path = validPath + L"/missing/config.ini"; startup = true; visible = true; dismiss(true); require(startup && visible && save_error, "save failure blocks Play"); ini_path = validPath; notice.clear(); save_error = false;
	host_binding_set(0, 1, 11, x); host_input_load(path); require(host_binding_get(0, 1, 10) == x, "mapping reload restores saved defaults");
	{
		FILE* f = _wfopen(path, L"wb"); fputs("[Graphics]\nBackend=oops\n", f); fclose(f); invalid_ini = false; read_int(L"Backend", 0, 2); require(invalid_ini, "malformed numeric config rejected");
	}
	{
		FILE* f = _wfopen(path, L"wb"); fputs("[Graphics]\ninvalid line\n", f); fclose(f); require(!ini_syntax_valid(), "malformed INI syntax rejected");
	}DeleteFileW(path);
	pause_command.store(1); require(graphics_pause_request(1) == 0, "already-paused stays paused"); pause_command.store(2); require(graphics_pause_request(1) == 2, "owned pause resume request");
	// Hidden WARP UI frames exercise real font/image uploads and every page.
	puts("launcher_check: hidden WARP pages");
	WNDCLASSW wc = {}; wc.lpfnWndProc = DefWindowProcW; wc.hInstance = GetModuleHandleW(nullptr); wc.lpszClassName = L"DOA1ULauncherCheck"; RegisterClassW(&wc); HWND w = CreateWindowW(wc.lpszClassName, L"", WS_OVERLAPPEDWINDOW, 0, 0, 1296, 759, nullptr, nullptr, wc.hInstance, nullptr);
	ID3D11Device* dev = nullptr; ID3D11DeviceContext* ctx = nullptr; require(SUCCEEDED(D3D11CreateDevice(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &dev, nullptr, &ctx)), "WARP device");
	startup = true; visible = true; require(graphics_ui_init(w, dev, ctx) != 0, "UI initialization");
	graphics_ui_message(w, WM_KEYDOWN, VK_F1, 0); require(visible, "F1 cannot dismiss launcher");
	D3D11_TEXTURE2D_DESC td = {}; td.Width = 1280; td.Height = 720; td.ArraySize = td.MipLevels = 1; td.Format = DXGI_FORMAT_R8G8B8A8_UNORM; td.SampleDesc.Count = 1; td.BindFlags = D3D11_BIND_RENDER_TARGET; ID3D11Texture2D* image = nullptr; require(SUCCEEDED(dev->CreateTexture2D(&td, nullptr, &image)), "offscreen target"); ID3D11RenderTargetView* view = nullptr; dev->CreateRenderTargetView(image, nullptr, &view); ctx->OMSetRenderTargets(1, &view, nullptr);
	for (page = 0; page < 3; ++page)
	{
		graphics_ui_draw(); require(ImGui::GetDrawData()->TotalVtxCount > 0, "page emits geometry"); require(ImGui::GetPlatformIO().Textures.Size >= 2, "embedded artwork loaded"); wchar_t output[80]; swprintf(output, 80, L"launcher-page-%d.png", page); screenshot(dev, ctx, image, output);
	}
    auto savedGraphics=prefs;page=1;prefs.filtering=3;prefs.aa=2;prefs.lanczos2d=false;graphics_ui_draw();
    screenshot(dev,ctx,image,L"launcher-graphics-options.png");prefs=savedGraphics;
    page=0;graphics_ui_draw();
    auto* root=ImGui::FindWindowByName("Dead or Alive: ULTIMATE PC Settings");
    ImGuiWindow* navigation=nullptr;
    for(auto* child:root->DC.ChildWindows)if(strstr(child->Name,"/Navigation_"))navigation=child;
    require(navigation!=nullptr,"sidebar navigation child");
    auto focus_item=[&](ImGuiWindow* window,const char* label){
        ImGui::FocusWindow(window);
        ImGui::SetNavID(ImHashStr(label,0,window->ID),ImGuiNavLayer_Main,window->NavRootFocusScopeId,ImRect());
        auto* context=ImGui::GetCurrentContext();context->NavCursorVisible=true;context->NavInitRequest=false;context->NavInitResult.ID=0;
    };
    auto key_press=[&](ImGuiKey key){
        ImGui::GetIO().AddKeyEvent(key,true);graphics_ui_draw();
        ImGui::GetIO().AddKeyEvent(key,false);graphics_ui_draw();
    };
    focus_item(navigation,"Display");
    key_press(ImGuiKey_Tab);
    require(ImGui::GetCurrentContext()->NavId==ImHashStr("Graphics",0,navigation->ID),"Tab reaches Graphics sidebar button");
    key_press(ImGuiKey_Tab);
    require(ImGui::GetCurrentContext()->NavId==ImHashStr("Controls",0,navigation->ID),"Tab reaches Controls sidebar button");
    key_press(ImGuiKey_Tab);
    auto* focusedWindow=ImGui::GetCurrentContext()->NavWindow;
    require(focusedWindow!=navigation&&ImGui::GetCurrentContext()->NavId==ImHashStr("4:3",0,focusedWindow->ID),"Tab crosses sidebar into actual display controls");
    ImGui::GetIO().AddKeyEvent(ImGuiMod_Shift,true);key_press(ImGuiKey_Tab);ImGui::GetIO().AddKeyEvent(ImGuiMod_Shift,false);graphics_ui_draw();
    require(ImGui::GetCurrentContext()->NavId==ImHashStr("Controls",0,navigation->ID),"Shift Tab crosses display group back to sidebar");
    ImGui::GetIO().AddKeyEvent(ImGuiMod_Shift,true);key_press(ImGuiKey_Tab);ImGui::GetIO().AddKeyEvent(ImGuiMod_Shift,false);graphics_ui_draw();
    require(ImGui::GetCurrentContext()->NavId==ImHashStr("Graphics",0,navigation->ID),"Shift Tab traverses sidebar backwards");
    key_press(ImGuiKey_Enter);require(page==1,"Enter activates keyboard-highlighted Graphics page");
    focus_item(navigation,"Display");key_press(ImGuiKey_DownArrow);
    require(ImGui::GetCurrentContext()->NavId==ImHashStr("Graphics",0,navigation->ID),"arrow key reaches sidebar button");
    page=0;
	graphics_ui_shutdown(); ctx->ClearState(); view->Release(); image->Release(); ctx->Release(); dev->Release(); DestroyWindow(w);
	puts("launcher_check: actual first-run Play and cross-thread HWND handoff");
	GetTempFileNameW(temp, L"doa", 0, path); ini_path = path; startup = true; visible = true;
	require(run_launcher(true, []
	{
		dismiss(true);
	}) == 1, "actual first-run Play exits launcher rendering");
	HWND retained = (HWND)graphics_take_startup_window();
	require(IsWindow(retained), "same startup HWND retained");
	DWORD owner = GetWindowThreadProcessId(retained, nullptr);
	require(owner != GetCurrentThreadId(), "dedicated window owner survives Play");
	SetWindowLongPtrW(retained, GWLP_WNDPROC, (LONG_PTR)handoff_proc);
	DWORD_PTR reply = 0;
	require(SendMessageTimeoutW(retained, WM_SETTEXT, 0, (LPARAM)L"Hidden game handoff", SMTO_ABORTIFHUNG, 3000, &reply) != 0, "window owner services synchronous game initialization");
	DXGI_SWAP_CHAIN_DESC sd {}; sd.BufferCount = 2; sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM; sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT; sd.OutputWindow = retained; sd.SampleDesc.Count = 1; sd.Windowed = TRUE; sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	IDXGISwapChain* replacementChain = nullptr; dev = nullptr; ctx = nullptr;
	require(SUCCEEDED(D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &sd, &replacementChain, &dev, nullptr, &ctx)), "replacement game swapchain on exact same HWND");
	require(graphics_ui_init(retained, dev, ctx) != 0, "game ImGui context recreated after startup teardown");
	visible = false; graphics_game_started();
	require(SendMessageTimeoutW(retained, WM_KEYDOWN, VK_F1, 0, SMTO_ABORTIFHUNG, 3000, &reply) != 0, "owner queues F1 without blocking");
	require(delivered_thread == 0 && !visible, "owner does not touch renderer or ImGui state");
	graphics_window_dispatch_pending();
	require(delivered_thread == GetCurrentThreadId() && visible, "queued F1 delivered on rendering thread");
	graphics_ui_draw();
	require(graphics_game_paused() && test_audio_paused, "F1 gates simulation and pauses audio");
	HANDLE waiting = CreateEventW(nullptr, FALSE, FALSE, nullptr);
	HANDLE waiter = CreateThread(nullptr, 0, [](void* event)->DWORD
	{
		graphics_wait_for_game(); SetEvent((HANDLE)event); return 0;
	}, waiting, 0, nullptr);
	require(waiter != nullptr && WaitForSingleObject(waiting, 30) == WAIT_TIMEOUT, "guest frame gate blocks while F1 menu visible");
	graphics_ui_message(retained, WM_KEYDOWN, VK_F1, 0); require(graphics_game_paused(), "second F1 cannot unpause");
	// Exercise actual ImGui keyboard activation of the highlighted footer Save.
	auto* menuWindow = ImGui::FindWindowByName("Dead or Alive: ULTIMATE PC Settings"); require(menuWindow != nullptr, "launcher navigation window");
	ImGui::FocusWindow(menuWindow);
	ImGuiID saveId = ImHashStr("Save", 0, menuWindow->ID);
	ImGui::SetNavID(saveId, ImGuiNavLayer_Main, 0, ImRect());
	ImGui::GetCurrentContext()->NavCursorVisible = true;
	ImGui::GetCurrentContext()->NavInitRequest = false;
	ImGui::GetCurrentContext()->NavInitResult.ID = 0;
	require(graphics_ui_message(retained, WM_KEYDOWN, VK_RETURN, 0) != 0, "Enter forwarded to ImGui");
	graphics_ui_draw();

	graphics_ui_message(retained, WM_KEYUP, VK_RETURN, 0); graphics_ui_draw();
	require(visible && graphics_game_paused() && test_audio_paused && !save_error, "Enter activates highlighted Save without dismissing or resuming audio");
    require(WaitForSingleObject(waiting,30)==WAIT_TIMEOUT,"Save keeps guest frame gate paused");
    dismiss(true);graphics_ui_draw();
    require(!visible&&!graphics_game_paused()&&!test_audio_paused,"Play dismisses and resumes host pause/audio");
	require(WaitForSingleObject(waiting, 1000) == WAIT_OBJECT_0, "guest frame gate resumes after Play"); CloseHandle(waiter); CloseHandle(waiting);
	graphics_ui_shutdown(); ctx->ClearState(); replacementChain->Release(); ctx->Flush(); ctx->Release(); dev->Release();
	for (auto api : { nri::GraphicsAPI::D3D11,nri::GraphicsAPI::D3D12,nri::GraphicsAPI::VK })
	{
		printf("launcher_check: retained HWND NRI backend %d\n", (int)api);
		nri::DeviceCreationDesc dc {}; dc.graphicsAPI = api;
		nri::Device* device = nullptr;
		require(nri::nriCreateDevice(dc, device) == nri::Result::SUCCESS, "NRI handoff device");
		nri::CoreInterface core {}; nri::SwapChainInterface present {};
		require(nri::nriGetInterface(*device, NRI_INTERFACE(nri::CoreInterface), &core) == nri::Result::SUCCESS, "handoff core interface");
		require(nri::nriGetInterface(*device, NRI_INTERFACE(nri::SwapChainInterface), &present) == nri::Result::SUCCESS, "handoff swapchain interface");
		nri::Queue* queue = nullptr; require(core.GetQueue(*device, nri::QueueType::GRAPHICS, 0, queue) == nri::Result::SUCCESS, "handoff queue");
		nri::SwapChainDesc desc {}; desc.window.windows.hwnd = retained; desc.queue = queue; desc.width = 1280; desc.height = 720; desc.textureNum = 2; desc.format = nri::SwapChainFormat::BT709_G22_8BIT; desc.scaling = nri::Scaling::STRETCH; desc.queuedFrameNum = 1;
		nri::SwapChain* swapchain = nullptr;
		require(present.CreateSwapChain(*device, desc, swapchain) == nri::Result::SUCCESS, "NRI replacement swapchain on cross-thread retained HWND");
		present.DestroySwapChain(swapchain); nri::nriDestroyDevice(device);
	}
	require(SendMessageTimeoutW(retained, WM_APP + 9, 0, 0, SMTO_ABORTIFHUNG, 3000, &reply) != 0, "owner closes retained hidden window");
	window_consumer.store(0); DeleteFileW(path);
	puts("PASS: first-run Play/window-thread handoff, binding swaps/undo/isolation/defaults/capture, reserved keys, INI save/reload/validation, pause ownership, three hidden WARP launcher pages."); return 0;
}
