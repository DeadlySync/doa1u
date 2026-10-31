/* Embedded art, uploaded by either ImGui renderer's texture protocol. */
#include <windows.h>
#include <wincodec.h>
#include <cstring>
#include <initializer_list>
#include "third_party/imgui/imgui.h"
#include "third_party/imgui/imgui_internal.h"
#include "frontend/launcher_art.h"
namespace
{
	ImTextureData* background, * logo;
	ImTextureData* load(int resource)
	{
		HRSRC r = FindResourceW(nullptr, MAKEINTRESOURCEW(resource), MAKEINTRESOURCEW(10));
		if (!r)
			return nullptr;

		HGLOBAL data = LoadResource(nullptr, r);

		IWICImagingFactory* factory = nullptr;
		IWICStream* stream = nullptr;

		IWICBitmapDecoder* decoder = nullptr;
		IWICBitmapFrameDecode* frame = nullptr;
		IWICFormatConverter* converter = nullptr;
		ImTextureData* texture = nullptr;

		HRESULT co = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
		HRESULT hr = CoCreateInstance(CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&factory));

		if (SUCCEEDED(hr))
			hr = factory->CreateStream(&stream);

		if (SUCCEEDED(hr))
			hr = stream->InitializeFromMemory((BYTE*)LockResource(data), SizeofResource(nullptr, r));

		if (SUCCEEDED(hr))
			hr = factory->CreateDecoderFromStream(stream, nullptr, WICDecodeMetadataCacheOnLoad, &decoder);

		if (SUCCEEDED(hr))
			hr = decoder->GetFrame(0, &frame);

		if (SUCCEEDED(hr))
			hr = factory->CreateFormatConverter(&converter);

		if (SUCCEEDED(hr))
			hr = converter->Initialize(frame, GUID_WICPixelFormat32bppRGBA, WICBitmapDitherTypeNone, nullptr, 0, WICBitmapPaletteTypeCustom);

		UINT w = 0, h = 0; if (SUCCEEDED(hr))hr = converter->GetSize(&w, &h);
		if (SUCCEEDED(hr) && w && h)
		{
			texture = IM_NEW(ImTextureData)();
			texture->Create(ImTextureFormat_RGBA32, w, h);
			hr = converter->CopyPixels(nullptr, w * 4, w * h * 4, (BYTE*)texture->GetPixels());

			if (FAILED(hr))
			{
				IM_DELETE(texture);
				texture = nullptr;
			}
			else
			{
				texture->SetStatus(ImTextureStatus_WantCreate);
				ImGui::RegisterUserTexture(texture);
			}
		}

		if (converter)
			converter->Release();

		if (frame)
			frame->Release();

		if (decoder)
			decoder->Release();

		if (stream)
			stream->Release();

		if (factory)
			factory->Release();

		if (SUCCEEDED(co))
			CoUninitialize();

		return texture;
	}
}

void launcher_art_init()
{
	background = load(201);
	logo = load(202);
}

void launcher_art_draw(float w, float h)
{
	auto* draw = ImGui::GetBackgroundDrawList();

	if (background)
		draw->AddImage(background->GetTexRef(), ImVec2(0, 0), ImVec2(w, h));
	else
		draw->AddRectFilled(ImVec2(0, 0), ImVec2(w, h), IM_COL32(14, 14, 17, 255));

	if (logo)
		draw->AddImage(logo->GetTexRef(), ImVec2(w * .035f, h * .04f), ImVec2(w * .47f, h * .155f), ImVec2(.035f, .07f), ImVec2(.467f, .185f));
}

void launcher_art_shutdown()
{
	// Renderer shutdown already retired GPU handles. Remove external ownership before context destruction.
	auto& textures = ImGui::GetPlatformIO().Textures;

	for (auto* t : { background, logo })
	{
		if (t)
		{
			ImGui::UnregisterUserTexture(t);
			for (int i = 0; i < textures.Size; ++i)
			{
				if (textures[i] == t)
				{
					textures.erase(textures.Data + i);
					break;
				}
			}
			IM_DELETE(t);
		}
	}

	background = logo = nullptr;
}
