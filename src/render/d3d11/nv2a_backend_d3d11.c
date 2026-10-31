/* D3D11 NV2A backend: device state, texture cache, presentation and frame pacing. */

#define COBJMACROS
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <d3dcompiler.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nv2a_backend.h"
#include "common/diagnostics.h"
#include "fmv/fmv.h"
#include "render/d3d11/texture_cache.h"
#include "runtime/soft_restart.h"
#include "render/graphics_settings.h"
#include "render/common/guest_shaders.h"
#include "render/common/guest_draw_state.h"

#define TEXCACHE_MAX 512

/* ── device/pipeline objects (all on the poll thread) ────────────────── */
static HWND                     s_hwnd;
static ID3D11Device            *s_dev;
static ID3D11DeviceContext     *s_ctx;
static IDXGISwapChain          *s_swap;
static ID3D11RenderTargetView  *s_rtv;
static ID3D11RenderTargetView  *s_present_rtv;
static ID3D11Texture2D         *s_scene_color;
static ID3D11Texture2D         *s_present_color;
static ID3D11Texture2D         *s_depthtex;
static ID3D11DepthStencilView  *s_dsv;
static ID3D11VertexShader      *s_vs;
static ID3D11PixelShader       *s_ps_tex;
static ID3D11PixelShader       *s_ps_flat;
static ID3D11InputLayout       *s_layout;
static ID3D11Buffer            *s_vbuf;
static UINT                     s_vbuf_cap;     /* in vertices */
static ID3D11Buffer            *s_cbuf;
static ID3D11SamplerState      *s_samp;
static ID3D11BlendState        *s_bs_opaque;
static ID3D11BlendState        *s_bs_alpha;
static ID3D11DepthStencilState *s_ds_on;        /* test LEQUAL, write on  */
static ID3D11DepthStencilState *s_ds_ro;        /* test LEQUAL, write off */
static ID3D11DepthStencilState *s_ds_off;       /* no test, no write      */
static ID3D11RasterizerState   *s_rs;           /* cull none (POC)        */

static UINT s_bb_w = 640, s_bb_h = 480;         /* host output pixels; NOT guest pixels */
static UINT s_resize_w, s_resize_h;
static int s_applied_wide;
static int  s_dead;                             /* init failed -> stay out of the way   */
static uint64_t s_frames;
static ID3D11ShaderResourceView *s_movie_srv;
static int s_movie_drawing;

/* constant buffer layout -- must match the HLSL cbuffer (16-byte multiple) */
typedef struct 
{
    float surf_w, surf_h;   /* logical surface size, for surface-px -> NDC */
    float tex_w,  tex_h;    /* texel size, for texel UV -> [0,1]; 0 = untextured */
    float alpha_ref;        /* 0..1 alpha-test threshold; <0 disables */
    float _pad[2];
    float alpha_func;
    float layout_x, layout_y;
    float layout_pad[2];
} CB;

/* ── texture cache: decode once per (offset,size), keyed round-robin ──── */
static struct TexEntry 
{
    uint32_t off, w, h, color, pitch;
    uint64_t refreshed_frame;
    uint8_t *p8_snapshot; /* exact indices + palette; no stale animated uploads */
    ID3D11ShaderResourceView *srv;
} s_tex[TEXCACHE_MAX];

static int s_tex_count;
static int s_tex_next;                           /* round-robin eviction cursor */
static LONG s_cached_generation;

static uint32_t *s_decbuf;                       /* decode scratch (ARGB) */
static size_t    s_deccap;                       /* in uint32 entries     */

/* ── shader sources (HLSL, compiled at init via D3DCompile) ──────────── */
/* ── helpers ─────────────────────────────────────────────────────────── */

static ID3DBlob *compile(const char *src, const char *profile)
{
    ID3DBlob *code = NULL, *err = NULL;
    HRESULT hr = D3DCompile(src, strlen(src), NULL, NULL, NULL, "main", profile, 0, 0, &code, &err);
	
    if (FAILED(hr)) 
	{
        fprintf(stderr, "[GPU] shader compile (%s) failed hr=0x%08lX: %s\n",
                profile, (unsigned long)hr,
                err ? (const char *)ID3D10Blob_GetBufferPointer(err) : "?");
				
        if (err) 
			ID3D10Blob_Release(err);
		
        return NULL;
    }
	
    if (err) 
		ID3D10Blob_Release(err);
	
    return code;
}

static int make_rtv_and_depth(void)
{
    /* Retain the guest image across partial/no-redraw frames. DISCARD backbuffer
     * contents are undefined after Present, so never use them as scene storage. */
    if (FAILED(IDXGISwapChain_GetBuffer(s_swap, 0, &IID_ID3D11Texture2D, (void **)&s_present_color)))
        return 0;
	
    if (FAILED(ID3D11Device_CreateRenderTargetView(s_dev, (ID3D11Resource *)s_present_color, NULL, &s_present_rtv))) 
		return 0;
	
    D3D11_TEXTURE2D_DESC color;
    ID3D11Texture2D_GetDesc(s_present_color, &color);
	
    color.Usage = D3D11_USAGE_DEFAULT;
    color.BindFlags = D3D11_BIND_RENDER_TARGET;
    color.CPUAccessFlags = color.MiscFlags = 0;
	
    if (FAILED(ID3D11Device_CreateTexture2D(s_dev, &color, NULL, &s_scene_color))) 
		return 0;
	
    if (FAILED(ID3D11Device_CreateRenderTargetView(s_dev, (ID3D11Resource *)s_scene_color, NULL, &s_rtv))) 
		return 0;
	
    const float black[4] = {0,0,0,1};
    ID3D11DeviceContext_ClearRenderTargetView(s_ctx, s_rtv, black);

    /* own depth/stencil buffer sized to the backbuffer */
    D3D11_TEXTURE2D_DESC dd; memset(&dd, 0, sizeof dd);
	
    dd.Width = s_bb_w; dd.Height = s_bb_h; dd.MipLevels = 1; dd.ArraySize = 1;
    dd.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
    dd.SampleDesc.Count = 1;
    dd.Usage = D3D11_USAGE_DEFAULT;
    dd.BindFlags = D3D11_BIND_DEPTH_STENCIL;
	
    if (FAILED(ID3D11Device_CreateTexture2D(s_dev, &dd, NULL, &s_depthtex))) 
		return 0;
	
    if (FAILED(ID3D11Device_CreateDepthStencilView(s_dev, (ID3D11Resource *)s_depthtex, NULL, &s_dsv))) 
		return 0;
	
    ID3D11DeviceContext_ClearDepthStencilView(s_ctx,s_dsv, D3D11_CLEAR_DEPTH|D3D11_CLEAR_STENCIL,1.0f,0);
	
    return 1;
}

/* The RECOMP_KEYBOARD input path records keystrokes from whatever window has
 * focus (the software build uses the GDI framebuffer window's wndproc). On the
 * GPU path that window never opens, so OUR window must feed the same key table
 * or the game gets no keyboard input. These are the runtime's public input API
 * (xboxrecomp/src/input/keyboard.h); extern-declared here to avoid pulling the
 * input include path in for two symbols. */
extern void xbox_InputKeySet(int vk, int down);
extern void xbox_InputKeysClear(void);

