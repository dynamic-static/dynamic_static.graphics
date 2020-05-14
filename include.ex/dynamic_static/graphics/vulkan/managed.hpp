
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/managed.hpp"
#include "dynamic_static/graphics/vulkan/detail/managed-handle.hpp"
#include "dynamic_static/graphics/vulkan/detail/managed-structure.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed-handles.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed-structures.hpp"
#include "dynamic_static/graphics/vulkan/managed-handles/managed-buffer.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace gfx {
namespace vk {

#define DST_GFX_VK_DECLARE_MANAGED_HANDLE(HANDLE_TYPE) \
template <>                                            \
class Managed<Vk##HANDLE_TYPE>                         \
    : public detail::BasicManaged##HANDLE_TYPE         \
{                                                      \
};

// TODO : Generate these so spec changes are automatically picked up...
#ifdef VK_ENABLE_BETA_EXTENSIONS
DST_GFX_VK_DECLARE_MANAGED_HANDLE(AccelerationStructureKHR)
#endif // VK_ENABLE_BETA_EXTENSIONS
#if DST_GFX_VK_SPECIALIZED_MANAGED_HANDLE
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Buffer)
#endif // DST_GFX_VK_SPECIALIZED_MANAGED_HANDLE
DST_GFX_VK_DECLARE_MANAGED_HANDLE(BufferView)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(CommandBuffer)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(CommandPool)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DebugReportCallbackEXT)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DebugUtilsMessengerEXT)
#ifdef VK_ENABLE_BETA_EXTENSIONS
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DeferredOperationKHR)
#endif // VK_ENABLE_BETA_EXTENSIONS
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DescriptorPool)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DescriptorSet)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DescriptorSetLayout)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DescriptorUpdateTemplate)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Device)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DeviceMemory)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DisplayKHR)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(DisplayModeKHR)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Event)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Fence)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Framebuffer)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Image)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(ImageView)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(IndirectCommandsLayoutNV)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Instance)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(PerformanceConfigurationINTEL)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(PhysicalDevice)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Pipeline)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(PipelineCache)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(PipelineLayout)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(QueryPool)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Queue)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(RenderPass)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Sampler)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(SamplerYcbcrConversion)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(Semaphore)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(ShaderModule)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(SurfaceKHR)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(SwapchainKHR)
DST_GFX_VK_DECLARE_MANAGED_HANDLE(ValidationCacheEXT)

} // namespace vk
} // namespace gfx
} // namespace dst
