/* Guest-context frame hook, task registration and shared guest-call helpers. */
#include "common/guest_addresses.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "game/game_driver.h"

extern void sub_000689E0_gen(void);   /* frame_end (generated body)              */
extern void sub_00052240_gen(void);   /* register_task_fiber(id, fn) (generated) */

/* main-loop frames since first tick; owned here so every module shares one clock */
uint64_t g_gd_frame = 0;

/* ── env helpers ── */
int gd_enabled(const char* name)
{
	const char* e = getenv(name);
	return (e && *e && *e != '0');
}
long long gd_envll(const char* name, long long def)
{
	const char* e = getenv(name);
	return (e && *e) ? atoll(e) : def;
}

/* ── guest-context call primitives ── */

/* Call a guest function by VA through the recomp dispatch table, so a shadowed
 * target still goes through its shadow. */
void gd_dispatch(uint32_t va)
{
	recomp_func_t fn = recomp_lookup(va);
	if (fn)
		fn();
	else
		fprintf(stderr, "[GD] dispatch: 0x%08X not found\n", va);
}

void gd_guest_call(uint32_t fn_va, int nargs, const uint32_t* args, uint32_t retaddr)
{
	int i;
	uint32_t saved = g_esp;

	/* cdecl: right-to-left */
	for (i = nargs - 1; i >= 0; i--)
	{
		g_esp -= 4; GMEM32(g_esp) = args[i];
	}

	g_esp -= 4; GMEM32(g_esp) = retaddr;    /* benign guest return address */
	gd_dispatch(fn_va);                     /* call the (possibly shadowed) guest fn */
	g_esp = saved;                          /* caller cleans its own args */
}

/* ── task-fiber gate ───────────────────────────────────────────────────── */
int gd_parse_id_list(const char* name, unsigned char* table256)
{
	int n = 0;
	const char* e = getenv(name);

	if (!e || !*e)
		return 0;

	while (*e)
	{
		char* end;
		long id;

		while (*e == ',' || *e == ' ' || *e == '\t')
			e++;

		if (!*e)
			break;

		id = strtol(e, &end, 0);
		if (end == e)
			break;                 /* no progress -> stop */

		e = end;
		if (id >= 0 && id < 256)
		{
			table256[(size_t)id] = 1;
			n++;
		}
	}

	return n;
}

static int g_gd_block_init = 0;
static unsigned char g_gd_block[256];

static void gd_block_init(void)
{
	if (g_gd_block_init)
		return;

	g_gd_block_init = 1;
	gd_parse_id_list("RECOMP_BLOCK_TASK_IDS", g_gd_block);
}

void gd_block_task_id(uint32_t id, int blocked)
{
	gd_block_init();
	if (id < 256)
		g_gd_block[id] = (unsigned char)(blocked ? 1 : 0);
}

int gd_task_blocked(uint32_t id)
{
	gd_block_init();
	return (id < 256) ? g_gd_block[id] : 0;
}

/* Decide + log one registration. Returns 1 = allow, 0 = block. Blocks are
 * always logged (rare + important); allowed ones only under RECOMP_TASK_TRACE. */
static int gd_task_gate(uint32_t id, uint32_t fn)
{
	int blocked = gd_task_blocked(id);
	static int trace = -1;

	if (trace < 0)
	{
		const char* e = getenv("RECOMP_TASK_TRACE");
		trace = (e && *e && *e != '0');
	}

	if (blocked || trace)
	{
		fprintf(stderr, "[GD] register_task_fiber(id=%u, fn=0x%06X) %s\n", id, fn, blocked ? "BLOCKED" : "allowed");
		fflush(stderr);
	}
	return !blocked;
}

/* shadow: register_task_fiber(id, fn) -- THE universal choke point for fiber registration.
 * MUST exist as the sub_00052240 symbol the dispatch table + every RECOMP_ABI_CALL site resolves
 * (the generated body is renamed sub_00052240_gen).
 * Both the game's own registrations (via the gen call sites) and ours (via gd_register_task) land here,
 * so the gate below governs all of them.
 * cdecl: arg1=id at g_esp+4, arg2=fn at g_esp+8; real body ends in a plain `ret`. */
 // FUN_00052240
void register_task_fiber(void)
{
	uint32_t id = GMEM32(g_esp + 4);
	uint32_t fn = GMEM32(g_esp + 8);

	if (gd_task_gate(id, fn))
		sub_00052240_gen();       /* allowed: do the real registration (its own ret) */
	else
	{
		g_esp += 4;               /* blocked: emulate the cdecl `ret` (pop retaddr) */
		g_eax = 0;                /* return "no task" to the caller (it cleans args) */
	}
}
void sub_00052240(void) { register_task_fiber(); }   /* dispatch/caller symbol */

/* Our own registrations go through the SAME gated shadow as the game's, so the
 * block list + trace apply uniformly. Push cdecl args + a benign return address,
 * call the shadow, restore g_esp (caller cleans its own args). */
void gd_register_task(uint32_t id, uint32_t fn)
{
	uint32_t saved = g_esp;
	g_esp -= 4; GMEM32(g_esp) = fn;                           /* param_2: fiber fn VA */
	g_esp -= 4; GMEM32(g_esp) = id;                           /* param_1: task id     */
	g_esp -= 4; GMEM32(g_esp) = DOA1U_REGISTER_TASK_FIBER_VA; /* benign return address */
	sub_00052240();                                           /* gated register_task_fiber */

	g_esp = saved;
}

/* ── per-frame fan-out ──
 * One place to list the block modules. Order is stable; each self-gates. */
static void gd_run_frame_modules(uint64_t frame)
{
	audio_frame_module(frame);
	game_mode_frame_module(frame);
}

/* shadow: frame_end -- the per-frame GUEST-CONTEXT hook (main fiber, valid
 * g_esp). Run our modules, advance the clock, then the real frame_end. */
 // FUN_000689E0
void frame_end(void)
{
	gd_run_frame_modules(g_gd_frame);
	g_gd_frame++;

	sub_000689E0_gen();
}
void sub_000689E0(void) { frame_end(); }   /* dispatch/caller symbol */
