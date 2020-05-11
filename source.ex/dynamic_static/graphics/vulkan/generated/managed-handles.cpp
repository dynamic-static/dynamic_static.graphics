
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/managed-handles.hpp"

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
ManagedAccelerationStructureKHR::ManagedAccelerationStructureKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateAccelerationStructureKHR(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mAccelerationStructureCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

ManagedAccelerationStructureKHR::~ManagedAccelerationStructureKHR()
{
    reset();
}

VkObjectType ManagedAccelerationStructureKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedAccelerationStructureKHR::get_device() const
{
    return mDevice;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
const Managed<VkAccelerationStructureCreateInfoKHR>& ManagedAccelerationStructureKHR::get_acceleration_structure_create_info_khr() const
{
    return mAccelerationStructureCreateInfoKHR;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

void ManagedAccelerationStructureKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedAccelerationStructureNV::ManagedAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if ( && pCreateInfo) {
        mResult = dst_vk(vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mAccelerationStructureCreateInfoNV = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedAccelerationStructureNV::~ManagedAccelerationStructureNV()
{
    reset();
}

VkObjectType ManagedAccelerationStructureNV::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const Managed<VkAccelerationStructureCreateInfoNV>& ManagedAccelerationStructureNV::get_acceleration_structure_create_info_nv() const
{
    return mAccelerationStructureCreateInfoNV;
}

void ManagedAccelerationStructureNV::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedBuffer::ManagedBuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateBuffer(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mBufferCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedBuffer::~ManagedBuffer()
{
    reset();
}

VkObjectType ManagedBuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedBuffer::get_device() const
{
    return mDevice;
}

const Managed<VkBufferCreateInfo>& ManagedBuffer::get_buffer_create_info() const
{
    return mBufferCreateInfo;
}

void ManagedBuffer::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedBufferView::ManagedBufferView(const std::shared_ptr<Managed<VkDevice>>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateBufferView(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mBufferViewCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedBufferView::~ManagedBufferView()
{
    reset();
}

VkObjectType ManagedBufferView::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedBufferView::get_device() const
{
    return mDevice;
}

const Managed<VkBufferViewCreateInfo>& ManagedBufferView::get_buffer_view_create_info() const
{
    return mBufferViewCreateInfo;
}

void ManagedBufferView::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedCommandBuffer::ManagedCommandBuffer(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo)
{
    reset();
    if ( && pCreateInfo) {
        mResult = dst_vk(vkAllocateCommandBuffers(device, pAllocateInfo, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mCommandBufferAllocateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedCommandBuffer::~ManagedCommandBuffer()
{
    reset();
}

VkObjectType ManagedCommandBuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkCommandPool>>& ManagedCommandBuffer::get_command_pool() const
{
    return mCommandPool;
}

const Managed<VkCommandBufferAllocateInfo>& ManagedCommandBuffer::get_command_buffer_allocate_info() const
{
    return mCommandBufferAllocateInfo;
}

void ManagedCommandBuffer::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedCommandPool::ManagedCommandPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateCommandPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mCommandPoolCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedCommandPool::~ManagedCommandPool()
{
    reset();
}

VkObjectType ManagedCommandPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedCommandPool::get_device() const
{
    return mDevice;
}

const Managed<VkCommandPoolCreateInfo>& ManagedCommandPool::get_command_pool_create_info() const
{
    return mCommandPoolCreateInfo;
}

void ManagedCommandPool::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDebugReportCallbackEXT::ManagedDebugReportCallbackEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDebugReportCallbackEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDebugReportCallbackCreateInfoEXT = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDebugReportCallbackEXT::~ManagedDebugReportCallbackEXT()
{
    reset();
}

VkObjectType ManagedDebugReportCallbackEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& ManagedDebugReportCallbackEXT::get_instance() const
{
    return mInstance;
}

const Managed<VkDebugReportCallbackCreateInfoEXT>& ManagedDebugReportCallbackEXT::get_debug_report_callback_create_info_ext() const
{
    return mDebugReportCallbackCreateInfoEXT;
}

void ManagedDebugReportCallbackEXT::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDebugUtilsMessengerEXT::ManagedDebugUtilsMessengerEXT(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDebugUtilsMessengerEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDebugUtilsMessengerCreateInfoEXT = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDebugUtilsMessengerEXT::~ManagedDebugUtilsMessengerEXT()
{
    reset();
}

VkObjectType ManagedDebugUtilsMessengerEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& ManagedDebugUtilsMessengerEXT::get_instance() const
{
    return mInstance;
}

const Managed<VkDebugUtilsMessengerCreateInfoEXT>& ManagedDebugUtilsMessengerEXT::get_debug_utils_messenger_create_info_ext() const
{
    return mDebugUtilsMessengerCreateInfoEXT;
}

void ManagedDebugUtilsMessengerEXT::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
ManagedDeferredOperationKHR::ManagedDeferredOperationKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDeferredOperationKHR(*device, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
             = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

ManagedDeferredOperationKHR::~ManagedDeferredOperationKHR()
{
    reset();
}

VkObjectType ManagedDeferredOperationKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedDeferredOperationKHR::get_device() const
{
    return mDevice;
}

void ManagedDeferredOperationKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDescriptorPool::ManagedDescriptorPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorPoolCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDescriptorPool::~ManagedDescriptorPool()
{
    reset();
}

VkObjectType ManagedDescriptorPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedDescriptorPool::get_device() const
{
    return mDevice;
}

const Managed<VkDescriptorPoolCreateInfo>& ManagedDescriptorPool::get_descriptor_pool_create_info() const
{
    return mDescriptorPoolCreateInfo;
}

void ManagedDescriptorPool::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDescriptorSet::ManagedDescriptorSet(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo)
{
    reset();
    if ( && pCreateInfo) {
        mResult = dst_vk(vkAllocateDescriptorSets(device, pAllocateInfo, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mDescriptorSetAllocateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDescriptorSet::~ManagedDescriptorSet()
{
    reset();
}

VkObjectType ManagedDescriptorSet::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDescriptorPool>>& ManagedDescriptorSet::get_descriptor_pool() const
{
    return mDescriptorPool;
}

const Managed<VkDescriptorSetAllocateInfo>& ManagedDescriptorSet::get_descriptor_set_allocate_info() const
{
    return mDescriptorSetAllocateInfo;
}

void ManagedDescriptorSet::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDescriptorSetLayout::ManagedDescriptorSetLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorSetLayout(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorSetLayoutCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDescriptorSetLayout::~ManagedDescriptorSetLayout()
{
    reset();
}

VkObjectType ManagedDescriptorSetLayout::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedDescriptorSetLayout::get_device() const
{
    return mDevice;
}

const Managed<VkDescriptorSetLayoutCreateInfo>& ManagedDescriptorSetLayout::get_descriptor_set_layout_create_info() const
{
    return mDescriptorSetLayoutCreateInfo;
}

void ManagedDescriptorSetLayout::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDescriptorUpdateTemplate::ManagedDescriptorUpdateTemplate(const std::shared_ptr<Managed<VkDevice>>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateDescriptorUpdateTemplate(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mDescriptorUpdateTemplateCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDescriptorUpdateTemplate::~ManagedDescriptorUpdateTemplate()
{
    reset();
}

VkObjectType ManagedDescriptorUpdateTemplate::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedDescriptorUpdateTemplate::get_device() const
{
    return mDevice;
}

const Managed<VkDescriptorUpdateTemplateCreateInfo>& ManagedDescriptorUpdateTemplate::get_descriptor_update_template_create_info() const
{
    return mDescriptorUpdateTemplateCreateInfo;
}

void ManagedDescriptorUpdateTemplate::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDescriptorUpdateTemplateKHR::~ManagedDescriptorUpdateTemplateKHR()
{
    reset();
}

VkObjectType ManagedDescriptorUpdateTemplateKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

void ManagedDescriptorUpdateTemplateKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDevice::ManagedDevice(const std::shared_ptr<Managed<VkPhysicalDevice>>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (physicalDevice && pCreateInfo) {
        mResult = dst_vk(vkCreateDevice(*physicalDevice, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mPhysicalDevice = physicalDevice;
            mDeviceCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDevice::~ManagedDevice()
{
    reset();
}

VkObjectType ManagedDevice::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkPhysicalDevice>>& ManagedDevice::get_physical_device() const
{
    return mPhysicalDevice;
}

const Managed<VkDeviceCreateInfo>& ManagedDevice::get_device_create_info() const
{
    return mDeviceCreateInfo;
}

void ManagedDevice::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDeviceMemory::ManagedDeviceMemory(const std::shared_ptr<Managed<VkDevice>>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkAllocateMemory(*device, pAllocateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mMemoryAllocateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDeviceMemory::~ManagedDeviceMemory()
{
    reset();
}

VkObjectType ManagedDeviceMemory::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedDeviceMemory::get_device() const
{
    return mDevice;
}

const Managed<VkMemoryAllocateInfo>& ManagedDeviceMemory::get_memory_allocate_info() const
{
    return mMemoryAllocateInfo;
}

void ManagedDeviceMemory::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDisplayKHR::~ManagedDisplayKHR()
{
    reset();
}

VkObjectType ManagedDisplayKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkPhysicalDevice>>& ManagedDisplayKHR::get_physical_device() const
{
    return mPhysicalDevice;
}

void ManagedDisplayKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedDisplayModeKHR::ManagedDisplayModeKHR(VkPhysicalDevice physicalDevice, const std::shared_ptr<Managed<VkDisplayKHR>>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (display && pCreateInfo) {
        mResult = dst_vk(vkCreateDisplayModeKHR(physicalDevice, *display, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDisplayKHR = display;
            mDisplayModeCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedDisplayModeKHR::~ManagedDisplayModeKHR()
{
    reset();
}

VkObjectType ManagedDisplayModeKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDisplayKHR>>& ManagedDisplayModeKHR::get_display_khr() const
{
    return mDisplayKHR;
}

const Managed<VkDisplayModeCreateInfoKHR>& ManagedDisplayModeKHR::get_display_mode_create_info_khr() const
{
    return mDisplayModeCreateInfoKHR;
}

void ManagedDisplayModeKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedEvent::ManagedEvent(const std::shared_ptr<Managed<VkDevice>>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateEvent(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mEventCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedEvent::~ManagedEvent()
{
    reset();
}

VkObjectType ManagedEvent::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedEvent::get_device() const
{
    return mDevice;
}

const Managed<VkEventCreateInfo>& ManagedEvent::get_event_create_info() const
{
    return mEventCreateInfo;
}

void ManagedEvent::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedFence::ManagedFence(const std::shared_ptr<Managed<VkDevice>>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateFence(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mFenceCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedFence::~ManagedFence()
{
    reset();
}

VkObjectType ManagedFence::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedFence::get_device() const
{
    return mDevice;
}

const Managed<VkFenceCreateInfo>& ManagedFence::get_fence_create_info() const
{
    return mFenceCreateInfo;
}

void ManagedFence::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedFramebuffer::ManagedFramebuffer(const std::shared_ptr<Managed<VkDevice>>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateFramebuffer(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mFramebufferCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedFramebuffer::~ManagedFramebuffer()
{
    reset();
}

VkObjectType ManagedFramebuffer::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedFramebuffer::get_device() const
{
    return mDevice;
}

const Managed<VkFramebufferCreateInfo>& ManagedFramebuffer::get_framebuffer_create_info() const
{
    return mFramebufferCreateInfo;
}

void ManagedFramebuffer::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedImage::ManagedImage(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateImage(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mImageCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedImage::~ManagedImage()
{
    reset();
}

VkObjectType ManagedImage::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedImage::get_device() const
{
    return mDevice;
}

const Managed<VkImageCreateInfo>& ManagedImage::get_image_create_info() const
{
    return mImageCreateInfo;
}

void ManagedImage::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedImageView::ManagedImageView(const std::shared_ptr<Managed<VkDevice>>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateImageView(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mImageViewCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedImageView::~ManagedImageView()
{
    reset();
}

VkObjectType ManagedImageView::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedImageView::get_device() const
{
    return mDevice;
}

const Managed<VkImageViewCreateInfo>& ManagedImageView::get_image_view_create_info() const
{
    return mImageViewCreateInfo;
}

void ManagedImageView::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedIndirectCommandsLayoutNV::ManagedIndirectCommandsLayoutNV(const std::shared_ptr<Managed<VkDevice>>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateIndirectCommandsLayoutNV(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mIndirectCommandsLayoutCreateInfoNV = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedIndirectCommandsLayoutNV::~ManagedIndirectCommandsLayoutNV()
{
    reset();
}

VkObjectType ManagedIndirectCommandsLayoutNV::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedIndirectCommandsLayoutNV::get_device() const
{
    return mDevice;
}

const Managed<VkIndirectCommandsLayoutCreateInfoNV>& ManagedIndirectCommandsLayoutNV::get_indirect_commands_layout_create_info_nv() const
{
    return mIndirectCommandsLayoutCreateInfoNV;
}

void ManagedIndirectCommandsLayoutNV::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedInstance::ManagedInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if ( && pCreateInfo) {
        mResult = dst_vk(vkCreateInstance(pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
             = ;
            mInstanceCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedInstance::~ManagedInstance()
{
    reset();
}

VkObjectType ManagedInstance::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const Managed<VkInstanceCreateInfo>& ManagedInstance::get_instance_create_info() const
{
    return mInstanceCreateInfo;
}

void ManagedInstance::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedPerformanceConfigurationINTEL::~ManagedPerformanceConfigurationINTEL()
{
    reset();
}

VkObjectType ManagedPerformanceConfigurationINTEL::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedPerformanceConfigurationINTEL::get_device() const
{
    return mDevice;
}

void ManagedPerformanceConfigurationINTEL::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedPhysicalDevice::~ManagedPhysicalDevice()
{
    reset();
}

VkObjectType ManagedPhysicalDevice::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& ManagedPhysicalDevice::get_instance() const
{
    return mInstance;
}

void ManagedPhysicalDevice::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedPipeline::ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateComputePipelines(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mComputePipelineCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedPipeline::ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateGraphicsPipelines(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mGraphicsPipelineCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
ManagedPipeline::ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRayTracingPipelinesKHR(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRayTracingPipelineCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_ENABLE_BETA_EXTENSIONS

ManagedPipeline::ManagedPipeline(const std::shared_ptr<Managed<VkDevice>>& device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRayTracingPipelinesNV(*device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRayTracingPipelineCreateInfoNV = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedPipeline::~ManagedPipeline()
{
    reset();
}

VkObjectType ManagedPipeline::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedPipeline::get_device() const
{
    return mDevice;
}

const Managed<VkComputePipelineCreateInfo>& ManagedPipeline::get_compute_pipeline_create_info() const
{
    return mComputePipelineCreateInfo;
}

const Managed<VkGraphicsPipelineCreateInfo>& ManagedPipeline::get_graphics_pipeline_create_info() const
{
    return mGraphicsPipelineCreateInfo;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
const Managed<VkRayTracingPipelineCreateInfoKHR>& ManagedPipeline::get_ray_tracing_pipeline_create_info_khr() const
{
    return mRayTracingPipelineCreateInfoKHR;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

const Managed<VkRayTracingPipelineCreateInfoNV>& ManagedPipeline::get_ray_tracing_pipeline_create_info_nv() const
{
    return mRayTracingPipelineCreateInfoNV;
}

void ManagedPipeline::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedPipelineCache::ManagedPipelineCache(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreatePipelineCache(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mPipelineCacheCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedPipelineCache::~ManagedPipelineCache()
{
    reset();
}

VkObjectType ManagedPipelineCache::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedPipelineCache::get_device() const
{
    return mDevice;
}

const Managed<VkPipelineCacheCreateInfo>& ManagedPipelineCache::get_pipeline_cache_create_info() const
{
    return mPipelineCacheCreateInfo;
}

void ManagedPipelineCache::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedPipelineLayout::ManagedPipelineLayout(const std::shared_ptr<Managed<VkDevice>>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreatePipelineLayout(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mPipelineLayoutCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedPipelineLayout::~ManagedPipelineLayout()
{
    reset();
}

VkObjectType ManagedPipelineLayout::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedPipelineLayout::get_device() const
{
    return mDevice;
}

const Managed<VkPipelineLayoutCreateInfo>& ManagedPipelineLayout::get_pipeline_layout_create_info() const
{
    return mPipelineLayoutCreateInfo;
}

void ManagedPipelineLayout::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedQueryPool::ManagedQueryPool(const std::shared_ptr<Managed<VkDevice>>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateQueryPool(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mQueryPoolCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedQueryPool::~ManagedQueryPool()
{
    reset();
}

VkObjectType ManagedQueryPool::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedQueryPool::get_device() const
{
    return mDevice;
}

const Managed<VkQueryPoolCreateInfo>& ManagedQueryPool::get_query_pool_create_info() const
{
    return mQueryPoolCreateInfo;
}

void ManagedQueryPool::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedQueue::~ManagedQueue()
{
    reset();
}

VkObjectType ManagedQueue::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedQueue::get_device() const
{
    return mDevice;
}

void ManagedQueue::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedRenderPass::ManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRenderPass(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRenderPassCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedRenderPass::ManagedRenderPass(const std::shared_ptr<Managed<VkDevice>>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateRenderPass2(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mRenderPassCreateInfo2 = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedRenderPass::~ManagedRenderPass()
{
    reset();
}

VkObjectType ManagedRenderPass::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedRenderPass::get_device() const
{
    return mDevice;
}

const Managed<VkRenderPassCreateInfo>& ManagedRenderPass::get_render_pass_create_info() const
{
    return mRenderPassCreateInfo;
}

const Managed<VkRenderPassCreateInfo2>& ManagedRenderPass::get_render_pass_create_info2() const
{
    return mRenderPassCreateInfo2;
}

void ManagedRenderPass::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedSampler::ManagedSampler(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSampler(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSamplerCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSampler::~ManagedSampler()
{
    reset();
}

VkObjectType ManagedSampler::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedSampler::get_device() const
{
    return mDevice;
}

const Managed<VkSamplerCreateInfo>& ManagedSampler::get_sampler_create_info() const
{
    return mSamplerCreateInfo;
}

void ManagedSampler::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedSamplerYcbcrConversion::ManagedSamplerYcbcrConversion(const std::shared_ptr<Managed<VkDevice>>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSamplerYcbcrConversion(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSamplerYcbcrConversionCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSamplerYcbcrConversion::~ManagedSamplerYcbcrConversion()
{
    reset();
}

VkObjectType ManagedSamplerYcbcrConversion::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedSamplerYcbcrConversion::get_device() const
{
    return mDevice;
}

const Managed<VkSamplerYcbcrConversionCreateInfo>& ManagedSamplerYcbcrConversion::get_sampler_ycbcr_conversion_create_info() const
{
    return mSamplerYcbcrConversionCreateInfo;
}

void ManagedSamplerYcbcrConversion::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedSamplerYcbcrConversionKHR::~ManagedSamplerYcbcrConversionKHR()
{
    reset();
}

VkObjectType ManagedSamplerYcbcrConversionKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

void ManagedSamplerYcbcrConversionKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedSemaphore::ManagedSemaphore(const std::shared_ptr<Managed<VkDevice>>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSemaphore(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSemaphoreCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSemaphore::~ManagedSemaphore()
{
    reset();
}

VkObjectType ManagedSemaphore::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedSemaphore::get_device() const
{
    return mDevice;
}

const Managed<VkSemaphoreCreateInfo>& ManagedSemaphore::get_semaphore_create_info() const
{
    return mSemaphoreCreateInfo;
}

void ManagedSemaphore::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedShaderModule::ManagedShaderModule(const std::shared_ptr<Managed<VkDevice>>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateShaderModule(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mShaderModuleCreateInfo = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedShaderModule::~ManagedShaderModule()
{
    reset();
}

VkObjectType ManagedShaderModule::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedShaderModule::get_device() const
{
    return mDevice;
}

const Managed<VkShaderModuleCreateInfo>& ManagedShaderModule::get_shader_module_create_info() const
{
    return mShaderModuleCreateInfo;
}

void ManagedShaderModule::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateAndroidSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mAndroidSurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateDisplayPlaneSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mDisplaySurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateHeadlessSurfaceEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mHeadlessSurfaceCreateInfoEXT = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

#ifdef VK_USE_PLATFORM_IOS_MVK
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateIOSSurfaceMVK(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mIOSSurfaceCreateInfoMVK = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateImagePipeSurfaceFUCHSIA(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mImagePipeSurfaceCreateInfoFUCHSIA = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateMacOSSurfaceMVK(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mMacOSSurfaceCreateInfoMVK = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateMetalSurfaceEXT(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mMetalSurfaceCreateInfoEXT = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateStreamDescriptorSurfaceGGP(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mStreamDescriptorSurfaceCreateInfoGGP = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateViSurfaceNN(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mViSurfaceCreateInfoNN = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateWaylandSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mWaylandSurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateWin32SurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mWin32SurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateXcbSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mXcbSurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
ManagedSurfaceKHR::ManagedSurfaceKHR(const std::shared_ptr<Managed<VkInstance>>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (instance && pCreateInfo) {
        mResult = dst_vk(vkCreateXlibSurfaceKHR(*instance, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mInstance = instance;
            mXlibSurfaceCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}
#endif // VK_USE_PLATFORM_XLIB_KHR

ManagedSurfaceKHR::~ManagedSurfaceKHR()
{
    reset();
}

VkObjectType ManagedSurfaceKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkInstance>>& ManagedSurfaceKHR::get_instance() const
{
    return mInstance;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
const Managed<VkAndroidSurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_android_surface_create_info_khr() const
{
    return mAndroidSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

const Managed<VkDisplaySurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_display_surface_create_info_khr() const
{
    return mDisplaySurfaceCreateInfoKHR;
}

const Managed<VkHeadlessSurfaceCreateInfoEXT>& ManagedSurfaceKHR::get_headless_surface_create_info_ext() const
{
    return mHeadlessSurfaceCreateInfoEXT;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
const Managed<VkIOSSurfaceCreateInfoMVK>& ManagedSurfaceKHR::get_ios_surface_create_info_mvk() const
{
    return mIOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& ManagedSurfaceKHR::get_image_pipe_surface_create_info_fuchsia() const
{
    return mImagePipeSurfaceCreateInfoFUCHSIA;
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
const Managed<VkMacOSSurfaceCreateInfoMVK>& ManagedSurfaceKHR::get_mac_os_surface_create_info_mvk() const
{
    return mMacOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
const Managed<VkMetalSurfaceCreateInfoEXT>& ManagedSurfaceKHR::get_metal_surface_create_info_ext() const
{
    return mMetalSurfaceCreateInfoEXT;
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& ManagedSurfaceKHR::get_stream_descriptor_surface_create_info_ggp() const
{
    return mStreamDescriptorSurfaceCreateInfoGGP;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
const Managed<VkViSurfaceCreateInfoNN>& ManagedSurfaceKHR::get_vi_surface_create_info_nn() const
{
    return mViSurfaceCreateInfoNN;
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
const Managed<VkWaylandSurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_wayland_surface_create_info_khr() const
{
    return mWaylandSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
const Managed<VkWin32SurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_win32_surface_create_info_khr() const
{
    return mWin32SurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
const Managed<VkXcbSurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_xcb_surface_create_info_khr() const
{
    return mXcbSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
const Managed<VkXlibSurfaceCreateInfoKHR>& ManagedSurfaceKHR::get_xlib_surface_create_info_khr() const
{
    return mXlibSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void ManagedSurfaceKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedSwapchainKHR::ManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSharedSwapchainsKHR(*device, swapchainCount, pCreateInfos, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSwapchainCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSwapchainKHR::ManagedSwapchainKHR(const std::shared_ptr<Managed<VkDevice>>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateSwapchainKHR(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mSwapchainCreateInfoKHR = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedSwapchainKHR::~ManagedSwapchainKHR()
{
    reset();
}

VkObjectType ManagedSwapchainKHR::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedSwapchainKHR::get_device() const
{
    return mDevice;
}

const std::shared_ptr<Managed<VkSurfaceKHR>>& ManagedSwapchainKHR::get_surface_khr() const
{
    return mSurfaceKHR;
}

const Managed<VkSwapchainCreateInfoKHR>& ManagedSwapchainKHR::get_swapchain_create_info_khr() const
{
    return mSwapchainCreateInfoKHR;
}

void ManagedSwapchainKHR::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

ManagedValidationCacheEXT::ManagedValidationCacheEXT(const std::shared_ptr<Managed<VkDevice>>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator)
{
    reset();
    if (device && pCreateInfo) {
        mResult = dst_vk(vkCreateValidationCacheEXT(*device, pCreateInfo, pAllocator, &mHandle));
        if (mResult == VK_SUCCESS) {
            mDevice = device;
            mValidationCacheCreateInfoEXT = *pCreateInfo;
            if (pAllocator) {
                assert(pAllocator->pfnAllocation);
                assert(pAllocator->pfnReallocation);
                assert(pAllocator->pfnFree);
                assert(pAllocator->pfnInternalAllocation);
                assert(pAllocator->pfnInternalFree);
                mAllocationCallbacks = *pAllocator;
            }
        }
    } else {
        mResult = VK_ERROR_INITIALIZATION_FAILED;
    }
}

ManagedValidationCacheEXT::~ManagedValidationCacheEXT()
{
    reset();
}

VkObjectType ManagedValidationCacheEXT::get_object_type() const
{
    return VK_OBJECT_TYPE_UNKNOWN; // TODO : Parse VkObjectType from xml..
}

const std::shared_ptr<Managed<VkDevice>>& ManagedValidationCacheEXT::get_device() const
{
    return mDevice;
}

const Managed<VkValidationCacheCreateInfoEXT>& ManagedValidationCacheEXT::get_validation_cache_create_info_ext() const
{
    return mValidationCacheCreateInfoEXT;
}

void ManagedValidationCacheEXT::reset()
{
    #if 0
    if (mHandle) {
        assert(${PARENT_HANDLE});
        auto pAllocator =
            mAllocationCallbacks.pfnAllocation &&
            mAllocationCallbacks.pfnReallocation &&
            mAllocationCallbacks.pfnFree &&
            mAllocationCallbacks.pfnInternalAllocation &&
            mAllocationCallbacks.pfnInternalFree ?
            &mAllocationCallbacks:
            nullptr;                
        ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
    }
    #endif
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
