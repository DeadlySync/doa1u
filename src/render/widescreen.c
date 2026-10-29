/* Named guest shadows: preserve original projection and culling behavior in 4:3. */
#include <stdint.h>
#include <string.h>
#include "common/guest_addresses.h"
#include "common/guest_runtime.h"
#include "game/game_driver.h"
#include "render/graphics_settings.h"
#include "nv2a_backend.h"

extern void sub_001847B3_gen(void);
extern void sub_00063420_gen(void);
extern void sub_0005C850_gen(void);
static RTLS int s_gameplay_projection;

static float as_float(uint32_t bits) 
{ 
	float v; 
	memcpy(&v, &bits, 4); 
	return v; 
}

static uint32_t as_bits(float v) 
{ 
	uint32_t bits; 
	memcpy(&bits, &v, 4); 
	return bits; 
}

/* Emit a private presentation marker through the ORIGINAL ring-space writer.
 * The executor consumes it in command order; never share mutable guest draw
 * context with the GPU thread. Preserve all guest registers around this call. */
static void presentation_marker(unsigned mode)
{
    uint32_t saved[] = 
	{
		g_eax,
		g_ecx,
		g_edx,
		g_ebx,
		g_esi,
		g_edi,
		g_ebp,
		g_esp,
		g_seh_ebp
	};
	
    g_ecx = (1u << 18) | (7u << 13) | NV2A_PRESENTATION_METHOD;
    g_edx = NV2A_PRESENTATION_COOKIE | mode;
	
    gd_guest_call(0x00160D00u, 0, NULL, 0);
	
    g_eax=saved[0]; 
	g_ecx=saved[1]; 
	g_edx=saved[2]; 
	g_ebx=saved[3];
    g_esi=saved[4]; 
	g_edi=saved[5]; 
	g_ebp=saved[6]; 
	g_esp=saved[7]; 
	g_seh_ebp=saved[8];
}

/* Called by the existing set_camera_draw_stage shadow before its original. */
void widescreen_camera_begin(void)
{
    s_gameplay_projection = graphics_widescreen();
    presentation_marker(s_gameplay_projection ? NV2A_PRESENTATION_WORLD : 0);
}

void widescreen_camera_end(void) { s_gameplay_projection = 0; }

/* D3DXMatrixPerspectiveFovLH: change only this gameplay camera's aspect;
 * leave vertical FOV, near/far, and subsequent off-axis adjustments original. */
void sub_001847B3(void)
{
    uint32_t arg = g_esp + 12;
    uint32_t original = GMEM32(arg);
	
    if (s_gameplay_projection) 
		GMEM32(arg) = as_bits(16.0f / 9.0f);
	
    sub_001847B3_gen();
    GMEM32(arg) = original;
}

/* Sphere/frustum visibility: broaden only horizontal bounds conservatively.
 * Keep original near/far and vertical rejection; do not force models visible. */
void sub_00063420(void)
{
    if (!graphics_widescreen() || GMEM8(DOA1U_SCENE_MODE_VA) != 1) 
	{
        sub_00063420_gen(); 
		return;
    }
	
    uint32_t slope = GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA);
    uint32_t radius = GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA);
	
    GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA) = as_bits(as_float(slope) * (4.0f/3.0f));
    GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA) = as_bits(as_float(radius) * (4.0f/3.0f));
    sub_00063420_gen();
	
    GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA) = slope;
    GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA) = radius;
}

/* The stage's pretransformed sky/sand is a background, not HUD. Cover the
 * wide canvas without stretching its pixels; crop vertically as necessary. */
void sub_0005C850(void)
{
    int wide = graphics_widescreen();
    if (wide) 
		presentation_marker(NV2A_PRESENTATION_BACKGROUND);
	
    sub_0005C850_gen();
	
    if (wide) 
		presentation_marker(NV2A_PRESENTATION_WORLD);
}
