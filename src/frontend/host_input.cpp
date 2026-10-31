/* SDL owns host controllers; guest callers only read locked snapshots. */
#include <windows.h>
#include <SDL3/SDL.h>
#include <algorithm>
#include <array>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <atomic>
#include "frontend/host_input.h"
#include "third_party/imgui/imgui.h"
extern "C" {
#include "xinput_xbox.h"
}

namespace
{
	struct Mapping
	{
		int value[HOST_TARGETS];
		int undo[HOST_TARGETS];
		bool canUndo = false;
	};

	Mapping maps[2][HOST_TYPES];
	struct Pad
	{
		SDL_JoystickID id;
		SDL_Gamepad* pad;
		int slot = -1, type = 4;
		bool startup = false;
		std::array<int, 48> previous {};
		bool waitRelease = false, menuConsumed = false;
	};

	std::vector<Pad> pads;

	SRWLOCK lock = SRWLOCK_INIT;
	XBOX_INPUT_STATE snapshots[2] {};

	bool connected[2] {}, keys[256] {}, initialized = false, menu = false;
	bool capturedKeys[256] {};
	bool availability[HOST_TYPES] {};
	bool focused = true;
	int keyboardPlayer = 0;

	std::atomic<uint64_t> rumble[2] {};

	int types[2] { -1,-1 }, captureP = -1, captureType = 0, captureTarget = 0;

	volatile LONG disconnected = 0;
	const char* targets[] =
	{
		"D-pad up",
		"D-pad down",
		"D-pad left",
		"D-pad right",
		"Start",
		"Back",
		"Left stick click",
		"Right stick click",
		"A",
		"B",
		"X",
		"Y",
		"White",
		"Black",
		"Left trigger",
		"Right trigger",
		"Left stick up",
		"Left stick down",
		"Left stick left",
		"Left stick right",
		"Right stick up",
		"Right stick down",
		"Right stick left",
		"Right stick right"
	};

	int defaults[HOST_TARGETS] = { VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,VK_RETURN,VK_BACK,VK_SHIFT,VK_CONTROL,'Z','X','C','V','Q','E','1','3','W','S','A','D','I','K','J','L' };

	// Unique provisional defaults: White=L1, Black=L2; original LT uses R1.
	int padDefaults[HOST_TARGETS] = { 111, 112, 113, 114, 106, 104, 107, 108, 100, 101, 102, 103, 109, 209, 110, 211, 202, 203, 200, 201, 206, 207, 204, 205 };

	int family(SDL_Gamepad* p)
	{
		switch (SDL_GetGamepadType(p))
		{
			case SDL_GAMEPAD_TYPE_PS4:
				return 1;
			case SDL_GAMEPAD_TYPE_PS5:
				return 2;
			case SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_PRO:
				return 3;
			default:
				return 4;
		}
	}

	int empty_slot()
	{
		for (int i = 0; i < 2; ++i)
		{
			bool used = false;

			for (auto& p : pads)
				used |= p.slot == i;

			if (!used)
				return i;

		}
		return -1;
	}

	int source(SDL_Gamepad* p, int code)
	{
		if (code >= 100 && code < 100 + SDL_GAMEPAD_BUTTON_COUNT)
			return SDL_GetGamepadButton(p, (SDL_GamepadButton)(code - 100)) ? 32767 : 0;

		if (code >= 200 && code < 212)
		{
			int a = (code - 200) / 2;
			int v = SDL_GetGamepadAxis(p, (SDL_GamepadAxis)a);

			return ((code - 200) % 2) ? std::max(0, v) : std::max(0, -v);
		}

		return 0;
	}

