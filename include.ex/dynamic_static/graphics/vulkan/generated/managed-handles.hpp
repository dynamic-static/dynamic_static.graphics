
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
class BasicManagedAccelerationStructureKHR
    : public detail::BasicManagedHandle<VkAccelerationStructureKHR>
{
public:
    BasicManagedAccelerationStructureKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedAccelerationStructureKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedAccelerationStructureKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkAccelerationStructureCreateInfoKHR>& get_acceleration_structure_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkAccelerationStructureCreateInfoKHR> mAccelerationStructureCreateInfoKHR { };
    #endif // VK_ENABLE_BETA_EXTENSIONS
    VkAllocationCallbacks mAllocator { };
};
#endif // VK_ENABLE_BETA_EXTENSIONS

class BasicManagedBuffer
    : public detail::BasicManagedHandle<VkBuffer>
{
public:
    BasicManagedBuffer() = default;
    BasicManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedBuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkBufferCreateInfo>& get_buffer_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkBufferCreateInfo> mBufferCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedBufferView
    : public detail::BasicManagedHandle<VkBufferView>
{
public:
    BasicManagedBufferView() = default;
    BasicManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedBufferView() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkBufferViewCreateInfo>& get_buffer_view_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkBufferViewCreateInfo> mBufferViewCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedCommandBuffer
    : public detail::BasicManagedHandle<VkCommandBuffer>
{
public:
    BasicManagedCommandBuffer() = default;
    BasicManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo);
    virtual ~BasicManagedCommandBuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkCommandPool>>& get_command_pool() const;
    const Managed<VkCommandBufferAllocateInfo>& get_command_buffer_allocate_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkCommandPool>> mCommandPool { };
    Managed<VkCommandBufferAllocateInfo> mCommandBufferAllocateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedCommandPool
    : public detail::BasicManagedHandle<VkCommandPool>
{
public:
    BasicManagedCommandPool() = default;
    BasicManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedCommandPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkCommandPoolCreateInfo>& get_command_pool_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkCommandPoolCreateInfo> mCommandPoolCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDebugReportCallbackEXT
    : public detail::BasicManagedHandle<VkDebugReportCallbackEXT>
{
public:
    BasicManagedDebugReportCallbackEXT() = default;
    BasicManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDebugReportCallbackEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    const Managed<VkDebugReportCallbackCreateInfoEXT>& get_debug_report_callback_create_info_ext() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    Managed<VkDebugReportCallbackCreateInfoEXT> mDebugReportCallbackCreateInfoEXT { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDebugUtilsMessengerEXT
    : public detail::BasicManagedHandle<VkDebugUtilsMessengerEXT>
{
public:
    BasicManagedDebugUtilsMessengerEXT() = default;
    BasicManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDebugUtilsMessengerEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    const Managed<VkDebugUtilsMessengerCreateInfoEXT>& get_debug_utils_messenger_create_info_ext() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    Managed<VkDebugUtilsMessengerCreateInfoEXT> mDebugUtilsMessengerCreateInfoEXT { };
    VkAllocationCallbacks mAllocator { };
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedDeferredOperationKHR
    : public detail::BasicManagedHandle<VkDeferredOperationKHR>
{
public:
    BasicManagedDeferredOperationKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedDeferredOperationKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocator { };
};
#endif // VK_ENABLE_BETA_EXTENSIONS

class BasicManagedDescriptorPool
    : public detail::BasicManagedHandle<VkDescriptorPool>
{
public:
    BasicManagedDescriptorPool() = default;
    BasicManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDescriptorPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorPoolCreateInfo>& get_descriptor_pool_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorPoolCreateInfo> mDescriptorPoolCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDescriptorSet
    : public detail::BasicManagedHandle<VkDescriptorSet>
{
public:
    BasicManagedDescriptorSet() = default;
    BasicManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo);
    virtual ~BasicManagedDescriptorSet() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDescriptorPool>>& get_descriptor_pool() const;
    const Managed<VkDescriptorSetAllocateInfo>& get_descriptor_set_allocate_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDescriptorPool>> mDescriptorPool { };
    Managed<VkDescriptorSetAllocateInfo> mDescriptorSetAllocateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDescriptorSetLayout
    : public detail::BasicManagedHandle<VkDescriptorSetLayout>
{
public:
    BasicManagedDescriptorSetLayout() = default;
    BasicManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDescriptorSetLayout() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorSetLayoutCreateInfo>& get_descriptor_set_layout_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorSetLayoutCreateInfo> mDescriptorSetLayoutCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDescriptorUpdateTemplate
    : public detail::BasicManagedHandle<VkDescriptorUpdateTemplate>
{
public:
    BasicManagedDescriptorUpdateTemplate() = default;
    BasicManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDescriptorUpdateTemplate() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkDescriptorUpdateTemplateCreateInfo>& get_descriptor_update_template_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkDescriptorUpdateTemplateCreateInfo> mDescriptorUpdateTemplateCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDevice
    : public detail::BasicManagedHandle<VkDevice>
{
public:
    BasicManagedDevice() = default;
    BasicManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDevice() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    const Managed<VkDeviceCreateInfo>& get_device_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkPhysicalDevice>> mPhysicalDevice { };
    Managed<VkDeviceCreateInfo> mDeviceCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDeviceMemory
    : public detail::BasicManagedHandle<VkDeviceMemory>
{
public:
    BasicManagedDeviceMemory() = default;
    BasicManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDeviceMemory() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkMemoryAllocateInfo>& get_memory_allocate_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkMemoryAllocateInfo> mMemoryAllocateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDisplayKHR
    : public detail::BasicManagedHandle<VkDisplayKHR>
{
public:
    BasicManagedDisplayKHR() = default;
    virtual ~BasicManagedDisplayKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkPhysicalDevice>>& get_physical_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkPhysicalDevice>> mPhysicalDevice { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedDisplayModeKHR
    : public detail::BasicManagedHandle<VkDisplayModeKHR>
{
public:
    BasicManagedDisplayModeKHR() = default;
    BasicManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedDisplayModeKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDisplayKHR>>& get_display_khr() const;
    const Managed<VkDisplayModeCreateInfoKHR>& get_display_mode_create_info_khr() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDisplayKHR>> mDisplayKHR { };
    Managed<VkDisplayModeCreateInfoKHR> mDisplayModeCreateInfoKHR { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedEvent
    : public detail::BasicManagedHandle<VkEvent>
{
public:
    BasicManagedEvent() = default;
    BasicManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedEvent() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkEventCreateInfo>& get_event_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkEventCreateInfo> mEventCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedFence
    : public detail::BasicManagedHandle<VkFence>
{
public:
    BasicManagedFence() = default;
    BasicManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedFence() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkFenceCreateInfo>& get_fence_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkFenceCreateInfo> mFenceCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedFramebuffer
    : public detail::BasicManagedHandle<VkFramebuffer>
{
public:
    BasicManagedFramebuffer() = default;
    BasicManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedFramebuffer() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkFramebufferCreateInfo>& get_framebuffer_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkFramebufferCreateInfo> mFramebufferCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedImage
    : public detail::BasicManagedHandle<VkImage>
{
public:
    BasicManagedImage() = default;
    BasicManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedImage() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkImageCreateInfo>& get_image_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkImageCreateInfo> mImageCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedImageView
    : public detail::BasicManagedHandle<VkImageView>
{
public:
    BasicManagedImageView() = default;
    BasicManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedImageView() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkImageViewCreateInfo>& get_image_view_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkImageViewCreateInfo> mImageViewCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedIndirectCommandsLayoutNV
    : public detail::BasicManagedHandle<VkIndirectCommandsLayoutNV>
{
public:
    BasicManagedIndirectCommandsLayoutNV() = default;
    BasicManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedIndirectCommandsLayoutNV() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkIndirectCommandsLayoutCreateInfoNV>& get_indirect_commands_layout_create_info_nv() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkIndirectCommandsLayoutCreateInfoNV> mIndirectCommandsLayoutCreateInfoNV { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedInstance
    : public detail::BasicManagedHandle<VkInstance>
{
public:
    BasicManagedInstance() = default;
    BasicManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedInstance() override;
    VkObjectType get_object_type() const override final;
    const Managed<VkInstanceCreateInfo>& get_instance_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    Managed<VkInstanceCreateInfo> mInstanceCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedPerformanceConfigurationINTEL
    : public detail::BasicManagedHandle<VkPerformanceConfigurationINTEL>
{
public:
    BasicManagedPerformanceConfigurationINTEL() = default;
    virtual ~BasicManagedPerformanceConfigurationINTEL() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedPhysicalDevice
    : public detail::BasicManagedHandle<VkPhysicalDevice>
{
public:
    BasicManagedPhysicalDevice() = default;
    virtual ~BasicManagedPhysicalDevice() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkInstance>>& get_instance() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkInstance>> mInstance { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedPipeline
    : public detail::BasicManagedHandle<VkPipeline>
{
public:
    BasicManagedPipeline() = default;
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedPipeline() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkComputePipelineCreateInfo>& get_compute_pipeline_create_info() const;
    const Managed<VkGraphicsPipelineCreateInfo>& get_graphics_pipeline_create_info() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkRayTracingPipelineCreateInfoKHR>& get_ray_tracing_pipeline_create_info_khr() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    const Managed<VkRayTracingPipelineCreateInfoNV>& get_ray_tracing_pipeline_create_info_nv() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkComputePipelineCreateInfo> mComputePipelineCreateInfo { };
    Managed<VkGraphicsPipelineCreateInfo> mGraphicsPipelineCreateInfo { };
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoKHR> mRayTracingPipelineCreateInfoKHR { };
    #endif // VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoNV> mRayTracingPipelineCreateInfoNV { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedPipelineCache
    : public detail::BasicManagedHandle<VkPipelineCache>
{
public:
    BasicManagedPipelineCache() = default;
    BasicManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedPipelineCache() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkPipelineCacheCreateInfo>& get_pipeline_cache_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkPipelineCacheCreateInfo> mPipelineCacheCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedPipelineLayout
    : public detail::BasicManagedHandle<VkPipelineLayout>
{
public:
    BasicManagedPipelineLayout() = default;
    BasicManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedPipelineLayout() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkPipelineLayoutCreateInfo>& get_pipeline_layout_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkPipelineLayoutCreateInfo> mPipelineLayoutCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedQueryPool
    : public detail::BasicManagedHandle<VkQueryPool>
{
public:
    BasicManagedQueryPool() = default;
    BasicManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedQueryPool() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkQueryPoolCreateInfo>& get_query_pool_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkQueryPoolCreateInfo> mQueryPoolCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedQueue
    : public detail::BasicManagedHandle<VkQueue>
{
public:
    BasicManagedQueue() = default;
    virtual ~BasicManagedQueue() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedRenderPass
    : public detail::BasicManagedHandle<VkRenderPass>
{
public:
    BasicManagedRenderPass() = default;
    BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedRenderPass() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkRenderPassCreateInfo>& get_render_pass_create_info() const;
    const Managed<VkRenderPassCreateInfo2>& get_render_pass_create_info2() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkRenderPassCreateInfo> mRenderPassCreateInfo { };
    Managed<VkRenderPassCreateInfo2> mRenderPassCreateInfo2 { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedSampler
    : public detail::BasicManagedHandle<VkSampler>
{
public:
    BasicManagedSampler() = default;
    BasicManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedSampler() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSamplerCreateInfo>& get_sampler_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSamplerCreateInfo> mSamplerCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedSamplerYcbcrConversion
    : public detail::BasicManagedHandle<VkSamplerYcbcrConversion>
{
public:
    BasicManagedSamplerYcbcrConversion() = default;
    BasicManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedSamplerYcbcrConversion() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSamplerYcbcrConversionCreateInfo>& get_sampler_ycbcr_conversion_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSamplerYcbcrConversionCreateInfo> mSamplerYcbcrConversionCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedSemaphore
    : public detail::BasicManagedHandle<VkSemaphore>
{
public:
    BasicManagedSemaphore() = default;
    BasicManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedSemaphore() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkSemaphoreCreateInfo>& get_semaphore_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkSemaphoreCreateInfo> mSemaphoreCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedShaderModule
    : public detail::BasicManagedHandle<VkShaderModule>
{
public:
    BasicManagedShaderModule() = default;
    BasicManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedShaderModule() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkShaderModuleCreateInfo>& get_shader_module_create_info() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkShaderModuleCreateInfo> mShaderModuleCreateInfo { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedSurfaceKHR
    : public detail::BasicManagedHandle<VkSurfaceKHR>
{
public:
    BasicManagedSurfaceKHR() = default;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
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
    virtual ~BasicManagedSurfaceKHR() override;
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
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
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
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedSwapchainKHR
    : public detail::BasicManagedHandle<VkSwapchainKHR>
{
public:
    BasicManagedSwapchainKHR() = default;
    BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator = nullptr);
    BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedSwapchainKHR() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const std::shared_ptr<Managed<VkSurfaceKHR>>& get_surface_khr() const;
    const Managed<VkSwapchainCreateInfoKHR>& get_swapchain_create_info_khr() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    std::shared_ptr<Managed<VkSurfaceKHR>> mSurfaceKHR { };
    Managed<VkSwapchainCreateInfoKHR> mSwapchainCreateInfoKHR { };
    VkAllocationCallbacks mAllocator { };
};

class BasicManagedValidationCacheEXT
    : public detail::BasicManagedHandle<VkValidationCacheEXT>
{
public:
    BasicManagedValidationCacheEXT() = default;
    BasicManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator = nullptr);
    virtual ~BasicManagedValidationCacheEXT() override;
    VkObjectType get_object_type() const override final;
    const std::shared_ptr<Managed<VkDevice>>& get_device() const;
    const Managed<VkValidationCacheCreateInfoEXT>& get_validation_cache_create_info_ext() const;
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override;
protected:
    std::shared_ptr<Managed<VkDevice>> mDevice { };
    Managed<VkValidationCacheCreateInfoEXT> mValidationCacheCreateInfoEXT { };
    VkAllocationCallbacks mAllocator { };
};

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
