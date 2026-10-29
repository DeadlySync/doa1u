/* Port-owned NV2A rasterizer using NRI / D3D11, D3D12 or Vulkan.
 * Xbox command decoding, vertex processing and guest semaphore ordering stay
 * in xboxrecomp. Scene rendering, AA and the presentation overlay use NRI.
 */
#include "NRI.h"
#include "Extensions/NRIDeviceCreation.h"
#include "Extensions/NRISwapChain.h"
#include <windows.h>
#undef ERROR // Win32 macro conflicts with nri::Message::ERROR.
#include "nri_imgui.h"
#include "nri_shaders.h"
#include "nri_spirv.h"
#include "smaa/AreaTex.h"
#include "smaa/SearchTex.h"
#include <mmsystem.h>
#include <algorithm>
#include <array>
#include <cstddef>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
#include "render/graphics_settings.h"
#include "render/common/guest_shaders.h"
#include "render/common/antialiasing.h"

extern "C"
{
	#include "nv2a_backend.h"
	#include "render/common/guest_draw_state.h"
	#include "fmv/fmv.h"
	#include "runtime/soft_restart.h"
	#include "render/d3d11/texture_cache.h"
	#include "common/diagnostics.h"
	
	void xbox_InputKeySet(int vk, int down);
	void xbox_InputKeysClear(void);
	const Nv2aBackend *nv2a_d3d11_backend(void);
}

namespace
{
    static_assert(sizeof(areaTexBytes) == AREATEX_SIZE);
    static_assert(sizeof(searchTexBytes) == SEARCHTEX_SIZE);
	constexpr unsigned FrameCount = 2, TextureCount = 512;
	constexpr uint64_t ArenaSize = 4 * 1024 * 1024;

	struct Texture
	{
		nri::Texture *object = nullptr;
        Texture* resolved = nullptr;
		nri::Fence *present_ready = nullptr;
		nri::Descriptor *view = nullptr;
		nri::Descriptor *sample_view = nullptr;
		unsigned mips = 1;
		nri::AccessLayoutStage state = {};
	};

	struct Arena
	{
		nri::Buffer *buffer = nullptr;
		uint64_t size = 0, used = 0;
	};

	struct Frame
	{
		nri::CommandAllocator *allocator = nullptr;
        nri::DescriptorPool* smaa_descriptors = nullptr;
		nri::Fence *image_acquired = nullptr;
		nri::CommandBuffer *commands = nullptr;
		std::vector<nri::CommandBuffer *> chunks;
		unsigned chunk_index = 0, chunk_draws = 0;
		nri::DescriptorPool *descriptors = nullptr;
		std::vector<nri::DescriptorPool*> descriptor_pools;
		unsigned descriptor_pool_index = 0, descriptor_sets_used = 0;
		
		uint64_t completed = 0;
		
		std::vector<Arena> vertices, uploads;
		std::vector<Texture> retired;
	};

	struct CachedTexture
	{
		Nv2aTexture guest = {};
		Texture image;
		std::vector<uint8_t> p8;
	};

	// Same layout and shader semantics as the verified direct-D3D11 renderer.
	struct Constants
	{
		float surf_w, surf_h, tex_w, tex_h;
		float alpha_ref, showall, diffscale, alpha_func;
		float layout_x, layout_y, layout_pad[2];
	};
	
	static_assert(sizeof(Constants) == 48);
	static_assert(sizeof(Nv2aVertex) == 28);

	nri::GraphicsAPI active_api = nri::GraphicsAPI::D3D11;
	const char* api_name = "D3D11";
	nri::CoreInterface core = {};
	nri::SwapChainInterface presentation = {};
	nri::Device *device;
	nri::Queue *queue;
	nri::SwapChain *swapchain;
	nri::Fence *fence;
	nri::PipelineLayout *layout;
	nri::Pipeline *present_pipeline, *fxaa_pipeline, *ssaa_pipeline;
    nri::PipelineLayout* smaa_layout = nullptr;
    nri::Pipeline* smaa_pipelines[3] = {};
    nri::Descriptor* smaa_point = nullptr;
    Texture smaa_edges, smaa_weights, smaa_area, smaa_search;
	nri::Descriptor *samplers[8] = {}; // nearest, bilinear, trilinear, aniso 2/4/8/16, presentation
	unsigned render_width = 640, render_height = 480, active_sampler = 1;
	unsigned base_width = 640, base_height = 480, ssaa_samples = 4, scene_samples = 1;
    unsigned supported_msaa = 1, last_msaa_request = 0;
	int active_aa;
	nri::Pipeline *pipelines[4][2][3][2] = {}; // samples 1/2/4/8, textured, depth off/read/write, blend
    nri::Pipeline* copy_pipelines[4] = {}; // seed retained color when changing sample count
	
	std::array<Frame, FrameCount> frames;
	
	Frame *frame;
	Texture scene, depth, movie, aa_image;
	// Guest backbuffers and depth surfaces have independent memory identities.
	std::map<uint32_t, Texture> color_targets, depth_targets;
	Texture *active_color = &scene, *active_depth = &depth;
	Texture *drawn_color = nullptr, *presented_color = nullptr;
	uint64_t drawn_area = 0;
	std::vector<Texture> outputs;
	std::array<CachedTexture, TextureCount> textures;
	std::vector<uint32_t> decoded;
	
	unsigned cached_count, next_texture;
	long cached_generation;
	HWND window;
	
	
	unsigned width = 640, height = 480, requested_width, requested_height;
	uint64_t frame_number, movie_serial;
	unsigned movie_width, movie_height;
	
	bool output_outdated;
	bool initialized, recording, rendering, failed, initial_clear = true;
	const Nv2aBackend *fallback;
	LARGE_INTEGER timing_frequency, chunk_started;
	uint64_t submitted_chunks;
	double submit_total_ms, submit_peak_ms;

	double milliseconds(LARGE_INTEGER start, LARGE_INTEGER end)
	{
		return (double)(end.QuadPart - start.QuadPart) * 1000.0 / timing_frequency.QuadPart;
	}

	bool option(const char *name)
	{
		const char *value = std::getenv(name);
		return value && *value && *value != '0';
	}

	void check(nri::Result result, const char *operation)
	{
		if (result != nri::Result::SUCCESS)
			throw std::runtime_error(std::string(operation) + " failed (NRI result "
			                         + std::to_string((unsigned)result) + ")");
	}

	unsigned validation_errors;
	void NRI_CALL abort_execution(void*) {} // Log errors; callers handle NRI result codes.

	void NRI_CALL message(nri::Message severity, const char *file, uint32_t line, const char *text, void *)
	{
		if (severity == nri::Message::ERROR) ++validation_errors;
		std::fprintf(stderr, "[NRI:%u] %s (%s:%u)\n", (unsigned)severity, text, file, line);
		std::fflush(stderr);
	}

	void destroy(Texture &texture)
	{
		if (texture.resolved) { destroy(*texture.resolved); delete texture.resolved; }
        core.DestroyDescriptor(texture.sample_view);
		core.DestroyDescriptor(texture.view);
		core.DestroyTexture(texture.object);
		
		texture = {};
	}

	void retire(Texture &texture)
	{
		if (texture.object)
			frame->retired.push_back(texture);
		
		texture = {};
	}

	void end_rendering()
	{
		if (rendering)
			core.CmdEndRendering(*frame->commands);
		
		rendering = false;
	}

	// Keep NV2A execution streaming as on the legacy renderer. With NVAPI
	// disabled, NRI/D3D11 records CPU opcodes; a whole-frame submission defers
	// all native draw execution until flip, creating a scene-dependent burst.
	// Each chunk has its own command buffer, retained until the frame fence.
	void submit_commands(nri::Fence* acquired = nullptr, nri::Fence* ready = nullptr)
	{
		end_rendering();
		check(core.EndCommandBuffer(*frame->commands), "End command chunk");
		
		nri::QueueSubmitDesc submit = {};
		submit.commandBuffers = &frame->commands;
		submit.commandBufferNum = 1;
        nri::FenceSubmitDesc wait = {acquired, 0, nri::StageBits::ALL};
        nri::FenceSubmitDesc signals[2] = {
            {ready, 0, nri::StageBits::ALL},
            {fence, frame_number + 1, nri::StageBits::ALL}
        };
        if (acquired) {
            submit.waitFences = &wait;
            submit.waitFenceNum = 1;
            submit.signalFences = signals;
            submit.signalFenceNum = 2;
        }

		
		LARGE_INTEGER start, end;
		QueryPerformanceCounter(&start);
		check(core.QueueSubmit(*queue, submit), "Submit command chunk");
		
		QueryPerformanceCounter(&end);
		
		double elapsed = milliseconds(start, end);
		submit_total_ms += elapsed;
		submit_peak_ms = std::max(submit_peak_ms, elapsed);
		
		++submitted_chunks;
	}

	void continue_commands()
	{
		++frame->chunk_index;
		if (frame->chunk_index == frame->chunks.size())
		{
			frame->chunks.push_back(nullptr);
			check(core.CreateCommandBuffer(*frame->allocator, frame->chunks.back()), "Create command chunk");
		}
		
		frame->commands = frame->chunks[frame->chunk_index];
		check(core.BeginCommandBuffer(*frame->commands, frame->descriptors), "Begin command chunk");
		
		frame->chunk_draws = 0;
		QueryPerformanceCounter(&chunk_started);
	}

