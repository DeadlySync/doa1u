/* Frontend graphics hooks, native master loop and scene launcher. */
#include "common/guest_addresses.h"
#include "common/input_constants.h"
#include <stdio.h>
#include <stdint.h>

#include "common/guest_runtime.h"
#include "game/game_driver.h"

#define HOOK(sym, name)	extern void sym##_gen(void); \
	void name(void) {								 \
        if (fp_pre_tr()) {	static int once;		 \
		if (!once) {								 \
			once = 1;								 \
			fprintf(stderr, "[FEP] %-24s 1st-call flow=%u subst=%u gm=%u ts=%u pad=%04X @%llu\n", #name, \
				GMEM32(DOA1U_FLOW_STATE_VA),															 \
				GMEM8(DOA1U_SCENE_SUBSTATE_VA),	GMEM8(DOA1U_GAME_MODE_VA), GMEM8(DOA1U_TITLE_STATE_VA),  \
				GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK, (unsigned long long)g_gd_frame);   \
			fflush(stderr);																				 \
			}																							 \
		}																								 \
		sym##_gen();																					 \
	}																									 \
	void sym(void) { name(); }

#define GC0(va) fe2_call((va), 0, 0, 0, 0)
#define GC1(va, a) fe2_call((va), 1, (uint32_t)(a), 0, 0)
#define GC2(va, a, b) fe2_call((va), 2, (uint32_t)(a), (uint32_t)(b), 0)
#define GC3(va, a, b, c) fe2_call((va), 3, (uint32_t)(a), (uint32_t)(b), (uint32_t)(c))

extern uint64_t g_gd_frame;

static int fp_pre_tr(void)
{
	return gd_enabled("RECOMP_FE_PRE_TRACE");
}

/* ── front-end per-frame render ──
 * (frontend_main_loop / sub_0003AAC0 is REIMPLEMENTED at the end of this file,
 * not a passthrough HOOK anymore.) */
HOOK(sub_0003A2F0, menu_ui_tick)         /* gfx init (334880 gate) + draw, then dispatch to 3A403/3A346 UI */

/* ── init / teardown ── */
HOOK(sub_00039900, frontend_init)        /* alloc heaps + register FE fibers + load + create textures   */
HOOK(sub_00038540, alloc_frontend_heaps) /* A9EA8 allocator xN -> 0x30EBF8/0x30EC.. buffer ptrs         */
HOOK(sub_00035B00, clear_slot_table)     /* zero 16-entry table 0x3346B8 (via zero_record20)            */
HOOK(sub_00035B60, find_or_add_slot)     /* search/fill slot table 0x3346B8, return entry ptr           */
HOOK(sub_000381D0, kill_scene_tasks)     /* unregister task fibers 2,4,5,6,7,8,9,A,B (via 0x522A0)      */
HOOK(sub_00038140, reset_round_flags)    /* zero state flags + 0xFF sentinels (3321F4..332204)          */
HOOK(sub_0004D080, noop_4D080)           /* 1-byte ret stub                                             */
HOOK(sub_0004D0B0, noop_4D0B0)           /* 1-byte ret stub                                             */

/* ── texture / tilemap plotting ── */
HOOK(sub_00037150, plot_texture_cell)    /* 2-D cell addr (row*512 + col + 0x1E0B0) -> plot one cell    */
HOOK(sub_00037180, blit_texture_quad)    /* plot one 2x2 quad from an entry (4x plot_texture_cell)      */
HOOK(sub_00037200, blit_texture_quad2)   /* blit_texture_quad variant (extra 0 arg)                     */
HOOK(sub_00037270, commit_texture)       /* plot the WHOLE 1280-entry tile table @0x2C6A02 (NOT a menu commit) */

/* ── quad geometry + draw ── */
HOOK(sub_00036D00, init_menu_quads)      /* pump + build menu quad geometry block (0x335998..)          */
HOOK(sub_00036AD0, setup_bg_quad)        /* write transform block 0x3358D8 + submit (0x5EAB0)           */
HOOK(sub_00036F00, update_quad_coords_fx)/* float args -> two quad coords + submit                      */
HOOK(sub_00037350, draw_elem_bar)        /* fixed coord block + submit (0x35600)                        */
HOOK(sub_000373C0, draw_elem_panel)      /* coord block 0x335A58 + submit (0x35600)                     */
HOOK(sub_00039070, setup_menu_palette_quads) /* upload_palette_256(0x2D6A00) then jmp init_menu_quads   */