	void fill(XBOX_INPUT_STATE& s, int target, int v)
	{
		if (target < 8)
		{
			if (v > 16000)
				s.Gamepad.wButtons |= 1u << target;
		}
		else if (target < 16)
		{
			const int analog[] =
			{
				XBOX_BUTTON_A,
				XBOX_BUTTON_B,
				XBOX_BUTTON_X,
				XBOX_BUTTON_Y,
				XBOX_BUTTON_WHITE,
				XBOX_BUTTON_BLACK,
				XBOX_BUTTON_LTRIGGER,
				XBOX_BUTTON_RTRIGGER
			};

			s.Gamepad.bAnalogButtons[analog[target - 8]] = (BYTE)(v * 255 / 32767);
		}
		else
		{
			SHORT* a[] =
			{
				&s.Gamepad.sThumbLY,
				&s.Gamepad.sThumbLY,
				&s.Gamepad.sThumbLX,
				&s.Gamepad.sThumbLX,
				&s.Gamepad.sThumbRY,
				&s.Gamepad.sThumbRY,
				&s.Gamepad.sThumbRX
				,&s.Gamepad.sThumbRX
			};

			const int sign[] = { 1,-1,-1,1,1,-1,-1,1 };
			*a[target - 16] = (SHORT)std::clamp((int)*a[target - 16] + sign[target - 16] * v, -32767, 32767);
		}
	}
}

extern "C" void host_binding_defaults(int p, int type)
{
	auto& m = maps[p][type];

	std::copy(type ? padDefaults : defaults, (type ? padDefaults : defaults) + HOST_TARGETS, m.value);
	m.canUndo = false;
}

extern "C" void host_input_init()
{
	if (initialized)
		return;

	for (int p = 0; p < 2; ++p)
		for (int t = 0; t < HOST_TYPES; ++t)
			host_binding_defaults(p, t);

	SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");

	if (!SDL_Init(SDL_INIT_GAMEPAD))
		std::fprintf(stderr, "[SDL3] %s\n", SDL_GetError());

	int n = 0;
	auto ids = SDL_GetGamepads(&n);

	for (int i = 0; i < n; ++i)
		if (auto* pad = SDL_OpenGamepad(ids[i]))
			pads.push_back({ ids[i],pad,-1,family(pad),true });

	SDL_free(ids);
	initialized = true;
}

extern "C" int host_binding_get(int p, int t, int target)
{
	return maps[p][t].value[target];
}

extern "C" void host_binding_set(int p, int t, int target, int value)
{
	if (p < 0 || p>1 || t < 0 || t >= HOST_TYPES || target < 0 || target >= HOST_TARGETS)
		return;

	if (!t && (value <= 0 || value > 255 || value == VK_ESCAPE || value == VK_F1))
		return;

	if (t && !((value >= 100 && value < 100 + SDL_GAMEPAD_BUTTON_COUNT) || (value >= 200 && value < 212)))
		return;

	auto& m = maps[p][t];
	if (m.value[target] == value)
		return;

	std::copy(m.value, m.value + HOST_TARGETS, m.undo);
	m.canUndo = true;

	for (int i = 0; i < HOST_TARGETS; ++i)
		if (i != target && m.value[i] == value)
		{
			m.value[i] = m.value[target];
			break;
		}

	m.value[target] = value;
}

extern "C" void host_binding_undo(int p, int t)
{
	auto& m = maps[p][t];

	if (m.canUndo)
	{
		std::copy(m.undo, m.undo + HOST_TARGETS, m.value);
		m.canUndo = false;
	}
}

extern "C" void host_capture_begin(int p, int t, int target)
{
	captureP = p;
	captureType = t;
	captureTarget = target;
}

extern "C" void host_capture_cancel()
{
	captureP = -1;
}

extern "C" int host_capture_active()
{
	return captureP >= 0;
}

extern "C" int host_input_key(int key, int down)
{
	if ((unsigned)key >= 256)
		return 0;

	bool fresh = down && !keys[key];
	keys[key] = down != 0;

	if (capturedKeys[key])
	{
		if (!down)
			capturedKeys[key] = false;

		return 1;
	}

	if (!menu || !fresh || key == VK_ESCAPE || key == VK_F1)
		return 0;

	if (captureP >= 0 && captureType == 0)
	{
		host_binding_set(captureP, 0, captureTarget, key);
		captureP = -1;
		capturedKeys[key] = true;

		return 1;
	}
	else if (captureP < 0 && key == VK_BACK)
	{
		host_binding_undo(keyboardPlayer, 0);
		return 1;
	}

	return 0;
}