	void flush_draw_chunk()
	{
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		if (++frame->chunk_draws < 32 && milliseconds(chunk_started, now) < 2.0)
			return;
		
		submit_commands();
		continue_commands();
	}

	void transition(Texture &texture, nri::AccessBits access, nri::Layout next, nri::StageBits stages)
	{
		end_rendering();
		
		nri::TextureBarrierDesc barrier = {};
		barrier.texture = texture.object;
		barrier.before = texture.state;
		barrier.after = {access, next, stages};
		barrier.mipNum = (nri::Dim_t)texture.mips;
		barrier.layerNum = 1;
		
		nri::BarrierDesc barriers = {};
		barriers.textures = &barrier;
		barriers.textureNum = 1;
		
		core.CmdBarrier(*frame->commands, barriers);
		
		texture.state = barrier.after;
	}

	void make_texture(Texture &texture, unsigned w, unsigned h, nri::Format format, nri::TextureUsageBits usage, nri::TextureView view, unsigned mips = 1, unsigned samples = 1)
	{
		nri::TextureDesc desc = {};
		
		desc.type = nri::TextureType::TEXTURE_2D;
		desc.usage = usage;
		desc.format = format;
		desc.width = (nri::Dim_t)w;
		desc.height = (nri::Dim_t)h;
		desc.depth = desc.layerNum = 1;
        desc.sampleNum = (nri::Sample_t)samples;
		desc.mipNum = (nri::Dim_t)mips;
		texture.mips = mips;
		
		check(core.CreateCommittedTexture(*device, nri::MemoryLocation::DEVICE, 0, desc, texture.object), "Create texture");
		
		nri::TextureViewDesc vd = {};
		vd.texture = texture.object;
		vd.type = view;
		vd.mipNum = (nri::Dim_t)mips;
		vd.layerNum = vd.sliceNum = 1;
		
		check(core.CreateTextureView(vd, texture.view), "Create texture view");
	}

	void begin_rendering()
	{
		if (rendering)
			return;
		
		if (active_color->state.layout != nri::Layout::COLOR_ATTACHMENT)
			transition(*active_color, nri::AccessBits::COLOR_ATTACHMENT, nri::Layout::COLOR_ATTACHMENT,
			           nri::StageBits::COLOR_ATTACHMENT);
					   
		if (active_depth->state.layout != nri::Layout::DEPTH_STENCIL_ATTACHMENT)
			transition(*active_depth, nri::AccessBits::DEPTH_STENCIL_ATTACHMENT,
			           nri::Layout::DEPTH_STENCIL_ATTACHMENT, nri::StageBits::DEPTH_STENCIL_ATTACHMENT);
					   
		nri::AttachmentDesc color = {};
		color.descriptor = active_color->view;
		nri::RenderingDesc desc = {};
		desc.colors = &color;
		desc.colorNum = 1;
		desc.depth.descriptor = active_depth->view;
		core.CmdBeginRendering(*frame->commands, desc);
		rendering = true;
	}

	void clear(unsigned flags, uint32_t argb, uint32_t zs)
	{
		begin_rendering();
		nri::ClearAttachmentDesc clears[2] = {};
		unsigned count = 0;
		
		if (flags & 0xF0)
		{
			auto &c = clears[count++];
			
			c.planes = nri::PlaneBits::COLOR;
			c.value.color.f = 
			{
				((argb >> 16) & 255) / 255.0f, 
				((argb >> 8) & 255) / 255.0f,
			     (argb & 255) / 255.0f, 
				((argb >> 24) & 255) / 255.0f
			};

		}
		
		if (flags & 3)
		{
			auto &c = clears[count++];
			c.planes = (flags & 1) ? nri::PlaneBits::DEPTH : nri::PlaneBits::STENCIL;
			
			if ((flags & 3) == 3)
				c.planes = nri::PlaneBits::DEPTH | nri::PlaneBits::STENCIL;
			
			c.value.depthStencil.depth = (zs >> 8) / 16777215.0f;
			c.value.depthStencil.stencil = (uint8_t)zs;
		}
		
		if (count)
			core.CmdClearAttachments(*frame->commands, clears, count, nullptr, 0);
	}

	uint64_t align_up(uint64_t value, uint64_t alignment)
	{
		return ((value + alignment - 1) / alignment) * alignment;
	}

	struct Upload
	{
		nri::Buffer *buffer;
		uint64_t offset;
	};

	Upload upload(std::vector<Arena> &arenas, const void *data, uint64_t bytes, uint64_t alignment, nri::BufferUsageBits usage)
	{
		Arena *selected = nullptr;
		
		for (auto &arena : arenas)
		{
			if (align_up(arena.used, alignment) + bytes <= arena.size)
			{
				selected = &arena;
				break;
			}
		}
		
		if (!selected)
		{
			arenas.push_back({});
			selected = &arenas.back();
			selected->size = std::max(ArenaSize, align_up(bytes, alignment));
			
			nri::BufferDesc desc = {};
			
			desc.size = selected->size;
			desc.usage = usage;
			
			check(core.CreateCommittedBuffer(*device, nri::MemoryLocation::HOST_UPLOAD, 0, desc,
			                                 selected->buffer),
			      "Create frame upload buffer");
		}
		
		uint64_t offset = align_up(selected->used, alignment);
		void *mapped = core.MapBuffer(*selected->buffer, offset, bytes);
		
		if (!mapped)
			throw std::runtime_error("Map frame upload buffer failed");
		
		std::memcpy(mapped, data, (size_t)bytes);
		core.UnmapBuffer(*selected->buffer);
		selected->used = offset + bytes;
		
		return {selected->buffer, offset};
	}

	void upload_texture(Texture &image, const void *pixels, unsigned w, unsigned h, unsigned mip = 0, unsigned bytes_per_pixel = 4)
	{
		end_rendering();
		
		const auto &limits = core.GetDeviceDesc(*device).memoryAlignment;
		unsigned row = (unsigned)align_up(w * bytes_per_pixel, std::max(1u, limits.uploadBufferTextureRow));
		unsigned slice = (unsigned)align_up((uint64_t)row * h, std::max(1u, limits.uploadBufferTextureSlice));
		std::vector<uint8_t> padded(slice);
		
		for (unsigned y = 0; y < h; ++y)
			std::memcpy(padded.data() + (size_t)y * row, (const uint8_t *)pixels + (size_t)y * w * bytes_per_pixel, w * bytes_per_pixel);
		
		Upload source = upload(frame->uploads, padded.data(), slice, std::max(1u, limits.uploadBufferTextureSlice), nri::BufferUsageBits::NONE);
		transition(image, nri::AccessBits::COPY_DESTINATION, nri::Layout::COPY_DESTINATION, nri::StageBits::COPY);
		
		nri::TextureRegionDesc region = {};
		
		region.width = (nri::Dim_t)w;
		region.height = (nri::Dim_t)h;
		region.depth = 1;
		region.mipOffset = (nri::Dim_t)mip;
		
		nri::TextureDataLayoutDesc source_layout = {source.offset, row, slice};
		core.CmdUploadBufferToTexture(*frame->commands, *image.object, region, *source.buffer, source_layout);
		
		transition(image, nri::AccessBits::SHADER_RESOURCE, nri::Layout::SHADER_RESOURCE, nri::StageBits::FRAGMENT_SHADER);
	}

	unsigned mip_count(unsigned w, unsigned h)
	{
		unsigned count = 1;
		while (w > 1 || h > 1)
		{
			w = std::max(1u, w / 2);
			h = std::max(1u, h / 2);
			++count;
		}
		return count;
	}

	// Host-generated complete mip chain, rebuilt whenever mutable P8 data changes.
	// Alpha-weighted color prevents transparent texels creating dark fringes.
	void upload_mips(Texture &image, unsigned w, unsigned h)
	{
		std::vector<uint32_t> previous = decoded;
		for (unsigned level = 0; level < image.mips; ++level)
		{
			upload_texture(image, previous.data(), w, h, level);
			if (level + 1 == image.mips)
				break;
			
			unsigned nw = std::max(1u, w / 2), nh = std::max(1u, h / 2);
			std::vector<uint32_t> next((size_t)nw * nh);
			for (unsigned y = 0; y < nh; ++y)
				for (unsigned x = 0; x < nw; ++x)
				{
					unsigned a = 0, b = 0, g = 0, r = 0, count = 0;
					for (unsigned sy = y * h / nh; sy < (y + 1) * h / nh; ++sy)
						for (unsigned sx = x * w / nw; sx < (x + 1) * w / nw; ++sx)
						{
							uint32_t c = previous[(size_t)sy * w + sx];
							unsigned alpha = c >> 24;
							a += alpha;
							b += (c & 255) * alpha;
							g += ((c >> 8) & 255) * alpha;
							r += ((c >> 16) & 255) * alpha;
							++count;
						}
						
					uint32_t c = ((a + count / 2) / count) << 24;
					if (a)
						c |= ((r + a / 2) / a) << 16 | ((g + a / 2) / a) << 8 | (b + a / 2) / a;
					
					next[(size_t)y * nw + x] = c;
				}
				
			previous.swap(next);
			w = nw;
			h = nh;
		}
	}

