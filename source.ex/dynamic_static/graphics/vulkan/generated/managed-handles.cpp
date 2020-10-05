
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
namespace vk {

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedVkAccelerationStructureKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyAccelerationStructureKHR(device.get<VkDevice>(), vkAccelerationStructure, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkAccelerationStructureKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkAccelerationStructureCreateInfoKHR> AccelerationStructureCreateInfoKHR;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    VkAllocationCallbacks allocator { };
    BasicManagedVkAccelerationStructureKHR(const BasicManagedVkAccelerationStructureKHR&) = delete;
    BasicManagedVkAccelerationStructureKHR& operator=(const BasicManagedVkAccelerationStructureKHR&) = delete;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
VkResult BasicManagedVkAccelerationStructureKHR::create(const Managed<VkDevice>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkAccelerationStructureKHR>* pAccelerationStructure)
{
    #if 0
    VkAccelerationStructureKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

BasicManagedVkAccelerationStructureKHR::~BasicManagedVkAccelerationStructureKHR()
{
}

template <>
const VkAccelerationStructureKHR& get<VkAccelerationStructureKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkAccelerationStructureKHR_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkAccelerationStructureKHR::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
const Managed<VkAccelerationStructureCreateInfoKHR>& BasicManagedVkAccelerationStructureKHR::get<Managed<VkAccelerationStructureCreateInfoKHR>>() const
{
    // TODO : Return Default<VkAccelerationStructureCreateInfoKHR>...
    static const Managed<VkAccelerationStructureCreateInfoKHR> sEmptyManagedVkAccelerationStructureCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->AccelerationStructureCreateInfoKHR : sEmptyManagedVkAccelerationStructureCreateInfoKHR;
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // VK_ENABLE_BETA_EXTENSIONS


class BasicManagedVkBuffer::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyBuffer(device.get<VkDevice>(), vkBuffer, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkBuffer vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkBufferCreateInfo> BufferCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkBuffer(const BasicManagedVkBuffer&) = delete;
    BasicManagedVkBuffer& operator=(const BasicManagedVkBuffer&) = delete;
};

VkResult BasicManagedVkBuffer::create(const Managed<VkDevice>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBuffer>* pBuffer)
{
    #if 0
    VkBuffer handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkBuffer::~BasicManagedVkBuffer()
{
}

template <>
const VkBuffer& get<VkBuffer>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkBuffer_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkBuffer::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkBufferCreateInfo>& BasicManagedVkBuffer::get<Managed<VkBufferCreateInfo>>() const
{
    // TODO : Return Default<VkBufferCreateInfo>...
    static const Managed<VkBufferCreateInfo> sEmptyManagedVkBufferCreateInfo;
    return mspControlBlock ? mspControlBlock->BufferCreateInfo : sEmptyManagedVkBufferCreateInfo;
}

class BasicManagedVkBufferView::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyBufferView(device.get<VkDevice>(), vkBufferView, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkBufferView vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkBufferViewCreateInfo> BufferViewCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkBufferView(const BasicManagedVkBufferView&) = delete;
    BasicManagedVkBufferView& operator=(const BasicManagedVkBufferView&) = delete;
};

VkResult BasicManagedVkBufferView::create(const Managed<VkDevice>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBufferView>* pView)
{
    #if 0
    VkBufferView handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateBufferView(device, pCreateInfo, pAllocator, pView));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkBufferView::~BasicManagedVkBufferView()
{
}

template <>
const VkBufferView& get<VkBufferView>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkBufferView_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkBufferView::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkBufferViewCreateInfo>& BasicManagedVkBufferView::get<Managed<VkBufferViewCreateInfo>>() const
{
    // TODO : Return Default<VkBufferViewCreateInfo>...
    static const Managed<VkBufferViewCreateInfo> sEmptyManagedVkBufferViewCreateInfo;
    return mspControlBlock ? mspControlBlock->BufferViewCreateInfo : sEmptyManagedVkBufferViewCreateInfo;
}

class BasicManagedVkCommandBuffer::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkCommandPool);
        #endif
    }

    VkCommandBuffer vkHandle { VK_NULL_HANDLE };
    Managed<VkCommandPool> parentVkCommandPool;
    Managed<VkCommandBufferAllocateInfo> CommandBufferAllocateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkCommandBuffer(const BasicManagedVkCommandBuffer&) = delete;
    BasicManagedVkCommandBuffer& operator=(const BasicManagedVkCommandBuffer&) = delete;
};

VkResult BasicManagedVkCommandBuffer::create(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers)
{
    #if 0
    VkCommandBuffer handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkCommandBuffer::~BasicManagedVkCommandBuffer()
{
}

template <>
const VkCommandBuffer& get<VkCommandBuffer>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkCommandBuffer_TODO;
}


template <>
const Managed<VkCommandPool>& BasicManagedVkCommandBuffer::get<Managed<VkCommandPool>>() const
{
    static const Managed<VkCommandPool> sNullManagedVkCommandPool;
    return mspControlBlock ? mspControlBlock->parentVkCommandPool : sNullManagedVkCommandPool;
}

template <>
const Managed<VkCommandBufferAllocateInfo>& BasicManagedVkCommandBuffer::get<Managed<VkCommandBufferAllocateInfo>>() const
{
    // TODO : Return Default<VkCommandBufferAllocateInfo>...
    static const Managed<VkCommandBufferAllocateInfo> sEmptyManagedVkCommandBufferAllocateInfo;
    return mspControlBlock ? mspControlBlock->CommandBufferAllocateInfo : sEmptyManagedVkCommandBufferAllocateInfo;
}

class BasicManagedVkCommandPool::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyCommandPool(device.get<VkDevice>(), vkCommandPool, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkCommandPool vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkCommandPoolCreateInfo> CommandPoolCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkCommandPool(const BasicManagedVkCommandPool&) = delete;
    BasicManagedVkCommandPool& operator=(const BasicManagedVkCommandPool&) = delete;
};

VkResult BasicManagedVkCommandPool::create(const Managed<VkDevice>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkCommandPool>* pCommandPool)
{
    #if 0
    VkCommandPool handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkCommandPool::~BasicManagedVkCommandPool()
{
}

template <>
const VkCommandPool& get<VkCommandPool>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkCommandPool_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkCommandPool::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkCommandPoolCreateInfo>& BasicManagedVkCommandPool::get<Managed<VkCommandPoolCreateInfo>>() const
{
    // TODO : Return Default<VkCommandPoolCreateInfo>...
    static const Managed<VkCommandPoolCreateInfo> sEmptyManagedVkCommandPoolCreateInfo;
    return mspControlBlock ? mspControlBlock->CommandPoolCreateInfo : sEmptyManagedVkCommandPoolCreateInfo;
}

class BasicManagedVkDebugReportCallbackEXT::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkInstance);
        vkDestroyDebugReportCallbackEXT(instance.get<VkInstance>(), vkCallback, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDebugReportCallbackEXT vkHandle { VK_NULL_HANDLE };
    Managed<VkInstance> parentVkInstance;
    Managed<VkDebugReportCallbackCreateInfoEXT> DebugReportCallbackCreateInfoEXT;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDebugReportCallbackEXT(const BasicManagedVkDebugReportCallbackEXT&) = delete;
    BasicManagedVkDebugReportCallbackEXT& operator=(const BasicManagedVkDebugReportCallbackEXT&) = delete;
};

VkResult BasicManagedVkDebugReportCallbackEXT::create(const Managed<VkInstance>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDebugReportCallbackEXT>* pCallback)
{
    #if 0
    VkDebugReportCallbackEXT handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDebugReportCallbackEXT::~BasicManagedVkDebugReportCallbackEXT()
{
}

template <>
const VkDebugReportCallbackEXT& get<VkDebugReportCallbackEXT>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDebugReportCallbackEXT_TODO;
}


template <>
const Managed<VkInstance>& BasicManagedVkDebugReportCallbackEXT::get<Managed<VkInstance>>() const
{
    static const Managed<VkInstance> sNullManagedVkInstance;
    return mspControlBlock ? mspControlBlock->parentVkInstance : sNullManagedVkInstance;
}

template <>
const Managed<VkDebugReportCallbackCreateInfoEXT>& BasicManagedVkDebugReportCallbackEXT::get<Managed<VkDebugReportCallbackCreateInfoEXT>>() const
{
    // TODO : Return Default<VkDebugReportCallbackCreateInfoEXT>...
    static const Managed<VkDebugReportCallbackCreateInfoEXT> sEmptyManagedVkDebugReportCallbackCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->DebugReportCallbackCreateInfoEXT : sEmptyManagedVkDebugReportCallbackCreateInfoEXT;
}

class BasicManagedVkDebugUtilsMessengerEXT::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkInstance);
        vkDestroyDebugUtilsMessengerEXT(instance.get<VkInstance>(), vkMessenger, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDebugUtilsMessengerEXT vkHandle { VK_NULL_HANDLE };
    Managed<VkInstance> parentVkInstance;
    Managed<VkDebugUtilsMessengerCreateInfoEXT> DebugUtilsMessengerCreateInfoEXT;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDebugUtilsMessengerEXT(const BasicManagedVkDebugUtilsMessengerEXT&) = delete;
    BasicManagedVkDebugUtilsMessengerEXT& operator=(const BasicManagedVkDebugUtilsMessengerEXT&) = delete;
};

VkResult BasicManagedVkDebugUtilsMessengerEXT::create(const Managed<VkInstance>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDebugUtilsMessengerEXT>* pMessenger)
{
    #if 0
    VkDebugUtilsMessengerEXT handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDebugUtilsMessengerEXT::~BasicManagedVkDebugUtilsMessengerEXT()
{
}

template <>
const VkDebugUtilsMessengerEXT& get<VkDebugUtilsMessengerEXT>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDebugUtilsMessengerEXT_TODO;
}


template <>
const Managed<VkInstance>& BasicManagedVkDebugUtilsMessengerEXT::get<Managed<VkInstance>>() const
{
    static const Managed<VkInstance> sNullManagedVkInstance;
    return mspControlBlock ? mspControlBlock->parentVkInstance : sNullManagedVkInstance;
}

template <>
const Managed<VkDebugUtilsMessengerCreateInfoEXT>& BasicManagedVkDebugUtilsMessengerEXT::get<Managed<VkDebugUtilsMessengerCreateInfoEXT>>() const
{
    // TODO : Return Default<VkDebugUtilsMessengerCreateInfoEXT>...
    static const Managed<VkDebugUtilsMessengerCreateInfoEXT> sEmptyManagedVkDebugUtilsMessengerCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->DebugUtilsMessengerCreateInfoEXT : sEmptyManagedVkDebugUtilsMessengerCreateInfoEXT;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedVkDeferredOperationKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyDeferredOperationKHR(device.get<VkDevice>(), vkOperation, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDeferredOperationKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDeferredOperationKHR(const BasicManagedVkDeferredOperationKHR&) = delete;
    BasicManagedVkDeferredOperationKHR& operator=(const BasicManagedVkDeferredOperationKHR&) = delete;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
VkResult BasicManagedVkDeferredOperationKHR::create(const Managed<VkDevice>& device, const VkAllocationCallbacks* pAllocator, Managed<VkDeferredOperationKHR>* pDeferredOperation)
{
    #if 0
    VkDeferredOperationKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDeferredOperationKHR(device, pAllocator, pDeferredOperation));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

BasicManagedVkDeferredOperationKHR::~BasicManagedVkDeferredOperationKHR()
{
}

template <>
const VkDeferredOperationKHR& get<VkDeferredOperationKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDeferredOperationKHR_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkDeferredOperationKHR::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

class BasicManagedVkDescriptorPool::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyDescriptorPool(device.get<VkDevice>(), vkDescriptorPool, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDescriptorPool vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkDescriptorPoolCreateInfo> DescriptorPoolCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDescriptorPool(const BasicManagedVkDescriptorPool&) = delete;
    BasicManagedVkDescriptorPool& operator=(const BasicManagedVkDescriptorPool&) = delete;
};

VkResult BasicManagedVkDescriptorPool::create(const Managed<VkDevice>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorPool>* pDescriptorPool)
{
    #if 0
    VkDescriptorPool handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDescriptorPool::~BasicManagedVkDescriptorPool()
{
}

template <>
const VkDescriptorPool& get<VkDescriptorPool>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDescriptorPool_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkDescriptorPool::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkDescriptorPoolCreateInfo>& BasicManagedVkDescriptorPool::get<Managed<VkDescriptorPoolCreateInfo>>() const
{
    // TODO : Return Default<VkDescriptorPoolCreateInfo>...
    static const Managed<VkDescriptorPoolCreateInfo> sEmptyManagedVkDescriptorPoolCreateInfo;
    return mspControlBlock ? mspControlBlock->DescriptorPoolCreateInfo : sEmptyManagedVkDescriptorPoolCreateInfo;
}

class BasicManagedVkDescriptorSet::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDescriptorPool);
        #endif
    }

    VkDescriptorSet vkHandle { VK_NULL_HANDLE };
    Managed<VkDescriptorPool> parentVkDescriptorPool;
    Managed<VkDescriptorSetAllocateInfo> DescriptorSetAllocateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDescriptorSet(const BasicManagedVkDescriptorSet&) = delete;
    BasicManagedVkDescriptorSet& operator=(const BasicManagedVkDescriptorSet&) = delete;
};

VkResult BasicManagedVkDescriptorSet::create(const Managed<VkDevice>& device, const VkDescriptorSetAllocateInfo* pAllocateInfo, Managed<VkDescriptorSet>* pDescriptorSets)
{
    #if 0
    VkDescriptorSet handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDescriptorSet::~BasicManagedVkDescriptorSet()
{
}

template <>
const VkDescriptorSet& get<VkDescriptorSet>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDescriptorSet_TODO;
}


template <>
const Managed<VkDescriptorPool>& BasicManagedVkDescriptorSet::get<Managed<VkDescriptorPool>>() const
{
    static const Managed<VkDescriptorPool> sNullManagedVkDescriptorPool;
    return mspControlBlock ? mspControlBlock->parentVkDescriptorPool : sNullManagedVkDescriptorPool;
}

template <>
const Managed<VkDescriptorSetAllocateInfo>& BasicManagedVkDescriptorSet::get<Managed<VkDescriptorSetAllocateInfo>>() const
{
    // TODO : Return Default<VkDescriptorSetAllocateInfo>...
    static const Managed<VkDescriptorSetAllocateInfo> sEmptyManagedVkDescriptorSetAllocateInfo;
    return mspControlBlock ? mspControlBlock->DescriptorSetAllocateInfo : sEmptyManagedVkDescriptorSetAllocateInfo;
}

class BasicManagedVkDescriptorSetLayout::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyDescriptorSetLayout(device.get<VkDevice>(), vkDescriptorSetLayout, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDescriptorSetLayout vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkDescriptorSetLayoutCreateInfo> DescriptorSetLayoutCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDescriptorSetLayout(const BasicManagedVkDescriptorSetLayout&) = delete;
    BasicManagedVkDescriptorSetLayout& operator=(const BasicManagedVkDescriptorSetLayout&) = delete;
};

VkResult BasicManagedVkDescriptorSetLayout::create(const Managed<VkDevice>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorSetLayout>* pSetLayout)
{
    #if 0
    VkDescriptorSetLayout handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDescriptorSetLayout::~BasicManagedVkDescriptorSetLayout()
{
}

template <>
const VkDescriptorSetLayout& get<VkDescriptorSetLayout>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDescriptorSetLayout_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkDescriptorSetLayout::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkDescriptorSetLayoutCreateInfo>& BasicManagedVkDescriptorSetLayout::get<Managed<VkDescriptorSetLayoutCreateInfo>>() const
{
    // TODO : Return Default<VkDescriptorSetLayoutCreateInfo>...
    static const Managed<VkDescriptorSetLayoutCreateInfo> sEmptyManagedVkDescriptorSetLayoutCreateInfo;
    return mspControlBlock ? mspControlBlock->DescriptorSetLayoutCreateInfo : sEmptyManagedVkDescriptorSetLayoutCreateInfo;
}

class BasicManagedVkDescriptorUpdateTemplate::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyDescriptorUpdateTemplate(device.get<VkDevice>(), vkDescriptorUpdateTemplate, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDescriptorUpdateTemplate vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkDescriptorUpdateTemplateCreateInfo> DescriptorUpdateTemplateCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDescriptorUpdateTemplate(const BasicManagedVkDescriptorUpdateTemplate&) = delete;
    BasicManagedVkDescriptorUpdateTemplate& operator=(const BasicManagedVkDescriptorUpdateTemplate&) = delete;
};

VkResult BasicManagedVkDescriptorUpdateTemplate::create(const Managed<VkDevice>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    #if 0
    VkDescriptorUpdateTemplate handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDescriptorUpdateTemplate::~BasicManagedVkDescriptorUpdateTemplate()
{
}

template <>
const VkDescriptorUpdateTemplate& get<VkDescriptorUpdateTemplate>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDescriptorUpdateTemplate_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkDescriptorUpdateTemplate::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkDescriptorUpdateTemplateCreateInfo>& BasicManagedVkDescriptorUpdateTemplate::get<Managed<VkDescriptorUpdateTemplateCreateInfo>>() const
{
    // TODO : Return Default<VkDescriptorUpdateTemplateCreateInfo>...
    static const Managed<VkDescriptorUpdateTemplateCreateInfo> sEmptyManagedVkDescriptorUpdateTemplateCreateInfo;
    return mspControlBlock ? mspControlBlock->DescriptorUpdateTemplateCreateInfo : sEmptyManagedVkDescriptorUpdateTemplateCreateInfo;
}


class BasicManagedVkDevice::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkPhysicalDevice);
        vkDestroyDevice(vkDevice, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDevice vkHandle { VK_NULL_HANDLE };
    Managed<VkPhysicalDevice> parentVkPhysicalDevice;
    Managed<VkDeviceCreateInfo> DeviceCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDevice(const BasicManagedVkDevice&) = delete;
    BasicManagedVkDevice& operator=(const BasicManagedVkDevice&) = delete;
};

VkResult BasicManagedVkDevice::create(const Managed<VkPhysicalDevice>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDevice>* pDevice)
{
    #if 0
    VkDevice handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDevice::~BasicManagedVkDevice()
{
}

template <>
const VkDevice& get<VkDevice>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDevice_TODO;
}


template <>
const Managed<VkPhysicalDevice>& BasicManagedVkDevice::get<Managed<VkPhysicalDevice>>() const
{
    static const Managed<VkPhysicalDevice> sNullManagedVkPhysicalDevice;
    return mspControlBlock ? mspControlBlock->parentVkPhysicalDevice : sNullManagedVkPhysicalDevice;
}

template <>
const Managed<VkDeviceCreateInfo>& BasicManagedVkDevice::get<Managed<VkDeviceCreateInfo>>() const
{
    // TODO : Return Default<VkDeviceCreateInfo>...
    static const Managed<VkDeviceCreateInfo> sEmptyManagedVkDeviceCreateInfo;
    return mspControlBlock ? mspControlBlock->DeviceCreateInfo : sEmptyManagedVkDeviceCreateInfo;
}

class BasicManagedVkDeviceMemory::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkFreeMemory(device.get<VkDevice>(), vkMemory, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkDeviceMemory vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkMemoryAllocateInfo> MemoryAllocateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDeviceMemory(const BasicManagedVkDeviceMemory&) = delete;
    BasicManagedVkDeviceMemory& operator=(const BasicManagedVkDeviceMemory&) = delete;
};

VkResult BasicManagedVkDeviceMemory::create(const Managed<VkDevice>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDeviceMemory>* pMemory)
{
    #if 0
    VkDeviceMemory handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDeviceMemory::~BasicManagedVkDeviceMemory()
{
}

template <>
const VkDeviceMemory& get<VkDeviceMemory>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDeviceMemory_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkDeviceMemory::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkMemoryAllocateInfo>& BasicManagedVkDeviceMemory::get<Managed<VkMemoryAllocateInfo>>() const
{
    // TODO : Return Default<VkMemoryAllocateInfo>...
    static const Managed<VkMemoryAllocateInfo> sEmptyManagedVkMemoryAllocateInfo;
    return mspControlBlock ? mspControlBlock->MemoryAllocateInfo : sEmptyManagedVkMemoryAllocateInfo;
}

class BasicManagedVkDisplayKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkPhysicalDevice);
        #endif
    }

    VkDisplayKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkPhysicalDevice> parentVkPhysicalDevice;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDisplayKHR(const BasicManagedVkDisplayKHR&) = delete;
    BasicManagedVkDisplayKHR& operator=(const BasicManagedVkDisplayKHR&) = delete;
};


BasicManagedVkDisplayKHR::~BasicManagedVkDisplayKHR()
{
}

template <>
const VkDisplayKHR& get<VkDisplayKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDisplayKHR_TODO;
}


template <>
const Managed<VkPhysicalDevice>& BasicManagedVkDisplayKHR::get<Managed<VkPhysicalDevice>>() const
{
    static const Managed<VkPhysicalDevice> sNullManagedVkPhysicalDevice;
    return mspControlBlock ? mspControlBlock->parentVkPhysicalDevice : sNullManagedVkPhysicalDevice;
}

class BasicManagedVkDisplayModeKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDisplayKHR);
        #endif
    }

    VkDisplayModeKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkDisplayKHR> parentVkDisplayKHR;
    Managed<VkDisplayModeCreateInfoKHR> DisplayModeCreateInfoKHR;
    VkAllocationCallbacks allocator { };
    BasicManagedVkDisplayModeKHR(const BasicManagedVkDisplayModeKHR&) = delete;
    BasicManagedVkDisplayModeKHR& operator=(const BasicManagedVkDisplayModeKHR&) = delete;
};