extern "C" void host_input_keyboard_player(int p)
{
	keyboardPlayer = p;
}

extern "C" void host_input_clear()
{
	std::fill(std::begin(keys), std::end(keys), false);
}

extern "C" void host_input_focus(int on)
{
	focused = on != 0;
	if (!on)
		host_input_clear();
}

extern "C" void host_input_menu(int on)
{
	menu = on != 0;
	host_input_clear();

	if (!on)
	{
		host_capture_cancel();

		for (auto& p : pads)
			p.waitRelease = true;
	}
}

extern "C" void host_input_update()
{
	host_input_init();
	SDL_UpdateGamepads();

	SDL_Event event;

	while (SDL_PollEvent(&event)) {}

	for (auto it = pads.begin(); it != pads.end();)
	{
		if (!SDL_GamepadConnected(it->pad))
		{
			if (it->slot >= 0)
				InterlockedExchange(&disconnected, 1);

			SDL_CloseGamepad(it->pad);
			it = pads.erase(it);
		}
		else
			++it;
	}

	int n = 0;
	auto ids = SDL_GetGamepads(&n);

	for (int i = 0; i < n; ++i)
		if (std::none_of(pads.begin(), pads.end(), [&](const Pad& p) { return p.id == ids[i]; }))
			if (auto* pad = SDL_OpenGamepad(ids[i]))
			{
				int slot = empty_slot(); 
				pads.push_back(
					{ 
						ids[i],
						pad,
						slot,
						family(pad),
						false 
					});
			}

	SDL_free(ids);
	UINT deviceCount = 0; availability[0] = false;
	
	if (GetRawInputDeviceList(nullptr, &deviceCount, sizeof(RAWINPUTDEVICELIST)) == 0)
	{
		std::vector<RAWINPUTDEVICELIST> devices(deviceCount); 
		
		if (GetRawInputDeviceList(devices.data(), &deviceCount, sizeof(RAWINPUTDEVICELIST)) != (UINT)-1)
			for (auto& d : devices)
				availability[0] |= d.dwType == RIM_TYPEKEYBOARD;
	}

	for (int i = 1; i < HOST_TYPES; ++i)
		availability[i] = false;

	XBOX_INPUT_STATE next[2] {}; 
	bool present[2] {}; 
	int nextTypes[2] { -1,-1 };

	for (auto& p : pads)
	{
		p.menuConsumed = false;
		availability[p.type] = true;
		std::array<int, 48> now {};

		for (int i = 0; i < SDL_GAMEPAD_BUTTON_COUNT; ++i)
			now[i] = source(p.pad, 100 + i);

		for (int i = 0; i < 12; ++i)
			now[32 + i] = source(p.pad, 200 + i);

		bool joined = false;
		if (p.slot < 0 && p.startup)
			for (int i = 0; i < SDL_GAMEPAD_BUTTON_COUNT; ++i)if (now[i] && !p.previous[i])
			{
				p.slot = empty_slot(); 
				joined = p.slot >= 0; 
				break;
			}

		if (joined)
			p.waitRelease = true;

		if (p.waitRelease && std::all_of(now.begin(), now.end(), [](int v) { return v < 12000; }))
			p.waitRelease = false;

		if (p.slot >= 0)
		{
			int s = p.slot; 
			present[s] = true; 
			nextTypes[s] = p.type;

			uint64_t vibration = rumble[s].exchange(0); 
			if (vibration)
				SDL_RumbleGamepad(p.pad, (Uint16)(vibration >> 16), (Uint16)vibration, 1000);

			if (!p.waitRelease)
				for (int t = 0; t < HOST_TARGETS; ++t)
					fill(next[s], t, source(p.pad, maps[s][p.type].value[t]));

			if (menu && !joined && !p.waitRelease && focused)
			{
				bool captured = false;
				if (captureP == s && captureType == p.type)
					for (int i = 0; i < 44; ++i)
						if (now[i] > 20000 && p.previous[i] <= 20000)
						{
							host_binding_set(s, p.type, captureTarget, i < 32 ? 100 + i : 200 + i - 32); 
							captureP = -1; 
							captured = true; 
							p.waitRelease = true; 
							p.menuConsumed = true; 
							break;
						}

				if (!captured && captureP < 0)
				{
					int b = maps[s][p.type].value[9]; 
					int i = b >= 200 ? 32 + b - 200 : b - 100; 
					
					if (i >= 0 && i < 44 && now[i]>20000 && p.previous[i] <= 20000)
					{
						host_binding_undo(s, p.type); 
						p.menuConsumed = true; 
						p.waitRelease = true;
					}
				}
			}
		}
		p.previous = now;
	}

	if (pads.empty() && availability[0])
	{
		present[0] = true; 
		nextTypes[0] = 0; 
		
		for (int t = 0; t < HOST_TARGETS; ++t)
			fill(next[0], t, keys[maps[0][0].value[t]] ? 32767 : 0);
	}

	AcquireSRWLockExclusive(&lock);
	for (int i = 0; i < 2; ++i)
	{
		next[i].dwPacketNumber = snapshots[i].dwPacketNumber + 1; 
		
		if (menu || !focused)
			memset(&next[i].Gamepad, 0, sizeof next[i].Gamepad); 

		snapshots[i] = next[i]; 
		connected[i] = present[i]; 
		types[i] = nextTypes[i];
	}

	ReleaseSRWLockExclusive(&lock);
}