	Texture *get_texture(const Nv2aTexture *guest)
	{
		long generation = renderer_texture_generation();
		
		if (generation != cached_generation)
		{
			for (auto &entry : textures)
			{
				retire(entry.image);
				entry.p8.clear();
			}
			
			cached_count = next_texture = 0;
			cached_generation = generation;
		}
		
		const uint8_t *indices = nullptr, *palette = nullptr;
		bool p8 = nv2a_backend_p8_source(guest, &indices, &palette) != 0;
		const size_t pixels = (size_t)guest->width * guest->height;
		
		if (!pixels)
			return nullptr;
		
		CachedTexture *entry = nullptr;
		for (unsigned i = 0; i < cached_count; ++i)
		{
			auto &candidate = textures[i];
			const auto &old = candidate.guest;
			
			if (old.offset != guest->offset || old.width != guest->width || old.height != guest->height
			    || old.color != guest->color || old.pitch != guest->pitch)
				continue;
				
			if (guest->color != 0x0B)
				return &candidate.image;
			
			entry = &candidate;
			// P8 indices/palettes can change between draws, not just flips.
			// A frame-number shortcut reuses stale colors AND transparency.
			
			if (p8 && entry->p8.size() == pixels + 1024 && !std::memcmp(entry->p8.data(), indices, pixels)
			    && !std::memcmp(entry->p8.data() + pixels, palette, 1024))
				return &entry->image;
				
			break;
		}
		
		decoded.resize(pixels);
		if (!nv2a_backend_decode_texture(guest, decoded.data()))
			return nullptr;
		
		if (!entry)
		{
			unsigned slot = cached_count < TextureCount ? cached_count++ : next_texture++ % TextureCount;
			
			entry = &textures[slot];
			retire(entry->image);
			entry->guest = *guest;
			entry->p8.clear();
			
			make_texture(entry->image, guest->width, guest->height, nri::Format::BGRA8_UNORM,
			             nri::TextureUsageBits::SHADER_RESOURCE, nri::TextureView::TEXTURE, mip_count(guest->width, guest->height));
		}
		
		upload_mips(entry->image, guest->width, guest->height);
		
		if (p8)
		{
			entry->p8.resize(pixels + 1024);
			std::memcpy(entry->p8.data(), indices, pixels);
			std::memcpy(entry->p8.data() + pixels, palette, 1024);
		}
		
		return &entry->image;
	}

	LRESULT CALLBACK wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
	{
		if (graphics_ui_message(hwnd, msg, wparam, lparam))
			return 0;
		
		switch (msg)
		{
			case WM_SIZE:
				if (wparam != SIZE_MINIMIZED && LOWORD(lparam) && HIWORD(lparam))
				{
					requested_width = LOWORD(lparam);
					requested_height = HIWORD(lparam);
				}
				return 0;
				
			case WM_CLOSE:
				ExitProcess(0);
				
			case WM_KEYDOWN:
				if (wparam == VK_ESCAPE)
				{
					if (!(lparam & (1LL << 30)))
						game_soft_restart();
				}
				else
					xbox_InputKeySet((int)wparam, 1);
				return 0;
				
			case WM_KEYUP:
				if (wparam != VK_ESCAPE)
					xbox_InputKeySet((int)wparam, 0);
				return 0;
				
			case WM_KILLFOCUS:
				xbox_InputKeysClear();
				return 0;
		}
		
		return DefWindowProcW(hwnd, msg, wparam, lparam);
	}

	void pump()
	{
		MSG msg;
		while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessageW(&msg);
		}
		
