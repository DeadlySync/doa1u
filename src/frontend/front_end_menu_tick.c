/* Native TECMO tile animation (guest 0x38A70); does not call the lifted body. */
#include "common/guest_addresses.h"
#include "common/input_constants.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "game/game_driver.h"

#define TITLE_PAL_WORDS 128
#define TILE_COUNT      1280
#define TILE_COLS       0x28          /* 40 tiles drawn per row pass                 */
#define TILE_ROW_STEP   0x20          /* row base advances by 32 tile indices        */
#define TILE_ROW_COUNT  0x20          /* 32 row passes                               */
#define TILE_ANIM_SPAN  0x20          /* frames a tile takes to settle               */
#define TITLE_FRAMES    0x40          /* length of the reveal/animation loop         */
#define TILE_VA(idx)    (DOA1U_TITLE_TILES_VA + (uint32_t)(idx) * (uint32_t)sizeof(title_tile_t))

#define CALL0(va) fe_call((va), 0, 0, 0, 0)
#define CALL1(va, a) fe_call((va), 1, (uint32_t)(a), 0, 0)
#define CALL2(va, a, b) fe_call((va), 2, (uint32_t)(a), (uint32_t)(b), 0)
#define CALL3(va, a, b, c) fe_call((va), 3, (uint32_t)(a), (uint32_t)(b), (uint32_t)(c))

/* main-loop frame counter (game_driver.c) */
extern uint64_t g_gd_frame;

/* x87 register stack -- same TLS linkage as recomp_types.h's RECOMP_TLS. The
 * round helper (sub_001502D0) consumes ST(0), which lives here. */
extern RTLS double g_fp_stack[8];
extern RTLS int g_fp_top;

/* One entry of the title tile table @0x2C6A00 (stride 0x14 bytes).
 * The scene starts each tile at a random target offset (tx,ty) and
 * slides it to its home position (x,y) over TILE_ANIM_SPAN frames,
 * then holds it there. */
typedef struct
{
	int16_t x;        /* +0x00  home / destination X                             */
	int16_t y;        /* +0x02  home / destination Y                             */
	int16_t tx;       /* +0x04  live X  (randomized target -> slides to x)       */
	int16_t ty;       /* +0x06  live Y  (randomized target -> slides to y, clamp)*/
	int16_t _r08;     /* +0x08  (not touched by this scene)                      */
	int16_t _r0A;     /* +0x0A  (not touched by this scene)                      */
	float   vx;       /* +0x0C  per-frame X velocity  = (x - tx) * K at reveal   */
	float   vy;       /* +0x10  per-frame Y velocity  = (y - ty) * K at reveal   */
} title_tile_t;       /* sizeof == 0x14                                          */

/* one ARGB palette entry (128 per table)  */
typedef uint32_t title_pal_word_t;

/* fail the build if the struct ever stops matching the guest 0x14 stride */
typedef char fe_tile_stride_check[(sizeof(title_tile_t) == 0x14) ? 1 : -1];

/* read a guest 32-bit float */
static float fe_readf(uint32_t va)
{
	float f;
	uint32_t bits = GMEM32(va);
	memcpy(&f, &bits, sizeof f);

	return f;
}

/* call a guest fn by VA (through its shadow) with 0..3 cdecl args; returns eax */
static uint32_t fe_call(uint32_t va, int nargs, uint32_t a0, uint32_t a1, uint32_t a2)
{
	uint32_t args[3] = { a0, a1, a2 };

	gd_guest_call(va, nargs, args, DOA1U_TECMO_LOGO_VA);
	return g_eax;
}

/* round a double to int using the guest x87 helper, which reads ST(0).
* We seed ST(0) and then restore our view of the FPU stack so the call stays isolated. */
static int32_t fe_round(double v)
{
	int saved_top = g_fp_top;

	g_fp_top = (g_fp_top + 7u) & 7u;   /* fld: push -> ST(0) */
	g_fp_stack[g_fp_top] = v;

	(void)CALL0(DOA1U_ROUND_TO_INT_VA);

	g_fp_top = saved_top;

	return (int32_t)g_eax;
}

