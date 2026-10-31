/* First-run UI executes before any guest initialization, in the eventual game HWND. */
#include <windows.h>
#include <d3d11.h>
#include "render/graphics_settings.h"
namespace
{
	LRESULT CALLBACK proc(HWND w, UINT m, WPARAM p, LPARAM l)
	{
		if (m == WM_CLOSE)
		{
			PostQuitMessage(0);
			return 0;
		}

		if (graphics_ui_message(w, m, p, l))
			return 0;

		return DefWindowProcW(w, m, p, l);
	}
}
namespace
{
	struct LauncherRun
	{
		HANDLE completed;
		int result = 0;
		bool hidden = false;
		void (*after_frame)() = nullptr;
	};

	DWORD WINAPI launcher_thread(void* argument)
	{
		auto& run = *static_cast<LauncherRun*>(argument);
		const HANDLE completed = run.completed;
		const bool hidden = run.hidden;
		auto after_frame = run.after_frame;
		auto finish = [&](int result)
		{
			run.result = result;
			SetEvent(completed);
		};

		WNDCLASSW wc = {};
		wc.lpfnWndProc = proc;
		wc.hInstance = GetModuleHandleW(nullptr);
		wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
		wc.lpszClassName = L"DOA1ULauncher";
		RegisterClassW(&wc);

		RECT r = { 0,0,1280,720 };
		AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);

		HWND w = CreateWindowW(wc.lpszClassName, L"DOA1U", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, r.right - r.left, r.bottom - r.top, nullptr, nullptr, wc.hInstance, nullptr);
		if (!w)
		{
			finish(0); return 0;
		}

		DXGI_SWAP_CHAIN_DESC sd = {};
		sd.BufferCount = 2;
		sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		sd.OutputWindow = w;
		sd.SampleDesc.Count = 1;
		sd.Windowed = TRUE;
		sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

		ID3D11Device* dev = nullptr;
		ID3D11DeviceContext* ctx = nullptr;
		IDXGISwapChain* chain = nullptr;

		HRESULT hr = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &sd, &chain, &dev, nullptr, &ctx);
		if (FAILED(hr))
		{
			DestroyWindow(w);

			if (!hidden)
				MessageBoxW(nullptr, L"Unable to initialize launcher graphics.", L"DOA1U", MB_ICONERROR);

			finish(0);
			return 0;
		}

		bool ok = graphics_ui_init(w, dev, ctx) != 0;
		if (!hidden)
			ShowWindow(w, SW_SHOW);

		ID3D11RenderTargetView* target = nullptr;
		UINT oldW = 0, oldH = 0;

		while (ok && graphics_launcher_needed())
		{
			MSG msg;

			while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE))
			{
				if (msg.message == WM_QUIT)
				{
					ok = false; break;
				}

				TranslateMessage(&msg);
				DispatchMessageW(&msg);

			}

			if (!ok)
				break;

			GetClientRect(w, &r);
			UINT width = r.right, height = r.bottom;

			if (!width || !height || IsIconic(w))
			{
				Sleep(20);
				continue;
			}

			if (width != oldW || height != oldH)
			{
				ctx->OMSetRenderTargets(0, nullptr, nullptr);

				if (target)
				{
					target->Release();
					target = nullptr;
				}

				hr = chain->ResizeBuffers(0, width, height, DXGI_FORMAT_UNKNOWN, 0);
				ID3D11Texture2D* back = nullptr;
				if (SUCCEEDED(hr))
					hr = chain->GetBuffer(0, IID_PPV_ARGS(&back));

				if (SUCCEEDED(hr))
					hr = dev->CreateRenderTargetView(back, nullptr, &target);

				if (back)
					back->Release();

				if (FAILED(hr))
				{
					ok = false;
					break;
				}

				oldW = width;
				oldH = height;
			}

			const float black[] = { 0,0,0,1 };

			ctx->OMSetRenderTargets(1, &target, nullptr);
			ctx->ClearRenderTargetView(target, black);

			graphics_ui_draw();

			if (after_frame)
				after_frame();

			hr = chain->Present(1, 0);

			if (FAILED(hr))
			{
				ok = false;
				break;
			}
		}

		graphics_ui_shutdown();
		ctx->ClearState();

		if (target)
			target->Release();

		chain->Release();

		// DXGI requires deferred D3D11 destruction to complete before the next
		// renderer creates a swapchain for this same HWND.
		ctx->Flush();
		ctx->Release();
		dev->Release();

		if (!ok)
		{
			DestroyWindow(w);
			finish(0);
			return 0;
		}

		graphics_set_startup_window(w);
		finish(1);

		// HWND ownership cannot transfer to the GPU executor thread. Keep its
		// owner alive and servicing synchronous Win32/DXGI messages after Play.
		MSG msg;
		while (IsWindow(w) && GetMessageW(&msg, nullptr, 0, 0) > 0)
		{
			TranslateMessage(&msg);
			DispatchMessageW(&msg);
		}
		return 0;
	}

	int run_launcher(bool hidden = false, void (*after_frame)() = nullptr)
	{
		if (!graphics_launcher_needed())
			return 1;

		LauncherRun run
		{
			CreateEventW(nullptr, FALSE, FALSE, nullptr),0 , hidden, after_frame
		};

		if (!run.completed)
			return 0;

		HANDLE thread = CreateThread(nullptr, 0, launcher_thread, &run, 0, nullptr);
		if (!thread)
		{
			CloseHandle(run.completed); 
			return 0;
		}

		WaitForSingleObject(run.completed, INFINITE);
		CloseHandle(thread); 
		CloseHandle(run.completed);

		return run.result;
	}
}

extern "C" int graphics_launcher_run()
{
	return run_launcher();
}