		if (window)
			graphics_window_apply(window);
	}


    void create_pipelines(nri::Format color_format)
    {
        const auto color_support = core.GetFormatSupport(*device,color_format);
        const auto depth_support = core.GetFormatSupport(*device,nri::Format::D24_UNORM_S8_UINT);
        const nri::FormatSupportBits flags[] = {nri::FormatSupportBits::MULTISAMPLE_2X,nri::FormatSupportBits::MULTISAMPLE_4X,nri::FormatSupportBits::MULTISAMPLE_8X};
        supported_msaa = 1;
        if ((color_support & nri::FormatSupportBits::MULTISAMPLE_RESOLVE))
            for (unsigned i=0;i<3;++i)
                if ((color_support & flags[i]) && (depth_support & flags[i])) supported_msaa |= 2u << i;

		nri::DescriptorRangeDesc ranges[2] = {};
		ranges[0].descriptorNum = ranges[1].descriptorNum = 1;
		ranges[0].descriptorType = nri::DescriptorType::TEXTURE;
		ranges[1].descriptorType = nri::DescriptorType::SAMPLER;
		ranges[0].shaderStages = ranges[1].shaderStages = nri::StageBits::FRAGMENT_SHADER;
		
		nri::DescriptorSetDesc set = {};
		set.ranges = ranges;
		set.rangeNum = 2;
		
		nri::RootConstantDesc constants = {};
		constants.size = sizeof(Constants);
		constants.shaderStages = nri::StageBits::VERTEX_SHADER | nri::StageBits::FRAGMENT_SHADER;

		for (unsigned i = 0; i < 8; ++i)
		{
			nri::SamplerDesc sampler = {};
			sampler.filters.min = sampler.filters.mag = i == 0 ? nri::Filter::NEAREST : nri::Filter::LINEAR;
			sampler.filters.mip = i >= 2 && i <= 6 ? nri::Filter::LINEAR : nri::Filter::NEAREST;
			sampler.mipMax = i >= 2 && i <= 6 ? 1000.0f : 0.0f;
			sampler.anisotropy = i >= 3 && i <= 6 ? (uint8_t)(2u << (i - 3)) : 1;
			
			auto address = i == 7 ? nri::AddressMode::CLAMP_TO_EDGE : nri::AddressMode::REPEAT;
			sampler.addressModes = {address, address, address};
			check(core.CreateSampler(*device, sampler, samplers[i]), "Create texture sampler");
		}
		nri::PipelineLayoutDesc ld = {};
		
		// D3D11 ignores spaces; reserve a distinct root space for the portable layout.
		ld.rootRegisterSpace = 1;
		ld.rootConstants = &constants;
		ld.rootConstantNum = 1;
		ld.descriptorSets = &set;
		ld.descriptorSetNum = 1;
		ld.shaderStages = constants.shaderStages;
		check(core.CreatePipelineLayout(*device, ld, layout), "Create pipeline layout");

		auto vs = doa1u::compile_shader(active_api, HLSL_VS, "vs_5_0");
		auto tex = doa1u::compile_shader(active_api, HLSL_PS_TEX, "ps_5_0");
		auto flat = doa1u::compile_shader(active_api, HLSL_PS_FLAT, "ps_5_0");
		
		nri::VertexAttributeDesc attributes[3] = {};
		attributes[0].d3d.semanticName = "POSITION";
		attributes[0].format = nri::Format::RGBA32_SFLOAT;
		attributes[1].d3d.semanticName = "COLOR";
		attributes[1].vk.location = 1;
		attributes[1].offset = offsetof(Nv2aVertex, diffuse);
		attributes[1].format = nri::Format::BGRA8_UNORM;
		attributes[2].d3d.semanticName = "TEXCOORD";
		attributes[2].vk.location = 2;
		attributes[2].offset = offsetof(Nv2aVertex, u);
		attributes[2].format = nri::Format::RG32_SFLOAT;
		
		nri::VertexStreamDesc stream = {};
		stream.stride = sizeof(Nv2aVertex);
		
		nri::VertexInputDesc input = {attributes, 3, &stream, 1};
		
        for (unsigned samples=1; samples<=8; samples*=2) {
            if (!(supported_msaa & samples)) continue;
            nri::MultisampleDesc ms = {}; ms.sampleNum=(nri::Sample_t)samples;
		for (unsigned textured = 0; textured < 2; ++textured)
			for (unsigned z = 0; z < 3; ++z)
				for (unsigned blend = 0; blend < 2; ++blend)
				{
					const auto &ps = textured ? tex : flat;
					
					nri::ShaderDesc shaders[2] = {};
					shaders[0] = {nri::StageBits::VERTEX_SHADER, vs.data(), vs.size(), "main"};
					shaders[1] = {nri::StageBits::FRAGMENT_SHADER, ps.data(), ps.size(), "main"};
					
					nri::ColorAttachmentDesc color = {};
					color.format = color_format;
					color.colorWriteMask = nri::ColorWriteBits::RGBA;
					color.blendEnabled = blend != 0;
					color.colorBlend = 
					{
						nri::BlendFactor::SRC_ALPHA, 
						nri::BlendFactor::ONE_MINUS_SRC_ALPHA,
					    nri::BlendOp::ADD
					};
					
					color.alphaBlend = 
					{
						nri::BlendFactor::ONE, 
						nri::BlendFactor::ONE_MINUS_SRC_ALPHA,
					    nri::BlendOp::ADD
					};
					
					nri::GraphicsPipelineDesc pd = {};
					pd.pipelineLayout = layout;
                    pd.multisample = &ms;
					pd.vertexInput = &input;
					pd.inputAssembly.topology = nri::Topology::TRIANGLE_LIST;
					pd.rasterization.cullMode = nri::CullMode::NONE;
					pd.outputMerger.colors = &color;
					pd.outputMerger.colorNum = 1;
					pd.outputMerger.depthStencilFormat = nri::Format::D24_UNORM_S8_UINT;
					pd.outputMerger.depth.compareOp = z ? nri::CompareOp::LESS_EQUAL : nri::CompareOp::NONE;
					pd.outputMerger.depth.write = z == 2;
					pd.shaders = shaders;
					pd.shaderNum = 2;
					
					check(core.CreateGraphicsPipeline(*device, pd, pipelines[samples == 8 ? 3 : samples == 4 ? 2 : samples == 2 ? 1 : 0][textured][z][blend]), "Create graphics pipeline");
				}
        }
		// Full-screen triangle; no guest diffuse, alpha test or depth behavior.
		const char *present_vs =
			"struct O{float4 p:SV_Position;float2 uv:TEXCOORD;};"
			"O main(uint id:SV_VertexID){O o;o.uv=float2((id<<1)&2,id&2);"
			"o.p=float4(o.uv*float2(2,-2)+float2(-1,1),0,1);return o;}";
			
		const char *present_ps =
			"Texture2D t:register(t0);SamplerState s:register(s0);"
			"float4 main(float4 p:SV_Position,float2 uv:TEXCOORD):SV_Target{return t.SampleLevel(s,uv,0);}";
			
		auto pvs = doa1u::compile_shader(active_api, present_vs, "vs_5_0"), pps = doa1u::compile_shader(active_api, present_ps, "ps_5_0");
		nri::ShaderDesc shaders[2] = {
			{nri::StageBits::VERTEX_SHADER, pvs.data(), pvs.size(), "main"},
			{nri::StageBits::FRAGMENT_SHADER, pps.data(), pps.size(), "main"}};
			
		nri::ColorAttachmentDesc color = {};
		color.format = color_format;
		color.colorWriteMask = nri::ColorWriteBits::RGBA;
		
		nri::GraphicsPipelineDesc pd = {};
		pd.pipelineLayout = layout;
		pd.inputAssembly.topology = nri::Topology::TRIANGLE_LIST;
		pd.rasterization.cullMode = nri::CullMode::NONE;
		pd.outputMerger.colors = &color;
		pd.outputMerger.colorNum = 1;
		pd.shaders = shaders;
		pd.shaderNum = 2;
		check(core.CreateGraphicsPipeline(*device, pd, present_pipeline), "Create presentation pipeline");
        copy_pipelines[0]=present_pipeline;
        for (unsigned samples=2; samples<=8; samples*=2) {
            if (!(supported_msaa & samples)) continue;
            nri::MultisampleDesc ms = {}; ms.sampleNum=(nri::Sample_t)samples;
            pd.multisample=&ms;
            check(core.CreateGraphicsPipeline(*device,pd,copy_pipelines[samples==8?3:samples==4?2:1]),"Create multisample preservation pipeline");
        }
        pd.multisample=nullptr;

		auto fxaa = doa1u::compile_shader(active_api, HLSL_FXAA, "ps_5_0"), ssaa = doa1u::compile_shader(active_api, HLSL_SSAA, "ps_5_0");
		shaders[1] = {nri::StageBits::FRAGMENT_SHADER, fxaa.data(), fxaa.size(), "main"};
		check(core.CreateGraphicsPipeline(*device, pd, fxaa_pipeline), "Create FXAA pipeline");
		shaders[1] = {nri::StageBits::FRAGMENT_SHADER, ssaa.data(), ssaa.size(), "main"};
		check(core.CreateGraphicsPipeline(*device, pd, ssaa_pipeline), "Create SSAA resolve pipeline");
        nri::DescriptorRangeDesc sr[2] = {};
        sr[0].baseRegisterIndex = 8; sr[0].descriptorNum = 3;
        sr[0].descriptorType = nri::DescriptorType::TEXTURE;
        sr[1].descriptorNum = 2; sr[1].descriptorType = nri::DescriptorType::SAMPLER;
        sr[0].shaderStages = sr[1].shaderStages = nri::StageBits::FRAGMENT_SHADER;
        set.ranges = sr;
        check(core.CreatePipelineLayout(*device, ld, smaa_layout), "Create SMAA layout");
        pd.pipelineLayout = smaa_layout;
        const char* sources[] = {doa1u::spirv::HLSL_SMAA_0_source, doa1u::spirv::HLSL_SMAA_1_source, doa1u::spirv::HLSL_SMAA_2_source};
        for (unsigned i=0;i<3;++i) {
            auto shader = doa1u::compile_shader(active_api,sources[i],"ps_5_0");
            shaders[1] = {nri::StageBits::FRAGMENT_SHADER,shader.data(),shader.size(),"main"};
            color.format = i == 0 ? nri::Format::RG8_UNORM : i == 1 ? nri::Format::RGBA8_UNORM : color_format;
            check(core.CreateGraphicsPipeline(*device,pd,smaa_pipelines[i]),"Create SMAA pipeline");
        }
        nri::SamplerDesc point = {};
        point.addressModes = {nri::AddressMode::CLAMP_TO_EDGE,nri::AddressMode::CLAMP_TO_EDGE,nri::AddressMode::CLAMP_TO_EDGE};
        point.anisotropy = 1;
        check(core.CreateSampler(*device,point,smaa_point),"Create SMAA point sampler");


	}

	void bind_image(nri::Descriptor *view, unsigned sampler)
	{
        // D3D12 shader-visible sampler heaps are limited to 2048 entries.
        // Grow in bounded pools, retaining all pools until this frame completes.
        if (frame->descriptor_sets_used == 1024) {
            ++frame->descriptor_pool_index;
            if (frame->descriptor_pool_index == frame->descriptor_pools.size()) {
                nri::DescriptorPoolDesc desc = {};
                desc.descriptorSetMaxNum = desc.textureMaxNum = desc.samplerMaxNum = 1024;
                nri::DescriptorPool* pool = nullptr;
                check(core.CreateDescriptorPool(*device, desc, pool), "Grow descriptor pools");
                frame->descriptor_pools.push_back(pool);
            }
            frame->descriptors = frame->descriptor_pools[frame->descriptor_pool_index];
            frame->descriptor_sets_used = 0;
            core.CmdSetDescriptorPool(*frame->commands, *frame->descriptors);
        }
        ++frame->descriptor_sets_used;
        nri::DescriptorSet *set = nullptr;
        check(core.AllocateDescriptorSets(*frame->descriptors, *layout, 0, &set, 1, 0), "Allocate image descriptor set");
		
		const nri::Descriptor *descriptors[2] = {view, samplers[sampler]};
		nri::UpdateDescriptorRangeDesc updates[2] = {};
		
		for (unsigned i = 0; i < 2; ++i)
		{
			updates[i].descriptorSet = set;
			updates[i].rangeIndex = i;
			updates[i].descriptors = &descriptors[i];
			updates[i].descriptorNum = 1;
		}
		
		core.UpdateDescriptorRanges(updates, 2);
		nri::SetDescriptorSetDesc bind = {};
		
		bind.descriptorSet = set;
		core.CmdSetDescriptorSet(*frame->commands, bind);
	}

    unsigned sample_index(unsigned samples) { return samples == 8 ? 3 : samples == 4 ? 2 : samples == 2 ? 1 : 0; }

    Texture& resolve_image(Texture& source) {
        if (!source.resolved) return source;
        end_rendering();
        transition(source,nri::AccessBits::RESOLVE_SOURCE,nri::Layout::RESOLVE_SOURCE,nri::StageBits::RESOLVE);
        transition(*source.resolved,nri::AccessBits::RESOLVE_DESTINATION,nri::Layout::RESOLVE_DESTINATION,nri::StageBits::RESOLVE);
        core.CmdResolveTexture(*frame->commands,*source.resolved->object,nullptr,*source.object,nullptr,nri::ResolveOp::AVERAGE);
        return *source.resolved;
    }

	void scale_image(Texture &input, Texture &target, unsigned w, unsigned h, bool fit,
	                 nri::Pipeline *filter = nullptr, const Constants *parameters = nullptr)
	{
		end_rendering();
		
        Texture& source = resolve_image(input);
		transition(source, nri::AccessBits::SHADER_RESOURCE, nri::Layout::SHADER_RESOURCE, nri::StageBits::FRAGMENT_SHADER);
		transition(target, nri::AccessBits::COLOR_ATTACHMENT, nri::Layout::COLOR_ATTACHMENT, nri::StageBits::COLOR_ATTACHMENT);
		
		nri::AttachmentDesc color = {};
		color.descriptor = target.view;
		
		nri::RenderingDesc rendering_desc = {};
		rendering_desc.colors = &color;
		rendering_desc.colorNum = 1;
		core.CmdBeginRendering(*frame->commands, rendering_desc);
		
		nri::ClearAttachmentDesc black = {};
		black.planes = nri::PlaneBits::COLOR;
		black.value.color.f = {0, 0, 0, 1};
		
		core.CmdClearAttachments(*frame->commands, &black, 1, nullptr, 0);
		core.CmdSetPipelineLayout(*frame->commands, nri::BindPoint::GRAPHICS, *layout);
		core.CmdSetPipeline(*frame->commands, *(filter ? filter : copy_pipelines[sample_index(core.GetTextureDesc(*target.object).sampleNum)]));
		if (parameters) {
			nri::SetRootConstantsDesc root = {};
			root.data = parameters;
			root.size = sizeof(*parameters);
			core.CmdSetRootConstants(*frame->commands, root);
		}
		
		bind_image(source.sample_view, 7);
		nri::Viewport viewport = {0, 0, (float)w, (float)h, 0, 1};
		
		if (fit)
		{
			float aspect = (float)base_width / base_height;
			if (viewport.width / viewport.height > aspect)
			{
				viewport.width = viewport.height * aspect;
				viewport.x = (w - viewport.width) * 0.5f;
			}
			else
			{
				viewport.height = viewport.width / aspect;
				viewport.y = (h - viewport.height) * 0.5f;
			}
		}
		
		core.CmdSetViewports(*frame->commands, &viewport, 1);
		nri::Rect scissor = {0, 0, (nri::Dim_t)w, (nri::Dim_t)h};
		
		core.CmdSetScissors(*frame->commands, &scissor, 1);
		nri::DrawDesc triangle = {3, 1, 0, 0};
		
		core.CmdDraw(*frame->commands, triangle);
		core.CmdEndRendering(*frame->commands);
	}

    void smaa_image(Texture& source, Texture& target) {
        end_rendering();
        if (!smaa_area.object) {
            make_texture(smaa_area,AREATEX_WIDTH,AREATEX_HEIGHT,nri::Format::RG8_UNORM,nri::TextureUsageBits::SHADER_RESOURCE,nri::TextureView::TEXTURE);
            upload_texture(smaa_area,areaTexBytes,AREATEX_WIDTH,AREATEX_HEIGHT,0,2);
            make_texture(smaa_search,SEARCHTEX_WIDTH,SEARCHTEX_HEIGHT,nri::Format::R8_UNORM,nri::TextureUsageBits::SHADER_RESOURCE,nri::TextureView::TEXTURE);
            upload_texture(smaa_search,searchTexBytes,SEARCHTEX_WIDTH,SEARCHTEX_HEIGHT,0,1);
        }
        for (auto* tex : {&smaa_edges,&smaa_weights}) {
            if (tex->object && (core.GetTextureDesc(*tex->object).width != base_width || core.GetTextureDesc(*tex->object).height != base_height)) retire(*tex);
            if (!tex->object) {
                make_texture(*tex,base_width,base_height,tex == &smaa_edges ? nri::Format::RG8_UNORM : nri::Format::RGBA8_UNORM,
                    nri::TextureUsageBits::COLOR_ATTACHMENT|nri::TextureUsageBits::SHADER_RESOURCE,nri::TextureView::COLOR_ATTACHMENT);
                nri::TextureViewDesc vd = {}; vd.texture=tex->object; vd.type=nri::TextureView::TEXTURE;
                vd.mipNum=vd.layerNum=vd.sliceNum=1;
                check(core.CreateTextureView(vd,tex->sample_view),"Create SMAA input view");
            }
        }
        if (!frame->smaa_descriptors) {
            nri::DescriptorPoolDesc pool = {}; pool.descriptorSetMaxNum=3; pool.textureMaxNum=9; pool.samplerMaxNum=6;
            check(core.CreateDescriptorPool(*device,pool,frame->smaa_descriptors),"Create SMAA descriptors");
        }
        core.CmdSetDescriptorPool(*frame->commands,*frame->smaa_descriptors);
        transition(source,nri::AccessBits::SHADER_RESOURCE,nri::Layout::SHADER_RESOURCE,nri::StageBits::FRAGMENT_SHADER);
        transition(smaa_area,nri::AccessBits::SHADER_RESOURCE,nri::Layout::SHADER_RESOURCE,nri::StageBits::FRAGMENT_SHADER);
        transition(smaa_search,nri::AccessBits::SHADER_RESOURCE,nri::Layout::SHADER_RESOURCE,nri::StageBits::FRAGMENT_SHADER);
        for (unsigned i=0;i<3;++i) {
            Texture& out = i==0 ? smaa_edges : i==1 ? smaa_weights : target;
            transition(out,nri::AccessBits::COLOR_ATTACHMENT,nri::Layout::COLOR_ATTACHMENT,nri::StageBits::COLOR_ATTACHMENT);
            nri::DescriptorSet* set=nullptr;
            check(core.AllocateDescriptorSets(*frame->smaa_descriptors,*smaa_layout,0,&set,1,0),"Allocate SMAA set");
            const nri::Descriptor* inputs[] = {i==1 ? smaa_edges.sample_view : source.sample_view,
                i==1 ? smaa_area.view : i==2 ? smaa_weights.sample_view : source.sample_view,smaa_search.view};
            const nri::Descriptor* samps[] = {samplers[7],smaa_point};
            nri::UpdateDescriptorRangeDesc updates[2] = {};
            updates[0].descriptorSet=updates[1].descriptorSet=set;
            updates[0].descriptors=inputs; updates[0].descriptorNum=3;
            updates[1].rangeIndex=1; updates[1].descriptors=samps; updates[1].descriptorNum=2;
            core.UpdateDescriptorRanges(updates,2);
            nri::AttachmentDesc color = {}; color.descriptor=out.view;
            nri::RenderingDesc rendering = {}; rendering.colors=&color; rendering.colorNum=1;
            core.CmdBeginRendering(*frame->commands,rendering);
            nri::ClearAttachmentDesc zero = {}; zero.planes=nri::PlaneBits::COLOR;
            core.CmdClearAttachments(*frame->commands,&zero,1,nullptr,0);
            core.CmdSetPipelineLayout(*frame->commands,nri::BindPoint::GRAPHICS,*smaa_layout);
            core.CmdSetPipeline(*frame->commands,*smaa_pipelines[i]);
            Constants constants = {}; constants.surf_w=1.0f/base_width; constants.surf_h=1.0f/base_height;
            constants.tex_w=(float)base_width; constants.tex_h=(float)base_height;
            nri::SetRootConstantsDesc root = {}; root.data=&constants; root.size=sizeof(constants);
            core.CmdSetRootConstants(*frame->commands,root);
            nri::SetDescriptorSetDesc bind = {}; bind.descriptorSet=set; core.CmdSetDescriptorSet(*frame->commands,bind);
            nri::Viewport vp={0,0,(float)base_width,(float)base_height,0,1}; core.CmdSetViewports(*frame->commands,&vp,1);
            nri::Rect rect={0,0,(nri::Dim_t)base_width,(nri::Dim_t)base_height}; core.CmdSetScissors(*frame->commands,&rect,1);
            nri::DrawDesc tri={3,1,0,0}; core.CmdDraw(*frame->commands,tri); core.CmdEndRendering(*frame->commands);
            transition(out,nri::AccessBits::SHADER_RESOURCE,nri::Layout::SHADER_RESOURCE,nri::StageBits::FRAGMENT_SHADER);
        }
        core.CmdSetDescriptorPool(*frame->commands,*frame->descriptors);
    }

	void create_color_target(Texture &target, nri::Format format)
	{
		make_texture(target, render_width, render_height, format,
			nri::TextureUsageBits::COLOR_ATTACHMENT | nri::TextureUsageBits::SHADER_RESOURCE, nri::TextureView::COLOR_ATTACHMENT, 1, scene_samples);
		nri::TextureViewDesc vd = {};
		
		vd.texture = target.object;
		vd.type = nri::TextureView::TEXTURE;
		vd.mipNum = vd.layerNum = vd.sliceNum = 1;
        if (scene_samples == 1) check(core.CreateTextureView(vd, target.sample_view), "Create scene sampling view");
        else {
            target.resolved = new Texture;
            unsigned saved_samples = scene_samples; scene_samples = 1;
            create_color_target(*target.resolved,format);
            scene_samples = saved_samples;
        }
	}

	void create_scene(nri::Format format)
	{
		create_color_target(scene, format);
		
		make_texture(depth, render_width, render_height, nri::Format::D24_UNORM_S8_UINT,
			nri::TextureUsageBits::DEPTH_STENCIL_ATTACHMENT, nri::TextureView::DEPTH_STENCIL_ATTACHMENT, 1, scene_samples);
	}

	void select_guest_target(const Nv2aSurface *surface, const Nv2aRenderState *state)
	{
		Texture *color = surface ? &color_targets[surface->color_va] : &scene;
		Texture *z = state ? &depth_targets[state->zeta_va] : &depth;
		if (active_color != color || active_depth != z)
			end_rendering();
		active_color = color;
		active_depth = z;
		unsigned clear_flags = 0;
		if (!color->object)
		{
			create_color_target(*color, core.GetTextureDesc(*scene.object).format);
			clear_flags |= 0xF0;
			std::fprintf(stderr, "[NRI target] color=%08X guest=%ux%u\n", surface->color_va, surface->width, surface->height);
		}
		if (!z->object)
		{
			make_texture(*z, render_width, render_height, nri::Format::D24_UNORM_S8_UINT,
				nri::TextureUsageBits::DEPTH_STENCIL_ATTACHMENT, nri::TextureView::DEPTH_STENCIL_ATTACHMENT, 1, scene_samples);
			clear_flags |= 3;
			std::fprintf(stderr, "[NRI target] depth=%08X\n", state->zeta_va);
		}
		if (clear_flags)
			clear(clear_flags, 0xFF000000, 0xFFFFFF00);
	}

	void create_output()
	{
		nri::SwapChainDesc sd = {};
		sd.window.windows.hwnd = window;
		sd.queue = queue;
		sd.width = (nri::Dim_t)width;
		sd.height = (nri::Dim_t)height;
		sd.textureNum = 2;
		sd.format = nri::SwapChainFormat::BT709_G22_8BIT;
		sd.scaling = nri::Scaling::STRETCH;
		
		// Resource lifetime slots are not a desired display latency. Do not let
		// scene transitions enqueue two stale visual frames behind live audio.
		sd.queuedFrameNum = 1;
		check(presentation.CreateSwapChain(*device, sd, swapchain), "Create swapchain");
		
		unsigned count = 0;
		auto images = presentation.GetSwapChainTextures(*swapchain, count);
		if (!count)
			throw std::runtime_error("NRI swapchain has no images");
		
		outputs.resize(count);
		for (unsigned i = 0; i < count; ++i)
		{
			outputs[i].object = images[i]; // owned by swapchain
            nri::FenceDesc semaphore = {};
            semaphore.initialValue = nri::SWAPCHAIN_SEMAPHORE;
            check(core.CreateFence(*device, semaphore, outputs[i].present_ready), "Create image release semaphore");
			
			nri::TextureViewDesc vd = {};
			vd.texture = images[i];
			vd.type = nri::TextureView::COLOR_ATTACHMENT;
			vd.mipNum = vd.layerNum = vd.sliceNum = 1;
			check(core.CreateTextureView(vd, outputs[i].view), "Create swapchain view");
			
			outputs[i].state = {}; // Fresh Vulkan images begin UNDEFINED until first acquire/present.
		}
		
		nri::Format format = core.GetTextureDesc(*images[0]).format;
		if (!scene.object)
			create_scene(format);
		
		if (!layout)
			create_pipelines(format);
		
	}

	void destroy_output()
	{

		for (auto &output : outputs) {
			core.DestroyDescriptor(output.view);
			core.DestroyFence(output.present_ready);
		}
		
		outputs.clear();
		
		if (swapchain)
			presentation.DestroySwapChain(swapchain);
		
		swapchain = nullptr;
	}

	void cleanup()
	{
		if (device && core.DeviceWaitIdle)
			core.DeviceWaitIdle(device);
		
		if (device && core.DestroyTexture)
		{
			for (auto &entry : textures)
				destroy(entry.image);
			
			destroy(smaa_edges); destroy(smaa_weights); destroy(smaa_area); destroy(smaa_search);
            destroy(aa_image);
			destroy(movie);
			destroy(scene);
			destroy(depth);
			for (auto &target : color_targets)
				destroy(target.second);
			for (auto &target : depth_targets)
				destroy(target.second);
			color_targets.clear();
			depth_targets.clear();
			active_color = &scene;
			active_depth = &depth;
			drawn_color = presented_color = nullptr;
			for (auto &f : frames)
			{
				for (auto *commands : f.chunks)
					core.DestroyCommandBuffer(commands);
				
				core.DestroyDescriptorPool(f.smaa_descriptors);
                core.DestroyCommandAllocator(f.allocator);
				core.DestroyFence(f.image_acquired);
				for (auto* pool : f.descriptor_pools) core.DestroyDescriptorPool(pool);
				
				for (auto &arena : f.vertices)
					core.DestroyBuffer(arena.buffer);
				
				for (auto &arena : f.uploads)
					core.DestroyBuffer(arena.buffer);
				
				for (auto &texture : f.retired)
					destroy(texture);
			}
			
			destroy_output();
			for (auto &by_samples : pipelines)
            for (auto &by_texture : by_samples)
				for (auto &by_depth : by_texture)
					for (auto pipeline : by_depth)
						core.DestroyPipeline(pipeline);
					
			for (unsigned i=1;i<4;++i) core.DestroyPipeline(copy_pipelines[i]);
            core.DestroyPipeline(present_pipeline);
			core.DestroyPipeline(fxaa_pipeline);
			core.DestroyPipeline(ssaa_pipeline);
            for (auto* p : smaa_pipelines) core.DestroyPipeline(p);
            core.DestroyPipelineLayout(smaa_layout);
            core.DestroyDescriptor(smaa_point);
			destroy(aa_image);
			for (auto *sampler : samplers)
				core.DestroyDescriptor(sampler);
			
			core.DestroyPipelineLayout(layout);
			core.DestroyFence(fence);
		}
		
		doa1u::ui::shutdown();

		nri::nriDestroyDevice(device);
		device = nullptr;
		
		if (window)
			DestroyWindow(window);
		
		window = nullptr;
	}

	void initialize()
	{
		QueryPerformanceFrequency(&timing_frequency);
		
		nri::DeviceCreationDesc dc = {};
		const char* requested = std::getenv("RECOMP_NRI_API");
        if (requested && *requested) {
            if (!_stricmp(requested, "d3d11")) active_api = nri::GraphicsAPI::D3D11;
            else if (!_stricmp(requested, "d3d12")) active_api = nri::GraphicsAPI::D3D12;
            else if (!_stricmp(requested, "vulkan") || !_stricmp(requested, "vk")) active_api = nri::GraphicsAPI::VK;
            else throw std::runtime_error("RECOMP_NRI_API must be d3d11, d3d12 or vulkan");
        } else active_api = graphics_backend() == 2 ? nri::GraphicsAPI::VK : graphics_backend() == 1 ? nri::GraphicsAPI::D3D12 : nri::GraphicsAPI::D3D11;
        api_name = active_api == nri::GraphicsAPI::VK ? "Vulkan" : active_api == nri::GraphicsAPI::D3D12 ? "D3D12" : "D3D11";
        dc.graphicsAPI = active_api;
        dc.vkBindingOffsets.sRegister = 1; // t0=0, s0=1; matches build-time DXC flags.
		dc.callbackInterface.MessageCallback = message;
		dc.callbackInterface.AbortExecution = abort_execution;
		dc.enableNRIValidation = option("RECOMP_NRI_VALIDATION");
		dc.enableGraphicsAPIValidation = dc.enableNRIValidation;
		
		check(nri::nriCreateDevice(dc, device), "Create NRI device");
		check(nri::nriGetInterface(*device, NRI_INTERFACE(nri::CoreInterface), &core), "Get core interface");
		check(nri::nriGetInterface(*device, NRI_INTERFACE(nri::SwapChainInterface), &presentation), "Get swapchain interface");
		check(core.GetQueue(*device, nri::QueueType::GRAPHICS, 0, queue), "Get graphics queue");
		

		WNDCLASSW wc = {};
		wc.lpfnWndProc = wndproc;
		wc.hInstance = GetModuleHandleW(nullptr);
		wc.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));
		wc.lpszClassName = L"DOA1UNRI";
		RegisterClassW(&wc);
		
		window =
		    CreateWindowExW(0, wc.lpszClassName, L"DOA1U - NRI / D3D11", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,
		                    CW_USEDEFAULT, 660, 520, nullptr, nullptr, wc.hInstance, nullptr);
							
		if (!window)
			throw std::runtime_error("Create NRI window failed");
		
		std::wstring title = active_api == nri::GraphicsAPI::VK ? L"DOA1U - NRI / Vulkan" : active_api == nri::GraphicsAPI::D3D12 ? L"DOA1U - NRI / D3D12" : L"DOA1U - NRI / D3D11";
		SetWindowTextW(window, title.c_str());
		graphics_window_apply(window);
		RECT client;
		GetClientRect(window, &client);
		width = requested_width = client.right;
		height = requested_height = client.bottom;

		nri::FenceDesc fd = {};
		check(core.CreateFence(*device, fd, fence), "Create frame fence");
		

		for (auto &f : frames)
		{
			fd.initialValue = nri::SWAPCHAIN_SEMAPHORE;
			check(core.CreateFence(*device, fd, f.image_acquired), "Create frame acquire semaphore");
			check(core.CreateCommandAllocator(*queue, f.allocator), "Create frame allocator");
			f.chunks.push_back(nullptr);
			
			check(core.CreateCommandBuffer(*f.allocator, f.chunks.back()), "Create frame commands");
			f.commands = f.chunks.front();
			
			nri::DescriptorPoolDesc pool = {};
			pool.descriptorSetMaxNum = pool.textureMaxNum = pool.samplerMaxNum = 1024;
			check(core.CreateDescriptorPool(*device, pool, f.descriptors), "Create frame descriptor pool");
			f.descriptor_pools.push_back(f.descriptors);
		}
		
		graphics_render_size(&base_width, &base_height);
		active_aa = graphics_aa_method();
		ssaa_samples = graphics_ssaa_samples();
		render_width = base_width * aa_grid_x(active_aa);
		render_height = base_height * aa_grid_y(active_aa, ssaa_samples);
		create_output();
		
		// UI resources are owned by the NRI bridge and included in failure cleanup.
		graphics_ui_renderer_name(active_api == nri::GraphicsAPI::VK ? "NRI / Vulkan" : active_api == nri::GraphicsAPI::D3D12 ? "NRI / DirectX 12" : "NRI / DirectX 11");
		
		doa1u::ui::initialize(window, *device, FrameCount);
		
		ShowWindow(window, SW_SHOW);
		initialized = true;
		
		std::fprintf(stderr, "[NRI] v%d %s renderer initialized, %ux%u; validation %s\n", NRI_VERSION, api_name,
		             width, height, dc.enableNRIValidation ? "on" : "off");
	}

	bool ensure()
	{
		if (fallback || failed)
			return false;
		
		if (!initialized)
		{
			try
			{
				initialize();
			}
			catch (const std::exception &error)
			{
				std::fprintf(stderr, "[NRI] Initialization failed: %s; falling back to legacy D3D11\n", error.what());
				cleanup();
				
				fallback = nv2a_d3d11_backend();
				nv2a_backend_register(fallback);
				
				return false;
			}
		}
		
		if (recording)
			return true;
		
		if (requested_width && requested_height && (output_outdated || width != requested_width || height != requested_height))
		{
			check(core.DeviceWaitIdle(device), "Wait before output resize");
			destroy_output();
			width = requested_width;
			height = requested_height;
			create_output();
			output_outdated = false;
		}
		
		frame = &frames[frame_number % FrameCount];
		if (frame->completed)
			core.Wait(*fence, frame->completed);
		
		for (auto &image : frame->retired)
			destroy(image);
		
		frame->retired.clear();
		for (auto &arena : frame->vertices)
			arena.used = 0;
		
		for (auto &arena : frame->uploads)
			arena.used = 0;
		
		frame->chunk_index = frame->chunk_draws = 0;
		frame->commands = frame->chunks.front();
		
		core.ResetCommandAllocator(*frame->allocator);
		for (auto* pool : frame->descriptor_pools) core.ResetDescriptorPool(*pool);
        if (frame->smaa_descriptors) core.ResetDescriptorPool(*frame->smaa_descriptors);
		frame->descriptor_pool_index = frame->descriptor_sets_used = 0;
		frame->descriptors = frame->descriptor_pools.front();
		check(core.BeginCommandBuffer(*frame->commands, frame->descriptors), "Begin frame commands");
		
		recording = true;
		QueryPerformanceCounter(&chunk_started);
		
		unsigned rw, rh;
		graphics_render_size(&base_width, &base_height);
		active_aa = graphics_aa_method();
		ssaa_samples = graphics_ssaa_samples();
		rw = base_width * aa_grid_x(active_aa);
		rh = base_height * aa_grid_y(active_aa, ssaa_samples);
		if (active_aa == 0) retire(aa_image);
		
		int filtering = graphics_texture_filter();
		active_sampler = filtering == 3 ? 3 : (unsigned)filtering;
		
		if (filtering == 3)
			for (unsigned a = 2; a < graphics_anisotropy(); a *= 2)
				++active_sampler;
			
        unsigned requested_samples = active_aa == 2 ? graphics_msaa_samples() : 1;
        unsigned selected_samples = requested_samples;
        while (selected_samples > 1 && !(supported_msaa & selected_samples)) selected_samples /= 2;
        if (selected_samples != requested_samples && requested_samples != last_msaa_request)
            std::fprintf(stderr,"[NRI] Requested MSAA %ux unsupported; using %ux\n",requested_samples,selected_samples);
        last_msaa_request = requested_samples;
        if (rw != render_width || rh != render_height || selected_samples != scene_samples)
		{
			end_rendering();
			Texture *saved_color = active_color, *saved_depth = active_depth;
			active_color = &scene;
			active_depth = &depth;
			Texture previous = scene;
			scene = {};
			retire(depth);
            scene_samples = selected_samples;
			render_width = rw;
			render_height = rh;
			create_scene(core.GetTextureDesc(*previous.object).format);
			
			// Preserve the paused scene; never replace it with a black frame.
			scale_image(previous, scene, rw, rh, false);
			retire(previous);
			clear(3, 0, 0xFFFFFF00);
			end_rendering();
			for (auto &target : color_targets)
			{
				Texture old = target.second;
				target.second = {};
				create_color_target(target.second, core.GetTextureDesc(*scene.object).format);
				scale_image(old, target.second, rw, rh, false);
				retire(old);
			}
			for (auto &target : depth_targets)
			{
				retire(target.second);
				make_texture(target.second, rw, rh, nri::Format::D24_UNORM_S8_UINT,
					nri::TextureUsageBits::DEPTH_STENCIL_ATTACHMENT, nri::TextureView::DEPTH_STENCIL_ATTACHMENT, 1, scene_samples);
				active_depth = &target.second;
				clear(3, 0, 0xFFFFFF00);
				end_rendering();
			}
			active_color = saved_color;
			active_depth = saved_depth;
			std::fprintf(stderr, "[NRI] Internal resolution %ux%u, samples %u (window %ux%u)\n", rw, rh, scene_samples, width, height);
		}

		if (initial_clear)
		{
			clear(0xF3, 0xFF000000, 0xFFFFFF00);
			initial_clear = false;
		}
		
		return true;
	}

	void draw(const Nv2aSurface *surface, const Nv2aBatch *batch, Texture *movie_image = nullptr)
	{
		if (!batch || batch->count < 3)
			return;
		
		
		Texture *image = movie_image ? movie_image : (batch->texture ? get_texture(batch->texture) : nullptr);
		const Nv2aRenderState *rs = batch->state;
		Constants constants = {};
		constants.surf_w = (float)(surface->width / (surface->aa_sx ? surface->aa_sx : 1));
		constants.surf_h = (float)(surface->height / (surface->aa_sy ? surface->aa_sy : 1));
		constants.tex_w = image ? (float)batch->texture->width : 0;
		constants.tex_h = image ? (float)batch->texture->height : 0;
		constants.alpha_ref = rs && rs->alpha_test_enable ? rs->alpha_ref / 255.0f : -1;
		constants.alpha_func = rs ? (float)rs->alpha_func : 0x207;
		
		if (option("RECOMP_GPU_NOAT"))
			constants.alpha_ref = -1;
		
		constants.showall = option("RECOMP_GPU_SHOWALL") ? 1.0f : 0.0f;
		const char *diffscale = std::getenv("RECOMP_GPU_DIFFSCALE");
		
		constants.diffscale = diffscale && *diffscale ? (float)std::atof(diffscale) : 8.0f;
		constants.layout_x = constants.layout_y = 1;
		
		if (graphics_widescreen())
		{
			constants.layout_x = 0.75f;
			if (!movie_image && batch->presentation == NV2A_PRESENTATION_BACKGROUND)
			{
				constants.layout_x = 1;
				constants.layout_y = 4.0f / 3.0f;
			}
			else if (!movie_image && batch->presentation == NV2A_PRESENTATION_WORLD && !batch->screen_space)
				constants.layout_x = 1;
		}
		
		unsigned z = guest_depth_mode(rs);
		
		if (option("RECOMP_GPU_SHOWALL") || option("RECOMP_GPU_NODEPTH"))
			z = 0;
		
		unsigned blend = rs && rs->blend_enable ? 1 : 0;
		Upload vertices =
		    upload(frame->vertices, batch->vertices, (uint64_t)batch->count * sizeof(Nv2aVertex), 4, nri::BufferUsageBits::VERTEX);
			
		begin_rendering();
		core.CmdSetPipelineLayout(*frame->commands, nri::BindPoint::GRAPHICS, *layout);
		core.CmdSetPipeline(*frame->commands, *pipelines[sample_index(scene_samples)][image ? 1 : 0][z][blend]);
		
		nri::SetRootConstantsDesc root = {};
		root.data = &constants;
		root.size = sizeof(constants);
		core.CmdSetRootConstants(*frame->commands, root);
		
		if (image)
			bind_image(image->view, movie_image ? 1 : active_sampler);

		nri::VertexBufferDesc vb = {vertices.buffer, vertices.offset, sizeof(Nv2aVertex)};
		core.CmdSetVertexBuffers(*frame->commands, 0, &vb, 1);
		nri::Viewport viewport = {0, 0, (float)base_width, (float)base_height, 0, 1};
		float aspect = graphics_widescreen() ? 16.0f / 9.0f : 4.0f / 3.0f;
		
		if (viewport.width / viewport.height > aspect)
		{
			viewport.width = viewport.height * aspect;
			viewport.x = (base_width - viewport.width) * 0.5f;
		}
		else
		{
			viewport.height = viewport.width / aspect;
			viewport.y = (base_height - viewport.height) * 0.5f;
		}
		
		viewport.x *= aa_grid_x(active_aa);
		viewport.width *= aa_grid_x(active_aa);
		viewport.y *= aa_grid_y(active_aa, ssaa_samples);
		viewport.height *= aa_grid_y(active_aa, ssaa_samples);
		core.CmdSetViewports(*frame->commands, &viewport, 1);
		nri::Rect scissor = {0, 0, (nri::Dim_t)render_width, (nri::Dim_t)render_height};
		
		core.CmdSetScissors(*frame->commands, &scissor, 1);
		nri::DrawDesc command = {batch->count, 1, 0, 0};
		
		core.CmdDraw(*frame->commands, command);
		flush_draw_chunk();
	}

	void movie_overlay()
	{
		unsigned w = 0, h = 0;
		uint64_t serial = 0;
		float rect[4];
		
		// Keep the mailbox lock short; never leave it locked when an allocation throws.
		const uint8_t *pixels = fmv_frame_acquire(&w, &h, &serial, rect);
		std::vector<uint8_t> copy;
		
		try
		{
			if (pixels && (!movie.object || movie_serial != serial || movie_width != w || movie_height != h))
				copy.assign(pixels, pixels + (size_t)w * h * 4);
		}
		catch (...)
		{
			fmv_frame_release();
			throw;
		}
		
		bool active = pixels != nullptr;
		fmv_frame_release();
		
		if (!active)
		{
			retire(movie);
			movie_serial = 0;
			return;
		}
		
		if (movie.object && (movie_width != w || movie_height != h))
			retire(movie);
		
		if (!movie.object)
		{
			make_texture(movie, w, h, nri::Format::BGRA8_UNORM, nri::TextureUsageBits::SHADER_RESOURCE, nri::TextureView::TEXTURE);
			movie_width = w;
			movie_height = h;
		}
		
		if (!copy.empty())
		{
			upload_texture(movie, copy.data(), w, h);
			movie_serial = serial;
		}
		
		float left = rect[0] * render_width / 720.0f, top = rect[1] * render_height / 480.0f;
		float right = rect[2] * render_width / 720.0f, bottom = rect[3] * render_height / 480.0f;
		clear(0xF0, 0xFF000000, 0);
		
		Nv2aVertex quad[6] = 
		{
			{left, top, 0, 1, 0xFFFFFFFF, 0, 0},
		    {right, top, 0, 1, 0xFFFFFFFF, (float)w, 0},
		    {left, bottom, 0, 1, 0xFFFFFFFF, 0, (float)h},
		    {left, bottom, 0, 1, 0xFFFFFFFF, 0, (float)h},
		    {right, top, 0, 1, 0xFFFFFFFF, (float)w, 0},
		    {right, bottom, 0, 1, 0xFFFFFFFF, (float)w, (float)h}
		};
		
		Nv2aTexture tex = {};
		tex.width = w;
		tex.height = h;
		Nv2aSurface surface = {};
		surface.width = render_width;
		surface.height = render_height;
		Nv2aRenderState state = {};
		Nv2aBatch batch = {quad, 6, &tex, &state};
		
		draw(&surface, &batch, &movie);
	}

	void pace_frame()
	{
		static double fps = -1;
		static LARGE_INTEGER frequency, next;
		static bool armed;
		static HANDLE timer;
		
		if (fps < 0)
		{
			const char *value = std::getenv("RECOMP_GPU_FPS");
			fps = value ? std::atof(value) : 60;
			
			if (fps > 0)
			{
				timeBeginPeriod(1);
				QueryPerformanceFrequency(&frequency);
				timer = CreateWaitableTimerExW(nullptr, nullptr, 0x2, TIMER_ALL_ACCESS);
				
				if (!timer)
					timer = CreateWaitableTimerW(nullptr, FALSE, nullptr);
			}
		}
		
		if (fps <= 0)
			return;
		
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		if (!armed)
		{
			next = now;
			armed = true;
		}
		
		next.QuadPart += (LONGLONG)(frequency.QuadPart / fps);
		if (next.QuadPart <= now.QuadPart)
		{
			next = now;
			return;
		}
		
		for (;;)
		{
			QueryPerformanceCounter(&now);
			LONGLONG remaining = next.QuadPart - now.QuadPart;
			if (remaining <= 0)
				break;
			
			LARGE_INTEGER due;
			due.QuadPart = -(LONGLONG)((double)remaining * 10000000.0 / frequency.QuadPart);
			if (!due.QuadPart)
				break;
			
			if (timer && SetWaitableTimer(timer, &due, 0, nullptr, nullptr, FALSE))
				WaitForSingleObject(timer, INFINITE);
			else
				Sleep(1);
		}
	}

	void report_timing()
	{
		static LARGE_INTEGER last = {};
		static uint64_t last_frame, last_chunks;
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		if (!last.QuadPart)
		{
			last = now;
			last_frame = frame_number;
			last_chunks = submitted_chunks;
			return;
		}
		double elapsed = milliseconds(last, now);
		if (elapsed < 5000.0)
			return;
		
		std::fprintf(stderr, "[NRI timing] %.2f fps; %llu frames; %llu chunks; submit %.2f ms total / %.2f ms peak; present queue=1\n",
			(frame_number - last_frame) * 1000.0 / elapsed,
			(unsigned long long)(frame_number - last_frame),
			(unsigned long long)(submitted_chunks - last_chunks), submit_total_ms, submit_peak_ms);
			
		last = now;
		last_frame = frame_number;
		last_chunks = submitted_chunks;
		submit_total_ms = submit_peak_ms = 0;
	}

	void flip()
	{
		end_rendering();
		// Match the executor: the largest surface actually DRAWN since the
		// last flip wins. A clear of the next backbuffer must not select it.
		if (drawn_color)
			presented_color = drawn_color;
		active_color = presented_color ? presented_color : &scene;
		movie_overlay();
		end_rendering();
		unsigned index = 0;
		auto acquired = presentation.AcquireNextTexture(*swapchain, *frame->image_acquired, index);
        if (acquired == nri::Result::OUT_OF_DATE) {
            // No image was acquired. Finish ordered offscreen work before replacing
            // the swapchain, then continue in a new command buffer in this frame.
            submit_commands();
            check(core.DeviceWaitIdle(device), "Wait before outdated swapchain recovery");
            destroy_output();
            width = requested_width; height = requested_height;
            create_output();
            output_outdated = false;
            continue_commands();
            acquired = presentation.AcquireNextTexture(*swapchain, *frame->image_acquired, index);
        }
        check(acquired, "Acquire swapchain image");
		
		Texture &output = outputs.at(index);
		Texture *image = &resolve_image(*active_color);
		if (active_aa == 1 || active_aa == 3 || active_aa == 4) {
			if (aa_image.object) {
				const auto &desc = core.GetTextureDesc(*aa_image.object);
				if (desc.width != base_width || desc.height != base_height) retire(aa_image);
			}
			if (!aa_image.object) {
				make_texture(aa_image, base_width, base_height, core.GetTextureDesc(*image->object).format,
					nri::TextureUsageBits::COLOR_ATTACHMENT | nri::TextureUsageBits::SHADER_RESOURCE,
					nri::TextureView::COLOR_ATTACHMENT);
				nri::TextureViewDesc vd = {};
				vd.texture = aa_image.object; vd.type = nri::TextureView::TEXTURE;
				vd.mipNum = vd.layerNum = vd.sliceNum = 1;
				check(core.CreateTextureView(vd, aa_image.sample_view), "Create AA image view");
			}
			Constants parameters = {};
			parameters.surf_w = 1.0f / render_width;
			parameters.surf_h = 1.0f / render_height;
			parameters.tex_w = (float)aa_grid_x(active_aa);
			parameters.tex_h = (float)aa_grid_y(active_aa, ssaa_samples);
			if (active_aa == 4) smaa_image(*image,aa_image);
            else scale_image(*image, aa_image, base_width, base_height, false,
				active_aa == 3 ? fxaa_pipeline : ssaa_pipeline, &parameters);
			image = &aa_image;
		}
		scale_image(*image, output, width, height, true);

        // Overlay commands use the same NRI queue on every API, after AA and
        // scene presentation. They never modify persistent guest targets.
        transition(output, nri::AccessBits::COLOR_ATTACHMENT, nri::Layout::COLOR_ATTACHMENT,
                   nri::StageBits::COLOR_ATTACHMENT);
        doa1u::ui::prepare(*frame->commands);
        nri::AttachmentDesc ui_color = {};
        ui_color.descriptor = output.view;
        nri::RenderingDesc ui_rendering = {};
        ui_rendering.colors = &ui_color;
        ui_rendering.colorNum = 1;
        core.CmdBeginRendering(*frame->commands, ui_rendering);
        doa1u::ui::draw(*frame->commands, width, height, core.GetTextureDesc(*output.object).format);
        core.CmdEndRendering(*frame->commands);
        transition(output, nri::AccessBits::NONE, nri::Layout::PRESENT, nri::StageBits::NONE);
        submit_commands(frame->image_acquired, output.present_ready);
        recording = false;
        doa1u::ui::end_frame();

		rdoc_maybe_trigger(frame_number);

        // Final submission includes UI, acquire wait, release signal and timeline.
        frame->completed = frame_number + 1;
        auto present_result = presentation.QueuePresent(*swapchain, *output.present_ready, frame_number + 1);
        if (present_result == nri::Result::OUT_OF_DATE) output_outdated = true;
        else check(present_result, "Present frame");

		output.state = {nri::AccessBits::NONE, nri::Layout::PRESENT, nri::StageBits::NONE};
		
		++frame_number;
		drawn_color = nullptr;
		drawn_area = 0;
		report_timing();
		
		pump();
		pace_frame();
	}

	void runtime_error(const std::exception &error)
	{
		if (!failed)
			std::fprintf(
			    stderr,
			    "[NRI] Renderer stopped: %s. Restart with RECOMP_RENDERER=legacy-d3d11 for fallback.\n",
			    error.what());
				
		failed = true;
	}

	void backend_clear(const Nv2aSurface *surface, const Nv2aRenderState *state, uint32_t flags, uint32_t argb, uint32_t zs)
	{
		try
		{
			if (ensure())
			{
				select_guest_target(surface, state);
				clear(flags, argb, zs);
			}
			else if (fallback)
				fallback->clear(surface, state, flags, argb, zs);
		}
		catch (const std::exception &error)
		{
			runtime_error(error);
		}
	}

	void backend_draw(const Nv2aSurface *surface, const Nv2aBatch *batch)
	{
		try
		{
			if (ensure())
			{
				if (batch && batch->count >= 3)
				{
					select_guest_target(surface, batch->state);
					uint64_t area = (uint64_t)surface->width * surface->height;
					if (!drawn_color || area >= drawn_area)
					{
						drawn_color = active_color;
						drawn_area = area;
					}
				}
				draw(surface, batch);
			}
			else if (fallback)
				fallback->draw(surface, batch);
		}
		catch (const std::exception &error)
		{
			runtime_error(error);
		}
	}

	void backend_flip()
	{
		try
		{
			if (ensure())
				flip();
			else if (fallback)
				fallback->flip();
			else
			{
				pump();
				Sleep(16);
			}
		}
		catch (const std::exception &error)
		{
			runtime_error(error);
			pump();
		}
	}
}

extern "C" const Nv2aBackend *nv2a_nri_backend(void)
{
	static const Nv2aBackend backend = {backend_clear, backend_draw, backend_flip};
	return &backend;
}
