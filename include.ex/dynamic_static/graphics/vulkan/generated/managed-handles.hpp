
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
#include "dynamic_static/graphics/vulkan/generated/managed-structures.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <memory>"

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedAccelerationStructureKHR
    : public detail::BasicManagedHandle<VkAccelerationStructureKHR>
{
public:
    BasicManagedAccelerationStructureKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedAccelerationStructureKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedAccelerationStructureKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkAccelerationStructureCreateInfoKHR>& get_acceleration_structure_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
class BasicManagedBuffer
    : public detail::BasicManagedHandle<VkBuffer>
{
public:
    BasicManagedBuffer() = default;
    #ifdef
    BasicManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedBuffer() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkBufferCreateInfo>& get_buffer_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedBufferView
    : public detail::BasicManagedHandle<VkBufferView>
{
public:
    BasicManagedBufferView() = default;
    #ifdef
    BasicManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedBufferView() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkBufferViewCreateInfo>& get_buffer_view_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedCommandBuffer
    : public detail::BasicManagedHandle<VkCommandBuffer>
{
public:
    BasicManagedCommandBuffer() = default;
    #ifdef
    BasicManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo);
    #endif //
    virtual ~BasicManagedCommandBuffer() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkCommandPool>>& get_command_pool() const;
    #ifdef
    const Managed<VkCommandBufferAllocateInfo>& get_command_buffer_allocate_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedCommandPool
    : public detail::BasicManagedHandle<VkCommandPool>
{
public:
    BasicManagedCommandPool() = default;
    #ifdef
    BasicManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedCommandPool() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkCommandPoolCreateInfo>& get_command_pool_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDebugReportCallbackEXT
    : public detail::BasicManagedHandle<VkDebugReportCallbackEXT>
{
public:
    BasicManagedDebugReportCallbackEXT() = default;
    #ifdef
    BasicManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDebugReportCallbackEXT() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    #ifdef
    const Managed<VkDebugReportCallbackCreateInfoEXT>& get_debug_report_callback_create_info_ext() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDebugUtilsMessengerEXT
    : public detail::BasicManagedHandle<VkDebugUtilsMessengerEXT>
{
public:
    BasicManagedDebugUtilsMessengerEXT() = default;
    #ifdef
    BasicManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDebugUtilsMessengerEXT() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    #ifdef
    const Managed<VkDebugUtilsMessengerCreateInfoEXT>& get_debug_utils_messenger_create_info_ext() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedDeferredOperationKHR
    : public detail::BasicManagedHandle<VkDeferredOperationKHR>
{
public:
    BasicManagedDeferredOperationKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedDeferredOperationKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
class BasicManagedDescriptorPool
    : public detail::BasicManagedHandle<VkDescriptorPool>
{
public:
    BasicManagedDescriptorPool() = default;
    #ifdef
    BasicManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDescriptorPool() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkDescriptorPoolCreateInfo>& get_descriptor_pool_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDescriptorSet
    : public detail::BasicManagedHandle<VkDescriptorSet>
{
public:
    BasicManagedDescriptorSet() = default;
    #ifdef
    BasicManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo);
    #endif //
    virtual ~BasicManagedDescriptorSet() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDescriptorPool>>& get_descriptor_pool() const;
    #ifdef
    const Managed<VkDescriptorSetAllocateInfo>& get_descriptor_set_allocate_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDescriptorSetLayout
    : public detail::BasicManagedHandle<VkDescriptorSetLayout>
{
public:
    BasicManagedDescriptorSetLayout() = default;
    #ifdef
    BasicManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDescriptorSetLayout() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkDescriptorSetLayoutCreateInfo>& get_descriptor_set_layout_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDescriptorUpdateTemplate
    : public detail::BasicManagedHandle<VkDescriptorUpdateTemplate>
{
public:
    BasicManagedDescriptorUpdateTemplate() = default;
    #ifdef
    BasicManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDescriptorUpdateTemplate() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkDescriptorUpdateTemplateCreateInfo>& get_descriptor_update_template_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDevice
    : public detail::BasicManagedHandle<VkDevice>
{
public:
    BasicManagedDevice() = default;
    #ifdef
    BasicManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDevice() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    #ifdef
    const Managed<VkDeviceCreateInfo>& get_device_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDeviceMemory
    : public detail::BasicManagedHandle<VkDeviceMemory>
{
public:
    BasicManagedDeviceMemory() = default;
    #ifdef
    BasicManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDeviceMemory() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkMemoryAllocateInfo>& get_memory_allocate_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDisplayKHR
    : public detail::BasicManagedHandle<VkDisplayKHR>
{
public:
    BasicManagedDisplayKHR() = default;
    virtual ~BasicManagedDisplayKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedDisplayModeKHR
    : public detail::BasicManagedHandle<VkDisplayModeKHR>
{
public:
    BasicManagedDisplayModeKHR() = default;
    #ifdef
    BasicManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedDisplayModeKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDisplayKHR>>& get_display_khr() const;
    #ifdef
    const Managed<VkDisplayModeCreateInfoKHR>& get_display_mode_create_info_khr() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedEvent
    : public detail::BasicManagedHandle<VkEvent>
{
public:
    BasicManagedEvent() = default;
    #ifdef
    BasicManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedEvent() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkEventCreateInfo>& get_event_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedFence
    : public detail::BasicManagedHandle<VkFence>
{
public:
    BasicManagedFence() = default;
    #ifdef
    BasicManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedFence() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkFenceCreateInfo>& get_fence_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedFramebuffer
    : public detail::BasicManagedHandle<VkFramebuffer>
{
public:
    BasicManagedFramebuffer() = default;
    #ifdef
    BasicManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedFramebuffer() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkFramebufferCreateInfo>& get_framebuffer_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedImage
    : public detail::BasicManagedHandle<VkImage>
{
public:
    BasicManagedImage() = default;
    #ifdef
    BasicManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedImage() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkImageCreateInfo>& get_image_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedImageView
    : public detail::BasicManagedHandle<VkImageView>
{
public:
    BasicManagedImageView() = default;
    #ifdef
    BasicManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedImageView() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkImageViewCreateInfo>& get_image_view_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedIndirectCommandsLayoutNV
    : public detail::BasicManagedHandle<VkIndirectCommandsLayoutNV>
{
public:
    BasicManagedIndirectCommandsLayoutNV() = default;
    #ifdef
    BasicManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedIndirectCommandsLayoutNV() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkIndirectCommandsLayoutCreateInfoNV>& get_indirect_commands_layout_create_info_nv() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedInstance
    : public detail::BasicManagedHandle<VkInstance>
{
public:
    BasicManagedInstance() = default;
    #ifdef
    BasicManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedInstance() = 0 override final;
    VkObjectType get_object_type() const override final;
    #ifdef
    const Managed<VkInstanceCreateInfo>& get_instance_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPerformanceConfigurationINTEL
    : public detail::BasicManagedHandle<VkPerformanceConfigurationINTEL>
{
public:
    BasicManagedPerformanceConfigurationINTEL() = default;
    virtual ~BasicManagedPerformanceConfigurationINTEL() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPhysicalDevice
    : public detail::BasicManagedHandle<VkPhysicalDevice>
{
public:
    BasicManagedPhysicalDevice() = default;
    virtual ~BasicManagedPhysicalDevice() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPipeline
    : public detail::BasicManagedHandle<VkPipeline>
{
public:
    BasicManagedPipeline() = default;
    #ifdef
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedPipeline() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkComputePipelineCreateInfo>& get_compute_pipeline_create_info() const;
    #endif //
    #ifdef
    const Managed<VkGraphicsPipelineCreateInfo>& get_graphics_pipeline_create_info() const;
    #endif //
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkRayTracingPipelineCreateInfoKHR>& get_ray_tracing_pipeline_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef
    const Managed<VkRayTracingPipelineCreateInfoNV>& get_ray_tracing_pipeline_create_info_nv() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPipelineCache
    : public detail::BasicManagedHandle<VkPipelineCache>
{
public:
    BasicManagedPipelineCache() = default;
    #ifdef
    BasicManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedPipelineCache() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkPipelineCacheCreateInfo>& get_pipeline_cache_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPipelineLayout
    : public detail::BasicManagedHandle<VkPipelineLayout>
{
public:
    BasicManagedPipelineLayout() = default;
    #ifdef
    BasicManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedPipelineLayout() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkPipelineLayoutCreateInfo>& get_pipeline_layout_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedPrivateDataSlotEXT
    : public detail::BasicManagedHandle<VkPrivateDataSlotEXT>
{
public:
    BasicManagedPrivateDataSlotEXT() = default;
    #ifdef
    BasicManagedPrivateDataSlotEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedPrivateDataSlotEXT() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkPrivateDataSlotCreateInfoEXT>& get_private_data_slot_create_info_ext() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedQueryPool
    : public detail::BasicManagedHandle<VkQueryPool>
{
public:
    BasicManagedQueryPool() = default;
    #ifdef
    BasicManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedQueryPool() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkQueryPoolCreateInfo>& get_query_pool_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedQueue
    : public detail::BasicManagedHandle<VkQueue>
{
public:
    BasicManagedQueue() = default;
    virtual ~BasicManagedQueue() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedRenderPass
    : public detail::BasicManagedHandle<VkRenderPass>
{
public:
    BasicManagedRenderPass() = default;
    #ifdef
    BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef
    BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedRenderPass() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkRenderPassCreateInfo>& get_render_pass_create_info() const;
    #endif //
    #ifdef
    const Managed<VkRenderPassCreateInfo2>& get_render_pass_create_info2() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedSampler
    : public detail::BasicManagedHandle<VkSampler>
{
public:
    BasicManagedSampler() = default;
    #ifdef
    BasicManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedSampler() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkSamplerCreateInfo>& get_sampler_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedSamplerYcbcrConversion
    : public detail::BasicManagedHandle<VkSamplerYcbcrConversion>
{
public:
    BasicManagedSamplerYcbcrConversion() = default;
    #ifdef
    BasicManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedSamplerYcbcrConversion() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkSamplerYcbcrConversionCreateInfo>& get_sampler_ycbcr_conversion_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedSemaphore
    : public detail::BasicManagedHandle<VkSemaphore>
{
public:
    BasicManagedSemaphore() = default;
    #ifdef
    BasicManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedSemaphore() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkSemaphoreCreateInfo>& get_semaphore_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedShaderModule
    : public detail::BasicManagedHandle<VkShaderModule>
{
public:
    BasicManagedShaderModule() = default;
    #ifdef
    BasicManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedShaderModule() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkShaderModuleCreateInfo>& get_shader_module_create_info() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedSurfaceKHR
    : public detail::BasicManagedHandle<VkSurfaceKHR>
{
public:
    BasicManagedSurfaceKHR() = default;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef VK_USE_PLATFORM_IOS_MVK
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_XLIB_KHR
    virtual ~BasicManagedSurfaceKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    const Managed<VkAndroidSurfaceCreateInfoKHR>& get_android_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef
    const Managed<VkDisplaySurfaceCreateInfoKHR>& get_display_surface_create_info_khr() const;
    #endif //
    #ifdef
    const Managed<VkHeadlessSurfaceCreateInfoEXT>& get_headless_surface_create_info_ext() const;
    #endif //
    #ifdef VK_USE_PLATFORM_IOS_MVK
    const Managed<VkIOSSurfaceCreateInfoMVK>& get_ios_surface_create_info_mvk() const;
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& get_image_pipe_surface_create_info_fuchsia() const;
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    const Managed<VkMacOSSurfaceCreateInfoMVK>& get_mac_os_surface_create_info_mvk() const;
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    const Managed<VkMetalSurfaceCreateInfoEXT>& get_metal_surface_create_info_ext() const;
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& get_stream_descriptor_surface_create_info_ggp() const;
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    const Managed<VkViSurfaceCreateInfoNN>& get_vi_surface_create_info_nn() const;
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    const Managed<VkWaylandSurfaceCreateInfoKHR>& get_wayland_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    const Managed<VkWin32SurfaceCreateInfoKHR>& get_win32_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    const Managed<VkXcbSurfaceCreateInfoKHR>& get_xcb_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    const Managed<VkXlibSurfaceCreateInfoKHR>& get_xlib_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_XLIB_KHR
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedSwapchainKHR
    : public detail::BasicManagedHandle<VkSwapchainKHR>
{
public:
    BasicManagedSwapchainKHR() = default;
    #ifdef
    BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    #ifdef
    BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedSwapchainKHR() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const std::shared_ptr<Managed<VkSurfaceKHR>>& get_surface_khr() const;
    #ifdef
    const Managed<VkSwapchainCreateInfoKHR>& get_swapchain_create_info_khr() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

#ifdef
class BasicManagedValidationCacheEXT
    : public detail::BasicManagedHandle<VkValidationCacheEXT>
{
public:
    BasicManagedValidationCacheEXT() = default;
    #ifdef
    BasicManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif //
    virtual ~BasicManagedValidationCacheEXT() = 0 override final;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef
    const Managed<VkValidationCacheCreateInfoEXT>& get_validation_cache_create_info_ext() const;
    #endif //
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0 override final;
};
#endif //

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