static LRESULT CALLBACK wndproc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    if (graphics_window_defer_message(h, m, (uintptr_t)w, (intptr_t)l)) 
        return 0;

    if (graphics_ui_message(h,m,(uintptr_t)w,(intptr_t)l)) 
		return 0;
	
    switch (m) 
	{
		case WM_SIZE:
			if (w != SIZE_MINIMIZED && LOWORD(l) && HIWORD(l)) 
			{
				s_resize_w=LOWORD(l); 
				s_resize_h=HIWORD(l);
			}
			
			return 0;
			
		/* Closing the window quits the game. PostQuitMessage only posts WM_QUIT to
		 * this thread's queue, and the flip() pump discards it -- so the guest kept
		 * running on its own threads in the background. Terminate the process, the
		 * way the X button is expected to (matches fb_present.c's GDI window). */
		case WM_CLOSE: 
			ExitProcess(0); 
			return 0;
			
    case WM_KEYDOWN:
        if (w == VK_ESCAPE) 
		{
            if (!(l & (1L << 30))) 
				game_soft_restart();
			
            return 0;
        }
		
        xbox_InputKeySet((int)w, 1);
		
        /* RECOMP_KEY_TRACE: confirm keys (real or PostMessage'd by the drive scripts) 
		 * actually reach THIS wndproc -- the same diagnostic the GDI
         * window carries in fb_present.c. If a drive script posts WM_KEYDOWN
         * and no [KEY] line appears, the pump/dispatch is the break, not input. */
        if (getenv("RECOMP_KEY_TRACE")) 
		{ 
			static unsigned kn;
            if (kn++ < 60) 
				fprintf(stderr, "  [KEY] down vk=0x%02X\n", (unsigned)w); fflush(stderr); 
		}
        return 0;
		
		case WM_KEYUP:
			if (w != VK_ESCAPE) 
				xbox_InputKeySet((int)w, 0);
			return 0;
			
		case WM_KILLFOCUS: 
			xbox_InputKeysClear();
			return 0;
    }
	
    return DefWindowProcA(h, m, w, l);
}

/* Lazily build the window, device, swapchain and pipeline. 
 * Returns 0 on failure (and sets s_dead so we never retry). 
 * `s` supplies the first surface size so the backbuffer matches what the title draws. */
static void resize_output(void)
{
    if (!s_resize_w || !s_resize_h || (s_resize_w == s_bb_w && s_resize_h == s_bb_h)) 
		return;
	
    UINT width=s_resize_w, height=s_resize_h;
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
	
    if (s_present_rtv) 
	{ 
		ID3D11RenderTargetView_Release(s_present_rtv); 
		s_present_rtv = NULL; 
	}
	
    if (s_present_color) 
	{ 
		ID3D11Texture2D_Release(s_present_color); 
		s_present_color = NULL; 
	}
		
    HRESULT hr = IDXGISwapChain_ResizeBuffers(s_swap, 0, width, height, DXGI_FORMAT_UNKNOWN, 0);
	
    /* Failure leaves the old swapchain usable. Rebuild views at its actual size. */
    if (FAILED(hr)) 
	{ 
		width = s_bb_w; 
		height = s_bb_h; 
	}
	
    if (s_rtv) 
	{ 
		ID3D11RenderTargetView_Release(s_rtv); 
		s_rtv = NULL; 
	}
	
    if (s_scene_color) 
	{ 
		ID3D11Texture2D_Release(s_scene_color); 
		s_scene_color = NULL; 
	}
	
    if (s_dsv) 
	{ 
		ID3D11DepthStencilView_Release(s_dsv); 
		s_dsv = NULL;
	}
	
    if (s_depthtex) 
	{ 
		ID3D11Texture2D_Release(s_depthtex); 
		s_depthtex = NULL; 
	}
	
    s_bb_w = width; 
	s_bb_h = height;
    s_resize_w = width; 
	s_resize_h = height;
	
    if (!make_rtv_and_depth()) 
	{ 
		s_dead = 1; 
		fprintf(stderr,"[GPU] resize target creation failed\n"); 
	}
}

