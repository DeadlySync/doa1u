/* Frontend state-machine shadows and opt-in scene tracing/controls. */
#include "common/guest_addresses.h"
#include "common/input_constants.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "game/game_driver.h"

#define FLOW_HANDLER(sym, label)																				\
    void label(void) {																							\
        uint32_t fb = sm_tr() ? GMEM32(DOA1U_FLOW_STATE_VA) : 0;												\
        uint8_t  sbf = sm_tr() ? GMEM8(DOA1U_SCENE_SUBSTATE_VA) : 0;											\
        sm_force_subst();																						\
        sym##_gen();                                                                                            \
        if (sm_tr()) {                                                                                          \
            uint32_t fa = GMEM32(DOA1U_FLOW_STATE_VA); uint8_t sa = GMEM8(DOA1U_SCENE_SUBSTATE_VA);             \
            if (fa != fb || sa != sbf)                                                                          \
                fprintf(stderr, "[SM] %-16s flow %u->%u subst %u->%u game_mode=%u ts=%u pad=%04X @%llu\n",      \
                        #label, fb, fa, sbf, sa, GMEM8(DOA1U_GAME_MODE_VA), GMEM8(DOA1U_TITLE_STATE_VA),        \
                        GMEM32(DOA1U_PAD_BUTTONS_VA) & DOA1U_PAD_ACTION_MASK, (unsigned long long)g_gd_frame);  \
        }																										\
        sm_maybe_freeze();																						\
    }																											\
    void sym(void) { label(); }

extern uint64_t g_gd_frame;

/* generated bodies (renamed _gen by SM-HOOK patches) */
extern void sub_000338C0_gen(void);  /* fe_scene_loop        */
extern void sub_0002FAF0_gen(void);  /* fe_match_launcher    */
extern void sub_000312C0_gen(void);  /* fe_flow0_title       */
extern void sub_0002F910_gen(void);  /* fe_flow1             */
extern void sub_0002FA70_gen(void);  /* fe_flow2             */
extern void sub_00031650_gen(void);  /* fe_flow3             */
extern void sub_000319D0_gen(void);  /* fe_flow4             */
extern void sub_000310F0_gen(void);  /* fe_flow6_results     */
extern void sub_00030F00_gen(void);  /* fe_inmatch_a         */
extern void sub_0002F7A0_gen(void);  /* fe_inmatch_b         */

static int sm_tr(void) { return gd_enabled("RECOMP_SM_TRACE"); }

/* Force g_scene_subst if RECOMP_SM_FORCE_SUBST is set (>=0). Pure memory write. */
static void sm_force_subst(void)
{
	long long v = gd_envll("RECOMP_SM_FORCE_SUBST", -1);
	if (v >= 0)
		GMEM8(DOA1U_SCENE_SUBSTATE_VA) = (uint8_t)v;
}

/* If the machine is at RECOMP_SM_FREEZE_AT flow-state, pin the game's pause flag
 * (its OWN clean freeze -- no flow pinning, which would churn the fiber pool). */
static void sm_maybe_freeze(void)
{
	long long at = gd_envll("RECOMP_SM_FREEZE_AT", -1);
	if (at >= 0 && GMEM32(DOA1U_FLOW_STATE_VA) == (uint32_t)at)
		GMEM8(DOA1U_PAUSE_FLAG_VA) = 1;
}

/* ── scene loop (fiber 2): an INFINITE fiber loop -- _gen never returns, so this
 * shadow only gets a ONE-TIME pre-hook when the fiber first starts. ── */
 // FUN_000338C0
void fe_scene_loop(void)
{
	if (sm_tr())
	{
		fprintf(stderr, "[SM] fe_scene_loop START  flow=%u subst=%u game_mode=%u @%llu\n",
			GMEM32(DOA1U_FLOW_STATE_VA), GMEM8(DOA1U_SCENE_SUBSTATE_VA), GMEM8(DOA1U_GAME_MODE_VA),
			(unsigned long long)g_gd_frame);
		fflush(stderr);
	}

	sm_force_subst();
	sub_000338C0_gen();   /* enters the infinite fiber loop (yields via pump) */
}
void sub_000338C0(void) { fe_scene_loop(); }

/* ── match launcher: loads g_match_config -> sets g_flow_state=5. Returns. ── */
// FUN_0002FAF0
void fe_match_launcher(void)
{
	uint32_t flow_before = sm_tr() ? GMEM32(DOA1U_FLOW_STATE_VA) : 0;
	sub_0002FAF0_gen();

	if (sm_tr())
	{
		/* dump the match-config block the launcher just consumed */
		fprintf(stderr, "[SM] fe_match_launcher flow %u->%u game_mode=%u  config[305588]=",
			flow_before, GMEM32(DOA1U_FLOW_STATE_VA), GMEM8(DOA1U_GAME_MODE_VA));

		for (int i = 0; i < 16; i++)
			fprintf(stderr, "%02X ", GMEM8(DOA1U_MATCH_CONFIG_VA + i));

		fprintf(stderr, "@%llu\n", (unsigned long long)g_gd_frame);
		fflush(stderr);
	}
}
void sub_0002FAF0(void) { fe_match_launcher(); }

/* ── flow-state handlers (per-iteration, tail-jumped by fe_flow_dispatcher). Each
 * logs the flow transition it causes. cdecl void(void) -- call _gen, it rets. ── */
FLOW_HANDLER(sub_000312C0, fe_flow0_title)
FLOW_HANDLER(sub_0002F910, fe_flow1)
FLOW_HANDLER(sub_0002FA70, fe_flow2)
FLOW_HANDLER(sub_00031650, fe_flow3)
FLOW_HANDLER(sub_000319D0, fe_flow4)
FLOW_HANDLER(sub_000310F0, fe_flow6_results)

/* ── in-match handlers (scene-loop subst 3/2). Log first entry (match is live). ── */
// FUN_00030F00
void fe_inmatch_a(void)
{
	if (sm_tr())
	{
		static int once;
		if (!once)
		{
			once = 1;
			fprintf(stderr, "[SM] fe_inmatch_a (subst==3 LIVE FIGHT) first run flow=%u game_mode=%u @%llu\n",
				GMEM32(DOA1U_FLOW_STATE_VA), GMEM8(DOA1U_GAME_MODE_VA), (unsigned long long)g_gd_frame);
			fflush(stderr);
		}
	}
	sub_00030F00_gen();
}
void sub_00030F00(void) { fe_inmatch_a(); }

// FUN_0002F7A0
void fe_inmatch_b(void)
{
	if (sm_tr())
	{
		static int once;
		if (!once)
		{
			once = 1;
			fprintf(stderr, "[SM] fe_inmatch_b (subst==2) first run flow=%u game_mode=%u @%llu\n",
				GMEM32(DOA1U_FLOW_STATE_VA), GMEM8(DOA1U_GAME_MODE_VA), (unsigned long long)g_gd_frame);
			fflush(stderr);
		}
	}
	sub_0002F7A0_gen();
}
void sub_0002F7A0(void) { fe_inmatch_b(); }
