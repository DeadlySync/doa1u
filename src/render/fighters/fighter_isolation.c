/* Original fighter movement and draw-context instrumentation. */
#include "common/guest_runtime.h"

extern void sub_00042C50_gen(void);
extern void sub_000701B0_gen(void);

/* Read by optional world-matrix probes while a guest fighter draw runs. */
int g_in_fighter_draw = 0;

void fighter_move_advance(void)
{
    sub_00042C50_gen();
}
void sub_00042C50(void) { fighter_move_advance(); }

void draw_fighter(void)
{
    g_in_fighter_draw++;
    sub_000701B0_gen();
    g_in_fighter_draw--;
}
void sub_000701B0(void) { draw_fighter(); }
