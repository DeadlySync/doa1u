/* Match pause shadow and read-only menu/flow tracing. */
#include "common/guest_addresses.h"
#include "common/input_constants.h"
#include <stdio.h>
#include <stdint.h>
#include "game/game_driver.h"

#define TRK(bits,addr,name)																\
	do {																				\
		static uint32_t _l;																\
		static int _i=0;																\
        uint32_t _v = GMEM##bits(addr);													\
        if (!_i) {																		\
			_i=1;																		\
			_l=_v;																		\
		}																				\
        else if (_v != _l) {															\
            fprintf(stderr, "[EVT] %-12s %u -> %u   @%llu\n", name, _l, _v, f); _l=_v; }\
        }																				\
	while(0)

/* Original match pause owner/edge handler, verified against Ghidra 0x4D220.
 * Keep audio suspension and task freeze/resume in the original implementation. */
extern void sub_0004D220_gen(void);
extern uint64_t g_gd_frame;

void match_pause_tick(void)
{
	uint32_t owner_before = GMEM32(DOA1U_PAUSE_OWNER_VA);

	if (gd_enabled("RECOMP_PAUSE_TRACE") && (GMEM8(DOA1U_PAD_PRESSED_EDGES_VA) & DOA1U_PAD_START_MASK))
		fprintf(stderr, "[PAUSE] Start edge scene=%u substate=%u mode=%u countdown=%u human=%u port=%u owner=%u\n",
			GMEM8(DOA1U_SCENE_MODE_VA),
			GMEM8(DOA1U_MATCH_SUBSTATE_VA),
			GMEM8(DOA1U_GAME_MODE_VA),
			GMEM32(DOA1U_MATCH_START_COUNTDOWN_VA),
			GMEM8(DOA1U_P1_HUMAN_VA),
			GMEM32(DOA1U_P1_CONTROLLER_PORT_VA),
			owner_before);

	sub_0004D220_gen();

	if (gd_enabled("RECOMP_PAUSE_TRACE") && owner_before != GMEM32(DOA1U_PAUSE_OWNER_VA))
		fprintf(stderr, "[PAUSE] owner %u -> %u, pause=%u @%llu\n", owner_before,
			GMEM32(DOA1U_PAUSE_OWNER_VA), GMEM8(DOA1U_PAUSE_FLAG_VA), (unsigned long long)g_gd_frame);
}
void sub_0004D220(void) { match_pause_tick(); }

extern void      sub_00033800_gen(void);  /* flow dispatcher (generated body)    */
extern void      sub_0003A403_gen(void);  /* menu scene input/dispatch           */
extern void      sub_0003A4CC_gen(void);  /* main menu handler (sets game_mode=cursor) */
extern void      sub_000372F0_gen(void);  /* front-end post1 (transforms menu_tick ret)  */
extern void      sub_00038D30_gen(void);  /* front-end post2 (-> scene_launcher arg)      */
extern void      sub_00032D20_gen(void);  /* match_handler (one-shot match ENTRY)         */
/* EVENT TRACE of the front-end state machine.
Instead of correlating by frame, this logs two kinds of discrete EVENTS in order:
[EVT] >>> action PRESS -- the moment a confirm/action button (START/A/B/ X/Y, mask 0xFF30) goes released->pressed. */
static void mode_trace(void)
{
	if (!gd_enabled("RECOMP_FLOW_TRACE"))
		return;

	unsigned long long f = (unsigned long long)g_gd_frame;

	/* input EVENT: action-button press edge (released -> pressed). */
	static uint32_t lpad = 0; static int lpad_i = 0;
	uint32_t pad = GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK;

	if (!lpad_i)
	{
		lpad_i = 1;
		lpad = pad;
	}
	else
	{
		if (pad && !lpad)
			fprintf(stderr, "[EVT] >>> action PRESS 0x%04X        @%llu\n", pad, f);

		lpad = pad;
	}

	/* state EVENTS: log each front-end global's change individually (old -> new). */
	TRK(32, DOA1U_FLOW_STATE_VA, "FLOW_STATE");   /* scene selector (flow_dispatcher switch) */
	TRK(8, DOA1U_TITLE_STATE_VA, "title_state");  /* title/press-start sub-state 0x307604    */
	TRK(8, DOA1U_GAME_MODE_VA, "game_mode");      /* match-type / menu index 0x3139CB        */
	TRK(32, DOA1U_MENU_CURSOR_VA, "menu_cursor"); /* main-menu cursor 0x335994               */
	TRK(8, DOA1U_SCENE_SUBSTATE_VA, "subst");     /* scene-loop sub-state 0x30AE30           */

	fflush(stderr);
}

/* Read-only per-frame frontend event tracing. */
void game_mode_frame_module(uint64_t frame)
{
    (void)frame;
    mode_trace();
}

