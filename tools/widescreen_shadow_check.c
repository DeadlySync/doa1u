/* Offline ABI/culling regression: no game, window, GPU or save file access. */
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "common/guest_runtime.h"
#include "common/guest_addresses.h"
#include "nv2a_backend.h"

RTLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_fs_base,g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
static uint8_t memory[0x400000];
static int wide;
static unsigned marker[16], marker_method[16], markers;
static float seen_aspect, seen_slope, seen_radius;
static uint32_t seen_fov,seen_near,seen_far;
extern void widescreen_camera_begin(void), widescreen_camera_end(void);
extern void sub_001847B3(void), sub_00063420(void), sub_0005C850(void);

static void require(int condition, const char *message)
{
    if (!condition) { fprintf(stderr,"FAIL: %s\n",message); exit(1); }
}
static float as_float(uint32_t bits) { float v; memcpy(&v,&bits,4); return v; }
static uint32_t as_bits(float v) { uint32_t bits; memcpy(&bits,&v,4); return bits; }
int graphics_widescreen(void) { return wide; }

void gd_guest_call(uint32_t fn, int nargs, const uint32_t *args, uint32_t ret)
{
    (void)args; (void)ret;
    require(fn==0x160D00 && nargs==0,"marker uses original ring-space-aware writer");
    unsigned method=g_ecx&0x1FFF;
    require(g_ecx==((1u<<18)|(7u<<13)|method),"marker packet header");
    require((method==NV2A_PRESENTATION_METHOD && (g_edx&0xFFFF0000)==NV2A_PRESENTATION_COOKIE) ||
            (method==NV2A_VERTEX_DOMAIN_METHOD && (g_edx&0xFFFF0000)==NV2A_VERTEX_DOMAIN_COOKIE),"marker cookie/domain");
    require(markers<16,"bounded marker log"); marker_method[markers]=method; marker[markers++]=g_edx&0xFFFF;
    /* Host helper must preserve caller state even if a space-making path clobbers it. */
    g_eax=91; g_ecx=92; g_edx=93; g_ebx=94; g_esi=95; g_edi=96;
    g_ebp=97; g_esp=98; g_seh_ebp=99;
}
void sub_001847B3_gen(void)
{
    seen_fov=GMEM32(g_esp+8); seen_aspect=as_float(GMEM32(g_esp+12));
    seen_near=GMEM32(g_esp+16); seen_far=GMEM32(g_esp+20);
    g_eax=0x12345678; g_esp+=24; /* original stdcall ret 20 */
}
void sub_00063420_gen(void)
{
    seen_slope=as_float(GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA));
    seen_radius=as_float(GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA));
    g_eax=17; g_esp+=4;
}
void sub_0005C850_gen(void) { g_eax=42; g_esp+=4; }
void sub_00167BD0_gen(void) {
    require(g_eax==11 && g_ecx==12 && g_edx==13 && g_ebx==14 && g_esi==15 && g_edi==16 &&
            g_ebp==17 && g_esp==0x20000 && g_seh_ebp==18,"FVF marker preserves input ABI");
    g_eax=0x1234; g_esp+=8;
}
void sub_00167870_gen(void) { g_eax=0x5678; g_esp+=12; }
extern void sub_00167BD0(void), sub_00167870(void);

static void projection_call(void)
{
    g_esp=0x10000;
    GMEM32(g_esp+8)=0x3F2E40F1; GMEM32(g_esp+12)=0x3FAA3D71;
    GMEM32(g_esp+16)=0x3E99999A; GMEM32(g_esp+20)=0x453B8000;
    sub_001847B3();
    require(g_esp==0x10018 && g_eax==0x12345678,"projection preserves original return ABI");
    require(GMEM32(0x1000C)==0x3FAA3D71,"projection restores stack argument");
    require(seen_fov==0x3F2E40F1 && seen_near==0x3E99999A && seen_far==0x453B8000,
            "vertical FOV and near/far unchanged");
}