/* ── surface ops ── */
HOOK(sub_000389D0, clear_surface_256)    /* 256KB (256x256x4) solid-color fill via 0x168430             */
HOOK(sub_00038A10, upload_palette_256)   /* copy 256-dword palette (object 0x335ADC)                    */
HOOK(sub_00038A40, surface_op_38A40)     /* 0x168430 with buffer 0x334874                               */
HOOK(sub_00038680, frontend_frame_report)/* 0xAA04A + 0x695B0 x2 (timing/progress report)               */

/* ── match setup / config ── */
HOOK(sub_00037F90, apply_match_config)   /* unpack config block 0x305588 -> gameplay globals            */
HOOK(sub_00037E00, clear_player_record)  /* zero per-player record (index*0x58) at 0x30D9A0             */
HOOK(sub_0004D570, get_match_option)     /* switch(idx 0..3) -> config-derived value (0x305590..)       */
HOOK(sub_0004DD90, store_match_option1)  /* get_match_option(1) -> 0x2DF87C (+ jmp 0x50480)             */
HOOK(sub_0004DB10, store_match_option2)  /* get_match_option(2) -> 0x2DF880                             */
HOOK(sub_0004DB20, store_match_option3)  /* get_match_option(3) -> 0x2DF884 (+ jmp 0x50B90)             */
HOOK(sub_00035C60, set_scene_id)         /* store u16 arg -> 0x334808, set flag 0x334804=1              */
HOOK(sub_00030B40, advance_reveal_bits)  /* timer 0x34CD64 threshold -> set bit in mask 0x3055AC        */
HOOK(sub_00036BE0, query_value_div10)    /* call 0x150390, return result / 10                           */

/* ── helpers ── */
HOOK(sub_00035870, zero_record20)        /* zero a 20-byte (0x14) record at [ecx]                       */

/* ── saved-config I/O ── */
HOOK(sub_0004D610, read_saved_config_a)  /* 0xAB63A parse/format + io (game_io)                         */
HOOK(sub_0004D7C0, read_saved_config_b)  /* read_saved_config_a sibling (game_io)                       */

/* NATIVE REIMPLEMENTATIONS --
frontend_main_loop (sub_0003AAC0) and
scene_launcher (sub_00038EB0) are now reimplemented idiomatically
instead of passthrough-shadowed; their *_gen bodies are DEAD (never called). */

/* call a guest fn by VA (through its shadow) with 0..3 cdecl args; returns eax */
static uint32_t fe2_call(uint32_t va, int n, uint32_t a0, uint32_t a1, uint32_t a2)
{
	uint32_t args[3] = { a0, a1, a2 };
	gd_guest_call(va, n, args, 0x0003AAC0u /* benign guest return addr */);
	return g_eax;
}

