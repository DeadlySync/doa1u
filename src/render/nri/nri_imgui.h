#pragma once
#include <NRI.h>

namespace doa1u::ui {
void initialize(void* window, nri::Device& device, unsigned queued_frames);
void prepare(nri::CommandBuffer& commands);
void draw(nri::CommandBuffer& commands, unsigned width, unsigned height, nri::Format format);
void end_frame();
void shutdown(); // after DeviceWaitIdle, before device/context destruction
}