static int ensure_device(const Nv2aSurface *s)
{
    if (s_dead) 
		return 0;
	
    if (s_dev) 
	{ 
		resize_output(); 
		return !s_dead; 
	}
	
    (void)s;
    s_applied_wide = graphics_widescreen();
	
    if (s_applied_wide) 
	{ 
		s_bb_w = 1280; 
		s_bb_h = 720; 
	}

    /* window */
    WNDCLASSA wc; 
	memset(&wc, 0, sizeof wc);
	
    wc.lpfnWndProc = wndproc;
    wc.hInstance = GetModuleHandleA(NULL);
    wc.hCursor = LoadCursorA(NULL, (LPCSTR)IDC_ARROW);
    wc.lpszClassName = "XboxRecompD3D11";
	
    RegisterClassA(&wc);
	
    RECT r = { 0, 0, (LONG)s_bb_w, (LONG)s_bb_h };
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);
	
    s_hwnd = (HWND)graphics_take_startup_window();
    if(s_hwnd)
        SetWindowLongPtrW(s_hwnd,GWLP_WNDPROC,(LONG_PTR)wndproc);
    else 
        s_hwnd = CreateWindowExA(0, "XboxRecompD3D11", "Dead or Alive 1: ULTIMATE",
                             WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                             r.right - r.left, r.bottom - r.top,
                             NULL, NULL, wc.hInstance, NULL);
							 
    if (!s_hwnd) 
	{ 
		s_dead = 1; 
		return 0; 
	}
	
    graphics_window_apply(s_hwnd);
    GetClientRect(s_hwnd, &r);
	
    s_bb_w = (UINT)r.right; 
	s_bb_h = (UINT)r.bottom;
	
    ShowWindow(s_hwnd, SW_SHOW);

    /* device + swapchain */
    DXGI_SWAP_CHAIN_DESC sc; 
	memset(&sc, 0, sizeof sc);
	
    sc.BufferCount = 2;
    sc.BufferDesc.Width = s_bb_w;
    sc.BufferDesc.Height = s_bb_h;
    sc.BufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    sc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sc.SampleDesc.Count = 1;
    sc.OutputWindow = s_hwnd;
    sc.Windowed = TRUE;
    sc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    D3D_FEATURE_LEVEL got;
    const D3D_FEATURE_LEVEL want[] = 
	{ 
		D3D_FEATURE_LEVEL_11_0, 
		D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0 
	};
	
    HRESULT hr = D3D11CreateDeviceAndSwapChain(
        NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, want, (UINT)(sizeof want / sizeof *want),
        D3D11_SDK_VERSION, &sc, &s_swap, &s_dev, &got, &s_ctx);
		
    if (FAILED(hr)) 
	{
        fprintf(stderr, "[GPU] D3D11CreateDeviceAndSwapChain failed hr=0x%08lX\n", (unsigned long)hr);
        s_dead = 1; return 0;
    }

    if (!make_rtv_and_depth()) 
	{ 
		fprintf(stderr, "[GPU] RTV/depth create failed\n"); 
		s_dead = 1; 
		return 0; 
	}
	
    if (!graphics_ui_init(s_hwnd,s_dev,s_ctx))
        fprintf(stderr,"[GPU] ImGui initialization failed; game rendering remains available\n");

    /* shaders + input layout */
    ID3DBlob *vsb = compile(HLSL_VS, "vs_4_0");
    ID3DBlob *ptb = compile(HLSL_PS_TEX, "ps_4_0");
    ID3DBlob *pfb = compile(HLSL_PS_FLAT, "ps_4_0");
	
    if (!vsb || !ptb || !pfb) 
	{ 
		s_dead = 1; 
		return 0; 
	}
	
    ID3D11Device_CreateVertexShader(s_dev, ID3D10Blob_GetBufferPointer(vsb), ID3D10Blob_GetBufferSize(vsb), NULL, &s_vs);
    ID3D11Device_CreatePixelShader(s_dev, ID3D10Blob_GetBufferPointer(ptb), ID3D10Blob_GetBufferSize(ptb), NULL, &s_ps_tex);
    ID3D11Device_CreatePixelShader(s_dev, ID3D10Blob_GetBufferPointer(pfb), ID3D10Blob_GetBufferSize(pfb), NULL, &s_ps_flat);

    /* Nv2aVertex: float x,y,z,rhw @0 (POSITION); uint32 0xAARRGGBB @16 (COLOR,
     * BGRA byte order == B8G8R8A8_UNORM -> rgba in the shader); float u,v @20. */
    const D3D11_INPUT_ELEMENT_DESC il[] = 
	{
        { "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0 },
        { "COLOR",    0, DXGI_FORMAT_B8G8R8A8_UNORM,     0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
        { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 20, D3D11_INPUT_PER_VERTEX_DATA, 0 },
    };
    
	ID3D11Device_CreateInputLayout(s_dev, il, 3, ID3D10Blob_GetBufferPointer(vsb), ID3D10Blob_GetBufferSize(vsb), &s_layout);
    ID3D10Blob_Release(vsb); ID3D10Blob_Release(ptb); ID3D10Blob_Release(pfb);

    /* constant buffer */
    D3D11_BUFFER_DESC cbd; 
	memset(&cbd, 0, sizeof cbd);
	
    cbd.ByteWidth = sizeof(CB);
    cbd.Usage = D3D11_USAGE_DYNAMIC;
    cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    cbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    ID3D11Device_CreateBuffer(s_dev, &cbd, NULL, &s_cbuf);

    /* sampler: linear, wrap (POC ignores per-texture addr mode) */
    D3D11_SAMPLER_DESC sd; 
	memset(&sd, 0, sizeof sd);
	
    sd.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
    sd.MaxLOD = D3D11_FLOAT32_MAX;
    ID3D11Device_CreateSamplerState(s_dev, &sd, &s_samp);

    /* blend states */
    D3D11_BLEND_DESC bd; memset(&bd, 0, sizeof bd);
    bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    bd.RenderTarget[0].BlendEnable = FALSE;
    ID3D11Device_CreateBlendState(s_dev, &bd, &s_bs_opaque);
	
    bd.RenderTarget[0].BlendEnable = TRUE;
    bd.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    bd.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    bd.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    bd.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    bd.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    ID3D11Device_CreateBlendState(s_dev, &bd, &s_bs_alpha);

    /* depth states */
    D3D11_DEPTH_STENCIL_DESC zd; 
	memset(&zd, 0, sizeof zd);
	
    zd.DepthEnable = TRUE; zd.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    zd.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
    ID3D11Device_CreateDepthStencilState(s_dev, &zd, &s_ds_on);
	
    zd.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
    ID3D11Device_CreateDepthStencilState(s_dev, &zd, &s_ds_ro);
	
    zd.DepthEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_dev, &zd, &s_ds_off);

    /* rasterizer: cull none for the POC (surface-px winding is ambiguous after
     * the Y flip; culling nothing is always visually correct, just not the
     * fastest). Tighten to back-face culling once parity is confirmed. */
    D3D11_RASTERIZER_DESC rd; 
	memset(&rd, 0, sizeof rd);
	
    rd.FillMode = D3D11_FILL_SOLID; rd.CullMode = D3D11_CULL_NONE;
    rd.DepthClipEnable = TRUE;
    ID3D11Device_CreateRasterizerState(s_dev, &rd, &s_rs);

    fprintf(stderr, "[GPU] D3D11 backend up: %ux%u, feature level 0x%X\n", s_bb_w, s_bb_h, (unsigned)got);
    return 1;
}

static void update_cb(const Nv2aSurface *s, const Nv2aBatch *batch, float tex_w, float tex_h, float aref)
{
    D3D11_MAPPED_SUBRESOURCE map;
    if (FAILED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)s_cbuf, 0, D3D11_MAP_WRITE_DISCARD, 0, &map)))
        return;
	
    CB *cb = (CB *)map.pData;
    cb->surf_w = (float)(s->width  / (s->aa_sx ? s->aa_sx : 1));
    cb->surf_h = (float)(s->height / (s->aa_sy ? s->aa_sy : 1));
    
	cb->tex_w = tex_w; 
	cb->tex_h = tex_h;
	
    cb->alpha_ref = aref;
    cb->alpha_func = batch->state ? (float)batch->state->alpha_func : 0x207;
    cb->layout_x=1.0f; cb->layout_y=1.0f;
    cb->layout_pad[0]=cb->layout_pad[1]=0;
	
    if (graphics_widescreen()) 
	{
        cb->layout_x=0.75f;
        if (!s_movie_drawing && batch->presentation == NV2A_PRESENTATION_BACKGROUND)
		{
            cb->layout_x=1; 
			cb->layout_y=4.0f/3.0f;
		}
		else if (!s_movie_drawing && batch->presentation == NV2A_PRESENTATION_WORLD && !batch->screen_space) 
			cb->layout_x=1;
    }
    cb->_pad[0] = getenv("RECOMP_GPU_SHOWALL") ? 1.0f : 0.0f;   /* diag: full-bright */
	
    /* diffscale: approximates the NV2A register-combiner output scale that lifts
     * the fighters' flat ~0x20 vertex diffuse back toward full texture brightness
     * (without it, tex*0.125 crushes them to black). 8.0 maps ~0x20 -> ~1.0, i.e.
     * full texture -- matching the known-correct SHOWALL (texture-only) look;
     * VERIFIED in RenderDoc: Kasumi/Zack render fully textured at 8. Tunable via
     * env for further calibration. */
    { 
		const char *e = getenv("RECOMP_GPU_DIFFSCALE");
		cb->_pad[1] = (e && *e) ? (float)atof(e) : 8.0f; 
	}
	
	ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)s_cbuf, 0);
}

/* Most assets are static, but P8 surfaces (including the TECMO tile animation)
 * are rewritten through LockRect and may also change palette in place. Refresh
 * these once per presented frame instead of pinning their first upload forever.
 * Include format/pitch in the key: guest allocations can be reused. */
