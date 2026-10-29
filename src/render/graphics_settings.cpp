/* Host preferences + Dear ImGui. Aspect ratio and window size are active. */
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <atomic>
#include <cstdio>
#include <string>
#include <vector>
#include "render/graphics_settings.h"
#include "third_party/imgui/imgui.h"
#include "third_party/imgui/backends/imgui_impl_win32.h"
#include "third_party/imgui/backends/imgui_impl_dx11.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);
extern "C" void xbox_InputKeysClear(void);

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
		int backend = 0, filtering = 1, anisotropy = 3, aa = 0, ssaa = 1, msaa = 1;
		
		std::string adapter = "automatic";
		bool differs(const Preferences &o) const
		{
			return aspect != o.aspect || window43 != o.window43 || window169 != o.window169
				   || render43 != o.render43 || render169 != o.render169 || backend != o.backend
				   || filtering != o.filtering || anisotropy != o.anisotropy || aa != o.aa || ssaa != o.ssaa
				   || msaa != o.msaa || adapter != o.adapter;
		}
	} prefs;
	
	struct Adapter
	{
		std::string key, 
		label;
	};
	
	std::vector<Adapter> adapters;
	std::atomic<int> wide{0};
	std::wstring ini_path;
	std::string notice;
	const char *renderer_name = "DirectX 11 (legacy)";
	HWND hwnd;
	bool ready = false, visible = false;
	bool save_error = false;

	int read_int(const wchar_t *key, int fallback, int maximum)
	{
		int value = (int)GetPrivateProfileIntW(L"Graphics", key, fallback, ini_path.c_str());
		return value >= 0 && value <= maximum ? value : fallback;
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
		char text[2048];
		int count = snprintf(text, sizeof text,
							 "; DOA1U host graphics preferences. Aspect, window and NRI resolution/filtering are active.\r\n"
							 "; NRI SSAA/FXAA are active. GPU/backend/MSAA/SMAA remain unavailable.\r\n"
							 "; Resolution values below are preset indices, independently per aspect.\r\n"
							 "[Graphics]\r\nVersion=1\r\nAspectRatio=%d\r\n"
							 "Window43=%d\r\nWindow169=%d\r\nRender43=%d\r\nRender169=%d\r\n"
							 "Adapter=%s\r\nBackend=%d\r\nFiltering=%d\r\nAnisotropy=%d\r\n"
							 "AntiAliasing=%d\r\nSSAA=%d\r\nMSAA=%d\r\n",
							 prefs.aspect, 
							 prefs.window43, 
							 prefs.window169, 
							 prefs.render43, 
							 prefs.render169,
							 prefs.adapter.c_str(), 
							 prefs.backend, 
							 prefs.filtering, 
							 prefs.anisotropy, 
							 prefs.aa,
							 prefs.ssaa, 
							 prefs.msaa);
							 
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

	void enumerate_adapters()
	{
		adapters.push_back({"automatic", "Automatic (system default)"});
		IDXGIFactory1 *factory = nullptr;
		
		if (FAILED(CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void **)&factory)))
			return;
		
		for (UINT i = 0;; ++i)
		{
			IDXGIAdapter1 *adapter = nullptr;
			if (factory->EnumAdapters1(i, &adapter) == DXGI_ERROR_NOT_FOUND)
				break;
			
			if (!adapter)
				break;
			
			DXGI_ADAPTER_DESC1 desc = {};
			if (SUCCEEDED(adapter->GetDesc1(&desc)) && !(desc.Flags & DXGI_ADAPTER_FLAG_SOFTWARE))
			{
				char key[32];
				snprintf(key, sizeof key, "%08X:%08X", (unsigned)desc.AdapterLuid.HighPart, (unsigned)desc.AdapterLuid.LowPart);
				adapters.push_back({key, utf8(desc.Description)});
			}
			adapter->Release();
		}
		factory->Release();
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
		if (!GetMonitorInfoW(MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST), &info))
			return false;
		
		RECT rect = window_rect(size);

		return rect.right - rect.left <= info.rcWork.right - info.rcWork.left
			   && rect.bottom - rect.top <= info.rcWork.bottom - info.rcWork.top;
	}

	std::string combo_label(const char *label)
	{
		const float column = ImGui::CalcTextSize("Internal resolution").x + ImGui::GetStyle().ItemSpacing.x;
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

	void panel()
	{
		ImGuiIO &io = ImGui::GetIO();
		float width = (io.DisplaySize.x < 620 ? io.DisplaySize.x - 24 : 580);
		float height = (io.DisplaySize.y < 640 ? io.DisplaySize.y - 24 : 600);
		
		ImGui::SetNextWindowSize(ImVec2(width, height), ImGuiCond_FirstUseEver);
		ImGui::SetNextWindowPos(ImVec2(12, 12), ImGuiCond_FirstUseEver);
		ImGui::SetNextWindowSizeConstraints(ImVec2(300, 220),
											ImVec2(io.DisplaySize.x > 24 ? io.DisplaySize.x - 24 : 300,
												   io.DisplaySize.y > 24 ? io.DisplaySize.y - 24 : 220));
												   
		if (ImGui::Begin("Graphics settings", &visible, ImGuiWindowFlags_NoCollapse))
		{
			const Preferences before = prefs;
			float footer = ImGui::GetFrameHeightWithSpacing() + ImGui::GetTextLineHeightWithSpacing() * 3;
			ImGui::BeginChild("Options", ImVec2(0, -footer), ImGuiChildFlags_None);
			ImGui::TextUnformatted("Aspect ratio (active)");
			int aspect = prefs.aspect;
			
			if (settings_combo("Aspect ratio", &aspect,
							 "4:3\0"
							 "16:9\0"))
			{
				prefs.aspect = aspect;
				wide.store(aspect, std::memory_order_release);
				notice = "Aspect applied. Save configuration to keep it after restart.";
				save_error = false;
			}
			
			ImGui::TextWrapped("16:9 expands gameplay horizontally. Menus, HUD and movies retain 4:3 proportions.");
			ImGui::Separator();
			ImGui::TextWrapped("Aspect/window settings apply immediately.");
			
			if (ImGui::CollapsingHeader("Display and resolution", ImGuiTreeNodeFlags_DefaultOpen))
			{
				resolution_combo("Window size", prefs.aspect ? prefs.window169 : prefs.window43, true);
				resolution_combo("Internal resolution", prefs.aspect ? prefs.render169 : prefs.render43, false);
				ImGui::TextWrapped("Internal resolution applies next frame, independently of window size. ImGui doesn't change.");
			}
			
			if (ImGui::CollapsingHeader("Graphics device and backend", ImGuiTreeNodeFlags_DefaultOpen))
			{
				std::string current = "Unavailable saved adapter (select another)";
				for (auto &a : adapters)
				{
					if (a.key == prefs.adapter)
						current = a.label;
				}
				
				if (begin_settings_combo("Graphics card", current.c_str()))
				{
					for (auto &a : adapters)
					{
						// Adapter names can repeat; the DXGI LUID key identifies each device.
						ImGui::PushID(a.key.c_str());
						if (ImGui::Selectable(a.label.c_str(), a.key == prefs.adapter))
							prefs.adapter = a.key;
						
						ImGui::PopID();
					}
					
					ImGui::EndCombo();
				}
				
				settings_combo("Rendering backend", &prefs.backend, "DirectX 11\0DirectX 12\0Vulkan\0");
				ImGui::TextWrapped("Active renderer: %s. GPU/backend selections require future implementation.", renderer_name);
			}
			
			if (ImGui::CollapsingHeader("Texture filtering", ImGuiTreeNodeFlags_DefaultOpen))
			{
				settings_combo("Filter", &prefs.filtering, "Nearest-neighbor\0Bilinear\0Trilinear\0Anisotropic\0");
				ImGui::TextWrapped("Filtering applies next frame. FMV use bilinear filtering.");
				if (prefs.filtering == 3)
					settings_combo("Anisotropy", &prefs.anisotropy,
								 "2x\0"
								 "4x\0"
								 "8x\0"
								 "16x\0");
			}
			
			if (ImGui::CollapsingHeader("Anti-aliasing", ImGuiTreeNodeFlags_DefaultOpen))
			{
				const bool supported = std::string(renderer_name) == "NRI / DirectX 11";
				ImGui::BeginDisabled(!supported);
				const char *names[] = {"Off", "SSAA", "MSAA (unavailable)", "FXAA", "SMAA (unavailable)"};
				if (begin_settings_combo("AA method", names[prefs.aa])) {
					for (int i = 0; i < 5; ++i) {
						ImGui::BeginDisabled(i == 2 || i == 4);
						if (ImGui::Selectable(names[i], prefs.aa == i)) prefs.aa = i;
						ImGui::EndDisabled();
					}
					ImGui::EndCombo();
				}
				if (prefs.aa == 1) {
					settings_combo("SSAA samples", &prefs.ssaa, "2x (2 x 1)\0" "4x (2 x 2)\0");
					const Size size = prefs.aspect ? sizes169[prefs.render169] : sizes43[prefs.render43];
					ImGui::Text("Render size: %d x %d", size.w * 2, size.h * (prefs.ssaa ? 2 : 1));
					ImGui::TextWrapped("Supersampling increases GPU work and memory use. Applies next frame.");
				} else if (prefs.aa == 3) {
					ImGui::TextWrapped("FXAA smooths high-contrast edges without increasing render resolution. Applies next frame.");
				}
				ImGui::EndDisabled();
				if (!supported) ImGui::TextWrapped("Anti-aliasing requires the NRI renderer.");
			}
			
			ImGui::EndChild();
			if (prefs.differs(before))
			{
				notice = "Unsaved changes.";
				save_error = false;
			}
			
			ImGui::Separator();
			if (ImGui::Button("Save configuration", ImVec2(-1, 0)))
			{
				save_error = !save();
				notice = save_error ? "Save failed: could not write doa1u_graphics.ini."
									: "Saved doa1u_graphics.ini.";
			}
			
			if (!notice.empty())
			{
				if (save_error)
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 0.45f, 0.35f, 1));
				
				ImGui::TextWrapped("%s", notice.c_str());
				if (save_error)
					ImGui::PopStyleColor();
			}
			ImGui::TextDisabled("F1 toggles this window. Closing it does NOT save changes.");
		}
		ImGui::End();
	}
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
	
	prefs.aspect = read_int(L"AspectRatio", 0, 1);
	prefs.window43 = read_int(L"Window43", 0, 4);
	prefs.window169 = read_int(L"Window169", 0, 5);
	prefs.render43 = read_int(L"Render43", 0, 10);
	prefs.render169 = read_int(L"Render169", 0, 5);
	prefs.backend = read_int(L"Backend", 0, 2);
	prefs.filtering = read_int(L"Filtering", 1, 3);
	prefs.anisotropy = read_int(L"Anisotropy", 3, 3);
	prefs.aa = read_int(L"AntiAliasing", 0, 4);
	prefs.ssaa = read_int(L"SSAA", 1, 1);
	prefs.msaa = read_int(L"MSAA", 1, 2);
	
	wchar_t adapter[64];
	GetPrivateProfileStringW(L"Graphics", L"Adapter", L"automatic", adapter, IM_ARRAYSIZE(adapter), ini_path.c_str());
	prefs.adapter = utf8(adapter);
	
	/* Adapter is an opaque LUID, never allow line/section injection into INI. */
	if (prefs.adapter != "automatic"
	    && prefs.adapter.find_first_not_of("0123456789abcdefABCDEF:") != std::string::npos)
		prefs.adapter = "automatic";
		
	wide.store(prefs.aspect, std::memory_order_release);
	if (GetFileAttributesW(ini_path.c_str()) == INVALID_FILE_ATTRIBUTES && !save())
	{
		notice = "Could not create doa1u_graphics.ini.";
		save_error = true;
	}
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
	return prefs.aa == 1 || prefs.aa == 3 ? prefs.aa : 0;
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
	static int applied_aspect = -1, applied_index = -1;
	static HWND applied_window = nullptr;
	const int index = prefs.aspect ? prefs.window169 : prefs.window43;
	
	if (applied_window == hwnd && applied_aspect == prefs.aspect && applied_index == index)
		return;

	MONITORINFO info = {sizeof info};
	if (!GetMonitorInfoW(MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST), &info))
		return;
	
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
	
	if (SetWindowPos(hwnd, nullptr, x, y, width, height, SWP_NOZORDER | SWP_NOACTIVATE))
	{
		applied_window = hwnd;
		applied_aspect = prefs.aspect;
		applied_index = index;
	}
}

