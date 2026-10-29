/**
 * Xbox Input Compatibility Layer
 *
 * Translates the Xbox controller API to a host gamepad backend.
 * Handles the structural differences between the Xbox gamepad
 * (analog buttons as bytes, separate trigger channels) and the host
 * (digital face buttons, trigger axes).
 *
 *   _WIN32 -> Windows XInput
 *   POSIX  -> SDL2 GameController
 */

#include "xinput_xbox.h"
#include "keyboard.h"
#include "mkb_input.h"
#include <stdlib.h>
#include <string.h>

/* Merge the keyboard on top of a pad on port 0 rather than only standing in
 * for a missing one.
 *
 * The first version put the keyboard behind XInput's failure, on the
 * assumption that with nothing plugged in the call would fail. It does
 * not: under Wine XInputGetState returns ERROR_SUCCESS and a gamepad
 * with every button at rest, so the fallback was unreachable and
 * pressing a key did nothing at all.
 *
 * Merging is also the better rule. A real pad keeps working -- its
 * buttons are already in pState and the keyboard only adds to them --
 * and there is no special case left to get wrong. */
static void keyboard_merge(XBOX_INPUT_STATE *pState)
{
    XBOX_INPUT_STATE kb;
    int i;

    if (!xbox_InputKeyboardPoll(&kb))
        return;
    pState->Gamepad.wButtons |= kb.Gamepad.wButtons;
    for (i = 0; i < 8; i++)
        if (kb.Gamepad.bAnalogButtons[i] > pState->Gamepad.bAnalogButtons[i])
            pState->Gamepad.bAnalogButtons[i] = kb.Gamepad.bAnalogButtons[i];
    if (kb.Gamepad.sThumbLX) pState->Gamepad.sThumbLX = kb.Gamepad.sThumbLX;
    if (kb.Gamepad.sThumbLY) pState->Gamepad.sThumbLY = kb.Gamepad.sThumbLY;
    if (kb.Gamepad.sThumbRX) pState->Gamepad.sThumbRX = kb.Gamepad.sThumbRX;
    if (kb.Gamepad.sThumbRY) pState->Gamepad.sThumbRY = kb.Gamepad.sThumbRY;
    /* The input layer records edges, so an unchanged packet number is
     * read as the same state and the press never happens. */
    pState->dwPacketNumber = kb.dwPacketNumber;
}

/* ======================================================================== */
#if defined(_WIN32)
/* ====================  XInput backend  ================================== */
/* ======================================================================== */

#include <xinput.h>
#pragma comment(lib, "xinput.lib")

static BOOL  g_controller_connected[XBOX_MAX_CONTROLLERS] = { FALSE };
static DWORD g_last_packet[XBOX_MAX_CONTROLLERS] = { 0 };

/* Device discovery can block inside the Windows driver. Keep it off the
 * guest/render thread: connected pads sampled at 60 Hz, empty slots at 1 Hz.
 * Only the tiny snapshot copy holds the lock, never an XInput call. */