static ID3D11ShaderResourceView *get_texture(const Nv2aTexture *t)
{
    LONG generation = renderer_texture_generation();
    if (generation != s_cached_generation) 
	{
        ID3D11ShaderResourceView *none = NULL;
        ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &none);
		
        for (int i = 0; i < s_tex_count; ++i) 
		{
            ID3D11ShaderResourceView_Release(s_tex[i].srv);
            free(s_tex[i].p8_snapshot);
        }
		
        s_tex_count = s_tex_next = 0;
        s_cached_generation = generation;
    }
	
    int existing = -1;
    const uint8_t *indices = NULL, *palette = NULL;
    size_t p8_bytes = (size_t)t->width * t->height;
    int p8 = nv2a_backend_p8_source(t, &indices, &palette);
	
    for (int i = 0; i < s_tex_count; i++)
	{
        if (s_tex[i].off == t->offset && s_tex[i].w == t->width && s_tex[i].h == t->height && s_tex[i].color == t->color && s_tex[i].pitch == t->pitch) 
		{
            if (t->color != 0x0B || s_tex[i].refreshed_frame == s_frames)
                return s_tex[i].srv;
			
            existing = i;
            s_tex[i].refreshed_frame = s_frames;
			
            if (p8 && s_tex[i].p8_snapshot && !memcmp(s_tex[i].p8_snapshot, indices, p8_bytes) && !memcmp(s_tex[i].p8_snapshot + p8_bytes, palette, 1024))
                return s_tex[i].srv;
			
            break;
		}
	}

    size_t need = (size_t)t->width * t->height;
    if (need == 0) 
		return NULL;
	
    if (need > s_deccap) 
	{
        uint32_t *nb = (uint32_t *)realloc(s_decbuf, need * sizeof(uint32_t));
        if (!nb) 
			return NULL;
		
        s_decbuf = nb; s_deccap = need;
    }
	
    if (!nv2a_backend_decode_texture(t, s_decbuf))
        return NULL;   /* unsupported format -> fall back to untextured */

    if (existing >= 0) 
	{
        ID3D11Resource *resource = NULL;
        ID3D11ShaderResourceView_GetResource(s_tex[existing].srv, &resource);
        ID3D11ShaderResourceView *none = NULL;
        ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &none);
        ID3D11DeviceContext_UpdateSubresource(s_ctx, resource, 0, NULL, s_decbuf, t->width * 4, 0);
        ID3D11Resource_Release(resource);
		
        s_tex[existing].refreshed_frame = s_frames;
        if (p8 && s_tex[existing].p8_snapshot) 
		{
            memcpy(s_tex[existing].p8_snapshot, indices, p8_bytes);
            memcpy(s_tex[existing].p8_snapshot + p8_bytes, palette, 1024);
        }
		
        return s_tex[existing].srv;
    }

    D3D11_TEXTURE2D_DESC td; memset(&td, 0, sizeof td);
    td.Width = t->width; 
	td.Height = t->height; 
	td.MipLevels = 1; 
	td.ArraySize = 1;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM;   /* decode = 0xAARRGGBB == BGRA bytes */
    td.SampleDesc.Count = 1;
    td.Usage = t->color == 0x0B ? D3D11_USAGE_DEFAULT : D3D11_USAGE_IMMUTABLE;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    
	D3D11_SUBRESOURCE_DATA srd;
    srd.pSysMem = s_decbuf;
    srd.SysMemPitch = t->width * 4;
    srd.SysMemSlicePitch = 0;

    ID3D11Texture2D *tex = NULL;
    if (FAILED(ID3D11Device_CreateTexture2D(s_dev, &td, &srd, &tex))) 
		return NULL;
	
    ID3D11ShaderResourceView *srv = NULL;
    HRESULT hr = ID3D11Device_CreateShaderResourceView(s_dev, (ID3D11Resource *)tex, NULL, &srv);
    
	ID3D11Texture2D_Release(tex);
    if (FAILED(hr)) 
		return NULL;

    /* insert (round-robin eviction once full) */
    int slot;
    if (s_tex_count < TEXCACHE_MAX)
        slot = s_tex_count++;
    else 
	{
        slot = s_tex_next++; if (s_tex_next >= TEXCACHE_MAX) s_tex_next = 0;
		
        if (s_tex[slot].srv) 
			ID3D11ShaderResourceView_Release(s_tex[slot].srv);
		
        free(s_tex[slot].p8_snapshot);
    }
	
    s_tex[slot].off = t->offset; 
	s_tex[slot].w = t->width; 
	s_tex[slot].h = t->height;
    s_tex[slot].color = t->color; s_tex[slot].pitch = t->pitch;
    s_tex[slot].refreshed_frame = s_frames;
    s_tex[slot].srv = srv;
    s_tex[slot].p8_snapshot = p8 ? malloc(p8_bytes + 1024) : NULL;
	
    if (s_tex[slot].p8_snapshot) 
	{
        memcpy(s_tex[slot].p8_snapshot, indices, p8_bytes);
        memcpy(s_tex[slot].p8_snapshot + p8_bytes, palette, 1024);
    }
	
    return srv;
}

/* ── backend callbacks ───────────────────────────────────────────────── */
static void gpu_clear(const Nv2aSurface *s, const Nv2aRenderState *rs, uint32_t flags, uint32_t argb, uint32_t zstencil)
{
    (void)rs;
    if (!ensure_device(s)) return;

    if (flags & 0xF0) 
	{   
		/* colour */
        float c[4] = 
		{
            ((argb >> 16) & 0xFF) / 255.0f,   /* R */
            ((argb >>  8) & 0xFF) / 255.0f,   /* G */
            ((argb >>  0) & 0xFF) / 255.0f,   /* B */
            ((argb >> 24) & 0xFF) / 255.0f,   /* A */
        };
		

		
        ID3D11DeviceContext_ClearRenderTargetView(s_ctx, s_rtv, c);
    }
	
    UINT dflags = 0;
    if (flags & 0x1) 
		dflags |= D3D11_CLEAR_DEPTH;
	
    if (flags & 0x2) 
		dflags |= D3D11_CLEAR_STENCIL;
	
    if (dflags) 
	{
		/* Z24 in top 24 bits */
        float depth = ((zstencil >> 8) & 0xFFFFFF) / (float)0xFFFFFF;
        ID3D11DeviceContext_ClearDepthStencilView(s_ctx, s_dsv, dflags, depth, (UINT8)(zstencil & 0xFF));
    }

    /* RECOMP_GPU_DIAG: first few clears -- is depth actually being cleared, and
     * to what value? A black GPU window with draws flowing is usually an
     * uncleared/mis-ranged depth buffer rejecting every fragment. */
    { 
		static int n;
		if (n < 6 && getenv("RECOMP_GPU_DIAG")) 
		{ 
			n++;
			fprintf(stderr, "[GPUDIAG] clear flags=0x%X argb=0x%08X zs=0x%08X color=%d depth=%d zval=%.4f\n",
                flags, argb, zstencil, (flags & 0xF0) != 0, dflags != 0,
                dflags ? ((zstencil >> 8) & 0xFFFFFF) / (float)0xFFFFFF : -1.0f);
			fflush(stderr); 
		} 
	}
}