VkResult BasicManagedVkDisplayModeKHR::create(const Managed<VkPhysicalDevice>& physicalDevice, const Managed<VkDisplayKHR>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDisplayModeKHR>* pMode)
{
    #if 0
    VkDisplayModeKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkDisplayModeKHR::~BasicManagedVkDisplayModeKHR()
{
}

template <>
const VkDisplayModeKHR& get<VkDisplayModeKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkDisplayModeKHR_TODO;
}


template <>
const Managed<VkDisplayKHR>& BasicManagedVkDisplayModeKHR::get<Managed<VkDisplayKHR>>() const
{
    static const Managed<VkDisplayKHR> sNullManagedVkDisplayKHR;
    return mspControlBlock ? mspControlBlock->parentVkDisplayKHR : sNullManagedVkDisplayKHR;
}

template <>
const Managed<VkDisplayModeCreateInfoKHR>& BasicManagedVkDisplayModeKHR::get<Managed<VkDisplayModeCreateInfoKHR>>() const
{
    // TODO : Return Default<VkDisplayModeCreateInfoKHR>...
    static const Managed<VkDisplayModeCreateInfoKHR> sEmptyManagedVkDisplayModeCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->DisplayModeCreateInfoKHR : sEmptyManagedVkDisplayModeCreateInfoKHR;
}

class BasicManagedVkEvent::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyEvent(device.get<VkDevice>(), vkEvent, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkEvent vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkEventCreateInfo> EventCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkEvent(const BasicManagedVkEvent&) = delete;
    BasicManagedVkEvent& operator=(const BasicManagedVkEvent&) = delete;
};

