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

/* Port-owned SDL3 adapter. Discovery/pumping runs on the window thread;
 * all guest callers consume snapshots without invoking device drivers. */
extern void host_input_init(void);
extern int host_input_read(unsigned,void *);
extern int host_input_connected(int);
extern int host_input_rumble(unsigned,unsigned,unsigned);
void xbox_InputInit(void) { /* Initialized by host before guest startup. */ }
DWORD xbox_InputGetState(DWORD port,XBOX_INPUT_STATE *state) {
    if(!state)return ERROR_DEVICE_NOT_CONNECTED;
    memset(state,0,sizeof *state);
    return host_input_read(port,state)?ERROR_SUCCESS:ERROR_DEVICE_NOT_CONNECTED;
}
DWORD xbox_InputSetState(DWORD port,const XBOX_VIBRATION *v) {
    if(!v||!host_input_connected(port))return ERROR_DEVICE_NOT_CONNECTED;
    host_input_rumble(port,v->wLeftMotorSpeed,v->wRightMotorSpeed);return ERROR_SUCCESS;
}
BOOL xbox_InputIsConnected(DWORD port) {return host_input_connected(port);}
DWORD xbox_InputGetCapabilities(DWORD port,DWORD flags,XBOX_INPUT_CAPABILITIES *caps) {
    (void)flags;if(!caps||!host_input_connected(port))return ERROR_DEVICE_NOT_CONNECTED;
    memset(caps,0,sizeof *caps);caps->Type=1;caps->SubType=1;return ERROR_SUCCESS;
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
    return (xbox_InputIsConnected(0)?1u:0u)|(xbox_InputIsConnected(1)?2u:0u);
}

void recomp_host_xgetdevicechanges(uint32_t insertions_va, uint32_t removals_va)
{
    static uint32_t previous;
    DWORD *ins = (DWORD *)recomp_guest_ptr(insertions_va);
    DWORD *rem = (DWORD *)recomp_guest_ptr(removals_va);
    uint32_t current=recomp_host_xgetdevices();
    *ins=current&~previous;*rem=previous&~current;previous=current;
}

uint32_t recomp_host_xinputopen(uint32_t port)
{
    return port<2 ? port+1u : 0;
}

void recomp_host_xinput_getcaps(uint32_t caps_va)
{
    XBOX_INPUT_CAPABILITIES *caps = (XBOX_INPUT_CAPABILITIES *)recomp_guest_ptr(caps_va);
    memset(caps, 0, sizeof *caps);
    caps->Type    = 1;             /* XINPUT_DEVTYPE_GAMEPAD   */
    caps->SubType = 1;             /* XINPUT_DEVSUBTYPE_GAMEPAD */
}

uint32_t recomp_host_xinput_getstate(uint32_t handle, uint32_t state_va)
{
    XBOX_INPUT_STATE *st = (XBOX_INPUT_STATE *)recomp_guest_ptr(state_va);
    static long calls;
    if (calls++ == 0)
        fprintf(stderr, "[INPUT] guest is polling XInputGetState -- "
                        "controller bridge is live\n");
    memset(st, 0, sizeof *st);     /* all-released if no input is held */
    DWORD result=xbox_InputGetState(handle?handle-1u:4u, st);

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
    return result;
}
