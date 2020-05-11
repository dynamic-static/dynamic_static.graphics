
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
#include <memory>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
class ManagedAccelerationStructureKHR
    : public detail::ManagedHandle<VkAccelerationStructureKHR>
{
public:
    ManagedAccelerationStructureKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    ManagedAccelerationStructureKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~ManagedAccelerationStructureKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkAccelerationStructureCreateInfoKHR>& get_acceleration_structure_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkAccelerationStructureCreateInfoKHR> mAccelerationStructureCreateInfoKHR { };
    #endif // VK_ENABLE_BETA_EXTENSIONS
    VkAllocationCallbacks mAllocationCallbacks { };
};
#endif // VK_ENABLE_BETA_EXTENSIONS

class ManagedAccelerationStructureNV
    : public detail::ManagedHandle<VkAccelerationStructureNV>
{
public:
    ManagedAccelerationStructureNV() = default;
    ManagedAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedAccelerationStructureNV() override;
    VkObjectType get_object_type() const override final;
    const Managed<VkAccelerationStructureCreateInfoNV>& get_acceleration_structure_create_info_nv() const;
    void reset() override final;
protected:
    Managed<VkAccelerationStructureCreateInfoNV> mAccelerationStructureCreateInfoNV { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedBuffer
    : public detail::ManagedHandle<VkBuffer>
{
public:
    ManagedBuffer() = default;
    ManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedBuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkBufferCreateInfo>& get_buffer_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkBufferCreateInfo> mBufferCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedBufferView
    : public detail::ManagedHandle<VkBufferView>
{
public:
    ManagedBufferView() = default;
    ManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedBufferView() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkBufferViewCreateInfo>& get_buffer_view_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkBufferViewCreateInfo> mBufferViewCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedCommandBuffer
    : public detail::ManagedHandle<VkCommandBuffer>
{
public:
    ManagedCommandBuffer() = default;
    ManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo);
    virtual ~ManagedCommandBuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkCommandPool>>& get_command_pool() const;
    const Managed<VkCommandBufferAllocateInfo>& get_command_buffer_allocate_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkCommandPool>> mCommandPool { };
    Managed<VkCommandBufferAllocateInfo> mCommandBufferAllocateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedCommandPool
    : public detail::ManagedHandle<VkCommandPool>
{
public:
    ManagedCommandPool() = default;
    ManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedCommandPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkCommandPoolCreateInfo>& get_command_pool_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkCommandPoolCreateInfo> mCommandPoolCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDebugReportCallbackEXT
    : public detail::ManagedHandle<VkDebugReportCallbackEXT>
{
public:
    ManagedDebugReportCallbackEXT() = default;
    ManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDebugReportCallbackEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    const Managed<VkDebugReportCallbackCreateInfoEXT>& get_debug_report_callback_create_info_ext() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    Managed<VkDebugReportCallbackCreateInfoEXT> mDebugReportCallbackCreateInfoEXT { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDebugUtilsMessengerEXT
    : public detail::ManagedHandle<VkDebugUtilsMessengerEXT>
{
public:
    ManagedDebugUtilsMessengerEXT() = default;
    ManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDebugUtilsMessengerEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    const Managed<VkDebugUtilsMessengerCreateInfoEXT>& get_debug_utils_messenger_create_info_ext() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    Managed<VkDebugUtilsMessengerCreateInfoEXT> mDebugUtilsMessengerCreateInfoEXT { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
class ManagedDeferredOperationKHR
    : public detail::ManagedHandle<VkDeferredOperationKHR>
{
public:
    ManagedDeferredOperationKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    ManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~ManagedDeferredOperationKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocationCallbacks { };
};
#endif // VK_ENABLE_BETA_EXTENSIONS

class ManagedDescriptorPool
    : public detail::ManagedHandle<VkDescriptorPool>
{
public:
    ManagedDescriptorPool() = default;
    ManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDescriptorPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorPoolCreateInfo>& get_descriptor_pool_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorPoolCreateInfo> mDescriptorPoolCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDescriptorSet
    : public detail::ManagedHandle<VkDescriptorSet>
{
public:
    ManagedDescriptorSet() = default;
    ManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo);
    virtual ~ManagedDescriptorSet() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDescriptorPool>>& get_descriptor_pool() const;
    const Managed<VkDescriptorSetAllocateInfo>& get_descriptor_set_allocate_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDescriptorPool>> mDescriptorPool { };
    Managed<VkDescriptorSetAllocateInfo> mDescriptorSetAllocateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDescriptorSetLayout
    : public detail::ManagedHandle<VkDescriptorSetLayout>
{
public:
    ManagedDescriptorSetLayout() = default;
    ManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDescriptorSetLayout() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorSetLayoutCreateInfo>& get_descriptor_set_layout_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorSetLayoutCreateInfo> mDescriptorSetLayoutCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDescriptorUpdateTemplate
    : public detail::ManagedHandle<VkDescriptorUpdateTemplate>
{
public:
    ManagedDescriptorUpdateTemplate() = default;
    ManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDescriptorUpdateTemplate() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorUpdateTemplateCreateInfo>& get_descriptor_update_template_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorUpdateTemplateCreateInfo> mDescriptorUpdateTemplateCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDescriptorUpdateTemplateKHR
    : public detail::ManagedHandle<VkDescriptorUpdateTemplateKHR>
{
public:
    ManagedDescriptorUpdateTemplateKHR() = default;
    virtual ~ManagedDescriptorUpdateTemplateKHR() override;
    VkObjectType get_object_type() const override final;
    void reset() override final;
protected:
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDevice
    : public detail::ManagedHandle<VkDevice>
{
public:
    ManagedDevice() = default;
    ManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDevice() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    const Managed<VkDeviceCreateInfo>& get_device_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkPhysicalDevice>> mPhysicalDevice { };
    Managed<VkDeviceCreateInfo> mDeviceCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDeviceMemory
    : public detail::ManagedHandle<VkDeviceMemory>
{
public:
    ManagedDeviceMemory() = default;
    ManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDeviceMemory() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkMemoryAllocateInfo>& get_memory_allocate_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkMemoryAllocateInfo> mMemoryAllocateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDisplayKHR
    : public detail::ManagedHandle<VkDisplayKHR>
{
public:
    ManagedDisplayKHR() = default;
    virtual ~ManagedDisplayKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkPhysicalDevice>> mPhysicalDevice { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedDisplayModeKHR
    : public detail::ManagedHandle<VkDisplayModeKHR>
{
public:
    ManagedDisplayModeKHR() = default;
    ManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedDisplayModeKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDisplayKHR>>& get_display_khr() const;
    const Managed<VkDisplayModeCreateInfoKHR>& get_display_mode_create_info_khr() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDisplayKHR>> mDisplayKHR { };
    Managed<VkDisplayModeCreateInfoKHR> mDisplayModeCreateInfoKHR { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedEvent
    : public detail::ManagedHandle<VkEvent>
{
public:
    ManagedEvent() = default;
    ManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedEvent() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkEventCreateInfo>& get_event_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkEventCreateInfo> mEventCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedFence
    : public detail::ManagedHandle<VkFence>
{
public:
    ManagedFence() = default;
    ManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedFence() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkFenceCreateInfo>& get_fence_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkFenceCreateInfo> mFenceCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedFramebuffer
    : public detail::ManagedHandle<VkFramebuffer>
{
public:
    ManagedFramebuffer() = default;
    ManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedFramebuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkFramebufferCreateInfo>& get_framebuffer_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkFramebufferCreateInfo> mFramebufferCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedImage
    : public detail::ManagedHandle<VkImage>
{
public:
    ManagedImage() = default;
    ManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedImage() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkImageCreateInfo>& get_image_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkImageCreateInfo> mImageCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedImageView
    : public detail::ManagedHandle<VkImageView>
{
public:
    ManagedImageView() = default;
    ManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedImageView() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkImageViewCreateInfo>& get_image_view_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkImageViewCreateInfo> mImageViewCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedIndirectCommandsLayoutNV
    : public detail::ManagedHandle<VkIndirectCommandsLayoutNV>
{
public:
    ManagedIndirectCommandsLayoutNV() = default;
    ManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedIndirectCommandsLayoutNV() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkIndirectCommandsLayoutCreateInfoNV>& get_indirect_commands_layout_create_info_nv() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkIndirectCommandsLayoutCreateInfoNV> mIndirectCommandsLayoutCreateInfoNV { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedInstance
    : public detail::ManagedHandle<VkInstance>
{
public:
    ManagedInstance() = default;
    ManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedInstance() override;
    VkObjectType get_object_type() const override final;
    const Managed<VkInstanceCreateInfo>& get_instance_create_info() const;
    void reset() override final;
protected:
    Managed<VkInstanceCreateInfo> mInstanceCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedPerformanceConfigurationINTEL
    : public detail::ManagedHandle<VkPerformanceConfigurationINTEL>
{
public:
    ManagedPerformanceConfigurationINTEL() = default;
    virtual ~ManagedPerformanceConfigurationINTEL() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedPhysicalDevice
    : public detail::ManagedHandle<VkPhysicalDevice>
{
public:
    ManagedPhysicalDevice() = default;
    virtual ~ManagedPhysicalDevice() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedPipeline
    : public detail::ManagedHandle<VkPipeline>
{
public:
    ManagedPipeline() = default;
    ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator);
    ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator);
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedPipeline() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkComputePipelineCreateInfo>& get_compute_pipeline_create_info() const;
    const Managed<VkGraphicsPipelineCreateInfo>& get_graphics_pipeline_create_info() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkRayTracingPipelineCreateInfoKHR>& get_ray_tracing_pipeline_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkRayTracingPipelineCreateInfoNV>& get_ray_tracing_pipeline_create_info_nv() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkComputePipelineCreateInfo> mComputePipelineCreateInfo { };
    Managed<VkGraphicsPipelineCreateInfo> mGraphicsPipelineCreateInfo { };
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoKHR> mRayTracingPipelineCreateInfoKHR { };
    #endif // VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoNV> mRayTracingPipelineCreateInfoNV { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedPipelineCache
    : public detail::ManagedHandle<VkPipelineCache>
{
public:
    ManagedPipelineCache() = default;
    ManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedPipelineCache() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkPipelineCacheCreateInfo>& get_pipeline_cache_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkPipelineCacheCreateInfo> mPipelineCacheCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedPipelineLayout
    : public detail::ManagedHandle<VkPipelineLayout>
{
public:
    ManagedPipelineLayout() = default;
    ManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedPipelineLayout() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkPipelineLayoutCreateInfo>& get_pipeline_layout_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkPipelineLayoutCreateInfo> mPipelineLayoutCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedQueryPool
    : public detail::ManagedHandle<VkQueryPool>
{
public:
    ManagedQueryPool() = default;
    ManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedQueryPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkQueryPoolCreateInfo>& get_query_pool_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkQueryPoolCreateInfo> mQueryPoolCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedQueue
    : public detail::ManagedHandle<VkQueue>
{
public:
    ManagedQueue() = default;
    virtual ~ManagedQueue() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedRenderPass
    : public detail::ManagedHandle<VkRenderPass>
{
public:
    ManagedRenderPass() = default;
    ManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    ManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedRenderPass() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkRenderPassCreateInfo>& get_render_pass_create_info() const;
    const Managed<VkRenderPassCreateInfo2>& get_render_pass_create_info2() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkRenderPassCreateInfo> mRenderPassCreateInfo { };
    Managed<VkRenderPassCreateInfo2> mRenderPassCreateInfo2 { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSampler
    : public detail::ManagedHandle<VkSampler>
{
public:
    ManagedSampler() = default;
    ManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedSampler() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSamplerCreateInfo>& get_sampler_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSamplerCreateInfo> mSamplerCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSamplerYcbcrConversion
    : public detail::ManagedHandle<VkSamplerYcbcrConversion>
{
public:
    ManagedSamplerYcbcrConversion() = default;
    ManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedSamplerYcbcrConversion() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSamplerYcbcrConversionCreateInfo>& get_sampler_ycbcr_conversion_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSamplerYcbcrConversionCreateInfo> mSamplerYcbcrConversionCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSamplerYcbcrConversionKHR
    : public detail::ManagedHandle<VkSamplerYcbcrConversionKHR>
{
public:
    ManagedSamplerYcbcrConversionKHR() = default;
    virtual ~ManagedSamplerYcbcrConversionKHR() override;
    VkObjectType get_object_type() const override final;
    void reset() override final;
protected:
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSemaphore
    : public detail::ManagedHandle<VkSemaphore>
{
public:
    ManagedSemaphore() = default;
    ManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedSemaphore() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSemaphoreCreateInfo>& get_semaphore_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSemaphoreCreateInfo> mSemaphoreCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedShaderModule
    : public detail::ManagedHandle<VkShaderModule>
{
public:
    ManagedShaderModule() = default;
    ManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedShaderModule() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkShaderModuleCreateInfo>& get_shader_module_create_info() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkShaderModuleCreateInfo> mShaderModuleCreateInfo { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSurfaceKHR
    : public detail::ManagedHandle<VkSurfaceKHR>
{
public:
    ManagedSurfaceKHR() = default;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #ifdef VK_USE_PLATFORM_IOS_MVK
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    #endif // VK_USE_PLATFORM_XLIB_KHR
    virtual ~ManagedSurfaceKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    const Managed<VkAndroidSurfaceCreateInfoKHR>& get_android_surface_create_info_khr() const;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    const Managed<VkDisplaySurfaceCreateInfoKHR>& get_display_surface_create_info_khr() const;
    const Managed<VkHeadlessSurfaceCreateInfoEXT>& get_headless_surface_create_info_ext() const;
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
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    Managed<VkAndroidSurfaceCreateInfoKHR> mAndroidSurfaceCreateInfoKHR { };
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    Managed<VkDisplaySurfaceCreateInfoKHR> mDisplaySurfaceCreateInfoKHR { };
    Managed<VkHeadlessSurfaceCreateInfoEXT> mHeadlessSurfaceCreateInfoEXT { };
    #ifdef VK_USE_PLATFORM_IOS_MVK
    Managed<VkIOSSurfaceCreateInfoMVK> mIOSSurfaceCreateInfoMVK { };
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    Managed<VkImagePipeSurfaceCreateInfoFUCHSIA> mImagePipeSurfaceCreateInfoFUCHSIA { };
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    Managed<VkMacOSSurfaceCreateInfoMVK> mMacOSSurfaceCreateInfoMVK { };
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    Managed<VkMetalSurfaceCreateInfoEXT> mMetalSurfaceCreateInfoEXT { };
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    Managed<VkStreamDescriptorSurfaceCreateInfoGGP> mStreamDescriptorSurfaceCreateInfoGGP { };
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    Managed<VkViSurfaceCreateInfoNN> mViSurfaceCreateInfoNN { };
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    Managed<VkWaylandSurfaceCreateInfoKHR> mWaylandSurfaceCreateInfoKHR { };
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    Managed<VkWin32SurfaceCreateInfoKHR> mWin32SurfaceCreateInfoKHR { };
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    Managed<VkXcbSurfaceCreateInfoKHR> mXcbSurfaceCreateInfoKHR { };
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    Managed<VkXlibSurfaceCreateInfoKHR> mXlibSurfaceCreateInfoKHR { };
    #endif // VK_USE_PLATFORM_XLIB_KHR
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedSwapchainKHR
    : public detail::ManagedHandle<VkSwapchainKHR>
{
public:
    ManagedSwapchainKHR() = default;
    ManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator);
    ManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedSwapchainKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const std::shared_ptr<Managed<VkSurfaceKHR>>& get_surface_khr() const;
    const Managed<VkSwapchainCreateInfoKHR>& get_swapchain_create_info_khr() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    std::shared_ptr<Managed<VkSurfaceKHR>> mSurfaceKHR { };
    Managed<VkSwapchainCreateInfoKHR> mSwapchainCreateInfoKHR { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

class ManagedValidationCacheEXT
    : public detail::ManagedHandle<VkValidationCacheEXT>
{
public:
    ManagedValidationCacheEXT() = default;
    ManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator);
    virtual ~ManagedValidationCacheEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkValidationCacheCreateInfoEXT>& get_validation_cache_create_info_ext() const;
    void reset() override final;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkValidationCacheCreateInfoEXT> mValidationCacheCreateInfoEXT { };
    VkAllocationCallbacks mAllocationCallbacks { };
};

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