static void gpu_draw(const Nv2aSurface *s, const Nv2aBatch *b)
{
    if (!ensure_device(s)) 
		return;
	
    if (!b || b->count < 3) 
		return;

	
    const Nv2aRenderState *rs = b->state;

    /* grow the dynamic vertex buffer if needed */
    if (b->count > s_vbuf_cap) 
	{
        if (s_vbuf) 
		{ 
			ID3D11Buffer_Release(s_vbuf); 
			s_vbuf = NULL; 
		}
		
        UINT cap = s_vbuf_cap ? s_vbuf_cap : 4096;
        while (cap < b->count) 
			cap *= 2;
		
        D3D11_BUFFER_DESC vd; 
		memset(&vd, 0, sizeof vd);
		
        vd.ByteWidth = cap * (UINT)sizeof(Nv2aVertex);
        vd.Usage = D3D11_USAGE_DYNAMIC;
        vd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
        vd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		
        if (FAILED(ID3D11Device_CreateBuffer(s_dev, &vd, NULL, &s_vbuf))) 
			return;
		
        s_vbuf_cap = cap;
    }

    D3D11_MAPPED_SUBRESOURCE map;
    if (FAILED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)s_vbuf, 0, D3D11_MAP_WRITE_DISCARD, 0, &map)))
        return;
	
    memcpy(map.pData, b->vertices, (size_t)b->count * sizeof(Nv2aVertex));
    ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)s_vbuf, 0);

    /* texture + alpha-test state into the constant buffer */
    ID3D11ShaderResourceView *srv = s_movie_drawing ? s_movie_srv : 
									(b->texture ? get_texture(b->texture) : NULL);
    float aref = -1.0f;
	
    if (rs && rs->alpha_test_enable) 
		aref = rs->alpha_ref / 255.0f;
	
    if (getenv("RECOMP_GPU_NOAT")) 
		aref = -1.0f;   /* diag override (all draws) */
	
    float tw = srv ? (float)b->texture->width  : 0.0f;
    float th = srv ? (float)b->texture->height : 0.0f;
    update_cb(s, b, tw, th, aref);

    /* pipeline */
    UINT stride = (UINT)sizeof(Nv2aVertex), offset = 0;
    ID3D11DeviceContext_IASetInputLayout(s_ctx, s_layout);
    ID3D11DeviceContext_IASetVertexBuffers(s_ctx, 0, 1, &s_vbuf, &stride, &offset);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_VSSetShader(s_ctx, s_vs, NULL, 0);
    ID3D11DeviceContext_VSSetConstantBuffers(s_ctx, 0, 1, &s_cbuf);
    ID3D11DeviceContext_PSSetConstantBuffers(s_ctx, 0, 1, &s_cbuf);
	
    if (srv) 
	{
        ID3D11DeviceContext_PSSetShader(s_ctx, s_ps_tex, NULL, 0);
        ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &srv);
        ID3D11DeviceContext_PSSetSamplers(s_ctx, 0, 1, &s_samp);
    } 
	else 
        ID3D11DeviceContext_PSSetShader(s_ctx, s_ps_flat, NULL, 0);

    /* OM/RS state from the render state (POC subset) */
    ID3D11BlendState *bs = (rs && rs->blend_enable) ? s_bs_alpha : s_bs_opaque;
    ID3D11DeviceContext_OMSetBlendState(s_ctx, bs, NULL, 0xFFFFFFFF);
    const unsigned depth_mode = guest_depth_mode(rs);
    ID3D11DepthStencilState *ds = depth_mode == 2 ? s_ds_on : depth_mode == 1 ? s_ds_ro : s_ds_off;

	/* diag: ignore depth so nothing is occluded */
    if (getenv("RECOMP_GPU_SHOWALL")) 
		ds = s_ds_off; 
	
    /* RECOMP_GPU_NODEPTH: diagnostic -- disable depth test ONLY (alpha-test and
     * shading untouched), to tell depth-rejection apart from alpha-test discard. */
    if (getenv("RECOMP_GPU_NODEPTH")) 
		ds = s_ds_off;
	
    ID3D11DeviceContext_OMSetDepthStencilState(s_ctx, ds, 0);
    ID3D11DeviceContext_RSSetState(s_ctx, s_rs);

    D3D11_VIEWPORT vp = 
	{ 
		0.0f, 0.0f, 
		(float)s_bb_w, (float)s_bb_h, 
		0.0f, 1.0f 
	};
	
    float aspect=graphics_widescreen() ? 16.0f/9.0f : 4.0f/3.0f;
    if (vp.Width/vp.Height>aspect) 
	{ 
		vp.Width = vp.Height * aspect; 
		vp.TopLeftX = (s_bb_w-vp.Width)*0.5f; 
	}
    else 
	{ 
		vp.Height = vp.Width/aspect; 
		vp.TopLeftY = (s_bb_h-vp.Height)*0.5f; 
	}
	
    ID3D11DeviceContext_RSSetViewports(s_ctx, 1, &vp);
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 1, &s_rtv, s_dsv);

    /* RECOMP_GPU_DIAG: log the geometry the title submits so we can tell whether the 
	3D model / ring-floor draws arrive on-screen or land off-screen / degenerate. 
	The 2D HUD is pre-transformed (dtest=0, z=0, rhw=1); 
	the 3D fighters and floor use the depth buffer (dtest=1) and perspective (rhw!=1). */
    if (getenv("RECOMP_GPU_DIAG")) 
	{
        const Nv2aVertex *v = b->vertices;
        float xmn = 1e30f, xmx = -1e30f, ymn = 1e30f, ymx = -1e30f, zmn = 1e30f, zmx = -1e30f, rmn = 1e30f, rmx =- 1e30f;
        
		for (uint32_t i = 0; i < b->count; i++) 
		{
            if (v[i].x < xmn)
				xmn = v[i].x; 
			
			if (v[i].x > xmx)
				xmx = v[i].x;
			
            if (v[i].y < ymn)
				ymn = v[i].y; 
			
			if (v[i].y > ymx)
				ymx = v[i].y;
			
            if (v[i].z < zmn) 
				zmn = v[i].z; 
			
			if (v[i].z > zmx)
				zmx = v[i].z;
			
            if (v[i].rhw < rmn)
				rmn = v[i].rhw; 
			
			if (v[i].rhw > rmx)
				rmx = v[i].rhw;
        }
		
        float sw = (float)s_bb_w, sh = (float)s_bb_h;
        int is3d = (rs && rs->depth_test_enable) || rmn < 0.999f || rmx > 1.001f;
        int offscreen = (xmx < 0.0f || xmn > sw || ymx < 0.0f || ymn > sh || zmx < 0.0f || zmn > 1.0f);
        int degenerate = (xmx - xmn < 0.01f && ymx - ymn < 0.01f);
		
        /* RECOMP_GPU_DIAG_FRAME=N: log EVERY 3D draw while the swapchain is in
         * [N, N+20] -- aims the capture at a specific scene (e.g. a fight at
         * frame 1300) instead of the first-48 window, which only ever lands on
         * the early attract 3D. This is how we see the actual fighter geometry. */
        {
            const char *fe = getenv("RECOMP_GPU_DIAG_FRAME");
            if (fe && is3d) 
			{
                uint64_t f0 = strtoull(fe, NULL, 0);
                static int nwin;
				
                if (s_frames >= f0 && s_frames <= f0 + 20 && nwin < 120) 
				{ 
					nwin++;
                    fprintf(stderr, "[GPUDIAGF] f%llu #%d cnt=%u %s%stex=%s(0x%X %ux%u fmt0x%X) "
                            "x[%.1f..%.1f] y[%.1f..%.1f] z[%.4f..%.4f] rhw[%.5f..%.5f] "
                            "dtest=%u dfunc=0x%X dwr=%u cull=%u/%u blend=%u diff0=0x%08X\n",
                            (unsigned long long)s_frames, nwin, b->count,
                            offscreen?"OFFSCREEN ":"", degenerate?"DEGEN ":"", srv?"Y":"N",
                            b->texture?b->texture->offset:0u, b->texture?b->texture->width:0u,
                            b->texture?b->texture->height:0u, b->texture?b->texture->color:0u,
                            xmn,xmx, ymn,ymx, zmn,zmx, rmn,rmx,
                            rs?rs->depth_test_enable:0u, rs?rs->depth_func:0u, rs?rs->depth_write:0u,
                            rs?rs->cull_enable:0u, rs?rs->cull_face:0u, rs?rs->blend_enable:0u,
                            v[0].diffuse);
                    fflush(stderr);
                }
            }
        }
		
        static int n2d, n3d, off3d, deg3d, tot3d;
        if (is3d) 
		{
            tot3d++;
            if (offscreen)  
				off3d++;
			
            if (degenerate) 
				deg3d++;
			
            if (n3d < 48) 
			{ 
				n3d++;
                fprintf(stderr, "[GPUDIAG3D] #%d cnt=%u %s%stex=%s(0x%X %ux%u) "
                        "x[%.1f..%.1f] y[%.1f..%.1f] z[%.4f..%.4f] rhw[%.5f..%.5f] "
                        "dtest=%u dfunc=0x%X dwr=%u cull=%u/%u/ff%u blend=%u ate=%u afunc=0x%X aref=%u diff0=0x%08X surf=%ux%u\n",
                        n3d, b->count, offscreen?"OFFSCREEN ":"", degenerate?"DEGEN ":"",
                        srv?"Y":"N", b->texture?b->texture->offset:0u,
                        b->texture?b->texture->width:0u, b->texture?b->texture->height:0u,
                        xmn,xmx, ymn,ymx, zmn,zmx, rmn,rmx,
                        rs?rs->depth_test_enable:0u, rs?rs->depth_func:0u, rs?rs->depth_write:0u,
                        rs?rs->cull_enable:0u, rs?rs->cull_face:0u, rs?rs->front_face:0u,
                        rs?rs->blend_enable:0u,
                        rs?rs->alpha_test_enable:0u, rs?rs->alpha_func:0u, rs?rs->alpha_ref:0u,
                        v[0].diffuse, s_bb_w, s_bb_h);
                fflush(stderr);
            }
			
            if ((tot3d % 500) == 0)
                fprintf(stderr, "[GPUDIAG3D] tally: %d 3D draws, %d OFFSCREEN, %d DEGEN\n", tot3d, off3d, deg3d), fflush(stderr);
			
            /* Targeted: the fighters use DXT fmt 0x0E (character skin/costume,
             * e.g. 0x80CF1800). The first-48 window above lands on the earlier
             * attract 3D (temple), never the fight -- so log a separate window
             * of character-texture draws so we actually SEE the fighter geometry
             * (does it arrive on-screen with sane z now, or is it still wrong?).
             * RECOMP_GPU_DIAG_TEX overrides the matched texture offset. */
            {
                static int nchar;
                const char *te = getenv("RECOMP_GPU_DIAG_TEX");
                uint32_t want = te ? (uint32_t)strtoul(te, NULL, 0) : 0u;
                int is_char = b->texture && (want ? b->texture->offset == want : b->texture->color == 0x0E);
				
                if (is_char && nchar < 40) 
				{ 
					nchar++;
                    fprintf(stderr, "[GPUDIAGCH] #%d cnt=%u %s%stex=0x%X(%ux%u fmt0x%X) "
                            "x[%.1f..%.1f] y[%.1f..%.1f] z[%.4f..%.4f] rhw[%.5f..%.5f] "
                            "dtest=%u dfunc=0x%X dwr=%u cull=%u/%u blend=%u diff0=0x%08X\n",
                            nchar, b->count, offscreen?"OFFSCREEN ":"", degenerate?"DEGEN ":"",
                            b->texture->offset, b->texture->width, b->texture->height,
                            b->texture->color, xmn,xmx, ymn,ymx, zmn,zmx, rmn,rmx,
                            rs?rs->depth_test_enable:0u, rs?rs->depth_func:0u, rs?rs->depth_write:0u,
                            rs?rs->cull_enable:0u, rs?rs->cull_face:0u, rs?rs->blend_enable:0u,
                            v[0].diffuse);
                    fflush(stderr);
                }
            }
        } 
		else if (n2d < 6) 
		{ 
			n2d++;
            fprintf(stderr, "[GPUDIAG2D] #%d cnt=%u x[%.1f..%.1f] y[%.1f..%.1f] z[%.4f..%.4f] "
                    "rhw[%.4f..%.4f] tex=%s(0x%X) diff0=0x%08X blend=%u aref=%.2f surf=%ux%u\n",
                    n2d, b->count, xmn,xmx, ymn,ymx, zmn,zmx, rmn,rmx,
                    srv?"Y":"N", b->texture?b->texture->offset:0u,
                    v[0].diffuse, rs?rs->blend_enable:0u, aref, s_bb_w, s_bb_h);
            fflush(stderr);
        }
    }

    ID3D11DeviceContext_Draw(s_ctx, b->count, 0);
}