/* ════════════════════════════ the scene itself ══════════════════════════════ */
/* Returns 1 if a START-class press was detected this tick, else 0. */
int front_end_menu_tick(void)
{
	int pressed = 0;
	title_tile_t* tiles = DOA1U_GUEST_PTR(DOA1U_TITLE_TILES_VA, title_tile_t);
	const float   K = fe_readf(DOA1U_TITLE_VELOCITY_SCALE_VA);
	const double  y_max = (double)fe_readf(DOA1U_TITLE_Y_CLAMP_MAX_VA);

	int f, row, col, idx;

	/* --- enter the title scene --- */
	GMEM8(DOA1U_SCENE_MODE_VA) = 2;
	GMEM32(DOA1U_TITLE_ANIM_PHASE_VA) = 0;
	CALL1(DOA1U_SET_SCENE_ID_VA, 0);
	CALL0(DOA1U_SCENE_GFX_PREP_VA);
	CALL0(DOA1U_QUERY_VALUE_DIV10_VA);

	/* --- upload the 128-entry title palette --- */
	{
		int i;

		uint32_t dst = CALL2(DOA1U_MAKE_PAL_TARGET_VA, GMEM32(DOA1U_TITLE_PALETTE_TARGET_VA), 0);
		const title_pal_word_t* src = DOA1U_GUEST_PTR(DOA1U_TITLE_PALETTE_VA, title_pal_word_t);
		title_pal_word_t* out = DOA1U_GUEST_PTR(dst, title_pal_word_t);

		for (i = 0; i < TITLE_PAL_WORDS; i++)
			out[i] = src[i];
	}

	/* --- randomize each tile's target offset --- */
	for (idx = 0; idx < TILE_COUNT; idx++)
	{
		int32_t rx = (int32_t)CALL0(DOA1U_RNG_VA);
		tiles[idx].tx = (int16_t)((rx % 0x160) - 0xB0);   /* [-0xB0, 0xB0) */

		int32_t ry = (int32_t)CALL0(DOA1U_RNG_VA);
		tiles[idx].ty = (int16_t)((ry % 0x1E0) - 0xF0);   /* [-0xF0, 0xF0) */
	}

	/* --- reveal / animation loop: one pass per frame --- */
	for (f = 0; f < TITLE_FRAMES; f++)
	{
		CALL0(DOA1U_SURFACE_OP_VA);

		if (GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK)
		{
			pressed = 1;
			break;
		}

		/* thr = the frame at which a given row "reveals"; +1 per row pass */
		int thr = 0;
		for (row = 0; row < TILE_ROW_COUNT; row++)
		{
			for (col = 0; col < TILE_COLS; col++)
			{
				idx = row * TILE_ROW_STEP + col;
				title_tile_t* t = &tiles[idx];
				uint32_t      tva = TILE_VA(idx);

				if (f < thr) { /* not revealed yet -- draw nothing */ }
				else if (f == thr)
				{
					/* revealed this frame -- seed velocity toward home, draw */
					t->vx = (float)((int)t->x - (int)t->tx) * K;
					t->vy = (float)((int)t->y - (int)t->ty) * K;

					CALL1(DOA1U_BLIT_QUAD_VA, tva);
				}
				else
				{
					/* in flight -- background quad, then advance, then draw */
					CALL1(DOA1U_BLIT_QUAD_BG_VA, tva);

					/* settled -- snap live position onto home */
					if (f >= thr + TILE_ANIM_SPAN)
					{
						t->tx = t->x;
						t->ty = t->y;
					}
					else
					{
						/* mid-slide -- advance by velocity, clamp Y, round */
						t->tx = (int16_t)fe_round((double)t->tx + (double)t->vx);
						double ny = (double)t->ty + (double)t->vy;

						if (ny > y_max)
							ny = y_max;

						t->ty = (int16_t)fe_round(ny);
					}

					CALL1(DOA1U_BLIT_QUAD_VA, tva);
				}
			}

			thr++;
		}

		CALL0(DOA1U_SETUP_BG_QUAD_VA);
		CALL1(DOA1U_PUMP_TASK_VA, 1);
		CALL3(DOA1U_FRAME_HUD_VA, 0xA, 0xA, DOA1U_TITLE_HUD_ANIM_ARGS_VA);
	}

	/* --- on a press, re-blit every tile once (32 row passes x 40 tiles) --- */
	if (pressed) 
	{
		for (row = 0; row < TILE_ROW_COUNT; row++) 
		{
			uint32_t base = TILE_VA(row * TILE_ROW_STEP);

			for (col = 0; col < TILE_COLS; col++)
				CALL1(DOA1U_BLIT_QUAD_BG_VA, base + (uint32_t)col * (uint32_t)sizeof(title_tile_t));
		}
	}

	/* --- transition out (shorter when a press triggered it), still polling --- */
	{
		int frames = pressed ? 0x1E : 0x78;

		CALL0(DOA1U_SURFACE_OP_VA);
		CALL0(DOA1U_COMMIT_TEXTURE_VA);

		for (;;) 
		{
			CALL0(DOA1U_SETUP_BG_QUAD_VA);
			CALL1(DOA1U_PUMP_TASK_VA, 1);

			frames--;

			CALL3(DOA1U_FRAME_HUD_VA, 0xA, 0xA, DOA1U_TITLE_HUD_TRANSITION_ARGS_VA);

			if (GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK) 
			{ 
				pressed = 1; 
				break; 
			}

			if (frames == 0) 
				break;
		}

		CALL1(DOA1U_CLEAR_SURFACE_256_VA, 0);
	}

	return pressed;
}

/* ABI entry reached by the dispatch table and by direct RECOMP_ABI_CALL sites:
 * run the scene, return the result in eax, and pop the guest return address
 * (the guest `ret`, callee-pop). */
void sub_00038A70(void)
{
	int pressed = front_end_menu_tick();
	g_eax = (uint32_t)pressed;
	g_esp += 4;

	if (gd_enabled("RECOMP_FLOW_TRACE")) 
	{
		static uint32_t last = 0xFFFFFFFFu;

		if ((uint32_t)pressed != last) 
		{
			fprintf(stderr, "[FLOW] front_end_menu_tick -> %d  pad=%04X @%llu\n",
				pressed, GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK,
				(unsigned long long)g_gd_frame);
			fflush(stderr);

			last = (uint32_t)pressed;
		}
	}
}
