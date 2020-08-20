
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/managed-handles.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
BasicManagedAccelerationStructureKHR::BasicManagedAccelerationStructureKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedAccelerationStructureKHR::~BasicManagedAccelerationStructureKHR()
{
    reset();
}

VkObjectType BasicManagedAccelerationStructureKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedAccelerationStructureKHR::get_device() const
{
    return mDevice;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
const Managed<VkAccelerationStructureCreateInfoKHR>& BasicManagedAccelerationStructureKHR::get_acceleration_structure_create_info_khr() const
{
    return mAccelerationStructureCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedAccelerationStructureKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
#ifdef
BasicManagedBuffer::BasicManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedBuffer::~BasicManagedBuffer()
{
    reset();
}

VkObjectType BasicManagedBuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedBuffer::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkBufferCreateInfo>& BasicManagedBuffer::get_buffer_create_info() const
{
    return mBufferCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedBuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedBufferView::BasicManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedBufferView::~BasicManagedBufferView()
{
    reset();
}

VkObjectType BasicManagedBufferView::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedBufferView::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkBufferViewCreateInfo>& BasicManagedBufferView::get_buffer_view_create_info() const
{
    return mBufferViewCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedBufferView::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#ifdef
BasicManagedCommandBuffer::BasicManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedCommandBuffer::~BasicManagedCommandBuffer()
{
    reset();
}

VkObjectType BasicManagedCommandBuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkCommandPool>>& BasicManagedCommandBuffer::get_command_pool() const
{
    return mCommandPool;
}

#ifdef
const Managed<VkCommandBufferAllocateInfo>& BasicManagedCommandBuffer::get_command_buffer_allocate_info() const
{
    return mCommandBufferAllocateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedCommandBuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#endif //

#ifdef
#ifdef
BasicManagedCommandPool::BasicManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedCommandPool::~BasicManagedCommandPool()
{
    reset();
}

VkObjectType BasicManagedCommandPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedCommandPool::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkCommandPoolCreateInfo>& BasicManagedCommandPool::get_command_pool_create_info() const
{
    return mCommandPoolCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedCommandPool::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDebugReportCallbackEXT::BasicManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDebugReportCallbackEXT::~BasicManagedDebugReportCallbackEXT()
{
    reset();
}

VkObjectType BasicManagedDebugReportCallbackEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& BasicManagedDebugReportCallbackEXT::get_instance() const
{
    return mInstance;
}

#ifdef
const Managed<VkDebugReportCallbackCreateInfoEXT>& BasicManagedDebugReportCallbackEXT::get_debug_report_callback_create_info_ext() const
{
    return mDebugReportCallbackCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDebugReportCallbackEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDebugUtilsMessengerEXT::BasicManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDebugUtilsMessengerEXT::~BasicManagedDebugUtilsMessengerEXT()
{
    reset();
}

VkObjectType BasicManagedDebugUtilsMessengerEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& BasicManagedDebugUtilsMessengerEXT::get_instance() const
{
    return mInstance;
}

#ifdef
const Managed<VkDebugUtilsMessengerCreateInfoEXT>& BasicManagedDebugUtilsMessengerEXT::get_debug_utils_messenger_create_info_ext() const
{
    return mDebugUtilsMessengerCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDebugUtilsMessengerEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
BasicManagedDeferredOperationKHR::BasicManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDeferredOperationKHR::~BasicManagedDeferredOperationKHR()
{
    reset();
}

VkObjectType BasicManagedDeferredOperationKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedDeferredOperationKHR::get_device() const
{
    return mDevice;
}

void BasicManagedDeferredOperationKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION

#ifdef
#ifdef
BasicManagedDescriptorPool::BasicManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDescriptorPool::~BasicManagedDescriptorPool()
{
    reset();
}

VkObjectType BasicManagedDescriptorPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedDescriptorPool::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkDescriptorPoolCreateInfo>& BasicManagedDescriptorPool::get_descriptor_pool_create_info() const
{
    return mDescriptorPoolCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDescriptorPool::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#ifdef
BasicManagedDescriptorSet::BasicManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDescriptorSet::~BasicManagedDescriptorSet()
{
    reset();
}

VkObjectType BasicManagedDescriptorSet::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDescriptorPool>>& BasicManagedDescriptorSet::get_descriptor_pool() const
{
    return mDescriptorPool;
}

#ifdef
const Managed<VkDescriptorSetAllocateInfo>& BasicManagedDescriptorSet::get_descriptor_set_allocate_info() const
{
    return mDescriptorSetAllocateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDescriptorSet::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#endif //

#ifdef
#ifdef
BasicManagedDescriptorSetLayout::BasicManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDescriptorSetLayout::~BasicManagedDescriptorSetLayout()
{
    reset();
}

VkObjectType BasicManagedDescriptorSetLayout::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedDescriptorSetLayout::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkDescriptorSetLayoutCreateInfo>& BasicManagedDescriptorSetLayout::get_descriptor_set_layout_create_info() const
{
    return mDescriptorSetLayoutCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDescriptorSetLayout::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDescriptorUpdateTemplate::BasicManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDescriptorUpdateTemplate::~BasicManagedDescriptorUpdateTemplate()
{
    reset();
}

VkObjectType BasicManagedDescriptorUpdateTemplate::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedDescriptorUpdateTemplate::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkDescriptorUpdateTemplateCreateInfo>& BasicManagedDescriptorUpdateTemplate::get_descriptor_update_template_create_info() const
{
    return mDescriptorUpdateTemplateCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDescriptorUpdateTemplate::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDevice::BasicManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDevice::~BasicManagedDevice()
{
    reset();
}

VkObjectType BasicManagedDevice::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkPhysicalDevice>>& BasicManagedDevice::get_physical_device() const
{
    return mPhysicalDevice;
}

#ifdef
const Managed<VkDeviceCreateInfo>& BasicManagedDevice::get_device_create_info() const
{
    return mDeviceCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDevice::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDeviceMemory::BasicManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDeviceMemory::~BasicManagedDeviceMemory()
{
    reset();
}

VkObjectType BasicManagedDeviceMemory::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedDeviceMemory::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkMemoryAllocateInfo>& BasicManagedDeviceMemory::get_memory_allocate_info() const
{
    return mMemoryAllocateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDeviceMemory::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
BasicManagedDisplayKHR::~BasicManagedDisplayKHR()
{
    reset();
}

VkObjectType BasicManagedDisplayKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkPhysicalDevice>>& BasicManagedDisplayKHR::get_physical_device() const
{
    return mPhysicalDevice;
}

void BasicManagedDisplayKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedDisplayModeKHR::BasicManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedDisplayModeKHR::~BasicManagedDisplayModeKHR()
{
    reset();
}

VkObjectType BasicManagedDisplayModeKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDisplayKHR>>& BasicManagedDisplayModeKHR::get_display_khr() const
{
    return mDisplayKHR;
}

#ifdef
const Managed<VkDisplayModeCreateInfoKHR>& BasicManagedDisplayModeKHR::get_display_mode_create_info_khr() const
{
    return mDisplayModeCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedDisplayModeKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedEvent::BasicManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedEvent::~BasicManagedEvent()
{
    reset();
}

VkObjectType BasicManagedEvent::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedEvent::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkEventCreateInfo>& BasicManagedEvent::get_event_create_info() const
{
    return mEventCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedEvent::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedFence::BasicManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedFence::~BasicManagedFence()
{
    reset();
}

VkObjectType BasicManagedFence::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedFence::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkFenceCreateInfo>& BasicManagedFence::get_fence_create_info() const
{
    return mFenceCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedFence::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedFramebuffer::BasicManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedFramebuffer::~BasicManagedFramebuffer()
{
    reset();
}

VkObjectType BasicManagedFramebuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedFramebuffer::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkFramebufferCreateInfo>& BasicManagedFramebuffer::get_framebuffer_create_info() const
{
    return mFramebufferCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedFramebuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedImage::BasicManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedImage::~BasicManagedImage()
{
    reset();
}

VkObjectType BasicManagedImage::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedImage::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkImageCreateInfo>& BasicManagedImage::get_image_create_info() const
{
    return mImageCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedImage::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedImageView::BasicManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedImageView::~BasicManagedImageView()
{
    reset();
}

VkObjectType BasicManagedImageView::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedImageView::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkImageViewCreateInfo>& BasicManagedImageView::get_image_view_create_info() const
{
    return mImageViewCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedImageView::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedIndirectCommandsLayoutNV::BasicManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedIndirectCommandsLayoutNV::~BasicManagedIndirectCommandsLayoutNV()
{
    reset();
}

VkObjectType BasicManagedIndirectCommandsLayoutNV::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedIndirectCommandsLayoutNV::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkIndirectCommandsLayoutCreateInfoNV>& BasicManagedIndirectCommandsLayoutNV::get_indirect_commands_layout_create_info_nv() const
{
    return mIndirectCommandsLayoutCreateInfoNV;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedIndirectCommandsLayoutNV::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#ifdef
BasicManagedInstance::BasicManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedInstance::~BasicManagedInstance()
{
    reset();
}

VkObjectType BasicManagedInstance::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

#ifdef
const Managed<VkInstanceCreateInfo>& BasicManagedInstance::get_instance_create_info() const
{
    return mInstanceCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedInstance::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#endif //

#ifdef
BasicManagedPerformanceConfigurationINTEL::~BasicManagedPerformanceConfigurationINTEL()
{
    reset();
}

VkObjectType BasicManagedPerformanceConfigurationINTEL::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedPerformanceConfigurationINTEL::get_device() const
{
    return mDevice;
}

void BasicManagedPerformanceConfigurationINTEL::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
BasicManagedPhysicalDevice::~BasicManagedPhysicalDevice()
{
    reset();
}

VkObjectType BasicManagedPhysicalDevice::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& BasicManagedPhysicalDevice::get_instance() const
{
    return mInstance;
}

void BasicManagedPhysicalDevice::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedPipeline::~BasicManagedPipeline()
{
    reset();
}

VkObjectType BasicManagedPipeline::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedPipeline::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkComputePipelineCreateInfo>& BasicManagedPipeline::get_compute_pipeline_create_info() const
{
    return mComputePipelineCreateInfo;
}
#endif // ${_COMPILE_GUARD}

#ifdef
const Managed<VkGraphicsPipelineCreateInfo>& BasicManagedPipeline::get_graphics_pipeline_create_info() const
{
    return mGraphicsPipelineCreateInfo;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
const Managed<VkRayTracingPipelineCreateInfoKHR>& BasicManagedPipeline::get_ray_tracing_pipeline_create_info_khr() const
{
    return mRayTracingPipelineCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef
const Managed<VkRayTracingPipelineCreateInfoNV>& BasicManagedPipeline::get_ray_tracing_pipeline_create_info_nv() const
{
    return mRayTracingPipelineCreateInfoNV;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedPipeline::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedPipelineCache::BasicManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedPipelineCache::~BasicManagedPipelineCache()
{
    reset();
}

VkObjectType BasicManagedPipelineCache::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedPipelineCache::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkPipelineCacheCreateInfo>& BasicManagedPipelineCache::get_pipeline_cache_create_info() const
{
    return mPipelineCacheCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedPipelineCache::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedPipelineLayout::BasicManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedPipelineLayout::~BasicManagedPipelineLayout()
{
    reset();
}

VkObjectType BasicManagedPipelineLayout::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedPipelineLayout::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkPipelineLayoutCreateInfo>& BasicManagedPipelineLayout::get_pipeline_layout_create_info() const
{
    return mPipelineLayoutCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedPipelineLayout::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedPrivateDataSlotEXT::BasicManagedPrivateDataSlotEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedPrivateDataSlotEXT::~BasicManagedPrivateDataSlotEXT()
{
    reset();
}

VkObjectType BasicManagedPrivateDataSlotEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedPrivateDataSlotEXT::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkPrivateDataSlotCreateInfoEXT>& BasicManagedPrivateDataSlotEXT::get_private_data_slot_create_info_ext() const
{
    return mPrivateDataSlotCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedPrivateDataSlotEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedQueryPool::BasicManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedQueryPool::~BasicManagedQueryPool()
{
    reset();
}

VkObjectType BasicManagedQueryPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedQueryPool::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkQueryPoolCreateInfo>& BasicManagedQueryPool::get_query_pool_create_info() const
{
    return mQueryPoolCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedQueryPool::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
BasicManagedQueue::~BasicManagedQueue()
{
    reset();
}

VkObjectType BasicManagedQueue::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedQueue::get_device() const
{
    return mDevice;
}

void BasicManagedQueue::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedRenderPass::BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedRenderPass::BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedRenderPass::~BasicManagedRenderPass()
{
    reset();
}

VkObjectType BasicManagedRenderPass::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedRenderPass::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkRenderPassCreateInfo>& BasicManagedRenderPass::get_render_pass_create_info() const
{
    return mRenderPassCreateInfo;
}
#endif // ${_COMPILE_GUARD}

#ifdef
const Managed<VkRenderPassCreateInfo2>& BasicManagedRenderPass::get_render_pass_create_info2() const
{
    return mRenderPassCreateInfo2;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedRenderPass::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedSampler::BasicManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedSampler::~BasicManagedSampler()
{
    reset();
}

VkObjectType BasicManagedSampler::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedSampler::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkSamplerCreateInfo>& BasicManagedSampler::get_sampler_create_info() const
{
    return mSamplerCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedSampler::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedSamplerYcbcrConversion::BasicManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedSamplerYcbcrConversion::~BasicManagedSamplerYcbcrConversion()
{
    reset();
}

VkObjectType BasicManagedSamplerYcbcrConversion::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedSamplerYcbcrConversion::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkSamplerYcbcrConversionCreateInfo>& BasicManagedSamplerYcbcrConversion::get_sampler_ycbcr_conversion_create_info() const
{
    return mSamplerYcbcrConversionCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedSamplerYcbcrConversion::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedSemaphore::BasicManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedSemaphore::~BasicManagedSemaphore()
{
    reset();
}

VkObjectType BasicManagedSemaphore::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedSemaphore::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkSemaphoreCreateInfo>& BasicManagedSemaphore::get_semaphore_create_info() const
{
    return mSemaphoreCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedSemaphore::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedShaderModule::BasicManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedShaderModule::~BasicManagedShaderModule()
{
    reset();
}

VkObjectType BasicManagedShaderModule::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedShaderModule::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkShaderModuleCreateInfo>& BasicManagedShaderModule::get_shader_module_create_info() const
{
    return mShaderModuleCreateInfo;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedShaderModule::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef VK_USE_PLATFORM_ANDROID_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_IOS_MVK
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_FUCHSIA
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_MACOS_MVK
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_METAL_EXT
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_GGP
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_VI_NN
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XCB_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XLIB_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedSurfaceKHR::~BasicManagedSurfaceKHR()
{
    reset();
}

VkObjectType BasicManagedSurfaceKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& BasicManagedSurfaceKHR::get_instance() const
{
    return mInstance;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
const Managed<VkAndroidSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_android_surface_create_info_khr() const
{
    return mAndroidSurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef
const Managed<VkDisplaySurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_display_surface_create_info_khr() const
{
    return mDisplaySurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef
const Managed<VkHeadlessSurfaceCreateInfoEXT>& BasicManagedSurfaceKHR::get_headless_surface_create_info_ext() const
{
    return mHeadlessSurfaceCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_IOS_MVK
const Managed<VkIOSSurfaceCreateInfoMVK>& BasicManagedSurfaceKHR::get_ios_surface_create_info_mvk() const
{
    return mIOSSurfaceCreateInfoMVK;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_FUCHSIA
const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& BasicManagedSurfaceKHR::get_image_pipe_surface_create_info_fuchsia() const
{
    return mImagePipeSurfaceCreateInfoFUCHSIA;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_MACOS_MVK
const Managed<VkMacOSSurfaceCreateInfoMVK>& BasicManagedSurfaceKHR::get_mac_os_surface_create_info_mvk() const
{
    return mMacOSSurfaceCreateInfoMVK;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_METAL_EXT
const Managed<VkMetalSurfaceCreateInfoEXT>& BasicManagedSurfaceKHR::get_metal_surface_create_info_ext() const
{
    return mMetalSurfaceCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_GGP
const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& BasicManagedSurfaceKHR::get_stream_descriptor_surface_create_info_ggp() const
{
    return mStreamDescriptorSurfaceCreateInfoGGP;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_VI_NN
const Managed<VkViSurfaceCreateInfoNN>& BasicManagedSurfaceKHR::get_vi_surface_create_info_nn() const
{
    return mViSurfaceCreateInfoNN;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
const Managed<VkWaylandSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_wayland_surface_create_info_khr() const
{
    return mWaylandSurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
const Managed<VkWin32SurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_win32_surface_create_info_khr() const
{
    return mWin32SurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XCB_KHR
const Managed<VkXcbSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_xcb_surface_create_info_khr() const
{
    return mXcbSurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XLIB_KHR
const Managed<VkXlibSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_xlib_surface_create_info_khr() const
{
    return mXlibSurfaceCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedSurfaceKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedSwapchainKHR::BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
BasicManagedSwapchainKHR::BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedSwapchainKHR::~BasicManagedSwapchainKHR()
{
    reset();
}

VkObjectType BasicManagedSwapchainKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedSwapchainKHR::get_device() const
{
    return mDevice;
}

const std::shared_ptr<Managed<VkSurfaceKHR>>& BasicManagedSwapchainKHR::get_surface_khr() const
{
    return mSurfaceKHR;
}

#ifdef
const Managed<VkSwapchainCreateInfoKHR>& BasicManagedSwapchainKHR::get_swapchain_create_info_khr() const
{
    return mSwapchainCreateInfoKHR;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedSwapchainKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

#ifdef
#ifdef
BasicManagedValidationCacheEXT::BasicManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
}
#endif // ${_COMPILE_GUARD}

BasicManagedValidationCacheEXT::~BasicManagedValidationCacheEXT()
{
    reset();
}

VkObjectType BasicManagedValidationCacheEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& BasicManagedValidationCacheEXT::get_device() const
{
    return mDevice;
}

#ifdef
const Managed<VkValidationCacheCreateInfoEXT>& BasicManagedValidationCacheEXT::get_validation_cache_create_info_ext() const
{
    return mValidationCacheCreateInfoEXT;
}
#endif // ${_COMPILE_GUARD}

void BasicManagedValidationCacheEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif //

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