/* RECOMP_GPU_DUMP=<path-prefix>: write the actual swapchain backbuffer to a
 * 24-bit BMP by copying it into a CPU-readable staging texture and mapping it.
 * Unlike PrintWindow on a hardware swapchain (which returns black), this is the
 * ground truth of what the GPU produced. Fired for a couple of frames a few
 * seconds apart so an attract loop lands on real content, not the first blank. */
static void gpu_write_dump(const char *prefix, uint64_t frame, const D3D11_TEXTURE2D_DESC *bd, const D3D11_MAPPED_SUBRESOURCE *m)
{
    uint32_t w = bd->Width, h = bd->Height, rowb = ((w * 3u) + 3u) & ~3u;
    uint32_t img = rowb * h, total = 54u + img;
    
	char path[512]; 
	snprintf(path, sizeof path, "%s%05llu.bmp", prefix, (unsigned long long)frame);
	
    FILE *f = fopen(path, "wb");
    if (!f) 
		return;
	
    uint8_t hdr[54] = {0};
    hdr[0] = 'B'; 
	hdr[1] = 'M'; 
	
	memcpy(hdr + 2, &total, 4); 
	hdr[10] = 54; 
	hdr[14] = 40;
    
	memcpy(hdr + 18, &w, 4); 
	memcpy(hdr + 22, &h, 4); 
	
	hdr[26] = 1; 
	hdr[28] = 24; 
	memcpy(hdr + 34, &img, 4);
	
    fwrite(hdr, 1, 54, f);
    uint8_t *line = calloc(1, rowb);
	
    if (line) 
	{
        for (uint32_t y = 0; y < h; y++) 
		{
            const uint8_t *src = (const uint8_t *)m->pData + (size_t)(h-1-y) * m->RowPitch;
            for (uint32_t x = 0; x < w; x++) 
			{
                line[x*3+0] = src[x*4+0]; 
				line[x*3+1] = src[x*4+1]; 
				line[x*3+2] = src[x*4+2];
			}
            fwrite(line,1,rowb,f);
        }
        free(line);
    }
	
    fclose(f);
    fprintf(stderr, "[GPUDUMP] wrote %s (%ux%u)\n", path, w, h);
}

/* Delayed, nonblocking readback avoids serializing guest/GPU execution while
 * investigating buffer-lifetime races. Opt-in only; no normal-play overhead. */
