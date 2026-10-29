/* Stage floor/boundary builder and draw tracing. */
#include "common/guest_addresses.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "game/game_driver.h"

extern void widescreen_camera_begin(void);
extern void widescreen_camera_end(void);

extern void sub_0005CC50_gen(void);   /* set_camera_draw_stage (camera + stage) */
extern void sub_0005C330_gen(void);   /* draw_stage_floor_backdrop              */
extern void sub_0005C410_gen(void);   /* draw_stage_objects                     */
extern void sub_0004C200_gen(void);   /* draw_attract_wall                      */


static int bg_trace(void)
{
    static int v = -1;
    if (v < 0) 
	{ 
		const char *e = getenv("RECOMP_BG_TRACE"); 
		v = (e && *e && *e != '0'); 
	}
    return v;
}

static void bg_log(const char *name, uint32_t va)
{
    if (!bg_trace()) 
		return;
	
    static uint64_t n;
    if (n < 8 || (n % 600) == 0)
        fprintf(stderr, "[BG] %-24s 0x%06X\n", name, va);
	
    n++;
    fflush(stderr);
}

static float bg_u2f(uint32_t u) 
{ 
	float f; 
	memcpy(&f, &u, 4); 
	
	return f; 
}

static uint32_t bg_f2u(float f) 
{ 
	uint32_t u; 
	memcpy(&u, &f, 4); 
	
	return u; 
}

/* FUN_0005B9C0: build the arena plane and four vertical boundary strips.
 * Verified against Ghidra: FVF 0x102, XYZ/UV, 20 bytes per vertex. These are
 * the actual emblem floor and grid border, NOT the sandy 2D beach backdrop.
 * Keep the original guest buffers: 5C330 and collision/effect code use them.
 */
static void stage_vertex(uint32_t address, float x, float y, float z, float u, float v)
{
    GMEM32(address) = bg_f2u(x);
    GMEM32(address + 4) = bg_f2u(y);
    GMEM32(address + 8) = bg_f2u(z);
    GMEM32(address + 12) = bg_f2u(u);
    GMEM32(address + 16) = bg_f2u(v);
}

void build_stage_floor_and_boundary_vertices(void)
{
    const float arena_size = bg_u2f(GMEM32(0x0030F918));
    const float half = bg_u2f(GMEM32(0x0022C0D8));
    float floor_size = arena_size;
    float uv_extent;
    const float surface_variant = bg_u2f(GMEM32(0x00315AD0));
    uint32_t texture_variant = 0;

    if (GMEM8(DOA1U_GAME_MODE_VA) == 6)
        floor_size *= bg_u2f(GMEM32(GMEM32(0x006EECD8) == 0 ? 0x0022C1A8 : 0x0022C0D8));
	
    uv_extent = floor_size;
    if (surface_variant == bg_u2f(GMEM32(0x0022C0D4)))
        texture_variant = 2;
    else if (surface_variant == arena_size)
        texture_variant = 1;
    else
        uv_extent = 1.0f;
	
    if (GMEM8(DOA1U_SCENE_MODE_VA) == 4) 
	{
        texture_variant = 0;
        uv_extent = 1.0f;
        floor_size = bg_u2f(GMEM32(0x0022C1E8));
    }
	
    GMEM32(0x006EE940) = texture_variant;
    const float radius = floor_size * half;
    stage_vertex(0x006EEA40, -radius, 1,  radius, 0, 0);
    stage_vertex(0x006EEA54,  radius, 1,  radius, uv_extent, 0);
    stage_vertex(0x006EEA68, -radius, 1, -radius, 0, uv_extent);
    stage_vertex(0x006EEA7C,  radius, 1, -radius, uv_extent, uv_extent);

    const float corners[4][2] = 
	{
        {-radius, -radius}, {radius, -radius},
        { radius,  radius}, {-radius, radius}
    };
	
    for (unsigned side = 0; side < 4; ++side) 
	{
        const float *start = corners[side];
        const float *end = corners[(side + 1) & 3];
        const uint32_t strip = 0x006EEB98 + side * 80;
		
        stage_vertex(strip,      start[0], 1, start[1], 0, 0);
        stage_vertex(strip + 20, end[0],   1, end[1], arena_size, 0);
        stage_vertex(strip + 40, start[0], 0, start[1], 0, 1);
        stage_vertex(strip + 60, end[0],   0, end[1], arena_size, 1);
    }
    g_esp += 4; /* guest cdecl ret; no stack arguments or callee-saved clobbers */
}
void sub_0005B9C0(void) { build_stage_floor_and_boundary_vertices(); }

/* set_camera + draw_stage */
// FUN_0005CC50
void set_camera_draw_stage(void)
{
    bg_log("set_camera_draw_stage", 0x0005CC50u);
    widescreen_camera_begin();
    sub_0005CC50_gen();
    widescreen_camera_end();
}
void sub_0005CC50(void) { set_camera_draw_stage(); }

/* Trace original stage floor/backdrop drawing. */
// FUN_0005C330
void draw_stage_floor_backdrop(void)
{
    bg_log("draw_stage_floor_backdrop", 0x0005C330u);
    sub_0005C330_gen();
}
void sub_0005C330(void) { draw_stage_floor_backdrop(); }

/* Trace original stage objects. */
// FUN_0005C410
void draw_stage_objects(void)
{
    bg_log("draw_stage_objects", 0x0005C410u);
    sub_0005C410_gen();
}
void sub_0005C410(void) { draw_stage_objects(); }

/* Trace original attract-mode wall drawing. */
// FUN_0004C200
void draw_attract_wall(void)
{
    bg_log("draw_attract_wall", 0x0004C200u);
    sub_0004C200_gen();
}
void sub_0004C200(void) { draw_attract_wall(); }

