#ifndef DOA1U_GRAPHICS_SETTINGS_H
#define DOA1U_GRAPHICS_SETTINGS_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize before guest threads start. Aspect ratio and window size are live. */
void graphics_settings_init(void);
int graphics_launcher_needed(void);
int graphics_launcher_run(void);
void graphics_game_started(void);
void *graphics_take_startup_window(void);
void graphics_set_startup_window(void *window);
/* The retained startup HWND has a dedicated owner. Queue input for the GPU
 * thread; never touch ImGui or renderer state from the HWND owner thread. */
int graphics_window_defer_message(void *window, unsigned message, uintptr_t wparam, intptr_t lparam);
void graphics_window_dispatch_pending(void);
int graphics_menu_visible(void);
int graphics_game_paused(void);
void graphics_wait_for_game(void);
/* Requests consumed only by the existing guest-context match pause handler. */
int graphics_pause_request(int paused);
void graphics_pause_result(int before, int after);
int graphics_widescreen(void);

/* Read on the renderer/UI thread, between frames. Filtering: 0 nearest,
 * 1 bilinear, 2 trilinear, 3 anisotropic; anisotropy is the actual factor. */
void graphics_render_size(unsigned *width, unsigned *height);

int graphics_texture_filter(void);
/* Sharp nearest/integer-sized 2D, otherwise guest-requested sampling. */
int graphics_sharp_2d(void);
/* Source-resolution symmetric nearest-neighbor smoothing before 2D sampling. */
int graphics_snn_2d(void);
int graphics_lanczos_2d(void);
float graphics_lanczos_ar(void);
unsigned graphics_anisotropy(void);
/* Stable INI IDs: Off=0, SSAA=1, FXAA=3; other IDs are not implemented. */
int graphics_aa_method(void);
unsigned graphics_msaa_samples(void);
unsigned graphics_ssaa_samples(void);

/* Apply saved/live client-size preset between frames on the window thread. */
void graphics_window_apply(void *window);

/* Opaque Win32/D3D11 pointers keep the guest-facing C interface small. */
void graphics_ui_renderer_name(const char *name);

int graphics_ui_init(void *window, void *device, void *context);
int graphics_ui_message(void *window, unsigned message, uintptr_t wparam, intptr_t lparam);
void graphics_ui_draw(void);
/* Build draw data; NRI owns GPU rendering on all APIs. */
void graphics_ui_frame(void);
int graphics_backend(void);
void graphics_ui_shutdown(void);

#ifdef __cplusplus
}
#endif
#endif
