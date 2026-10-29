/* D3D8 state/vertex descriptor fixes, including lifted stack-frame repairs. */
#include <stdio.h>
#include <stdint.h>

#include "common/guest_runtime.h"

/* The lifted flush leaf can leak its 0xB8-byte frame on a tail branch. 
Restore the caller stack and preserved registers after it returns. */
extern void sub_001756E0_gen(void);

// FUN_001756E0
void d3d8_flush_leaf_esp_fix(void)
{
    static int n756;
    uint32_t pre = g_esp;                         /* retaddr on top, 2 args below */
    uint32_t arg_dev = GMEM32(pre + 4);
    uint32_t arg_flags = GMEM32(pre + 8);
    uint32_t dev784 = gmem_ok(arg_dev) ? GMEM32(arg_dev + 0x784) : 0xBAD;
    uint32_t sbx = g_ebx, ssi = g_esi, sdi = g_edi;
	
    sub_001756E0_gen();
    
	if (n756 < 6) 
	{
        n756++;
        fprintf(stderr, "[756E0] #%d dev=%08X flags_in=%08X dev[0x784]=%08X ret(eax)=%08X "
                "(path=%s)\n", n756, arg_dev, arg_flags, dev784, g_eax,
                dev784 ? "return-param_2" : "jumptable");
        fflush(stderr);
    }
	
	/* callee-saved restore */
    g_ebx = sbx; 
	g_esi = ssi; 
	g_edi = sdi;     
	
	/* ret 8: retaddr + 8 arg bytes */
    g_esp = pre + 12;
}
void sub_001756E0(void) { d3d8_flush_leaf_esp_fix(); }   /* dispatch/caller symbol */

/* The D3D8 flush must preserve EBX/ESI/EDI and return with a balanced guest stack; 
contain leaks from lifted child calls. */
extern void sub_00171800_gen(void);

// FUN_00171800
void d3d8_deferred_state_flush(void)
{
    static int fn;
    uint32_t pre = g_esp;                       /* return address on top, no args */
    uint32_t sbx = g_ebx, ssi = g_esi, sdi = g_edi;
	
    sub_00171800_gen();
	
    if (fn < 8) 
	{
        fn++;
        fprintf(stderr,
            "[FLUSH] #%d pre: esi=%08X edi=%08X ebx=%08X esp=%08X | "
            "post(gen): esi=%08X edi=%08X ebx=%08X esp=%08X (want esp=%08X)\n",
            fn, ssi, sdi, sbx, pre, g_esi, g_edi, g_ebx, g_esp, pre + 4);
        fflush(stderr);
    }
	
	/* callee-saved: restore for caller */
    g_ebx = sbx; 
	g_esi = ssi; 
	g_edi = sdi;
	
	/* ret (no stack arguments)          */
    g_esp = pre + 4;
}
void sub_00171800(void) { d3d8_deferred_state_flush(); }   /* dispatch/caller symbol */

/* sub_00171A20: CDevice_SetStateUP — 
vertex-descriptor builder __fastcall(device in ecx). 
Flushes deferred state, then IF the global dirty - 
flags DAT_001809a8 has bit 0x20 set, rebuilds the vertex descriptor 
at device[0x2f5] from the vertex declaration at device[0x1e5]. */
extern void sub_00171A20_gen(void);

// FUN_00171A20
void d3d8_set_state_up(void)
{
    static int n;
    uint32_t dev    = g_ecx;                                   /* __fastcall param_1 */
    uint32_t flags0 = GMEM32(0x1809A8);
    uint32_t decl   = gmem_ok(dev)  ? GMEM32(dev + 0x794) : 0; /* device[0x1e5]      */
    uint32_t dflag  = gmem_ok(decl) ? GMEM32(decl + 4)    : 0;
    uint32_t pre2f5 = gmem_ok(dev)  ? GMEM32(dev + 0xBD4) : 0;
    uint32_t prePB  = gmem_ok(dev)  ? GMEM32(dev + 0)     : 0; /* device[0] pushbuffer head */

    sub_00171A20_gen();

    /* Preserve dirty bit 0x20 after the flush so vertex declaration changes rebuild the stride descriptor. */
    if ((flags0 & 0x20) && gmem_ok(dev) && !(GMEM32(0x1809A8) & 0x40)) 
	{
        GMEM32(0x1809A8) = 0x20;
        g_ecx = dev;
        sub_00171A20_gen();
    }

    if (n < 16) 
	{
        uint32_t postPB = gmem_ok(dev) ? GMEM32(dev + 0) : 0;
        uint32_t datpost = GMEM32(0x1809A8);
        uint32_t pb[8] = {0, 0, 0, 0, 0, 0, 0, 0};
		
        if (gmem_ok(prePB)) 
		{ 
			int k; 
			for (k = 0; k < 8; k++) 
				pb[k] = GMEM32(prePB+k*4); 
		}
		
        fprintf(stderr, "[SETUP-PB] #%d dev[0]: %08X -> %08X (delta=%d) DAT=%08X "
                "pushed=[%08X %08X %08X %08X %08X %08X %08X %08X]\n",
                n + 1, prePB, postPB, (int)(postPB - prePB), datpost,
                pb[0],pb[1],pb[2],pb[3],pb[4],pb[5],pb[6],pb[7]);
				
        uint32_t post2f5 = gmem_ok(dev) ? GMEM32(dev + 0xBD4) : 0; /* descriptor[0] count */
        uint32_t seg315  = gmem_ok(dev) ? GMEM32(dev + 0xC54) : 0; /* 0x315*4 segcount    */
        uint32_t tot2f2  = gmem_ok(dev) ? GMEM32(dev + 0xBC8) : 0; /* 0x2f2*4 total       */
        uint32_t t[4] = { 0, 0, 0, 0 };
		
        int present = -1;
        if (gmem_ok(decl)) 
		{
            int i;
			uint32_t base = 0x2F3EE8 + (dflag & 0x10);

            present = 0;
            for (i = 0; i < 16; i++) 
			{
                uint32_t slot = decl + (uint32_t)GMEM8(base + (uint32_t)i) * 0x10;
                uint32_t type = gmem_ok(slot) ? GMEM32(slot + 0x1C) : 0xBAD;
				
                if (i < 4) 
					t[i] = type;
				
                if (type != 2) 
					present++;
            }
        }
		
        n++;
        fprintf(stderr,
            "[SETUP] #%d dev=%08X flags=%08X 0x20=%d decl=%08X dflag=%08X "
            "2f5:%08X->%08X seg315=%08X tot2f2=%08X present=%d attr=%08X %08X %08X %08X "
            "exit:esi=%08X esp=%08X\n",
            n, dev, flags0, (flags0 >> 5) & 1, decl, dflag,
            pre2f5, post2f5, seg315, tot2f2, present, t[0], t[1], t[2], t[3],
            g_esi, g_esp);
        fflush(stderr);
    }
}
void sub_00171A20(void) { d3d8_set_state_up(); }   /* dispatch/caller symbol */