static INIT_ONCE s_pad_once = INIT_ONCE_STATIC_INIT;
static SRWLOCK s_pad_lock = SRWLOCK_INIT;
static XINPUT_STATE s_pad_state[XBOX_MAX_CONTROLLERS];
static DWORD s_pad_result[XBOX_MAX_CONTROLLERS] = {
    ERROR_DEVICE_NOT_CONNECTED, ERROR_DEVICE_NOT_CONNECTED,
    ERROR_DEVICE_NOT_CONNECTED, ERROR_DEVICE_NOT_CONNECTED
};
static DWORD WINAPI input_sample_thread(LPVOID unused)
{
    ULONGLONG retry[XBOX_MAX_CONTROLLERS] = {0};
    LARGE_INTEGER frequency, next;
    HANDLE timer = CreateWaitableTimerExW(NULL, NULL, 0x2, TIMER_ALL_ACCESS);
    if (!timer) timer = CreateWaitableTimerW(NULL, FALSE, NULL);
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&next);
    (void)unused;
    for (;;) {
        ULONGLONG ms = GetTickCount64();
        for (DWORD port = 0; port < XBOX_MAX_CONTROLLERS; ++port) {
            if (ms < retry[port]) continue;
            XINPUT_STATE state = {0};
            DWORD result = XInputGetState(port, &state);
            AcquireSRWLockExclusive(&s_pad_lock);
            s_pad_state[port] = state;
            s_pad_result[port] = result;
            ReleaseSRWLockExclusive(&s_pad_lock);
            retry[port] = result == ERROR_SUCCESS ? 0 : GetTickCount64() + 1000;
        }
        LARGE_INTEGER now, due;
        next.QuadPart += frequency.QuadPart / 60;
        QueryPerformanceCounter(&now);
        if (next.QuadPart < now.QuadPart) next.QuadPart = now.QuadPart + frequency.QuadPart / 60;
        due.QuadPart = -(next.QuadPart - now.QuadPart) * 10000000 / frequency.QuadPart;
        if (timer && SetWaitableTimer(timer, &due, 0, NULL, NULL, FALSE))
            WaitForSingleObject(timer, INFINITE);
        else Sleep(16);
    }
}
static BOOL CALLBACK input_sample_start(PINIT_ONCE once, PVOID parameter, PVOID *context)
{
    HANDLE thread = CreateThread(NULL, 0, input_sample_thread, NULL, 0, NULL);
    (void)once; (void)parameter; (void)context;
    if (!thread) return FALSE;
    CloseHandle(thread);
    return TRUE;
}

/* The keyboard on port 0 (RECOMP_KEYBOARD=1) comes from keyboard.c, shared
 * with the SDL backend; the GDI window in fb_present.c records the keys. */

void xbox_InputInit(void)
{
    InitOnceExecuteOnce(&s_pad_once, input_sample_start, NULL, NULL);
}

DWORD xbox_InputGetState(DWORD dwPort, XBOX_INPUT_STATE *pState)
{
    XINPUT_STATE xi_state;
    DWORD result;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pState)
        return ERROR_DEVICE_NOT_CONNECTED;

    xbox_InputInit();
    AcquireSRWLockShared(&s_pad_lock);
    result = s_pad_result[dwPort];
    xi_state = s_pad_state[dwPort];
    ReleaseSRWLockShared(&s_pad_lock);
    if (result != ERROR_SUCCESS) {
        g_controller_connected[dwPort] = FALSE;
        if (dwPort == 0) {
            /* Keyboard and mouse stand in for an absent pad, so the game is
             * playable with no controller plugged in. */
            int kb;
            memset(pState, 0, sizeof *pState);
            kb = xbox_InputKeyboardPoll(pState);
            if (mkb_merge(dwPort, pState))
                g_controller_connected[dwPort] = TRUE;
            if (kb || mkb_enabled())
                return ERROR_SUCCESS;
        }
        return result;
    }

    g_controller_connected[dwPort] = TRUE;
    g_last_packet[dwPort] = xi_state.dwPacketNumber;

    memset(pState, 0, sizeof(XBOX_INPUT_STATE));
    pState->dwPacketNumber = xi_state.dwPacketNumber;
    pState->Gamepad.wButtons = xi_state.Gamepad.wButtons & 0x00FF;

    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_A) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_B) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_X) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_Y) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] = xi_state.Gamepad.bLeftTrigger;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] = xi_state.Gamepad.bRightTrigger;

    pState->Gamepad.sThumbLX = xi_state.Gamepad.sThumbLX;
    pState->Gamepad.sThumbLY = xi_state.Gamepad.sThumbLY;
    pState->Gamepad.sThumbRX = xi_state.Gamepad.sThumbRX;
    pState->Gamepad.sThumbRY = xi_state.Gamepad.sThumbRY;

    if (dwPort == 0)
        keyboard_merge(pState);

    /* Mouse+keyboard merges on top of a real pad too: the mouse owns the
     * aim stick while it is moving, WASD owns movement while held. */
    if (dwPort == 0)
        mkb_merge(dwPort, pState);

    return ERROR_SUCCESS;
}