/* scene_launcher (sub_00038EB0)
arg != 0: the real scene is already chosen -> pass the arg straight back.
arg == 0: set up attract (game_mode:=0), register the scene loop (fiber 2),
then run the attract demo for up to 0xE10 frames while polling the pad. */
static uint32_t scene_launcher_run(uint32_t arg)
{
	if (arg != 0)
		return arg;

	GMEM32(0x00334880u) = 0;
	GMEM32(0x00335AD8u) = 0;

	GMEM8(DOA1U_SCENE_MODE_VA) = 2;       /* scene mode     */
	GMEM8(DOA1U_SCENE_SUBSTATE_VA) = 4;   /* scene sub-state */
	GMEM8(DOA1U_MATCH_SUBSTATE_VA) = 5;   /* substate2      */
	GMEM8(DOA1U_GAME_MODE_VA) = 0;        /* game_mode = 0  */

	GMEM8(0x00335980u) = 0;

	GC2(DOA1U_REGISTER_TASK_FIBER_VA, 2, 0x000338C0u);   /* fiber 2 = scene loop */

	GC1(DOA1U_CLEAR_PLAYER_RECORD_VA, 0);
	GC1(DOA1U_CLEAR_PLAYER_RECORD_VA, 1);

	GMEM8(DOA1U_P1_HUMAN_VA) = 0;
	GMEM8(0x0030D9F8u) = 0;

	GC0(DOA1U_RESET_ROUND_FLAGS_VA);

	/* handshake on 0x316FF1: wait until it goes non-zero, then back to zero */
	if (GMEM8(DOA1U_LOAD_BUSY_VA) == 0)
	{
		do
		{
			GC1(DOA1U_PUMP_TASK_VA, 1);
			GC3(DOA1U_FRAME_HUD_VA, 0x14, 0x14, 0x0022D224u);
		} while (GMEM8(DOA1U_LOAD_BUSY_VA) == 0);
	}

	do
	{
		GC1(DOA1U_PUMP_TASK_VA, 1);
	} while (GMEM8(DOA1U_LOAD_BUSY_VA) != 0);

	/* attract demo loop */
	{
		int32_t  counter = 0xE10;   /* ~3600 frames */
		uint32_t toggle = 0;        /* flips every 0x20 frames (elem-bar gate) */

		GMEM8(0x00349F68u) = 0;
		GMEM8(0x00349F69u) = 0;
		GMEM8(0x00314599u) = 0;

		for (;;)
		{
			GC1(DOA1U_PUMP_TASK_VA, 1);
			GC3(DOA1U_FRAME_HUD_VA, 0x1E, 0x1E, 0x0022D1FCu);
			GC0(DOA1U_DRAW_ELEM_PANEL_VA);

			if (GMEM8(DOA1U_MATCH_SUBSTATE_VA) == 1 && toggle != 0)
				GC0(DOA1U_DRAW_ELEM_BAR_VA);

			counter--;
			if ((counter & 0x1F) == 0)
				toggle ^= 1;

			/* attract canceled */
			if (GMEM8(0x00314599u) != 0)
				break;

			/* START press -> real */
			if (GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK)
			{
				GC0(DOA1U_KILL_SCENE_TASKS_VA);
				GC1(DOA1U_PUMP_TASK_VA, 2);
				GC0(DOA1U_NOOP_4D080_VA);
				GC0(DOA1U_QUERY_VALUE_DIV10_VA);

				return 1;
			}

			GC1(DOA1U_ATTRACT_STEP_VA, 0);
			GC1(DOA1U_ATTRACT_STEP_VA, 1);

			/* attract time up */
			if (counter == 0)
				break;
		}
	}

	/* attract ended without a press -> commit match ids + tear down, return 0 */
	GMEM8(0x00335940u) = GMEM8(DOA1U_P1_FIGHTER_ID_VA);   /* P1 id */
	GMEM8(0x00335941u) = GMEM8(DOA1U_P2_FIGHTER_ID_VA);   /* P2 id */
	GMEM8(0x0030C3F4u) = 0;
	GMEM8(0x0030D9A3u) = 0;
	GMEM8(0x0030D9FBu) = 0;
	GMEM8(0x0030F9BCu) = 0;
	GMEM8(0x0030ED4Cu) = 0;
	GMEM8(0x0030ED4Du) = 0;

	GMEM8(DOA1U_SCENE_MODE_VA) = 2;

	GMEM32(0x0033488Cu) = 0;
	GMEM8(0x00305532u) = 0;

	GC0(DOA1U_SCENE_GFX_PREP_VA);
	GC0(DOA1U_KILL_SCENE_TASKS_VA);
	GC1(DOA1U_PUMP_TASK_VA, 2);

	return 0;
}

/* ABI entry: cdecl, 1 arg at [esp+4], result in eax, callee pops only the
 * return address (the caller cleans the arg). */
void sub_00038EB0(void)
{
	uint32_t arg = GMEM32(g_esp + 4);
	g_eax = scene_launcher_run(arg);
	g_esp += 4;
}

/* ── frontend_main_loop (sub_0003AAC0, fiber 0) ──
 * init, then loop forever: run the title intro + scene chain until the scene
 * actually launches (scene_launcher returns non-zero), then drive the steady
 * menu (menu_ui_tick) per frame. NEVER returns.
 * this is the front-end master loop;
 * yielding happens inside the pumped sub-functions. */
static int s_frontend_stage_override = -1;
extern void sub_000300E0_gen(void);

/* Apply only while the direct-match diagnostic session is active. Arcade's
 * opponent selector runs after startup and replaces P2 from its order table.
 * Reassert the complete request at selection AND at the actual asset loader,
 * not just during frontend initialization. Never stamp the resident-ID cache. */
static int s_test_match_active;
static void apply_test_match_selection(void)
{
    if (!s_test_match_active)
        return;
	
    GMEM8(DOA1U_P1_HUMAN_VA) = 0;
	
    GMEM8(DOA1U_P1_FIGHTER_ID_VA) = 5; /* kas0: Kasumi */
    GMEM8(DOA1U_P1_COSTUME_VA) = 0;
	
    GMEM8(DOA1U_P2_FIGHTER_ID_VA) = 2; /* jan0: Jann Lee */
    GMEM8(DOA1U_P2_COSTUME_VA) = 0;
	
    if (s_frontend_stage_override >= 0)
        GMEM8(DOA1U_STAGE_ID_VA) = (uint8_t)s_frontend_stage_override;
}