VkResult BasicManagedVkEvent::create(const Managed<VkDevice>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkEvent>* pEvent)
{
    #if 0
    VkEvent handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateEvent(device, pCreateInfo, pAllocator, pEvent));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkEvent::~BasicManagedVkEvent()
{
}

template <>
const VkEvent& get<VkEvent>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkEvent_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkEvent::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkEventCreateInfo>& BasicManagedVkEvent::get<Managed<VkEventCreateInfo>>() const
{
    // TODO : Return Default<VkEventCreateInfo>...
    static const Managed<VkEventCreateInfo> sEmptyManagedVkEventCreateInfo;
    return mspControlBlock ? mspControlBlock->EventCreateInfo : sEmptyManagedVkEventCreateInfo;
}

class BasicManagedVkFence::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyFence(device.get<VkDevice>(), vkFence, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkFence vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkFenceCreateInfo> FenceCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkFence(const BasicManagedVkFence&) = delete;
    BasicManagedVkFence& operator=(const BasicManagedVkFence&) = delete;
};

VkResult BasicManagedVkFence::create(const Managed<VkDevice>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFence>* pFence)
{
    #if 0
    VkFence handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateFence(device, pCreateInfo, pAllocator, pFence));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkFence::~BasicManagedVkFence()
{
}

template <>
const VkFence& get<VkFence>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkFence_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkFence::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkFenceCreateInfo>& BasicManagedVkFence::get<Managed<VkFenceCreateInfo>>() const
{
    // TODO : Return Default<VkFenceCreateInfo>...
    static const Managed<VkFenceCreateInfo> sEmptyManagedVkFenceCreateInfo;
    return mspControlBlock ? mspControlBlock->FenceCreateInfo : sEmptyManagedVkFenceCreateInfo;
}

class BasicManagedVkFramebuffer::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyFramebuffer(device.get<VkDevice>(), vkFramebuffer, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkFramebuffer vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkFramebufferCreateInfo> FramebufferCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkFramebuffer(const BasicManagedVkFramebuffer&) = delete;
    BasicManagedVkFramebuffer& operator=(const BasicManagedVkFramebuffer&) = delete;
};

VkResult BasicManagedVkFramebuffer::create(const Managed<VkDevice>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFramebuffer>* pFramebuffer)
{
    #if 0
    VkFramebuffer handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkFramebuffer::~BasicManagedVkFramebuffer()
{
}

template <>
const VkFramebuffer& get<VkFramebuffer>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkFramebuffer_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkFramebuffer::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkFramebufferCreateInfo>& BasicManagedVkFramebuffer::get<Managed<VkFramebufferCreateInfo>>() const
{
    // TODO : Return Default<VkFramebufferCreateInfo>...
    static const Managed<VkFramebufferCreateInfo> sEmptyManagedVkFramebufferCreateInfo;
    return mspControlBlock ? mspControlBlock->FramebufferCreateInfo : sEmptyManagedVkFramebufferCreateInfo;
}

class BasicManagedVkImage::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyImage(device.get<VkDevice>(), vkImage, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkImage vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkImageCreateInfo> ImageCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkImage(const BasicManagedVkImage&) = delete;
    BasicManagedVkImage& operator=(const BasicManagedVkImage&) = delete;
};

VkResult BasicManagedVkImage::create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImage>* pImage)
{
    #if 0
    VkImage handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateImage(device, pCreateInfo, pAllocator, pImage));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkImage::~BasicManagedVkImage()
{
}

template <>
const VkImage& get<VkImage>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkImage_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkImage::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkImageCreateInfo>& BasicManagedVkImage::get<Managed<VkImageCreateInfo>>() const
{
    // TODO : Return Default<VkImageCreateInfo>...
    static const Managed<VkImageCreateInfo> sEmptyManagedVkImageCreateInfo;
    return mspControlBlock ? mspControlBlock->ImageCreateInfo : sEmptyManagedVkImageCreateInfo;
}

class BasicManagedVkImageView::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyImageView(device.get<VkDevice>(), vkImageView, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkImageView vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkImageViewCreateInfo> ImageViewCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkImageView(const BasicManagedVkImageView&) = delete;
    BasicManagedVkImageView& operator=(const BasicManagedVkImageView&) = delete;
};

VkResult BasicManagedVkImageView::create(const Managed<VkDevice>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImageView>* pView)
{
    #if 0
    VkImageView handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateImageView(device, pCreateInfo, pAllocator, pView));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkImageView::~BasicManagedVkImageView()
{
}

template <>
const VkImageView& get<VkImageView>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkImageView_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkImageView::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkImageViewCreateInfo>& BasicManagedVkImageView::get<Managed<VkImageViewCreateInfo>>() const
{
    // TODO : Return Default<VkImageViewCreateInfo>...
    static const Managed<VkImageViewCreateInfo> sEmptyManagedVkImageViewCreateInfo;
    return mspControlBlock ? mspControlBlock->ImageViewCreateInfo : sEmptyManagedVkImageViewCreateInfo;
}

class BasicManagedVkIndirectCommandsLayoutNV::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyIndirectCommandsLayoutNV(device.get<VkDevice>(), vkIndirectCommandsLayout, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkIndirectCommandsLayoutNV vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkIndirectCommandsLayoutCreateInfoNV> IndirectCommandsLayoutCreateInfoNV;
    VkAllocationCallbacks allocator { };
    BasicManagedVkIndirectCommandsLayoutNV(const BasicManagedVkIndirectCommandsLayoutNV&) = delete;
    BasicManagedVkIndirectCommandsLayoutNV& operator=(const BasicManagedVkIndirectCommandsLayoutNV&) = delete;
};

VkResult BasicManagedVkIndirectCommandsLayoutNV::create(const Managed<VkDevice>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout)
{
    #if 0
    VkIndirectCommandsLayoutNV handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkIndirectCommandsLayoutNV::~BasicManagedVkIndirectCommandsLayoutNV()
{
}

template <>
const VkIndirectCommandsLayoutNV& get<VkIndirectCommandsLayoutNV>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkIndirectCommandsLayoutNV_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkIndirectCommandsLayoutNV::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkIndirectCommandsLayoutCreateInfoNV>& BasicManagedVkIndirectCommandsLayoutNV::get<Managed<VkIndirectCommandsLayoutCreateInfoNV>>() const
{
    // TODO : Return Default<VkIndirectCommandsLayoutCreateInfoNV>...
    static const Managed<VkIndirectCommandsLayoutCreateInfoNV> sEmptyManagedVkIndirectCommandsLayoutCreateInfoNV;
    return mspControlBlock ? mspControlBlock->IndirectCommandsLayoutCreateInfoNV : sEmptyManagedVkIndirectCommandsLayoutCreateInfoNV;
}

class BasicManagedVkInstance::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        vkDestroyInstance(vkInstance, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkInstance vkHandle { VK_NULL_HANDLE };
    Managed<VkInstanceCreateInfo> InstanceCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkInstance(const BasicManagedVkInstance&) = delete;
    BasicManagedVkInstance& operator=(const BasicManagedVkInstance&) = delete;
};

VkResult BasicManagedVkInstance::create(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkInstance>* pInstance)
{
    #if 0
    VkInstance handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateInstance(pCreateInfo, pAllocator, pInstance));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkInstance::~BasicManagedVkInstance()
{
}

template <>
const VkInstance& get<VkInstance>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkInstance_TODO;
}


template <>
const Managed<VkInstanceCreateInfo>& BasicManagedVkInstance::get<Managed<VkInstanceCreateInfo>>() const
{
    // TODO : Return Default<VkInstanceCreateInfo>...
    static const Managed<VkInstanceCreateInfo> sEmptyManagedVkInstanceCreateInfo;
    return mspControlBlock ? mspControlBlock->InstanceCreateInfo : sEmptyManagedVkInstanceCreateInfo;
}