DWORD xbox_InputSetState(DWORD dwPort, const XBOX_VIBRATION *pVibration)
{
    XINPUT_VIBRATION xi_vib;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pVibration)
        return ERROR_DEVICE_NOT_CONNECTED;

    xi_vib.wLeftMotorSpeed = pVibration->wLeftMotorSpeed;
    xi_vib.wRightMotorSpeed = pVibration->wRightMotorSpeed;
    return XInputSetState(dwPort, &xi_vib);
}

BOOL xbox_InputIsConnected(DWORD dwPort)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS) return FALSE;
    return g_controller_connected[dwPort];
}

DWORD xbox_InputGetCapabilities(DWORD dwPort, DWORD dwFlags, XBOX_INPUT_CAPABILITIES *pCaps)
{
    XINPUT_CAPABILITIES xi_caps;
    DWORD result;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pCaps)
        return ERROR_DEVICE_NOT_CONNECTED;

    result = XInputGetCapabilities(dwPort, dwFlags, &xi_caps);
    if (result != ERROR_SUCCESS) return result;

    memset(pCaps, 0, sizeof(XBOX_INPUT_CAPABILITIES));
    pCaps->Type = xi_caps.Type;
    pCaps->SubType = xi_caps.SubType;
    pCaps->Flags = xi_caps.Flags;
    return ERROR_SUCCESS;
}

/* ======================================================================== */
#else /* !_WIN32 */
/* ====================  SDL2 GameController backend  ===================== */
/* ======================================================================== */

#include <SDL.h>

static SDL_GameController *g_pads[XBOX_MAX_CONTROLLERS];
static BOOL  g_controller_connected[XBOX_MAX_CONTROLLERS];
static DWORD g_packet[XBOX_MAX_CONTROLLERS];

/* Set while the framebuffer window's main thread pumps SDL events
 * (src/video/fb_present_sdl.c). The pump already updates the controllers,
 * and SDL_GameControllerUpdate pumps events itself, which on macOS must only
 * happen on the main thread; so then this side only reads them. */
static volatile int g_main_pump;

void xbox_InputSetMainPump(int on)
{
    g_main_pump = on;
}

/* Whether any controller is open: SDL must stay up for it at shutdown. */
int xbox_InputAnyOpen(void)
{
    for (int i = 0; i < XBOX_MAX_CONTROLLERS; i++)
        if (g_pads[i])
            return 1;
    return 0;
}

/* Open up to XBOX_MAX_CONTROLLERS attached game controllers. */
static void open_controllers(void)
{
    int slot = 0;
    for (int i = 0; i < SDL_NumJoysticks() && slot < XBOX_MAX_CONTROLLERS; i++) {
        if (!SDL_IsGameController(i))
            continue;
        if (!g_pads[slot]) {
            g_pads[slot] = SDL_GameControllerOpen(i);
            g_controller_connected[slot] = (g_pads[slot] != NULL);
        }
        slot++;
    }
}

void xbox_InputInit(void)
{
    /* Keep the default SIGINT/SIGTERM: SDL would turn them into an SDL_QUIT
     * that nothing reads without a window, and Ctrl-C would stop working. */
    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    if (!SDL_WasInit(SDL_INIT_GAMECONTROLLER))
        SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER);
    open_controllers();
}