static void gpu_dump_async(const char *prefix, uint64_t frame, int hit)
{
    static struct 
	{ 
		ID3D11Texture2D *texture; 
		uint64_t frame; 
		int pending; 
	} slots[16];
	
    static UINT old_width, old_height;
    D3D11_TEXTURE2D_DESC desc;
	
    ID3D11Texture2D_GetDesc(s_present_color, &desc);
	
    if (old_width != desc.Width || old_height != desc.Height) 
	{
        for (unsigned i=0;i<16;++i) 
		{
            if (slots[i].texture) 
				ID3D11Texture2D_Release(slots[i].texture);
			
            memset(&slots[i],0,sizeof slots[i]);
        }
        old_width=desc.Width; old_height=desc.Height;
    }
	
    desc.Usage = D3D11_USAGE_STAGING; 
	desc.BindFlags = 0;
	
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ; 
	desc.MiscFlags = 0;
	
    for (unsigned i = 0; i < 16; ++i) 
	{
        if (!slots[i].pending || frame < slots[i].frame + 8) 
			continue;
		
        D3D11_MAPPED_SUBRESOURCE mapped;
        HRESULT hr = ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)slots[i].texture, 0, D3D11_MAP_READ, D3D11_MAP_FLAG_DO_NOT_WAIT, &mapped);
		
        if (SUCCEEDED(hr)) 
		{
            gpu_write_dump(prefix, slots[i].frame, &desc, &mapped);
            ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)slots[i].texture, 0);
            slots[i].pending = 0;
        } 
		else if (hr != DXGI_ERROR_WAS_STILL_DRAWING) 
            slots[i].pending = 0;
    }
	
    if (!hit) 
		return;
	
    unsigned index = (unsigned)(frame % 16);
    if (slots[index].pending) 
	{
        fprintf(stderr, "[GPUDUMP] async ring busy at %llu\n", (unsigned long long)frame);
        return;
    }
	
    if (!slots[index].texture && FAILED(ID3D11Device_CreateTexture2D(s_dev, &desc, NULL, &slots[index].texture))) 
		return;
	
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)slots[index].texture, (ID3D11Resource *)s_present_color);
    slots[index].frame = frame; slots[index].pending = 1;
}

static void gpu_dump_backbuffer(const char *prefix, uint64_t frame)
{
    ID3D11Texture2D *bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_swap, 0, &IID_ID3D11Texture2D, (void **)&bb)))
        return;
	
    D3D11_TEXTURE2D_DESC bd; 
	ID3D11Texture2D_GetDesc(bb, &bd);
	
    D3D11_TEXTURE2D_DESC sd = bd;
    sd.Usage = D3D11_USAGE_STAGING; sd.BindFlags = 0;
    sd.CPUAccessFlags = D3D11_CPU_ACCESS_READ; sd.MiscFlags = 0;
	
    ID3D11Texture2D *stg = NULL;
	
    if (FAILED(ID3D11Device_CreateTexture2D(s_dev, &sd, NULL, &stg))) 
	{ 
		ID3D11Texture2D_Release(bb); 
		return; 
	}
	
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)stg, (ID3D11Resource *)bb);
    D3D11_MAPPED_SUBRESOURCE m;
	
    if (SUCCEEDED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)stg, 0, D3D11_MAP_READ, 0, &m))) 
	{
        uint32_t w = bd.Width, h = bd.Height, rowb = ((w * 3u) + 3u) & ~3u, img = rowb * h;
        uint32_t total = 54u + img;
		
        char path[512]; 
		snprintf(path, sizeof path, "%s%05llu.bmp", prefix, (unsigned long long)frame);
		
        FILE *f = fopen(path, "wb");
        if (f) 
		{
            uint8_t hdr[54]; 
			memset(hdr, 0, sizeof hdr);
			
            hdr[0] = 'B'; 
			hdr[1] = 'M'; 
			memcpy(hdr + 2, &total, 4); 
			
			hdr[10] = 54; 
			hdr[14] = 40;
            memcpy(hdr + 18, &w, 4); 
			memcpy(hdr + 22, &h, 4); 
			
			hdr[26] = 1; 
			hdr[28] = 24; 
			memcpy(hdr + 34, &img, 4);
			
            fwrite(hdr, 1, 54,f);
            uint8_t *line = (uint8_t *)calloc(1, rowb);
			
            for (uint32_t y = 0; y < h; y++) 
			{
                const uint8_t *src = (const uint8_t *)m.pData + (size_t)(h-1-y) * m.RowPitch;
				
				/* backbuffer is BGRA */
                for (uint32_t x = 0; x < w; x++) 
				{       
                    line[x * 3 + 0] = src[x * 4 + 0]; 
					line[x * 3 + 1] = src[x*4+1]; 
					line[x*3+2] = src[x*4+2];
                }
				
                fwrite(line,1,rowb,f);
            }
			
            free(line); 
			fclose(f);
			
            fprintf(stderr, "[GPUDUMP] wrote %s (%ux%u)\n", path, w, h); fflush(stderr);
        }
        ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)stg, 0);
    }
    ID3D11Texture2D_Release(stg); ID3D11Texture2D_Release(bb);
}

/* Frame pacer. Present(,0,0) flips as fast as the CPU can push, 
so the GPU path runs unbounded -- which outruns the guest's own timing and hangs the game. */
extern __declspec(dllimport) unsigned __stdcall timeBeginPeriod(unsigned);
#pragma comment(lib, "winmm")

static void pace_frame(void)
{
    static double        fps = -1.0;
    static LARGE_INTEGER freq, next;
    static int           armed;
    static HANDLE        deadline_timer;
    LARGE_INTEGER        now;

	/* one-time setup */
    if (fps < 0.0) 
	{
        const char *e = getenv("RECOMP_GPU_FPS");
        fps = e ? atof(e) : 60.0;
		
        if (fps > 0.0) 
		{
            timeBeginPeriod(1); 
			QueryPerformanceFrequency(&freq);
			
            /* Windows 10 high-resolution, auto-reset waitable timer. */
            deadline_timer = CreateWaitableTimerExW(NULL, NULL, 0x2, TIMER_ALL_ACCESS);
            if (!deadline_timer)
                deadline_timer = CreateWaitableTimerW(NULL, FALSE, NULL);
        }
    }
	
	/* uncapped */
    if (fps <= 0.0) 
		return;

    QueryPerformanceCounter(&now);
    double period = (double)freq.QuadPart / fps;
	
    if (!armed) 
	{ 
		next = now; 
		armed = 1; 
	}
	
    next.QuadPart += (LONGLONG)period;
	
	/* late: never add another frame delay */
    if (next.QuadPart <= now.QuadPart) 
	{ 
        next = now;
        return;
    }

    for (;;) 
	{
        QueryPerformanceCounter(&now);
        LONGLONG rem = next.QuadPart - now.QuadPart;
		
        if (rem <= 0) 
			break;
		
        LARGE_INTEGER due;
        due.QuadPart = -(LONGLONG)((double)rem * 10000000.0 / freq.QuadPart);
		
        if (due.QuadPart == 0) 
			break;
		
        if (deadline_timer && SetWaitableTimer(deadline_timer, &due, 0, NULL, NULL, FALSE))
            WaitForSingleObject(deadline_timer, INFINITE);
        else 
			Sleep(1);
    }
}

/* Upload/draw only on the NV2A poll thread (the immediate context owner).
 * A dedicated SRV avoids the immutable guest-texture cache: every FMV frame
 * is new content, even though its dimensions/address stay the same. */