class BasicManagedVkPerformanceConfigurationINTEL::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        #endif
    }

    VkPerformanceConfigurationINTEL vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPerformanceConfigurationINTEL(const BasicManagedVkPerformanceConfigurationINTEL&) = delete;
    BasicManagedVkPerformanceConfigurationINTEL& operator=(const BasicManagedVkPerformanceConfigurationINTEL&) = delete;
};


BasicManagedVkPerformanceConfigurationINTEL::~BasicManagedVkPerformanceConfigurationINTEL()
{
}

template <>
const VkPerformanceConfigurationINTEL& get<VkPerformanceConfigurationINTEL>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPerformanceConfigurationINTEL_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkPerformanceConfigurationINTEL::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

class BasicManagedVkPhysicalDevice::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkInstance);
        #endif
    }

    VkPhysicalDevice vkHandle { VK_NULL_HANDLE };
    Managed<VkInstance> parentVkInstance;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPhysicalDevice(const BasicManagedVkPhysicalDevice&) = delete;
    BasicManagedVkPhysicalDevice& operator=(const BasicManagedVkPhysicalDevice&) = delete;
};


BasicManagedVkPhysicalDevice::~BasicManagedVkPhysicalDevice()
{
}

template <>
const VkPhysicalDevice& get<VkPhysicalDevice>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPhysicalDevice_TODO;
}


template <>
const Managed<VkInstance>& BasicManagedVkPhysicalDevice::get<Managed<VkInstance>>() const
{
    static const Managed<VkInstance> sNullManagedVkInstance;
    return mspControlBlock ? mspControlBlock->parentVkInstance : sNullManagedVkInstance;
}

class BasicManagedVkPipeline::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyPipeline(device.get<VkDevice>(), vkPipeline, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkPipeline vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkComputePipelineCreateInfo> ComputePipelineCreateInfo;
    Managed<VkGraphicsPipelineCreateInfo> GraphicsPipelineCreateInfo;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoKHR> RayTracingPipelineCreateInfoKHR;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    Managed<VkRayTracingPipelineCreateInfoNV> RayTracingPipelineCreateInfoNV;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPipeline(const BasicManagedVkPipeline&) = delete;
    BasicManagedVkPipeline& operator=(const BasicManagedVkPipeline&) = delete;
};

VkResult BasicManagedVkPipeline::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    #if 0
    VkPipeline handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

VkResult BasicManagedVkPipeline::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    #if 0
    VkPipeline handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