extern "C" void graphics_ui_renderer_name(const char *name)
{
	renderer_name = name;
}

extern "C" int graphics_ui_init(void *window, void *device, void *context)
{
	hwnd = (HWND)window;
	IMGUI_CHECKVERSION();

	ImGui::CreateContext();

	ImGuiIO &io = ImGui::GetIO();
	io.IniFilename = nullptr;
	io.LogFilename = nullptr;
	ImGui::StyleColorsDark();

	if (!ImGui_ImplWin32_Init(hwnd))
	{
		ImGui::DestroyContext();
		return 0;
	}

	if (!ImGui_ImplDX11_Init((ID3D11Device *)device, (ID3D11DeviceContext *)context))
	{
		ImGui_ImplWin32_Shutdown();
		ImGui::DestroyContext();
		return 0;
	}

	enumerate_adapters();
	ready = true;

	return 1;
}

extern "C" int graphics_ui_message(void *window, unsigned message, uintptr_t wparam, intptr_t lparam)
{
	if (!ready)
		return 0;

	if (message == WM_KEYDOWN && wparam == VK_F1)
	{
		if (!(lparam & (1LL << 30)))
		{
			visible = !visible;
			xbox_InputKeysClear();
		}

		return 1;
	}

	if (message == WM_KEYUP && wparam == VK_F1)
		return 1;

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

extern "C" void graphics_ui_draw(void)
{
	if (!ready)
		return;

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (visible)
		panel();

	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

extern "C" void graphics_ui_shutdown(void)
{
    if (!ready) return;
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
    ready = visible = false;
    adapters.clear();
}
