/* Host preferences + Dear ImGui. Aspect ratio and window size are active. */
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <atomic>
#include <mutex>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cwchar>
#include "controller/host_input.h"
#include "frontend/launcher_art.h"
#include "render/graphics_settings.h"
#include "third_party/imgui/imgui.h"
#include "third_party/imgui/backends/imgui_impl_win32.h"
#include "third_party/imgui/backends/imgui_impl_dx11.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);
extern "C" void xbox_InputKeysClear(void);
extern "C" void audio_host_pause(int paused);

namespace
{
	struct Size
	{
		int w, h;
	};
	
	const Size sizes43[] = {{640, 480},   {800, 600},   {1024, 768},  {1280, 960},  {1400, 1050}, {1600, 1200},
							{1920, 1440}, {2048, 1536}, {2560, 1920}, {2800, 2100}, {3200, 2400}};
							
	const Size sizes169[] = {{1280, 720}, {1600, 900}, {1920, 1080}, {2560, 1440}, {3200, 1800}, {3840, 2160}};
	
	struct Preferences
	{
		int aspect = 0, window43 = 0, window169 = 0, render43 = 0, render169 = 0;
		bool borderless = false, fullscreen = false;
		bool sharp2d = true, snn2d = false; // dormant experiments
        bool lanczos2d = true;
        int lanczos_ar = 80;
		int backend = 0, filtering = 1, anisotropy = 3, aa = 0, ssaa = 1, msaa = 1;
		
		std::string monitor;
		bool differs(const Preferences &o) const
		{
			return lanczos2d != o.lanczos2d || lanczos_ar != o.lanczos_ar || snn2d != o.snn2d || sharp2d != o.sharp2d || aspect != o.aspect || window43 != o.window43 || window169 != o.window169
				   || render43 != o.render43 || render169 != o.render169 || backend != o.backend
				   || filtering != o.filtering || anisotropy != o.anisotropy || aa != o.aa || ssaa != o.ssaa
				   || msaa != o.msaa || monitor != o.monitor || borderless != o.borderless || fullscreen != o.fullscreen;
		}
	} prefs;
	
	struct Monitor
	{
		std::string key, 
		label;
	};
	
	std::vector<Monitor> monitors;
	std::atomic<int> wide{0};
	std::wstring ini_path;
	std::string notice;
	const char *renderer_name = "DirectX 11 (legacy)";
	HWND hwnd;
	bool ready = false, native_dx11 = false;
    std::atomic<bool> visible{false};
	bool save_error = false, startup = false;
    std::atomic<bool> guest_started{false};
    bool menu_owned_pause = false;
    int capture_player=0,capture_row=0; bool capture_clicked=false;
    std::atomic<int> pause_command{0};
    HWND startup_window=nullptr;
    std::atomic<DWORD> window_consumer{0};
    std::mutex window_messages_mutex;
    std::vector<MSG> window_messages;
    bool invalid_ini=false;

	bool ini_syntax_valid()
	{
		FILE* f = _wfopen(ini_path.c_str(), L"rb"); 
		if (!f)
			return false;

		char line[4096]; 
		bool section = false, valid = true;

		while (fgets(line, sizeof line, f))
		{
			std::string value = line; 
			auto first = value.find_first_not_of(" \t\r\n"); 
			if (first == std::string::npos)
				continue;

			value.erase(0, first); 
			if (value[0] == ';' || value[0] == '#')
				continue;

			auto last = value.find_last_not_of(" \t\r\n"); 
			value.resize(last + 1);
			
			if (value[0] == '[')
			{
				if (value.size() < 3 || value.back() != ']')
				{
					valid = false; 
					break;
				}
				section = true;
			}
			else if (!section || value.find('=') == std::string::npos || value[0] == '=')
			{
				valid = false; 
				break;
			}
		}

		if (ferror(f))
			valid = false; 
		
		fclose(f); 
		return valid;
	}

	int read_int(const wchar_t *key, int fallback, int maximum)
	{
        wchar_t text[64];
        GetPrivateProfileStringW(L"Graphics", key, L"", text, 64, ini_path.c_str());
        
		if(!*text)
			return fallback;

        wchar_t *end = nullptr;
		long value = wcstol(text,&end,10);

        if(end == text || *end || value < 0 || value > maximum)
		{
			invalid_ini = true;
			return fallback;
		}

        return (int)value;
	}