VkResult BasicManagedVkPipeline::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    #if 0
    VkPipeline handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateRayTracingPipelinesKHR(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

VkResult BasicManagedVkPipeline::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    #if 0
    VkPipeline handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkPipeline::~BasicManagedVkPipeline()
{
}

template <>
const VkPipeline& get<VkPipeline>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPipeline_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkPipeline::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkComputePipelineCreateInfo>& BasicManagedVkPipeline::get<Managed<VkComputePipelineCreateInfo>>() const
{
    // TODO : Return Default<VkComputePipelineCreateInfo>...
    static const Managed<VkComputePipelineCreateInfo> sEmptyManagedVkComputePipelineCreateInfo;
    return mspControlBlock ? mspControlBlock->ComputePipelineCreateInfo : sEmptyManagedVkComputePipelineCreateInfo;
}

template <>
const Managed<VkGraphicsPipelineCreateInfo>& BasicManagedVkPipeline::get<Managed<VkGraphicsPipelineCreateInfo>>() const
{
    // TODO : Return Default<VkGraphicsPipelineCreateInfo>...
    static const Managed<VkGraphicsPipelineCreateInfo> sEmptyManagedVkGraphicsPipelineCreateInfo;
    return mspControlBlock ? mspControlBlock->GraphicsPipelineCreateInfo : sEmptyManagedVkGraphicsPipelineCreateInfo;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
const Managed<VkRayTracingPipelineCreateInfoKHR>& BasicManagedVkPipeline::get<Managed<VkRayTracingPipelineCreateInfoKHR>>() const
{
    // TODO : Return Default<VkRayTracingPipelineCreateInfoKHR>...
    static const Managed<VkRayTracingPipelineCreateInfoKHR> sEmptyManagedVkRayTracingPipelineCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->RayTracingPipelineCreateInfoKHR : sEmptyManagedVkRayTracingPipelineCreateInfoKHR;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
const Managed<VkRayTracingPipelineCreateInfoNV>& BasicManagedVkPipeline::get<Managed<VkRayTracingPipelineCreateInfoNV>>() const
{
    // TODO : Return Default<VkRayTracingPipelineCreateInfoNV>...
    static const Managed<VkRayTracingPipelineCreateInfoNV> sEmptyManagedVkRayTracingPipelineCreateInfoNV;
    return mspControlBlock ? mspControlBlock->RayTracingPipelineCreateInfoNV : sEmptyManagedVkRayTracingPipelineCreateInfoNV;
}

class BasicManagedVkPipelineCache::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyPipelineCache(device.get<VkDevice>(), vkPipelineCache, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkPipelineCache vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkPipelineCacheCreateInfo> PipelineCacheCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPipelineCache(const BasicManagedVkPipelineCache&) = delete;
    BasicManagedVkPipelineCache& operator=(const BasicManagedVkPipelineCache&) = delete;
};

VkResult BasicManagedVkPipelineCache::create(const Managed<VkDevice>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineCache>* pPipelineCache)
{
    #if 0
    VkPipelineCache handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkPipelineCache::~BasicManagedVkPipelineCache()
{
}

template <>
const VkPipelineCache& get<VkPipelineCache>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPipelineCache_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkPipelineCache::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkPipelineCacheCreateInfo>& BasicManagedVkPipelineCache::get<Managed<VkPipelineCacheCreateInfo>>() const
{
    // TODO : Return Default<VkPipelineCacheCreateInfo>...
    static const Managed<VkPipelineCacheCreateInfo> sEmptyManagedVkPipelineCacheCreateInfo;
    return mspControlBlock ? mspControlBlock->PipelineCacheCreateInfo : sEmptyManagedVkPipelineCacheCreateInfo;
}

class BasicManagedVkPipelineLayout::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyPipelineLayout(device.get<VkDevice>(), vkPipelineLayout, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkPipelineLayout vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkPipelineLayoutCreateInfo> PipelineLayoutCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPipelineLayout(const BasicManagedVkPipelineLayout&) = delete;
    BasicManagedVkPipelineLayout& operator=(const BasicManagedVkPipelineLayout&) = delete;
};

VkResult BasicManagedVkPipelineLayout::create(const Managed<VkDevice>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineLayout>* pPipelineLayout)
{
    #if 0
    VkPipelineLayout handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkPipelineLayout::~BasicManagedVkPipelineLayout()
{
}

template <>
const VkPipelineLayout& get<VkPipelineLayout>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPipelineLayout_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkPipelineLayout::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkPipelineLayoutCreateInfo>& BasicManagedVkPipelineLayout::get<Managed<VkPipelineLayoutCreateInfo>>() const
{
    // TODO : Return Default<VkPipelineLayoutCreateInfo>...
    static const Managed<VkPipelineLayoutCreateInfo> sEmptyManagedVkPipelineLayoutCreateInfo;
    return mspControlBlock ? mspControlBlock->PipelineLayoutCreateInfo : sEmptyManagedVkPipelineLayoutCreateInfo;
}

class BasicManagedVkPrivateDataSlotEXT::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyPrivateDataSlotEXT(device.get<VkDevice>(), vkPrivateDataSlot, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkPrivateDataSlotEXT vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkPrivateDataSlotCreateInfoEXT> PrivateDataSlotCreateInfoEXT;
    VkAllocationCallbacks allocator { };
    BasicManagedVkPrivateDataSlotEXT(const BasicManagedVkPrivateDataSlotEXT&) = delete;
    BasicManagedVkPrivateDataSlotEXT& operator=(const BasicManagedVkPrivateDataSlotEXT&) = delete;
};

VkResult BasicManagedVkPrivateDataSlotEXT::create(const Managed<VkDevice>& device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPrivateDataSlotEXT>* pPrivateDataSlot)
{
    #if 0
    VkPrivateDataSlotEXT handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkPrivateDataSlotEXT::~BasicManagedVkPrivateDataSlotEXT()
{
}

template <>
const VkPrivateDataSlotEXT& get<VkPrivateDataSlotEXT>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkPrivateDataSlotEXT_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkPrivateDataSlotEXT::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkPrivateDataSlotCreateInfoEXT>& BasicManagedVkPrivateDataSlotEXT::get<Managed<VkPrivateDataSlotCreateInfoEXT>>() const
{
    // TODO : Return Default<VkPrivateDataSlotCreateInfoEXT>...
    static const Managed<VkPrivateDataSlotCreateInfoEXT> sEmptyManagedVkPrivateDataSlotCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->PrivateDataSlotCreateInfoEXT : sEmptyManagedVkPrivateDataSlotCreateInfoEXT;
}

class BasicManagedVkQueryPool::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyQueryPool(device.get<VkDevice>(), vkQueryPool, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkQueryPool vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkQueryPoolCreateInfo> QueryPoolCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkQueryPool(const BasicManagedVkQueryPool&) = delete;
    BasicManagedVkQueryPool& operator=(const BasicManagedVkQueryPool&) = delete;
};

VkResult BasicManagedVkQueryPool::create(const Managed<VkDevice>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkQueryPool>* pQueryPool)
{
    #if 0
    VkQueryPool handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkQueryPool::~BasicManagedVkQueryPool()
{
}

template <>
const VkQueryPool& get<VkQueryPool>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkQueryPool_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkQueryPool::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkQueryPoolCreateInfo>& BasicManagedVkQueryPool::get<Managed<VkQueryPoolCreateInfo>>() const
{
    // TODO : Return Default<VkQueryPoolCreateInfo>...
    static const Managed<VkQueryPoolCreateInfo> sEmptyManagedVkQueryPoolCreateInfo;
    return mspControlBlock ? mspControlBlock->QueryPoolCreateInfo : sEmptyManagedVkQueryPoolCreateInfo;
}

class BasicManagedVkQueue::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        #endif
    }

    VkQueue vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    VkAllocationCallbacks allocator { };
    BasicManagedVkQueue(const BasicManagedVkQueue&) = delete;
    BasicManagedVkQueue& operator=(const BasicManagedVkQueue&) = delete;
};


BasicManagedVkQueue::~BasicManagedVkQueue()
{
}

template <>
const VkQueue& get<VkQueue>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkQueue_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkQueue::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

class BasicManagedVkRenderPass::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyRenderPass(device.get<VkDevice>(), vkRenderPass, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkRenderPass vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkRenderPassCreateInfo> RenderPassCreateInfo;
    Managed<VkRenderPassCreateInfo2> RenderPassCreateInfo2;
    VkAllocationCallbacks allocator { };
    BasicManagedVkRenderPass(const BasicManagedVkRenderPass&) = delete;
    BasicManagedVkRenderPass& operator=(const BasicManagedVkRenderPass&) = delete;
};

VkResult BasicManagedVkRenderPass::create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass)
{
    #if 0
    VkRenderPass handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

VkResult BasicManagedVkRenderPass::create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass)
{
    #if 0
    VkRenderPass handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkRenderPass::~BasicManagedVkRenderPass()
{
}

template <>
const VkRenderPass& get<VkRenderPass>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkRenderPass_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkRenderPass::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkRenderPassCreateInfo>& BasicManagedVkRenderPass::get<Managed<VkRenderPassCreateInfo>>() const
{
    // TODO : Return Default<VkRenderPassCreateInfo>...
    static const Managed<VkRenderPassCreateInfo> sEmptyManagedVkRenderPassCreateInfo;
    return mspControlBlock ? mspControlBlock->RenderPassCreateInfo : sEmptyManagedVkRenderPassCreateInfo;
}

template <>
const Managed<VkRenderPassCreateInfo2>& BasicManagedVkRenderPass::get<Managed<VkRenderPassCreateInfo2>>() const
{
    // TODO : Return Default<VkRenderPassCreateInfo2>...
    static const Managed<VkRenderPassCreateInfo2> sEmptyManagedVkRenderPassCreateInfo2;
    return mspControlBlock ? mspControlBlock->RenderPassCreateInfo2 : sEmptyManagedVkRenderPassCreateInfo2;
}

class BasicManagedVkSampler::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroySampler(device.get<VkDevice>(), vkSampler, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkSampler vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkSamplerCreateInfo> SamplerCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkSampler(const BasicManagedVkSampler&) = delete;
    BasicManagedVkSampler& operator=(const BasicManagedVkSampler&) = delete;
};

VkResult BasicManagedVkSampler::create(const Managed<VkDevice>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSampler>* pSampler)
{
    #if 0
    VkSampler handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateSampler(device, pCreateInfo, pAllocator, pSampler));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkSampler::~BasicManagedVkSampler()
{
}

template <>
const VkSampler& get<VkSampler>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkSampler_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkSampler::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkSamplerCreateInfo>& BasicManagedVkSampler::get<Managed<VkSamplerCreateInfo>>() const
{
    // TODO : Return Default<VkSamplerCreateInfo>...
    static const Managed<VkSamplerCreateInfo> sEmptyManagedVkSamplerCreateInfo;
    return mspControlBlock ? mspControlBlock->SamplerCreateInfo : sEmptyManagedVkSamplerCreateInfo;
}

class BasicManagedVkSamplerYcbcrConversion::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroySamplerYcbcrConversion(device.get<VkDevice>(), vkYcbcrConversion, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkSamplerYcbcrConversion vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkSamplerYcbcrConversionCreateInfo> SamplerYcbcrConversionCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkSamplerYcbcrConversion(const BasicManagedVkSamplerYcbcrConversion&) = delete;
    BasicManagedVkSamplerYcbcrConversion& operator=(const BasicManagedVkSamplerYcbcrConversion&) = delete;
};

VkResult BasicManagedVkSamplerYcbcrConversion::create(const Managed<VkDevice>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    #if 0
    VkSamplerYcbcrConversion handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkSamplerYcbcrConversion::~BasicManagedVkSamplerYcbcrConversion()
{
}

template <>
const VkSamplerYcbcrConversion& get<VkSamplerYcbcrConversion>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkSamplerYcbcrConversion_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkSamplerYcbcrConversion::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkSamplerYcbcrConversionCreateInfo>& BasicManagedVkSamplerYcbcrConversion::get<Managed<VkSamplerYcbcrConversionCreateInfo>>() const
{
    // TODO : Return Default<VkSamplerYcbcrConversionCreateInfo>...
    static const Managed<VkSamplerYcbcrConversionCreateInfo> sEmptyManagedVkSamplerYcbcrConversionCreateInfo;
    return mspControlBlock ? mspControlBlock->SamplerYcbcrConversionCreateInfo : sEmptyManagedVkSamplerYcbcrConversionCreateInfo;
}


class BasicManagedVkSemaphore::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroySemaphore(device.get<VkDevice>(), vkSemaphore, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkSemaphore vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkSemaphoreCreateInfo> SemaphoreCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkSemaphore(const BasicManagedVkSemaphore&) = delete;
    BasicManagedVkSemaphore& operator=(const BasicManagedVkSemaphore&) = delete;
};

VkResult BasicManagedVkSemaphore::create(const Managed<VkDevice>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSemaphore>* pSemaphore)
{
    #if 0
    VkSemaphore handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkSemaphore::~BasicManagedVkSemaphore()
{
}

template <>
const VkSemaphore& get<VkSemaphore>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkSemaphore_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkSemaphore::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkSemaphoreCreateInfo>& BasicManagedVkSemaphore::get<Managed<VkSemaphoreCreateInfo>>() const
{
    // TODO : Return Default<VkSemaphoreCreateInfo>...
    static const Managed<VkSemaphoreCreateInfo> sEmptyManagedVkSemaphoreCreateInfo;
    return mspControlBlock ? mspControlBlock->SemaphoreCreateInfo : sEmptyManagedVkSemaphoreCreateInfo;
}

class BasicManagedVkShaderModule::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyShaderModule(device.get<VkDevice>(), vkShaderModule, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkShaderModule vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkShaderModuleCreateInfo> ShaderModuleCreateInfo;
    VkAllocationCallbacks allocator { };
    BasicManagedVkShaderModule(const BasicManagedVkShaderModule&) = delete;
    BasicManagedVkShaderModule& operator=(const BasicManagedVkShaderModule&) = delete;
};

VkResult BasicManagedVkShaderModule::create(const Managed<VkDevice>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkShaderModule>* pShaderModule)
{
    #if 0
    VkShaderModule handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkShaderModule::~BasicManagedVkShaderModule()
{
}

template <>
const VkShaderModule& get<VkShaderModule>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkShaderModule_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkShaderModule::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkShaderModuleCreateInfo>& BasicManagedVkShaderModule::get<Managed<VkShaderModuleCreateInfo>>() const
{
    // TODO : Return Default<VkShaderModuleCreateInfo>...
    static const Managed<VkShaderModuleCreateInfo> sEmptyManagedVkShaderModuleCreateInfo;
    return mspControlBlock ? mspControlBlock->ShaderModuleCreateInfo : sEmptyManagedVkShaderModuleCreateInfo;
}

class BasicManagedVkSurfaceKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkInstance);
        vkDestroySurfaceKHR(instance.get<VkInstance>(), vkSurface, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkSurfaceKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkInstance> parentVkInstance;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    Managed<VkAndroidSurfaceCreateInfoKHR> AndroidSurfaceCreateInfoKHR;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    Managed<VkDirectFBSurfaceCreateInfoEXT> DirectFBSurfaceCreateInfoEXT;
    #endif // VK_USE_PLATFORM_DIRECTFB_EXT
    Managed<VkDisplaySurfaceCreateInfoKHR> DisplaySurfaceCreateInfoKHR;
    Managed<VkHeadlessSurfaceCreateInfoEXT> HeadlessSurfaceCreateInfoEXT;
    #ifdef VK_USE_PLATFORM_IOS_MVK
    Managed<VkIOSSurfaceCreateInfoMVK> IOSSurfaceCreateInfoMVK;
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    Managed<VkImagePipeSurfaceCreateInfoFUCHSIA> ImagePipeSurfaceCreateInfoFUCHSIA;
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    Managed<VkMacOSSurfaceCreateInfoMVK> MacOSSurfaceCreateInfoMVK;
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    Managed<VkMetalSurfaceCreateInfoEXT> MetalSurfaceCreateInfoEXT;
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    Managed<VkStreamDescriptorSurfaceCreateInfoGGP> StreamDescriptorSurfaceCreateInfoGGP;
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    Managed<VkViSurfaceCreateInfoNN> ViSurfaceCreateInfoNN;
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    Managed<VkWaylandSurfaceCreateInfoKHR> WaylandSurfaceCreateInfoKHR;
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    Managed<VkWin32SurfaceCreateInfoKHR> Win32SurfaceCreateInfoKHR;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    Managed<VkXcbSurfaceCreateInfoKHR> XcbSurfaceCreateInfoKHR;
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    Managed<VkXlibSurfaceCreateInfoKHR> XlibSurfaceCreateInfoKHR;
    #endif // VK_USE_PLATFORM_XLIB_KHR
    VkAllocationCallbacks allocator { };
    BasicManagedVkSurfaceKHR(const BasicManagedVkSurfaceKHR&) = delete;
    BasicManagedVkSurfaceKHR& operator=(const BasicManagedVkSurfaceKHR&) = delete;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
VkResult BasicManagedVkSurfaceKHR::create(const Managed<VkInstance>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    #if 0
    VkSurfaceKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

BasicManagedVkSurfaceKHR::~BasicManagedVkSurfaceKHR()
{
}

template <>
const VkSurfaceKHR& get<VkSurfaceKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkSurfaceKHR_TODO;
}


template <>
const Managed<VkInstance>& BasicManagedVkSurfaceKHR::get<Managed<VkInstance>>() const
{
    static const Managed<VkInstance> sNullManagedVkInstance;
    return mspControlBlock ? mspControlBlock->parentVkInstance : sNullManagedVkInstance;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
const Managed<VkAndroidSurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkAndroidSurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkAndroidSurfaceCreateInfoKHR>...
    static const Managed<VkAndroidSurfaceCreateInfoKHR> sEmptyManagedVkAndroidSurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->AndroidSurfaceCreateInfoKHR : sEmptyManagedVkAndroidSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
const Managed<VkDirectFBSurfaceCreateInfoEXT>& BasicManagedVkSurfaceKHR::get<Managed<VkDirectFBSurfaceCreateInfoEXT>>() const
{
    // TODO : Return Default<VkDirectFBSurfaceCreateInfoEXT>...
    static const Managed<VkDirectFBSurfaceCreateInfoEXT> sEmptyManagedVkDirectFBSurfaceCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->DirectFBSurfaceCreateInfoEXT : sEmptyManagedVkDirectFBSurfaceCreateInfoEXT;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
const Managed<VkDisplaySurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkDisplaySurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkDisplaySurfaceCreateInfoKHR>...
    static const Managed<VkDisplaySurfaceCreateInfoKHR> sEmptyManagedVkDisplaySurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->DisplaySurfaceCreateInfoKHR : sEmptyManagedVkDisplaySurfaceCreateInfoKHR;
}

template <>
const Managed<VkHeadlessSurfaceCreateInfoEXT>& BasicManagedVkSurfaceKHR::get<Managed<VkHeadlessSurfaceCreateInfoEXT>>() const
{
    // TODO : Return Default<VkHeadlessSurfaceCreateInfoEXT>...
    static const Managed<VkHeadlessSurfaceCreateInfoEXT> sEmptyManagedVkHeadlessSurfaceCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->HeadlessSurfaceCreateInfoEXT : sEmptyManagedVkHeadlessSurfaceCreateInfoEXT;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
const Managed<VkIOSSurfaceCreateInfoMVK>& BasicManagedVkSurfaceKHR::get<Managed<VkIOSSurfaceCreateInfoMVK>>() const
{
    // TODO : Return Default<VkIOSSurfaceCreateInfoMVK>...
    static const Managed<VkIOSSurfaceCreateInfoMVK> sEmptyManagedVkIOSSurfaceCreateInfoMVK;
    return mspControlBlock ? mspControlBlock->IOSSurfaceCreateInfoMVK : sEmptyManagedVkIOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& BasicManagedVkSurfaceKHR::get<Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>>() const
{
    // TODO : Return Default<VkImagePipeSurfaceCreateInfoFUCHSIA>...
    static const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA> sEmptyManagedVkImagePipeSurfaceCreateInfoFUCHSIA;
    return mspControlBlock ? mspControlBlock->ImagePipeSurfaceCreateInfoFUCHSIA : sEmptyManagedVkImagePipeSurfaceCreateInfoFUCHSIA;
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
const Managed<VkMacOSSurfaceCreateInfoMVK>& BasicManagedVkSurfaceKHR::get<Managed<VkMacOSSurfaceCreateInfoMVK>>() const
{
    // TODO : Return Default<VkMacOSSurfaceCreateInfoMVK>...
    static const Managed<VkMacOSSurfaceCreateInfoMVK> sEmptyManagedVkMacOSSurfaceCreateInfoMVK;
    return mspControlBlock ? mspControlBlock->MacOSSurfaceCreateInfoMVK : sEmptyManagedVkMacOSSurfaceCreateInfoMVK;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
const Managed<VkMetalSurfaceCreateInfoEXT>& BasicManagedVkSurfaceKHR::get<Managed<VkMetalSurfaceCreateInfoEXT>>() const
{
    // TODO : Return Default<VkMetalSurfaceCreateInfoEXT>...
    static const Managed<VkMetalSurfaceCreateInfoEXT> sEmptyManagedVkMetalSurfaceCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->MetalSurfaceCreateInfoEXT : sEmptyManagedVkMetalSurfaceCreateInfoEXT;
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_GGP
template <>
const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& BasicManagedVkSurfaceKHR::get<Managed<VkStreamDescriptorSurfaceCreateInfoGGP>>() const
{
    // TODO : Return Default<VkStreamDescriptorSurfaceCreateInfoGGP>...
    static const Managed<VkStreamDescriptorSurfaceCreateInfoGGP> sEmptyManagedVkStreamDescriptorSurfaceCreateInfoGGP;
    return mspControlBlock ? mspControlBlock->StreamDescriptorSurfaceCreateInfoGGP : sEmptyManagedVkStreamDescriptorSurfaceCreateInfoGGP;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_VI_NN
template <>
const Managed<VkViSurfaceCreateInfoNN>& BasicManagedVkSurfaceKHR::get<Managed<VkViSurfaceCreateInfoNN>>() const
{
    // TODO : Return Default<VkViSurfaceCreateInfoNN>...
    static const Managed<VkViSurfaceCreateInfoNN> sEmptyManagedVkViSurfaceCreateInfoNN;
    return mspControlBlock ? mspControlBlock->ViSurfaceCreateInfoNN : sEmptyManagedVkViSurfaceCreateInfoNN;
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
const Managed<VkWaylandSurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkWaylandSurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkWaylandSurfaceCreateInfoKHR>...
    static const Managed<VkWaylandSurfaceCreateInfoKHR> sEmptyManagedVkWaylandSurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->WaylandSurfaceCreateInfoKHR : sEmptyManagedVkWaylandSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
const Managed<VkWin32SurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkWin32SurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkWin32SurfaceCreateInfoKHR>...
    static const Managed<VkWin32SurfaceCreateInfoKHR> sEmptyManagedVkWin32SurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->Win32SurfaceCreateInfoKHR : sEmptyManagedVkWin32SurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
const Managed<VkXcbSurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkXcbSurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkXcbSurfaceCreateInfoKHR>...
    static const Managed<VkXcbSurfaceCreateInfoKHR> sEmptyManagedVkXcbSurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->XcbSurfaceCreateInfoKHR : sEmptyManagedVkXcbSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
const Managed<VkXlibSurfaceCreateInfoKHR>& BasicManagedVkSurfaceKHR::get<Managed<VkXlibSurfaceCreateInfoKHR>>() const
{
    // TODO : Return Default<VkXlibSurfaceCreateInfoKHR>...
    static const Managed<VkXlibSurfaceCreateInfoKHR> sEmptyManagedVkXlibSurfaceCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->XlibSurfaceCreateInfoKHR : sEmptyManagedVkXlibSurfaceCreateInfoKHR;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

class BasicManagedVkSwapchainKHR::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);

        assert(parentVkSurfaceKHR);
        vkDestroySwapchainKHR(device.get<VkDevice>(), vkSwapchain, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkSwapchainKHR vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;

    Managed<VkSurfaceKHR> parentVkSurfaceKHR;
    Managed<VkSwapchainCreateInfoKHR> SwapchainCreateInfoKHR;
    VkAllocationCallbacks allocator { };
    BasicManagedVkSwapchainKHR(const BasicManagedVkSwapchainKHR&) = delete;
    BasicManagedVkSwapchainKHR& operator=(const BasicManagedVkSwapchainKHR&) = delete;
};

VkResult BasicManagedVkSwapchainKHR::create(const Managed<VkDevice>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchains)
{
    #if 0
    VkSwapchainKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

VkResult BasicManagedVkSwapchainKHR::create(const Managed<VkDevice>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchain)
{
    #if 0
    VkSwapchainKHR handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkSwapchainKHR::~BasicManagedVkSwapchainKHR()
{
}

template <>
const VkSwapchainKHR& get<VkSwapchainKHR>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkSwapchainKHR_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkSwapchainKHR::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkSurfaceKHR>& BasicManagedVkSwapchainKHR::get<Managed<VkSurfaceKHR>>() const
{
    static const Managed<VkSurfaceKHR> sNullManagedVkSurfaceKHR;
    return mspControlBlock ? mspControlBlock->parentVkSurfaceKHR : sNullManagedVkSurfaceKHR;
}

template <>
const Managed<VkSwapchainCreateInfoKHR>& BasicManagedVkSwapchainKHR::get<Managed<VkSwapchainCreateInfoKHR>>() const
{
    // TODO : Return Default<VkSwapchainCreateInfoKHR>...
    static const Managed<VkSwapchainCreateInfoKHR> sEmptyManagedVkSwapchainCreateInfoKHR;
    return mspControlBlock ? mspControlBlock->SwapchainCreateInfoKHR : sEmptyManagedVkSwapchainCreateInfoKHR;
}

class BasicManagedVkValidationCacheEXT::ControlBlock final
{
public:
    inline ~ControlBlock()
    {
        #if 0
        assert(vkHandle);
        assert(parentVkDevice);
        vkDestroyValidationCacheEXT(device.get<VkDevice>(), vkValidationCache, nullptr /* TODO : pAllocator */);
        #endif
    }

    VkValidationCacheEXT vkHandle { VK_NULL_HANDLE };
    Managed<VkDevice> parentVkDevice;
    Managed<VkValidationCacheCreateInfoEXT> ValidationCacheCreateInfoEXT;
    VkAllocationCallbacks allocator { };
    BasicManagedVkValidationCacheEXT(const BasicManagedVkValidationCacheEXT&) = delete;
    BasicManagedVkValidationCacheEXT& operator=(const BasicManagedVkValidationCacheEXT&) = delete;
};

VkResult BasicManagedVkValidationCacheEXT::create(const Managed<VkDevice>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkValidationCacheEXT>* pValidationCache)
{
    #if 0
    VkValidationCacheEXT handle = VK_NULL_HANDLE;
    auto vkResult = dst_vk(vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache));
    if (vkResult == VK_SUCCESS) {
        // TODO : std::allocate_shared<>() using pAllocator...
        handle.mspControlBlock = std::make_shared<ControlBlock>();
    }
    return vkResult;
    #endif
    return VK_SUCCESS;
}

BasicManagedVkValidationCacheEXT::~BasicManagedVkValidationCacheEXT()
{
}

template <>
const VkValidationCacheEXT& get<VkValidationCacheEXT>() const
{
    return mHandle;
}

template <>
const VkObjectType& get<VkObjectType>() const
{
    return VK_OBJECT_TYPE_VkValidationCacheEXT_TODO;
}


template <>
const Managed<VkDevice>& BasicManagedVkValidationCacheEXT::get<Managed<VkDevice>>() const
{
    static const Managed<VkDevice> sNullManagedVkDevice;
    return mspControlBlock ? mspControlBlock->parentVkDevice : sNullManagedVkDevice;
}

template <>
const Managed<VkValidationCacheCreateInfoEXT>& BasicManagedVkValidationCacheEXT::get<Managed<VkValidationCacheCreateInfoEXT>>() const
{
    // TODO : Return Default<VkValidationCacheCreateInfoEXT>...
    static const Managed<VkValidationCacheCreateInfoEXT> sEmptyManagedVkValidationCacheCreateInfoEXT;
    return mspControlBlock ? mspControlBlock->ValidationCacheCreateInfoEXT : sEmptyManagedVkValidationCacheCreateInfoEXT;
}

} // namespace vk
} // namespace dst