DWORD xbox_InputGetState(DWORD dwPort, XBOX_INPUT_STATE *pState)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pState)
        return ERROR_DEVICE_NOT_CONNECTED;

    SDL_GameController *c = g_pads[dwPort];
    if (!c || !SDL_GameControllerGetAttached(c)) {
        g_controller_connected[dwPort] = FALSE;
        if (dwPort == 0 && xbox_InputKeyboardPoll(pState))
            return ERROR_SUCCESS;
        return ERROR_DEVICE_NOT_CONNECTED;
    }

    if (!g_main_pump)
        SDL_GameControllerUpdate();
    g_controller_connected[dwPort] = TRUE;

    memset(pState, 0, sizeof(XBOX_INPUT_STATE));
    pState->dwPacketNumber = ++g_packet[dwPort];

    WORD btn = 0;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_UP))    btn |= XBOX_GAMEPAD_DPAD_UP;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_DOWN))  btn |= XBOX_GAMEPAD_DPAD_DOWN;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_LEFT))  btn |= XBOX_GAMEPAD_DPAD_LEFT;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) btn |= XBOX_GAMEPAD_DPAD_RIGHT;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_START))      btn |= XBOX_GAMEPAD_START;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_BACK))       btn |= XBOX_GAMEPAD_BACK;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_LEFTSTICK))  btn |= XBOX_GAMEPAD_LEFT_THUMB;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_RIGHTSTICK)) btn |= XBOX_GAMEPAD_RIGHT_THUMB;
    pState->Gamepad.wButtons = btn;

    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_A) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_B) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_X) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_Y) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_LEFTSHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) ? 255 : 0;

    /* SDL trigger axes are 0..32767 -> Xbox analog button 0..255 */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] =
        (BYTE)(SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERLEFT) >> 7);
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] =
        (BYTE)(SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) >> 7);

    /* SDL Y axis points down; the Xbox Y axis points up -- invert.
     * Use (-1 - v) so v = -32768 does not overflow SHORT. */
    pState->Gamepad.sThumbLX = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTX);
    pState->Gamepad.sThumbLY =
        (SHORT)(-1 - SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTY));
    pState->Gamepad.sThumbRX = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_RIGHTX);
    pState->Gamepad.sThumbRY =
        (SHORT)(-1 - SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_RIGHTY));

    if (dwPort == 0)
        keyboard_merge(pState);
    return ERROR_SUCCESS;
}

DWORD xbox_InputSetState(DWORD dwPort, const XBOX_VIBRATION *pVibration)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pVibration)
        return ERROR_DEVICE_NOT_CONNECTED;

    SDL_GameController *c = g_pads[dwPort];
    if (!c) return ERROR_DEVICE_NOT_CONNECTED;

    /* SDL rumble needs a duration; refresh for ~1s on each call (the game
     * polls vibration continuously). */
    SDL_GameControllerRumble(c, pVibration->wLeftMotorSpeed,
                             pVibration->wRightMotorSpeed, 1000);
    return ERROR_SUCCESS;
}

BOOL xbox_InputIsConnected(DWORD dwPort)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS) return FALSE;
    return g_controller_connected[dwPort];
}

DWORD xbox_InputGetCapabilities(DWORD dwPort, DWORD dwFlags, XBOX_INPUT_CAPABILITIES *pCaps)
{
    (void)dwFlags;
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pCaps)
        return ERROR_DEVICE_NOT_CONNECTED;
    if (!g_pads[dwPort])
        return ERROR_DEVICE_NOT_CONNECTED;

    memset(pCaps, 0, sizeof(XBOX_INPUT_CAPABILITIES));
    pCaps->Type    = 1;   /* XINPUT_DEVTYPE_GAMEPAD */
    pCaps->SubType = 1;   /* XINPUT_DEVSUBTYPE_GAMEPAD */
    pCaps->Flags   = 0;
    return ERROR_SUCCESS;
}

#endif /* _WIN32 */

/* ============================================================================
 * Recompiler bridge for the lifted XAPILIB input functions. (DOA1U; re-lift)
 *
 * DOA1U reads controllers through its statically-linked XInput/USB stack, which
 * finds nothing because the USB/XID devices are not emulated -- so the stock
 * usb_gamepad path is never polled and the key table nobody reads. Rather than
 * emulate USB, the gen-side overrides of the XAPILIB input VAs
 * (XGetDevices / XGetDeviceChanges / XInputOpen / XInputGetCapabilities /
 * XInputGetState -- see tools/reapply_gen_edits.py) call these helpers with
 * guest addresses. We translate the guest VA to a host pointer and fill the
 * standard Xbox XINPUT_STATE / caps; the game's own poll (FUN_00052640) then
 * translates that into its internal per-pad format. One pad, on port 0.
 *
 * Keyboard needs RECOMP_KEYBOARD set and the display window focused; an XInput
 * pad works whenever one is connected. With neither, a poll reads all-released,
 * which is harmless.
 * ========================================================================== */