int main(void)
{
    g_xbox_mem_offset=(ptrdiff_t)memory;
    g_eax=1; g_ecx=2; g_edx=3; g_ebx=4; g_esi=5; g_edi=6;
    g_ebp=7; g_esp=0x20000; g_seh_ebp=8;
    widescreen_camera_begin();
    require(g_eax==1 && g_ecx==2 && g_edx==3 && g_ebx==4 && g_esi==5 && g_edi==6
          && g_ebp==7 && g_esp==0x20000 && g_seh_ebp==8,"marker preserves guest register file");
    require(marker[0]==0,"4:3 marker remains original layout");
    projection_call(); require(as_bits(seen_aspect)==0x3FAA3D71,"4:3 projection unchanged");
    widescreen_camera_end();
    wide=1; projection_call();
    require(as_bits(seen_aspect)==0x3FAA3D71,"non-gameplay projection unchanged in widescreen");
    widescreen_camera_begin(); projection_call();
    require(fabsf(seen_aspect-16.0f/9.0f)<1e-6f,"gameplay projection is 16:9");
    widescreen_camera_end();
    GMEM8(DOA1U_SCENE_MODE_VA)=1;
    GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA)=as_bits(0.5f);
    GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA)=as_bits(1.2f);
    g_esp=0x20000; sub_00063420();
    require(seen_slope>0.66f && seen_radius>1.59f,"widescreen broadens horizontal sphere bounds");
    require(GMEM32(DOA1U_CULL_HORIZONTAL_SLOPE_VA)==as_bits(0.5f)
         && GMEM32(DOA1U_CULL_HORIZONTAL_RADIUS_VA)==as_bits(1.2f),"culling globals restored");
    require(g_eax==17 && g_esp==0x20004,"visibility return preserved");
    GMEM8(DOA1U_SCENE_MODE_VA)=2; g_esp=0x20000; sub_00063420();
    require(seen_slope==0.5f && seen_radius==1.2f,"menu culling unchanged");
    unsigned before=markers; g_esp=0x20000; sub_0005C850();
    require(markers==before+2 && marker[before]==NV2A_PRESENTATION_BACKGROUND
            && marker[before+1]==NV2A_PRESENTATION_WORLD,"backdrop markers ordered and scoped");
    require(g_eax==42 && g_esp==0x20004,"backdrop return survives marker insertion");
    const unsigned handles[]={0x104,0x144,0x44,0x112,0x180001};
    const unsigned expected[]={NV2A_VERTEX_DOMAIN_SCREEN,NV2A_VERTEX_DOMAIN_SCREEN,NV2A_VERTEX_DOMAIN_SCREEN,NV2A_VERTEX_DOMAIN_WORLD,NV2A_VERTEX_DOMAIN_UNKNOWN};
    for (unsigned i=0;i<5;++i) {
        g_eax=11; g_ecx=12; g_edx=13; g_ebx=14; g_esi=15; g_edi=16; g_ebp=17; g_esp=0x20000; g_seh_ebp=18;
        GMEM32(g_esp+4)=handles[i]; before=markers; sub_00167BD0();
        require(marker_method[before]==NV2A_VERTEX_DOMAIN_METHOD && marker[before]==expected[i],"FVF semantic domain in command order");
        require(g_eax==0x1234 && g_esp==0x20008 && GMEM32(0x20004)==handles[i],"FVF original argument/return preserved");
    }
    before=markers; g_esp=0x20000; sub_00167870();
    require(marker_method[before]==NV2A_VERTEX_DOMAIN_METHOD && marker[before]==NV2A_VERTEX_DOMAIN_UNKNOWN,"direct shader selection clears stale FVF domain");
    require(g_eax==0x5678 && g_esp==0x2000C,"direct shader return ABI preserved");
    puts("Widescreen/FVF shadow ABI, ordered domains, original 4:3 path, projection, culling and marker checks passed.");
    return 0;
}
