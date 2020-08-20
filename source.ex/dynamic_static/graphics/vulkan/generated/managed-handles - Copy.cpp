
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
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateAccelerationStructureKHR(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mAccelerationStructureCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

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
#endif // VK_ENABLE_BETA_EXTENSIONS

void BasicManagedAccelerationStructureKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS

BasicManagedBuffer::BasicManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateBuffer(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mBufferCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkBufferCreateInfo>& BasicManagedBuffer::get_buffer_create_info() const
{
    return mBufferCreateInfo;
}

void BasicManagedBuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedBufferView::BasicManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateBufferView(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mBufferViewCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkBufferViewCreateInfo>& BasicManagedBufferView::get_buffer_view_create_info() const
{
    return mBufferViewCreateInfo;
}

void BasicManagedBufferView::reset(const VkAllocationCallbacks* pAllocator)
{
}

#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
BasicManagedCommandBuffer::BasicManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo)
{
    if ( && pAllocateInfo) {
        mResult = dst_vk(vkAllocateCommandBuffers(device, pAllocateInfo, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mCommandBufferAllocateInfo = *pAllocateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkCommandBufferAllocateInfo>& BasicManagedCommandBuffer::get_command_buffer_allocate_info() const
{
    return mCommandBufferAllocateInfo;
}

void BasicManagedCommandBuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION

BasicManagedCommandPool::BasicManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateCommandPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mCommandPoolCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkCommandPoolCreateInfo>& BasicManagedCommandPool::get_command_pool_create_info() const
{
    return mCommandPoolCreateInfo;
}

void BasicManagedCommandPool::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedDebugReportCallbackEXT::BasicManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDebugReportCallbackEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDebugReportCallbackCreateInfoEXT = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDebugReportCallbackCreateInfoEXT>& BasicManagedDebugReportCallbackEXT::get_debug_report_callback_create_info_ext() const
{
    return mDebugReportCallbackCreateInfoEXT;
}

void BasicManagedDebugReportCallbackEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedDebugUtilsMessengerEXT::BasicManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDebugUtilsMessengerEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDebugUtilsMessengerCreateInfoEXT = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDebugUtilsMessengerCreateInfoEXT>& BasicManagedDebugUtilsMessengerEXT::get_debug_utils_messenger_create_info_ext() const
{
    return mDebugUtilsMessengerCreateInfoEXT;
}

void BasicManagedDebugUtilsMessengerEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}

#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
BasicManagedDeferredOperationKHR::BasicManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator)
{
    if (device && ) {
        mResult = dst_vk(vkCreateDeferredOperationKHR(*device, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
             = *;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

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

BasicManagedDescriptorPool::BasicManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorPoolCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDescriptorPoolCreateInfo>& BasicManagedDescriptorPool::get_descriptor_pool_create_info() const
{
    return mDescriptorPoolCreateInfo;
}

void BasicManagedDescriptorPool::reset(const VkAllocationCallbacks* pAllocator)
{
}

#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
BasicManagedDescriptorSet::BasicManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo)
{
    if ( && pAllocateInfo) {
        mResult = dst_vk(vkAllocateDescriptorSets(device, pAllocateInfo, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mDescriptorSetAllocateInfo = *pAllocateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDescriptorSetAllocateInfo>& BasicManagedDescriptorSet::get_descriptor_set_allocate_info() const
{
    return mDescriptorSetAllocateInfo;
}

void BasicManagedDescriptorSet::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION

BasicManagedDescriptorSetLayout::BasicManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorSetLayout(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorSetLayoutCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDescriptorSetLayoutCreateInfo>& BasicManagedDescriptorSetLayout::get_descriptor_set_layout_create_info() const
{
    return mDescriptorSetLayoutCreateInfo;
}

void BasicManagedDescriptorSetLayout::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedDescriptorUpdateTemplate::BasicManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorUpdateTemplate(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorUpdateTemplateCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDescriptorUpdateTemplateCreateInfo>& BasicManagedDescriptorUpdateTemplate::get_descriptor_update_template_create_info() const
{
    return mDescriptorUpdateTemplateCreateInfo;
}

void BasicManagedDescriptorUpdateTemplate::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedDevice::BasicManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (physicalDevice && pCreateInfo) {
        mResult = dst_vk(vkCreateDevice(*physicalDevice, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mPhysicalDevice = physicalDevice;
            mDeviceCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDeviceCreateInfo>& BasicManagedDevice::get_device_create_info() const
{
    return mDeviceCreateInfo;
}

void BasicManagedDevice::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedDeviceMemory::BasicManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pAllocateInfo) {
        mResult = dst_vk(vkAllocateMemory(*device, pAllocateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mMemoryAllocateInfo = *pAllocateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkMemoryAllocateInfo>& BasicManagedDeviceMemory::get_memory_allocate_info() const
{
    return mMemoryAllocateInfo;
}

void BasicManagedDeviceMemory::reset(const VkAllocationCallbacks* pAllocator)
{
}

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

BasicManagedDisplayModeKHR::BasicManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (display && pCreateInfo) {
        mResult = dst_vk(vkCreateDisplayModeKHR(physicalDevice, *display, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDisplayKHR = display;
            mDisplayModeCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkDisplayModeCreateInfoKHR>& BasicManagedDisplayModeKHR::get_display_mode_create_info_khr() const
{
    return mDisplayModeCreateInfoKHR;
}

void BasicManagedDisplayModeKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedEvent::BasicManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateEvent(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mEventCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkEventCreateInfo>& BasicManagedEvent::get_event_create_info() const
{
    return mEventCreateInfo;
}

void BasicManagedEvent::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedFence::BasicManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateFence(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mFenceCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkFenceCreateInfo>& BasicManagedFence::get_fence_create_info() const
{
    return mFenceCreateInfo;
}

void BasicManagedFence::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedFramebuffer::BasicManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateFramebuffer(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mFramebufferCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkFramebufferCreateInfo>& BasicManagedFramebuffer::get_framebuffer_create_info() const
{
    return mFramebufferCreateInfo;
}

void BasicManagedFramebuffer::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedImage::BasicManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateImage(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mImageCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkImageCreateInfo>& BasicManagedImage::get_image_create_info() const
{
    return mImageCreateInfo;
}

void BasicManagedImage::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedImageView::BasicManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateImageView(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mImageViewCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkImageViewCreateInfo>& BasicManagedImageView::get_image_view_create_info() const
{
    return mImageViewCreateInfo;
}

void BasicManagedImageView::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedIndirectCommandsLayoutNV::BasicManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateIndirectCommandsLayoutNV(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mIndirectCommandsLayoutCreateInfoNV = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkIndirectCommandsLayoutCreateInfoNV>& BasicManagedIndirectCommandsLayoutNV::get_indirect_commands_layout_create_info_nv() const
{
    return mIndirectCommandsLayoutCreateInfoNV;
}

void BasicManagedIndirectCommandsLayoutNV::reset(const VkAllocationCallbacks* pAllocator)
{
}

#ifdef DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION
BasicManagedInstance::BasicManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if ( && pCreateInfo) {
        mResult = dst_vk(vkCreateInstance(pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mInstanceCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

BasicManagedInstance::~BasicManagedInstance()
{
    reset();
}

VkObjectType BasicManagedInstance::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const Managed<VkInstanceCreateInfo>& BasicManagedInstance::get_instance_create_info() const
{
    return mInstanceCreateInfo;
}

void BasicManagedInstance::reset(const VkAllocationCallbacks* pAllocator)
{
}
#endif // DST_GFX_VK_HANDLE_MANUAL_IMPLEMENTATION

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

BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfos) {
        mResult = dst_vk(vkCreateComputePipelines(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mComputePipelineCreateInfo = *pCreateInfos;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfos) {
        mResult = dst_vk(vkCreateGraphicsPipelines(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mGraphicsPipelineCreateInfo = *pCreateInfos;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfos) {
        mResult = dst_vk(vkCreateRayTracingPipelinesKHR(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRayTracingPipelineCreateInfoKHR = *pCreateInfos;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

BasicManagedPipeline::BasicManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfos) {
        mResult = dst_vk(vkCreateRayTracingPipelinesNV(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRayTracingPipelineCreateInfoNV = *pCreateInfos;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkComputePipelineCreateInfo>& BasicManagedPipeline::get_compute_pipeline_create_info() const
{
    return mComputePipelineCreateInfo;
}

const Managed<VkGraphicsPipelineCreateInfo>& BasicManagedPipeline::get_graphics_pipeline_create_info() const
{
    return mGraphicsPipelineCreateInfo;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
const Managed<VkRayTracingPipelineCreateInfoKHR>& BasicManagedPipeline::get_ray_tracing_pipeline_create_info_khr() const
{
    return mRayTracingPipelineCreateInfoKHR;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

const Managed<VkRayTracingPipelineCreateInfoNV>& BasicManagedPipeline::get_ray_tracing_pipeline_create_info_nv() const
{
    return mRayTracingPipelineCreateInfoNV;
}

void BasicManagedPipeline::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedPipelineCache::BasicManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreatePipelineCache(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mPipelineCacheCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkPipelineCacheCreateInfo>& BasicManagedPipelineCache::get_pipeline_cache_create_info() const
{
    return mPipelineCacheCreateInfo;
}

void BasicManagedPipelineCache::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedPipelineLayout::BasicManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreatePipelineLayout(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mPipelineLayoutCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkPipelineLayoutCreateInfo>& BasicManagedPipelineLayout::get_pipeline_layout_create_info() const
{
    return mPipelineLayoutCreateInfo;
}

void BasicManagedPipelineLayout::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedQueryPool::BasicManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateQueryPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mQueryPoolCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkQueryPoolCreateInfo>& BasicManagedQueryPool::get_query_pool_create_info() const
{
    return mQueryPoolCreateInfo;
}

void BasicManagedQueryPool::reset(const VkAllocationCallbacks* pAllocator)
{
}

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

BasicManagedRenderPass::BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRenderPass(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRenderPassCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

BasicManagedRenderPass::BasicManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRenderPass2(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRenderPassCreateInfo2 = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkRenderPassCreateInfo>& BasicManagedRenderPass::get_render_pass_create_info() const
{
    return mRenderPassCreateInfo;
}

const Managed<VkRenderPassCreateInfo2>& BasicManagedRenderPass::get_render_pass_create_info2() const
{
    return mRenderPassCreateInfo2;
}

void BasicManagedRenderPass::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedSampler::BasicManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSampler(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSamplerCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkSamplerCreateInfo>& BasicManagedSampler::get_sampler_create_info() const
{
    return mSamplerCreateInfo;
}

void BasicManagedSampler::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedSamplerYcbcrConversion::BasicManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSamplerYcbcrConversion(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSamplerYcbcrConversionCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkSamplerYcbcrConversionCreateInfo>& BasicManagedSamplerYcbcrConversion::get_sampler_ycbcr_conversion_create_info() const
{
    return mSamplerYcbcrConversionCreateInfo;
}

void BasicManagedSamplerYcbcrConversion::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedSemaphore::BasicManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSemaphore(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSemaphoreCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkSemaphoreCreateInfo>& BasicManagedSemaphore::get_semaphore_create_info() const
{
    return mSemaphoreCreateInfo;
}

void BasicManagedSemaphore::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedShaderModule::BasicManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateShaderModule(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mShaderModuleCreateInfo = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkShaderModuleCreateInfo>& BasicManagedShaderModule::get_shader_module_create_info() const
{
    return mShaderModuleCreateInfo;
}

void BasicManagedShaderModule::reset(const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateAndroidSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mAndroidSurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDisplayPlaneSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDisplaySurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateHeadlessSurfaceEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mHeadlessSurfaceCreateInfoEXT = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

#ifdef VK_USE_PLATFORM_IOS_MVK
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateIOSSurfaceMVK(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mIOSSurfaceCreateInfoMVK = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateImagePipeSurfaceFUCHSIA(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mImagePipeSurfaceCreateInfoFUCHSIA = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateMacOSSurfaceMVK(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mMacOSSurfaceCreateInfoMVK = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateMetalSurfaceEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mMetalSurfaceCreateInfoEXT = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateStreamDescriptorSurfaceGGP(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mStreamDescriptorSurfaceCreateInfoGGP = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateViSurfaceNN(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mViSurfaceCreateInfoNN = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateWaylandSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mWaylandSurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateWin32SurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mWin32SurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateXcbSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mXcbSurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
BasicManagedSurfaceKHR::BasicManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateXlibSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mXlibSurfaceCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_XLIB_KHR

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
#endif // VK_USE_PLATFORM_ANDROID_KHR

const Managed<VkDisplaySurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_display_surface_create_info_khr() const
{
    return mDisplaySurfaceCreateInfoKHR;
}

const Managed<VkHeadlessSurfaceCreateInfoEXT>& BasicManagedSurfaceKHR::get_headless_surface_create_info_ext() const
{
    return mHeadlessSurfaceCreateInfoEXT;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
const Managed<VkIOSSurfaceCreateInfoMVK>& BasicManagedSurfaceKHR::get_ios_surface_create_info_mvk() const
{
    return mIOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& BasicManagedSurfaceKHR::get_image_pipe_surface_create_info_fuchsia() const
{
    return mImagePipeSurfaceCreateInfoFUCHSIA;
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
const Managed<VkMacOSSurfaceCreateInfoMVK>& BasicManagedSurfaceKHR::get_mac_os_surface_create_info_mvk() const
{
    return mMacOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
const Managed<VkMetalSurfaceCreateInfoEXT>& BasicManagedSurfaceKHR::get_metal_surface_create_info_ext() const
{
    return mMetalSurfaceCreateInfoEXT;
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& BasicManagedSurfaceKHR::get_stream_descriptor_surface_create_info_ggp() const
{
    return mStreamDescriptorSurfaceCreateInfoGGP;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
const Managed<VkViSurfaceCreateInfoNN>& BasicManagedSurfaceKHR::get_vi_surface_create_info_nn() const
{
    return mViSurfaceCreateInfoNN;
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
const Managed<VkWaylandSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_wayland_surface_create_info_khr() const
{
    return mWaylandSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
const Managed<VkWin32SurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_win32_surface_create_info_khr() const
{
    return mWin32SurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
const Managed<VkXcbSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_xcb_surface_create_info_khr() const
{
    return mXcbSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
const Managed<VkXlibSurfaceCreateInfoKHR>& BasicManagedSurfaceKHR::get_xlib_surface_create_info_khr() const
{
    return mXlibSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void BasicManagedSurfaceKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedSwapchainKHR::BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfos) {
        mResult = dst_vk(vkCreateSharedSwapchainsKHR(*device, swapchainCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSwapchainCreateInfoKHR = *pCreateInfos;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

BasicManagedSwapchainKHR::BasicManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSwapchainKHR(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSwapchainCreateInfoKHR = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkSwapchainCreateInfoKHR>& BasicManagedSwapchainKHR::get_swapchain_create_info_khr() const
{
    return mSwapchainCreateInfoKHR;
}

void BasicManagedSwapchainKHR::reset(const VkAllocationCallbacks* pAllocator)
{
}

BasicManagedValidationCacheEXT::BasicManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateValidationCacheEXT(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mValidationCacheCreateInfoEXT = *pCreateInfo;
            mAllocator = pAllocator ? *pAllocator : VkAllocationCallbacks { };
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

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

const Managed<VkValidationCacheCreateInfoEXT>& BasicManagedValidationCacheEXT::get_validation_cache_create_info_ext() const
{
    return mValidationCacheCreateInfoEXT;
}

void BasicManagedValidationCacheEXT::reset(const VkAllocationCallbacks* pAllocator)
{
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