#include <stdio.h>
#include <stddef.h>
extern ptrdiff_t xbox_GetMemoryOffset(void);   /* src/kernel/xbox_memory_layout */

static void *recomp_guest_ptr(uint32_t va)
{
    return (void *)((unsigned char *)xbox_GetMemoryOffset() + (size_t)va);
}

uint32_t recomp_host_xgetdevices(void)
{
    return 1u;                     /* bit 0 = port 0 present */
}

void recomp_host_xgetdevicechanges(uint32_t insertions_va, uint32_t removals_va)
{
    static int announced;
    DWORD *ins = (DWORD *)recomp_guest_ptr(insertions_va);
    DWORD *rem = (DWORD *)recomp_guest_ptr(removals_va);
    *ins = announced ? 0u : 1u;    /* report port 0 inserted once */
    *rem = 0u;
    announced = 1;
}

uint32_t recomp_host_xinputopen(uint32_t port)
{
    return port + 1u;              /* any non-zero handle */
}

void recomp_host_xinput_getcaps(uint32_t caps_va)
{
    XBOX_INPUT_CAPABILITIES *caps = (XBOX_INPUT_CAPABILITIES *)recomp_guest_ptr(caps_va);
    memset(caps, 0, sizeof *caps);
    caps->Type    = 1;             /* XINPUT_DEVTYPE_GAMEPAD   */
    caps->SubType = 1;             /* XINPUT_DEVSUBTYPE_GAMEPAD */
}

void recomp_host_xinput_getstate(uint32_t state_va)
{
    XBOX_INPUT_STATE *st = (XBOX_INPUT_STATE *)recomp_guest_ptr(state_va);
    static long calls;
    if (calls++ == 0)
        fprintf(stderr, "[INPUT] guest is polling XInputGetState -- "
                        "controller bridge is live\n");
    memset(st, 0, sizeof *st);     /* all-released if no input is held */
    xbox_InputGetState(0, st);

    /* RECOMP_KEY_TRACE: pin down the keyboard->guest merge. Shows, while a key
     * is physically latched in the table, whether xbox_InputGetState actually
     * folded it into wButtons -- i.e. whether the keyboard reaches the struct
     * the guest reads. enterRaw/zRaw read the SAME s_key_down the wndproc sets. */
    if (getenv("RECOMP_KEY_TRACE")) {
        int enterRaw = xbox_FramebufferKeyDown(0x0D);
        int zRaw     = xbox_FramebufferKeyDown('Z');
        static int once;
        if ((enterRaw || zRaw || st->Gamepad.wButtons) && once < 40) { once++;
            fprintf(stderr, "[INPUTST] poll#%ld wButtons=0x%04X analogA=%u kbdenv=%d "
                    "enterRaw=%d zRaw=%d\n", calls, st->Gamepad.wButtons,
                    st->Gamepad.bAnalogButtons[0], getenv("RECOMP_KEYBOARD") ? 1 : 0,
                    enterRaw, zRaw);
            fflush(stderr);
        }
    }

    /* RECOMP_INPUT_TEST: headless end-to-end check. Hold START after a short
     * delay so an attract/demo loop that exits on START is seen to react
     * without a focused window. */
    static int test = -1;
    if (test < 0)
        test = getenv("RECOMP_INPUT_TEST") != NULL;
    if (test && calls > 300) {
        st->Gamepad.wButtons |= XBOX_GAMEPAD_START;
        st->dwPacketNumber++;
    }
}