static void gpu_movie_overlay(void)
{
    static ID3D11Texture2D *texture;
    static unsigned texture_w, texture_h;
    static uint64_t uploaded;
    unsigned w = 0, h = 0; 
	uint64_t serial = 0;
	
    float rect[4];
    const uint8_t *pixels = fmv_frame_acquire(&w,&h,&serial,rect);
	
    if (!pixels) 
	{
        fmv_frame_release();
		
        if (s_movie_srv) 
		{
			ID3D11ShaderResourceView_Release(s_movie_srv); 
			s_movie_srv = NULL; 
		}
		
        if (texture) 
		{ 
			ID3D11Texture2D_Release(texture); 
			texture = NULL; 
		}
		
        uploaded = 0; 
		return;
    }
	
    if (texture && (texture_w!=w || texture_h!=h)) 
	{
        ID3D11ShaderResourceView_Release(s_movie_srv); 
		s_movie_srv = NULL;
		
        ID3D11Texture2D_Release(texture); 
		texture = NULL;
    }
	
    if (!texture) 
	{
        D3D11_TEXTURE2D_DESC desc = {0};
        desc.Width = w; 
		desc.Height = h; 
		desc.MipLevels = 1; 
		desc.ArraySize = 1;
		
        desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM; 
		desc.SampleDesc.Count = 1;
        desc.Usage = D3D11_USAGE_DEFAULT;
		desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
		
        if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_dev, &desc, NULL, &texture))) 
		{
            if (FAILED(ID3D11Device_CreateShaderResourceView(s_dev,(ID3D11Resource *)texture, NULL,&s_movie_srv))) 
			{
                ID3D11Texture2D_Release(texture); 
				texture = NULL;
            }
        }
        texture_w=w; texture_h=h; uploaded=0;
    }
	
    if (texture && uploaded!=serial) 
	{
        ID3D11ShaderResourceView *none = NULL;
        ID3D11DeviceContext_PSSetShaderResources(s_ctx,0,1,&none);
        ID3D11DeviceContext_UpdateSubresource(s_ctx,(ID3D11Resource *)texture, 0, NULL, pixels, w*4, 0);
		
        uploaded=serial;
    }
	
    fmv_frame_release();
    if (!s_movie_srv) 
		return;
	
    /* The original 0x514D0 builder owns per-movie aspect/overscan decisions. */
    float left = rect[0] * s_bb_w / 720.0f, top = rect[1] * s_bb_h / 480.0f;
    float right = rect[2] * s_bb_w / 720.0f, bottom=rect[3] * s_bb_h / 480.0f;
    const float black[4 ]= {0,0,0,1};
	
    ID3D11DeviceContext_ClearRenderTargetView(s_ctx, s_rtv, black);
    Nv2aVertex quad[6]=
	{
        {left,top,0,1,0xFFFFFFFF,0,0},{right,top,0,1,0xFFFFFFFF,(float)w,0},
        {left,bottom,0,1,0xFFFFFFFF,0,(float)h},
        {left,bottom,0,1,0xFFFFFFFF,0,(float)h},{right,top,0,1,0xFFFFFFFF,(float)w,0},
        {right,bottom,0,1,0xFFFFFFFF,(float)w,(float)h}
    };
	
    Nv2aTexture tex = {0}; 
	tex.width = w; 
	tex.height = h;
	
    Nv2aSurface surface={0}; 
	surface.width = s_bb_w; 
	surface.height = s_bb_h;
	
    Nv2aRenderState state={0}; 
	Nv2aBatch batch = 
	{
		quad, 6, 
		&tex,
		&state
	};
	
    s_movie_drawing = 1; 
	gpu_draw(&surface, &batch); 
	
	s_movie_drawing = 0;
}

static void gpu_flip_once(void)
{
    if (!s_dev || s_dead) 
		return;

    /* Opt-in wall-clock throughput; do not enable verbose MMIO tracing merely
     * to measure FPS (its per-kick file writes distort the measurement). */
    {
        static int stats = -1;
        static LARGE_INTEGER frequency, last;
        static uint64_t last_frames;
		
        if (stats<0) 
		{ 
			stats = getenv("RECOMP_FRAME_STATS") != NULL;
            QueryPerformanceFrequency(&frequency); 
			QueryPerformanceCounter(&last); 
		}
        if (stats) 
		{
            LARGE_INTEGER now; 
			QueryPerformanceCounter(&now);
			
            double seconds = (double)(now.QuadPart-last.QuadPart) / frequency.QuadPart;
            if (seconds>=2.0) 
			{
                fprintf(stderr,"[FRAME] %.2f fps (%llu presents in %.3fs)\n", (s_frames-last_frames)/seconds,s_frames-last_frames,seconds);
                last=now; last_frames=s_frames;
            }
        }
    }

    gpu_movie_overlay();

    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)s_present_color, (ID3D11Resource *)s_scene_color);
	
    /* Overlay only on the presentation image: never burn ImGui into the
     * persistent guest scene, which may be only partially redrawn on pause. */
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 1, &s_present_rtv, NULL);
    graphics_ui_draw();

    rdoc_maybe_trigger(s_frames); /* no-op unless built -DRECOMP_WITH_RENDERDOC */

    const char *dump = getenv("RECOMP_GPU_DUMP");
    if (dump) 
	{
        /* RECOMP_GPU_DUMP_FRAMES: comma-separated swapchain frame numbers to
         * dump; lets a dump be aimed at a late attract-demo fight instead of the
         * hardcoded title-screen frames. Default keeps 180/480/900. */
        const char *fr = getenv("RECOMP_GPU_DUMP_FRAMES");
        int hit = 0;
		
        if (fr && *fr) 
		{
            uint64_t val = 0; 
			int have = 0;
			
            for (const char *p = fr; ; p++) 
			{
                if (*p >= '0' && *p <= '9') 
				{ 
					val = val * 10 + (uint64_t)(*p - '0'); 
					have = 1; 
				}
                else 
				{ 
					if (have && val == s_frames) 
					{ 
						hit = 1; 
						break; 
					}
					
                    val = 0; 
					have = 0; 
					if (!*p) 
						break; 
				}
            }
        } 
		else 
            hit = (s_frames == 180 || s_frames == 480 || s_frames == 900);

        if (getenv("RECOMP_GPU_DUMP_ASYNC")) 
			gpu_dump_async(dump, s_frames, hit);
        else if (hit) 
			gpu_dump_backbuffer(dump, s_frames);
    }

    IDXGISwapChain_Present(s_swap, 0, 0);
    s_frames++;

    MSG msg;
    graphics_window_dispatch_pending();
    while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) 
	{
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
	
    graphics_window_apply(s_hwnd);

    pace_frame();
}

static void gpu_flip(void)
{
    do 
    { 
        gpu_flip_once(); 
    } while(!s_dead && graphics_game_paused());
}
static const Nv2aBackend s_backend = { gpu_clear, gpu_draw, gpu_flip };

/* Called from main.c when RECOMP_GPU is set, before the guest runs. */
void nv2a_d3d11_register(void)
{
    nv2a_backend_register(&s_backend);
    fprintf(stderr, "[GPU] D3D11 backend registered (RECOMP_GPU)\n");
}

const Nv2aBackend *nv2a_d3d11_backend(void)
{
    return &s_backend;
}