extern "C" int host_input_read(unsigned p, void* s)
{
	if (p >= 2 || !s
		)return 0; 
	
	AcquireSRWLockShared(&lock); 
	memcpy(s, &snapshots[p], sizeof(XBOX_INPUT_STATE)); 
	
	bool ok = connected[p]; 
	ReleaseSRWLockShared(&lock); 

	return ok;
}

extern "C" int host_input_connected(int p)
{
	if (p < 0 || p>1)
		return 0; 
	
	AcquireSRWLockShared(&lock); 
	
	bool v = connected[p]; 
	ReleaseSRWLockShared(&lock); 
	
	return v;
}

extern "C" int host_input_type(int p)
{
	return p >= 0 && p < 2 ? types[p] : -1;
}

extern "C" int host_input_available(int t)
{
	return t >= 0 && t < HOST_TYPES && availability[t];
}

extern "C" int host_input_disconnected()
{
	return InterlockedExchange(&disconnected, 0) != 0;
}

extern "C" int host_input_rumble(unsigned s, unsigned l, unsigned r)
{
	if (s >= 2 || !host_input_connected(s))
		return 0; 
	
	rumble[s].store((1ull << 32) | ((l & 65535) << 16) | (r & 65535)); 
	
	return 1;
}

extern "C" const char* host_target_name(int t)
{
	return targets[t];
}

extern "C" const char* host_binding_name(int type, int v)
{
	static char name[128]; if (!type)
	{
		UINT scan = MapVirtualKeyW(v, MAPVK_VK_TO_VSC); 
		
		if (v >= VK_PRIOR && v <= VK_DOWN)
			scan |= 0x100; 
		
		GetKeyNameTextA(scan << 16, name, sizeof name); 
		
		if (!*name)
			snprintf(name, sizeof name, "Key %d", v); 
		return name;
	}

	if (v >= 200)
	{
		const char* axis[] = { "Left stick left","Left stick right","Left stick up","Left stick down","Right stick left","Right stick right","Right stick up","Right stick down","L2 / LT (negative)","L2 / LT","R2 / RT (negative)","R2 / RT" }; 
		
		return axis[v - 200];
	}

	int b = v - 100; if (b < 4)
	{
		const char* labels[4][4] = { {"Cross","Circle","Square","Triangle"},{"Cross","Circle","Square","Triangle"},{"B","A","Y","X"},{"A","B","X","Y"} }; 
		return labels[type - 1][b];
	}

	const char* s = SDL_GetGamepadStringForButton((SDL_GamepadButton)b); 

	return s ? s : "Button";
}