void select_match_stage(void)
{
    sub_000300E0_gen();
    apply_test_match_selection();
}
void sub_000300E0(void) { select_match_stage(); }

extern void sub_00032830_gen(void);
void sub_00032830(void)
{
    apply_test_match_selection();
	
    if (s_test_match_active)
        fprintf(stderr, "[TEST_MATCH] loading P1=%u P2=%u stage=%u (SHI=3)\n",
            GMEM8(DOA1U_P1_FIGHTER_ID_VA), GMEM8(DOA1U_P2_FIGHTER_ID_VA),
            GMEM8(DOA1U_STAGE_ID_VA));
			
    sub_00032830_gen();
}

static void test_fighter_stage_render(void)
{
	/* Diagnostic-only entry: keep the regular frontend/Arcade setup intact.
	 * Stage 3 is SHI: the original stage-to-BGM table at 0x2C5560 maps
	 * it to track 2, le_sng.adx (Jann Lee), via the table at 0x2E02F8.
	 * Override at select_match_stage, immediately before asset loading, so
	 * the stage geometry and collision data are loaded together normally.
	 */
	const long long requested_stage = gd_envll("RECOMP_STAGE_ID", 3);

	GC0(DOA1U_FRONTEND_INIT_VA);
	GC0(DOA1U_CLEAR_SLOT_TABLE_VA);

	/* Force ARCADE selection (main_menu_handler index-0 commit). */
	GMEM8(DOA1U_GAME_MODE_VA) = 0;   /* game_mode = 0 (Arcade)        */
	/* Direct entry skips the normal match commit at 0x39183, which sets
	 * 0x30C680=1. Menu selection (3139CB) and scene mode are distinct.
	 * Leaving scene mode zero bypasses the original head-look disable gate
	 * during downed and victory animations. Initialize once, never per pose. */
	GMEM8(DOA1U_SCENE_MODE_VA) = 1;
	GMEM8(0x0030AAB9u) = 0;   /* online OFF                    */
	GMEM8(0x0030C3ECu) = 0;   /* vs/tag OFF                    */
	GMEM8(0x003145A0u) = 1;   /* commit flag ON                */

	/* Keep real player input; the diagnostic CPU opponent is Jann Lee. */
	GMEM8(DOA1U_P1_HUMAN_VA) = 0;
	GMEM8(DOA1U_P1_FIGHTER_ID_VA) = 5;

	s_test_match_active = 1;
	
	/* -1 restores automatic selection; 0..12 selects a specific arena. */
	s_frontend_stage_override =
		(requested_stage >= 0 && requested_stage <= 12) ? (int)requested_stage : -1;
		
    apply_test_match_selection();
	
    /* Do not let startup/preload cache values suppress the requested assets. */
    GMEM8(DOA1U_LOADED_P1_FIGHTER_ID_VA) = 0xFF;
    GMEM8(DOA1U_LOADED_P2_FIGHTER_ID_VA) = 0xFF;
    GMEM8(DOA1U_LOADED_STAGE_ID_VA) = 0xFF;
    fprintf(stderr, "[TEST_MATCH] Kasumi (5) vs Jann Lee (2), stage=%d; real player input\n",
        s_frontend_stage_override);

	GC2(DOA1U_REGISTER_TASK_FIBER_VA, 2, 0x000338C0u); /* fight scene */
}

static void frontend_main_loop(void)
{
	/* Reproducible match profiling without changing the normal boot sequence. */
	if (gd_enabled("RECOMP_TEST_MATCH")) { test_fighter_stage_render(); return; }

	uint32_t eax;
	GC0(DOA1U_FRONTEND_INIT_VA);
	GC0(DOA1U_CLEAR_SLOT_TABLE_VA);
	eax = 0;

	for (;;)
	{
		if (eax == 0)
		{
			do
			{
				/* title intro / press poll  */
				eax = GC0(DOA1U_TECMO_LOGO_VA);

				eax = GC1(DOA1U_POST1_VA, eax);
				eax = GC1(DOA1U_POST2_VA, eax);

				eax = scene_launcher_run(eax);

			} while (eax == 0);
		}

		GC1(DOA1U_STORE_MATCH_OPT2_VA, 0);
		GC1(DOA1U_STORE_MATCH_OPT1_VA, 0);
		GC1(DOA1U_STORE_MATCH_OPT3_VA, 0);

		/* steady menu / press-start */
		eax = GC0(DOA1U_MENU_UI_TICK_VA);
	}
}

/* ABI entry (fiber 0): does not return. */
void sub_0003AAC0(void) { frontend_main_loop(); }
