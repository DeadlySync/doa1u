#ifndef DOA1U_GRAPHICS_SETTINGS_H
#define DOA1U_GRAPHICS_SETTINGS_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize before guest threads start. Aspect ratio and window size are live. */
void graphics_settings_init(void);
int graphics_widescreen(void);

/* Read on the renderer/UI thread, between frames. Filtering: 0 nearest,
 * 1 bilinear, 2 trilinear, 3 anisotropic; anisotropy is the actual factor. */
void graphics_render_size(unsigned *width, unsigned *height);

int graphics_texture_filter(void);
unsigned graphics_anisotropy(void);

/* Apply saved/live client-size preset between frames on the window thread. */
void graphics_window_apply(void *window);

/* Opaque Win32/D3D11 pointers keep the guest-facing C interface small. */
void graphics_ui_renderer_name(const char *name);

int graphics_ui_init(void *window, void *device, void *context);
int graphics_ui_message(void *window, unsigned message, uintptr_t wparam, intptr_t lparam);
void graphics_ui_draw(void);

#ifdef __cplusplus
}
#endif
#endif