extern "C" int host_input_load(const wchar_t* path)
{
	host_input_init(); 
	bool allValid = true;

	for (int p = 0; p < 2; ++p)
		for (int t = 0; t < HOST_TYPES; ++t)
		{
			wchar_t key[40], value[512]; 
			swprintf(key, 40, L"P%dType%d", p + 1, t);

			GetPrivateProfileStringW(L"Controls", key, L"", value, 512, path);

			if (!*value)
				continue;

			Mapping candidate = maps[p][t]; 
			wchar_t* cursor = value; 
			bool valid = true;

			for (int i = 0; i < HOST_TARGETS; ++i)
			{
				wchar_t* end; 
				long v = wcstol(cursor, &end, 10);

				if (end == cursor || (!t && (v <= 0 || v > 255 || v == VK_ESCAPE || v == VK_F1)) || (t && !((v >= 100 && v < 100 + SDL_GAMEPAD_BUTTON_COUNT) || (v >= 200 && v < 212))))
				{
					valid = false; 
					break;
				}

				for (int j = 0; j < i; ++j)
					if (candidate.value[j] == v)
						valid = false;

				candidate.value[i] = (int)v; 
				cursor = end;

				if (i + 1 < HOST_TARGETS)
				{
					if (*cursor != L',')
					{
						valid = false; 
						break;
					}

					++cursor;
				}
			}

			if (*cursor)
				valid = false;

			// Migrate only the exact old provisional keyboard defaults; retain
			// every customized profile, including deliberately remapped Start.
			if (valid && !t && candidate.value[4] == 'P')
			{
				bool legacy = true;

				for (int i = 0; i < HOST_TARGETS; ++i)
					if (i != 4 && candidate.value[i] != defaults[i])
						legacy = false;

				if (legacy)
					candidate.value[4] = VK_RETURN;
			}

			if (valid)
				maps[p][t] = candidate; 
			else 
				allValid = false;
		}

	if (!allValid)
		for (int p = 0; p < 2; ++p)
			for (int t = 0; t < HOST_TYPES; ++t)
				host_binding_defaults(p, t);

	return allValid;
}

extern "C" int host_input_serialize(char* out, int cap)
{
	int used = snprintf(out, cap, "\r\n[Controls]\r\n"); for (int p = 0; p < 2; ++p)
		for (int t = 0; t < HOST_TYPES; ++t)
		{
			used += snprintf(out + used, cap - used, "P%dType%d=", p + 1, t); 
			
			for (int i = 0; i < HOST_TARGETS; ++i)
				used += snprintf(out + used, cap - used, "%s%d", i ? "," : "", maps[p][t].value[i]); 
			
			used += snprintf(out + used, cap - used, "\r\n");
		}
	
	return used;
}

extern "C" void host_input_navigation()
{
	if (!menu || !ImGui::GetCurrentContext())
		return; 
	
	auto& io = ImGui::GetIO(); io.BackendFlags |= ImGuiBackendFlags_HasGamepad; 
	bool nav[6] {}; 
	
	for (auto& p : pads)
		if (focused && p.slot >= 0 && !p.waitRelease && !p.menuConsumed && captureP < 0)
		{
			nav[0] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_DPAD_UP); 
			nav[1] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_DPAD_DOWN); 
			nav[2] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_DPAD_LEFT); 
			nav[3] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_DPAD_RIGHT); 
			nav[4] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_SOUTH); 
			nav[5] |= SDL_GetGamepadButton(p.pad, SDL_GAMEPAD_BUTTON_START);
		}
	
	ImGuiKey k[] = 
	{ 
		ImGuiKey_GamepadDpadUp,
		ImGuiKey_GamepadDpadDown,
		ImGuiKey_GamepadDpadLeft,
		ImGuiKey_GamepadDpadRight,
		ImGuiKey_GamepadFaceDown,
		ImGuiKey_GamepadStart 
	}; 
	
	for (int i = 0; i < 6; ++i)
		io.AddKeyEvent(k[i], nav[i]);
}