	std::string utf8(const wchar_t *text)
	{
		int count = WideCharToMultiByte(CP_UTF8, 0, text, -1, nullptr, 0, nullptr, nullptr);
		
		if (count <= 1)
			return {};
		
		std::string result((size_t)count, '\0');
		WideCharToMultiByte(CP_UTF8, 0, text, -1, &result[0], count, nullptr, nullptr);
		result.pop_back();
		
		return result;
	}

	bool save()
	{
		char text[16384];
		int count = snprintf(text, sizeof text,
							 "; DOA1U host graphics preferences. Aspect, window and NRI resolution/filtering are active.\r\n"
							 "; NRI SSAA/MSAA/FXAA/SMAA are active. OS selects GPU. Backend applies on restart.\r\n"
							 "; Resolution values below are preset indices, independently per aspect.\r\n"
							 "[Graphics]\r\nVersion=1\r\nBorderless=%d\r\nFullScreen=%d\r\nAspectRatio=%d\r\n"
							 "Window43=%d\r\nWindow169=%d\r\nRender43=%d\r\nRender169=%d\r\n"
							 "Monitor=%s\r\nBackend=%d\r\nFiltering=%d\r\nAnisotropy=%d\r\n"
							 "Lanczos2D=%d\r\nLANCZOS2_AR_STRENGTH=%d\r\nSharp2D=%d\r\nSNN2D=%d\r\nAntiAliasing=%d\r\nSSAA=%d\r\nMSAA=%d\r\n",
							 prefs.borderless ? 1 : 0, prefs.fullscreen ? 1 : 0, prefs.aspect,
							 prefs.window43, 
							 prefs.window169, 
							 prefs.render43, 
							 prefs.render169,
							 prefs.monitor.c_str(),
							 prefs.backend, 
							 prefs.filtering, 
							 prefs.anisotropy, 
							 prefs.lanczos2d ? 1 : 0, prefs.lanczos_ar,
                             prefs.sharp2d ? 1 : 0,
                             prefs.snn2d ? 1 : 0,
							 prefs.aa,
							 prefs.ssaa, 
							 prefs.msaa);
							 
		count += host_input_serialize(text+count, (int)sizeof(text)-count);
		std::wstring temp = ini_path + L"." + std::to_wstring(GetCurrentProcessId()) + L".tmp";
		
		HANDLE file =
			CreateFileW(temp.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
			
		bool ok = file != INVALID_HANDLE_VALUE;
		DWORD written = 0;
		
		if (ok)
		{
			ok = WriteFile(file, text, (DWORD)count, &written, nullptr) && written == (DWORD)count;
			
			if (ok)
				ok = FlushFileBuffers(file) != FALSE;
			
			CloseHandle(file);
		}
		
		if (ok)
			ok = MoveFileExW(temp.c_str(), ini_path.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH) != FALSE;

		if (!ok)
			DeleteFileW(temp.c_str());
		else
			WritePrivateProfileStringW(nullptr, nullptr, nullptr, ini_path.c_str());
		
		return ok;
	}

	BOOL CALLBACK add_monitor(HMONITOR monitor, HDC, LPRECT, LPARAM)
	{
		MONITORINFOEXW info = {}; 
		info.cbSize = sizeof info;

		if (GetMonitorInfoW(monitor, &info))
		{
			char label[180]; 
			snprintf(label, sizeof label, "Display %zu%s  %ld x %ld", monitors.size() + 1, (info.dwFlags & MONITORINFOF_PRIMARY) ? " (Primary)" : "", info.rcMonitor.right - info.rcMonitor.left, info.rcMonitor.bottom - info.rcMonitor.top); 
			monitors.push_back({ utf8(info.szDevice),label });
		}
		
		return TRUE;
	}

	void enumerate_monitors()
	{
		monitors.clear(); 
		EnumDisplayMonitors(nullptr, nullptr, add_monitor, 0);
	}

	HMONITOR selected_monitor()
	{
		struct Search
		{
			const std::string* key; 
			HMONITOR result;
		} 

		search 
		{ 
			&prefs.monitor,
			nullptr 
		};

		EnumDisplayMonitors(nullptr, nullptr, [](HMONITOR h, HDC, LPRECT, LPARAM data)->BOOL
		{
			auto* s = (Search*)data; 
			MONITORINFOEXW i = {}; 
			i.cbSize = sizeof i; 
			
			if (GetMonitorInfoW(h, &i) && utf8(i.szDevice) == *s->key)
				s->result = h; 
			
			return TRUE;
		}, (LPARAM)&search);
		
		return search.result ? search.result : MonitorFromWindow(hwnd, MONITOR_DEFAULTTOPRIMARY);
	}

	RECT window_rect(Size size)
	{
		RECT rect = {0, 0, size.w, size.h};
		typedef BOOL(WINAPI * AdjustForDpi)(LPRECT, DWORD, BOOL, DWORD, UINT);
		typedef UINT(WINAPI * WindowDpi)(HWND);
		HMODULE user = GetModuleHandleW(L"user32.dll");
		auto adjust = (AdjustForDpi)GetProcAddress(user, "AdjustWindowRectExForDpi");
		auto dpi = (WindowDpi)GetProcAddress(user, "GetDpiForWindow");
		DWORD style = (DWORD)GetWindowLongPtrW(hwnd, GWL_STYLE);
		style = (style & ~(WS_OVERLAPPEDWINDOW | WS_POPUP)) | (prefs.borderless ? WS_POPUP : WS_OVERLAPPEDWINDOW);
		DWORD ex = (DWORD)GetWindowLongPtrW(hwnd, GWL_EXSTYLE);
		
		if (adjust && dpi)
			adjust(&rect, style, FALSE, ex, dpi(hwnd));
		else
			AdjustWindowRectEx(&rect, style, FALSE, ex);
		
		return rect;
	}

	bool fits(Size size)
	{
		MONITORINFO info = {sizeof info};
		if (!GetMonitorInfoW(selected_monitor(), &info))
			return false;
		
		RECT rect = window_rect(size);

		return rect.right - rect.left <= info.rcWork.right - info.rcWork.left
			   && rect.bottom - rect.top <= info.rcWork.bottom - info.rcWork.top;
	}

	std::string combo_label(const char *label)
	{
		const float column = std::max(ImGui::CalcTextSize("Internal resolution").x, ImGui::CalcTextSize("Anti-ringing strength").x) + ImGui::GetStyle().ItemSpacing.x;
		const float start = ImGui::GetCursorPosX();
		
		ImGui::AlignTextToFramePadding();
		ImGui::TextUnformatted(label);
		ImGui::SameLine(start + column);
		ImGui::SetNextItemWidth(-1);
		
		return std::string("##") + label;
	}

	bool settings_combo(const char *label, int *index, const char *items)
	{
		return ImGui::Combo(combo_label(label).c_str(), index, items);
	}

	bool begin_settings_combo(const char *label, const char *preview)
	{
		return ImGui::BeginCombo(combo_label(label).c_str(), preview);
	}

	void resolution_combo(const char *label, int &index, bool window)
	{
		const Size *sizes = prefs.aspect ? sizes169 : sizes43;
		int count = prefs.aspect ? (int)IM_ARRAYSIZE(sizes169) : (window ? 5 : (int)IM_ARRAYSIZE(sizes43));
		char current[80];
		snprintf(current, sizeof current, "%d x %d", sizes[index].w, sizes[index].h);
		
		if (begin_settings_combo(label, current))
		{
			for (int i = 0; i < count; ++i)
			{
				bool available = !window || fits(sizes[i]);
				char item[100];
				snprintf(item, sizeof item, "%d x %d%s", sizes[i].w, sizes[i].h,
						 available ? "" : " (does not fit monitor)");
				ImGui::BeginDisabled(!available);
				
				if (ImGui::Selectable(item, index == i))
					index = i;
				
				ImGui::EndDisabled();
			}
			ImGui::EndCombo();
		}
	}

	#include "frontend/launcher_panel.inl"

}

extern "C" void graphics_settings_init(void)
{
	wchar_t executable[32768];
	DWORD count = GetModuleFileNameW(nullptr, executable, IM_ARRAYSIZE(executable));
	if (!count || count >= IM_ARRAYSIZE(executable))
		return;
	
	ini_path.assign(executable, count);
	auto slash = ini_path.find_last_of(L"\\/");
	
	ini_path.resize(slash == std::wstring::npos ? 0 : slash + 1);
	ini_path += L"doa1u_graphics.ini";

    invalid_ini=GetFileAttributesW(ini_path.c_str())!=INVALID_FILE_ATTRIBUTES&&!ini_syntax_valid();
	
	prefs.aspect = read_int(L"AspectRatio", 0, 1);
	prefs.window43 = read_int(L"Window43", 0, 4);
	prefs.borderless = read_int(L"Borderless", 0, 1) != 0;
	prefs.fullscreen = read_int(L"FullScreen", 0, 1) != 0;
	prefs.window169 = read_int(L"Window169", 0, 5);
	prefs.render43 = read_int(L"Render43", 0, 10);
	prefs.render169 = read_int(L"Render169", 0, 5);
	prefs.backend = read_int(L"Backend", 0, 2);
	prefs.lanczos2d = read_int(L"Lanczos2D", 1, 1) != 0;
    prefs.lanczos_ar = read_int(L"LANCZOS2_AR_STRENGTH", 80, 100);
	prefs.snn2d = read_int(L"SNN2D", 0, 1) != 0;
	prefs.sharp2d = read_int(L"Sharp2D", 1, 1) != 0;
	prefs.filtering = read_int(L"Filtering", 1, 3);
	prefs.anisotropy = read_int(L"Anisotropy", 3, 3);
	prefs.aa = read_int(L"AntiAliasing", 0, 4);
	prefs.ssaa = read_int(L"SSAA", 1, 1);
	prefs.msaa = read_int(L"MSAA", 1, 2);
	
    wchar_t monitor[128];
    GetPrivateProfileStringW(L"Graphics",L"Monitor",L"",monitor,128,ini_path.c_str());
    prefs.monitor=utf8(monitor);

    if(prefs.monitor.find_first_of("\r\n[]=")!=std::string::npos)
		invalid_ini=true;

    wchar_t section[8192];
    DWORD length=GetPrivateProfileSectionW(L"Graphics",section,8192,ini_path.c_str());
    startup=GetFileAttributesW(ini_path.c_str())==INVALID_FILE_ATTRIBUTES||!length||invalid_ini;
    
	if(startup)
	{
		prefs=Preferences{};
		notice=invalid_ini?"Invalid configuration. Defaults loaded.":"";
	}

    wide.store(prefs.aspect,std::memory_order_release);
    host_input_init();
	
	if(!startup&&!host_input_load(ini_path.c_str()))
	{
		startup=true;
		prefs=Preferences{};
		notice="Invalid controls configuration. Defaults loaded.";
		wide.store(prefs.aspect);
	}

    visible=startup;
	host_input_menu(visible);

}

extern "C" int graphics_widescreen(void)
{
	return wide.load(std::memory_order_acquire);
}

extern "C" void graphics_render_size(unsigned *width, unsigned *height)
{
	const Size size = prefs.aspect ? sizes169[prefs.render169] : sizes43[prefs.render43];
	*width = (unsigned)size.w;
	*height = (unsigned)size.h;
}

extern "C" int graphics_aa_method(void)
{
	return prefs.aa;
}

extern "C" unsigned graphics_msaa_samples(void)
{
    return 2u << prefs.msaa;
}

extern "C" unsigned graphics_ssaa_samples(void)
{
	return prefs.ssaa ? 4u : 2u;
}

extern "C" int graphics_texture_filter(void)
{
	return prefs.filtering;
}

extern "C" unsigned graphics_anisotropy(void)
{
	return 2u << prefs.anisotropy;
}

// Called between frames, never while ImGui is submitting draw data.
extern "C" void graphics_window_apply(void *window)
{
	hwnd = (HWND)window;
	if(startup)
		return;

	static int applied_aspect = -1, applied_index = -1;
	static std::string applied_monitor;
	static HWND applied_window = nullptr;
	static bool applied_borderless = false, applied_fullscreen = false;
	static RECT windowed_position = {};
	const int index = prefs.aspect ? prefs.window169 : prefs.window43;
	
	if (applied_window == hwnd && applied_aspect == prefs.aspect && applied_index == index && applied_monitor == prefs.monitor && applied_borderless == prefs.borderless && applied_fullscreen == prefs.fullscreen)
		return;

	MONITORINFO info = {sizeof info};
	if (!GetMonitorInfoW(selected_monitor(), &info))
		return;

	RECT prior = {};
	GetWindowRect(hwnd, &prior);
	if (applied_window != hwnd || !applied_fullscreen)
		windowed_position = prior;
	if (IsZoomed(hwnd)) ShowWindow(hwnd, SW_RESTORE);
	LONG_PTR style = GetWindowLongPtrW(hwnd, GWL_STYLE);
	style &= ~(LONG_PTR)(WS_OVERLAPPEDWINDOW | WS_POPUP);
	style |= prefs.borderless ? WS_POPUP : WS_OVERLAPPEDWINDOW;
	SetWindowLongPtrW(hwnd, GWL_STYLE, style);
	auto remember = [&] {
		applied_window = hwnd; applied_aspect = prefs.aspect; applied_index = index;
		applied_monitor = prefs.monitor;
		applied_borderless = prefs.borderless; applied_fullscreen = prefs.fullscreen;
	};
	if (prefs.fullscreen) {
		// Desktop-sized presentation only: never request an exclusive display mode.
		const RECT& area = prefs.borderless ? info.rcMonitor : info.rcWork;
		if (SetWindowPos(hwnd, nullptr, area.left, area.top, area.right-area.left, area.bottom-area.top,
			SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED)) remember();
		return;
	}
	
	const Size *sizes = prefs.aspect ? sizes169 : sizes43;
	int usable = index;
	while (usable > 0 && !fits(sizes[usable]))
		--usable;
	
	Size size = sizes[usable];
	RECT rect = window_rect(size);
	const int border_w = rect.right - rect.left - size.w;
	const int border_h = rect.bottom - rect.top - size.h;
	
	// A saved preset may no longer fit after moving to a smaller monitor.
	const int max_w = info.rcWork.right - info.rcWork.left - border_w;
	const int max_h = info.rcWork.bottom - info.rcWork.top - border_h;
	if (max_w <= 0 || max_h <= 0)
		return;
	
	const double scale_w = (double)max_w / size.w;
	const double scale_h = (double)max_h / size.h;
	const double scale = scale_w < scale_h ? scale_w : scale_h;
	if (scale < 1.0)
	{
		size.w = (int)(size.w * scale);
		size.h = (int)(size.h * scale);
	}
	
	const int width = size.w + border_w, height = size.h + border_h;
	RECT position;
	if (!GetWindowRect(hwnd, &position))
		return;
	if (applied_window == hwnd && applied_fullscreen) position = windowed_position;
	
	int x = position.left, y = position.top;
	if (x + width > info.rcWork.right) 
		x = info.rcWork.right - width;
	
	if (y + height > info.rcWork.bottom) 
		y = info.rcWork.bottom - height;
	
	if (x < info.rcWork.left) 
		x = info.rcWork.left;
	
	if (y < info.rcWork.top) 
		y = info.rcWork.top;
	
	if (IsZoomed(hwnd))
		ShowWindow(hwnd, SW_RESTORE);
	
	if (SetWindowPos(hwnd, nullptr, x, y, width, height, SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED))
	{
		remember();
	}
}

extern "C" void graphics_ui_renderer_name(const char *name)
{
	renderer_name = name;
}

extern "C" int graphics_ui_init(void *window, void *device, void *context)
{
    focus_navigation = true;
	hwnd = (HWND)window;
	IMGUI_CHECKVERSION();

	ImGui::CreateContext();

	ImGuiIO &io = ImGui::GetIO();
	io.IniFilename = nullptr;
	io.LogFilename = nullptr;
    io.ConfigFlags|=ImGuiConfigFlags_NavEnableKeyboard|ImGuiConfigFlags_NavEnableGamepad;
    char windows_dir[MAX_PATH]{};
    GetWindowsDirectoryA(windows_dir, MAX_PATH);

    const std::string font_path=std::string(windows_dir)+"/Fonts/georgia.ttf";
    const std::string heading_path=std::string(windows_dir)+"/Fonts/georgiab.ttf";
    ui_font=nullptr;
	heading_font=nullptr;

    if(GetFileAttributesA(font_path.c_str())!=INVALID_FILE_ATTRIBUTES)
        ui_font=io.Fonts->AddFontFromFileTTF(font_path.c_str(),18);

    if(GetFileAttributesA(heading_path.c_str())!=INVALID_FILE_ATTRIBUTES)
        heading_font=io.Fonts->AddFontFromFileTTF(heading_path.c_str(),28);

    if(!ui_font)
		ui_font=io.Fonts->AddFontDefault();
	
	if(!heading_font)
		heading_font=ui_font;

	ImGui::StyleColorsDark();
    auto &style=ImGui::GetStyle();
    style.Colors[ImGuiCol_Text]=ImVec4(.92f,.88f,.80f,1);
    style.Colors[ImGuiCol_TextDisabled]=ImVec4(.65f,.63f,.60f,1);
    style.Colors[ImGuiCol_Button]=ImVec4(.10f,.095f,.105f,.95f);
    style.Colors[ImGuiCol_ButtonHovered]=ImVec4(.39f,.30f,.47f,1);
    style.Colors[ImGuiCol_ButtonActive]=ImVec4(.45f,.34f,.53f,1);
    style.Colors[ImGuiCol_FrameBg]=ImVec4(.12f,.115f,.12f,1);
    style.Colors[ImGuiCol_Header]=ImVec4(.32f,.24f,.40f,1);
    style.Colors[ImGuiCol_CheckMark]=ImVec4(.77f,.62f,.38f,1);

	if (!ImGui_ImplWin32_Init(hwnd))
	{
		ImGui::DestroyContext();
		return 0;
	}

	native_dx11 = device != nullptr;
	if (native_dx11 && !ImGui_ImplDX11_Init((ID3D11Device *)device, (ID3D11DeviceContext *)context))
	{
		ImGui_ImplWin32_Shutdown();
		ImGui::DestroyContext();
		return 0;
	}

	enumerate_monitors();
    launcher_art_init();
	ready = true;

	return 1;
}

extern "C" int graphics_ui_message(void *window, unsigned message, uintptr_t wparam, intptr_t lparam)
{
    // Native default messages can still arrive on the dedicated HWND owner.
    // The renderer is the sole owner of ImGui after startup handoff.
    DWORD consumer=window_consumer.load();
    if(consumer&&consumer!=GetCurrentThreadId())
		return 0;

	if (!ready)
		return 0;

	if (message == WM_KEYDOWN && wparam == VK_F1)
	{
		if (!(lparam & (1LL << 30)))
		{
			if(!visible)
			{
				visible=true;
                focus_navigation = true;
				menu_owned_pause=false;
				host_input_menu(1);
			}
			xbox_InputKeysClear();
		}

		return 1;
	}

	if (message == WM_KEYUP && wparam == VK_F1)
		return 1;

	if(message==WM_DISPLAYCHANGE)
		enumerate_monitors();

    if(message==WM_KILLFOCUS)
		host_input_focus(0);

    if(message==WM_SETFOCUS)
		host_input_focus(1);

    if((message==WM_KEYDOWN||message==WM_KEYUP||message==WM_SYSKEYDOWN||message==WM_SYSKEYUP)&&host_input_key((int)wparam,message==WM_KEYDOWN||message==WM_SYSKEYDOWN))
		return 1;

    if((message==WM_KEYDOWN||message==WM_KEYUP)&&wparam==VK_ESCAPE)
		return 0;

    // Enter is an ordinary remappable Start input in game and ImGui activate in menus.
    ImGui_ImplWin32_WndProcHandler((HWND)window, message, (WPARAM)wparam, (LPARAM)lparam);

	if (!visible)
		return 0;

	if (message == WM_KEYDOWN || message == WM_KEYUP || message == WM_CHAR || message == WM_MOUSEWHEEL
	    || message == WM_MOUSEHWHEEL || message == WM_LBUTTONDOWN || message == WM_LBUTTONUP
	    || message == WM_RBUTTONDOWN || message == WM_RBUTTONUP || message == WM_MBUTTONDOWN
	    || message == WM_MBUTTONUP)
		return 1;

	return 0;
}

extern "C" void graphics_ui_frame(void)
{
	if (!ready)
		return;

	host_input_update();
    if(host_input_disconnected()&&guest_started)
		pause_command.store(1);

    host_input_navigation();
    static bool audio_paused=false;
    bool paused=graphics_game_paused()!=0;

    if(paused!=audio_paused)
	{
		audio_host_pause(paused);
		audio_paused=paused;
	}

    if (native_dx11) 
		ImGui_ImplDX11_NewFrame();

	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

    if (visible)
        panel();
    
	// Resume audio before returning control to the guest on Save/Play.
    paused=graphics_game_paused()!=0;
    if(paused!=audio_paused)
	{
		audio_host_pause(paused);
		audio_paused=paused;
	}

    ImGui::Render();
}

extern "C" void graphics_ui_draw(void)
{
	graphics_ui_frame();
	if (ready && native_dx11) ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

extern "C" void graphics_ui_shutdown(void)
{
    if (!ready) return;
    if (native_dx11) ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    launcher_art_shutdown();
    ImGui::DestroyContext();
    ready = false;
    monitors.clear();
}

extern "C" int graphics_backend(void) { return prefs.backend; }

extern "C" int graphics_sharp_2d(void) { return 0; /* dormant nearest experiment */ }

extern "C" int graphics_snn_2d(void) { return 0; /* dormant SNN experiment */ }

extern "C" int graphics_lanczos_2d(void) { return prefs.lanczos2d; }
extern "C" float graphics_lanczos_ar(void) { return prefs.lanczos_ar / 100.0f; }

extern "C" int graphics_launcher_needed()
{
	return startup;
}
extern "C" void graphics_game_started()
{
	guest_started = true; host_input_menu(0);
}
extern "C" int graphics_menu_visible()
{
	return visible;
}
extern "C" int graphics_game_paused()
{
	return guest_started.load() && visible.load();
}
extern "C" void graphics_wait_for_game()
{
	while (graphics_game_paused())Sleep(1);
}
extern "C" void graphics_set_startup_window(void* w)
{
	startup_window = (HWND)w;
}
extern "C" void* graphics_take_startup_window()
{
	HWND w = startup_window; 
	startup_window = nullptr; 
	
	if (w)
		window_consumer.store(GetCurrentThreadId()); 
	
	return w;
}
extern "C" int graphics_window_defer_message(void* window, unsigned message, uintptr_t wparam, intptr_t lparam)
{
	DWORD consumer = window_consumer.load();
	if (!consumer || consumer == GetCurrentThreadId())
		return 0;

	// Default window-management messages stay on the owner. Only messages
	// consumed by the game/UI are queued, so synchronous Win32 replies work.
	bool input = (message >= WM_KEYFIRST && message <= WM_KEYLAST) ||
		(message >= WM_MOUSEFIRST && message <= WM_MOUSELAST) ||
		message == WM_SIZE || message == WM_CLOSE || message == WM_KILLFOCUS ||
		message == WM_SETFOCUS || message == WM_DISPLAYCHANGE;
	
	if (!input)
		return 0;

	MSG event {}; 
	event.hwnd = (HWND)window; 
	event.message = message; 
	event.wParam = wparam; 
	event.lParam = lparam;

	std::lock_guard<std::mutex> guard(window_messages_mutex);
	window_messages.push_back(event); return 1;
}

extern "C" void graphics_window_dispatch_pending()
{
	std::vector<MSG> pending;
	{
		std::lock_guard<std::mutex> guard(window_messages_mutex); 
		pending.swap(window_messages);
	}

	for (const auto& event : pending)if (IsWindow(event.hwnd))
	{
		auto handler = (WNDPROC)GetWindowLongPtrW(event.hwnd, GWLP_WNDPROC);
		CallWindowProcW(handler, event.hwnd, event.message, event.wParam, event.lParam);
	}
}

extern "C" int graphics_pause_request(int paused)
{
	int cmd = pause_command.exchange(0); if (cmd == 1)
	{
		if (paused)
			return 0; 
	
		return 1;
	}

	if (cmd == 2)
		return paused ? 2 : 0; 
	
	if (cmd == 3)
		return paused ? 2 : 1; 
	
	return 0;
}

extern "C" void graphics_pause_result(int before, int after)
{
	if (visible && !before && after)
		menu_owned_pause = true;
}