/* Preserve original scene dispatch; optionally observe state transitions. */
void flow_dispatch(void)
{
	/* STATE-MACHINE EXTRACTION: flow_dispatcher tail-jumps to the handler for the
	 * CURRENT FLOW_STATE, so wrapping it captures every edge -
	 * which state's handler ran (flow BEFORE)
	 * and the flow/game_mode/title_state it changed to, with the pad input present.
	 * One shadow function = the whole state machine.
	 * Handlers: 0->sub_000312C0
	 *			 1->sub_0002F910
	 *			 2->sub_0002FA70
	 *			 3->sub_00031650
	 *           4->sub_000319D0
	 *			 5->match_handler(32D20)
	 *			 6->sub_000310F0. */
	if (gd_enabled("RECOMP_FLOW_TRACE"))
	{
		uint32_t fb = GMEM32(DOA1U_FLOW_STATE_VA);
		uint8_t gb = GMEM8(DOA1U_GAME_MODE_VA);

		uint8_t tb = GMEM8(DOA1U_TITLE_STATE_VA);
		uint8_t sb = GMEM8(DOA1U_SCENE_SUBSTATE_VA);

		uint32_t pad = GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK;
		sub_00033800_gen();

		uint32_t fa = GMEM32(DOA1U_FLOW_STATE_VA);
		uint8_t ga = GMEM8(DOA1U_GAME_MODE_VA);

		uint8_t ta = GMEM8(DOA1U_TITLE_STATE_VA);
		uint8_t sa = GMEM8(DOA1U_SCENE_SUBSTATE_VA);

		if (fa != fb || ga != gb || ta != tb || sa != sb)
			fprintf(stderr, "[SM] state%u handler: flow %u->%u gm %u->%u ts %u->%u subst %u->%u pad=%04X @%llu\n",
				fb, fb, fa, gb, ga, tb, ta, sb, sa, pad, (unsigned long long)g_gd_frame);
	}
	else
		sub_00033800_gen();
}
void sub_00033800(void) { flow_dispatch(); }   /* dispatch/caller symbol */

/* Observe menu input/dispatch without pinning cursor or game mode. */
void menu_scene_dispatch(void)
{
	if (gd_enabled("RECOMP_FLOW_TRACE"))
	{
		static int once;
		if (!once)
		{
			once = 1;
			fprintf(stderr, "[FLOW] menu_scene_dispatch FIRED cursor=%u game_mode=%u @frame %llu\n",
				GMEM32(DOA1U_MENU_CURSOR_VA), GMEM8(DOA1U_GAME_MODE_VA), (unsigned long long)g_gd_frame);
			fflush(stderr);
		}
	}
	sub_0003A403_gen();
}
void sub_0003A403(void) { menu_scene_dispatch(); }   /* dispatch/caller symbol */

/* shadow: main menu handler (observability -- log the state it confirms with). */
// FUN_0003A4CC
void main_menu_handler(void)
{
	if (gd_enabled("RECOMP_FLOW_TRACE"))
	{
		static int once;
		if (!once)
		{
			once = 1;
			fprintf(stderr, "[FLOW] main_menu_handler FIRED cursor=%u game_mode=%u @frame %llu\n",
				GMEM32(DOA1U_MENU_CURSOR_VA), GMEM8(DOA1U_GAME_MODE_VA), (unsigned long long)g_gd_frame);
			fflush(stderr);
		}
	}
	sub_0003A4CC_gen();
}
void sub_0003A4CC(void) { main_menu_handler(); } /* dispatch/caller symbol */

/* FRONT-END MASTER CHAIN shadows fiber 0 (sub_0003AAC0)
loops: menu_tick(38A70) -> post1(372F0) -> post2(38D30) -> scene_launcher(38EB0).
post1/post2 stay logging passthroughs here;
they transform the selector before scene_launcher. */
static int flow_tr(void) { return gd_enabled("RECOMP_FLOW_TRACE"); }

/* post1(arg)->ret, post2(arg)->ret: transform the selector before scene_launcher.
 * cdecl arg at g_esp+4 BEFORE the call; return in eax AFTER. */
 // FUN_000372F0
void front_end_post1(void)
{
	uint32_t arg = flow_tr() ? GMEM32(g_esp + 4) : 0;
	sub_000372F0_gen();

	if (flow_tr())
	{
		static uint32_t lr = 0xFFFFFFFFu, la = 0xFFFFFFFFu;
		if (g_eax != lr || arg != la)
		{
			fprintf(stderr, "[FLOW] post1(372F0) 0x%08X -> 0x%08X @%llu\n",
				arg, g_eax, (unsigned long long)g_gd_frame);
			fflush(stderr); lr = g_eax; la = arg;
		}
	}
}
void sub_000372F0(void) { front_end_post1(); }

// FUN_00038D30
void front_end_post2(void)
{
	uint32_t arg = flow_tr() ? GMEM32(g_esp + 4) : 0;
	sub_00038D30_gen();

	if (flow_tr())
	{
		static uint32_t lr = 0xFFFFFFFFu, la = 0xFFFFFFFFu;
		if (g_eax != lr || arg != la)
		{
			fprintf(stderr, "[FLOW] post2(38D30) 0x%08X -> 0x%08X  (=> scene_launcher arg) @%llu\n",
				arg, g_eax, (unsigned long long)g_gd_frame);
			fflush(stderr); lr = g_eax; la = arg;
		}
	}
}
void sub_00038D30(void) { front_end_post2(); }

/* match_handler: the one-shot match ENTRY. Its entry state is the LAUNCH SIGNATURE
 * -- game_mode disambiguates attract (4 = ComComDemo) from real arcade (0/1), and
 * p1/p2/stage are exactly what the match loads. This is what a code intercept must
 * reproduce (+ call match_handler from this legitimate context). Logging only. */
 // FUN_00032D20
void match_handler_trace(void)
{
	if (flow_tr())
	{
		fprintf(stderr, "[FLOW] *** MATCH_HANDLER ENTER  game_mode=%u p1=%u p2=%u stage=%u "
			"flow=%u subst=%u @%llu ***\n",
			GMEM8(DOA1U_GAME_MODE_VA),
			GMEM8(DOA1U_P1_FIGHTER_ID_VA),
			GMEM8(DOA1U_P2_FIGHTER_ID_VA),
			GMEM8(DOA1U_STAGE_ID_VA),
			GMEM32(DOA1U_FLOW_STATE_VA),
			GMEM8(DOA1U_SCENE_SUBSTATE_VA),
			(unsigned long long)g_gd_frame);
		fflush(stderr);
	}
	sub_00032D20_gen();
}
void sub_00032D20(void) { match_handler_trace(); }
