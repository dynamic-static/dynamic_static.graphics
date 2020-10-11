
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
#include "dynamic_static/graphics/vulkan/detail/managed.control-blocks.manual.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

namespace dst {
namespace vk {


VkResult Managed<VkInstance>::ControlBlock::create(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkInstance>* pInstance)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pInstance) {
        pInstance->reset();
        VkInstance vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateInstance(pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pInstance->mVkHandle = vkHandle;
            pInstance->mspControlBlock = std::make_shared<Managed<VkInstance>::ControlBlock>();
            pInstance->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pInstance->mspControlBlock->set(std::move(Managed<VkInstanceCreateInfo>(*pCreateInfo)));
            pInstance->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pInstance->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pInstance);
        }
    }
    return vkResult;
}

Managed<VkInstance>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkInstance>();
    if (vkHandle) {
        vkDestroyInstance(vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

Managed<VkPhysicalDevice>::ControlBlock::~ControlBlock()
{
}

VkResult Managed<VkDevice>::ControlBlock::create(const Managed<VkPhysicalDevice>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDevice>* pDevice)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pDevice) {
        pDevice->reset();
        VkDevice vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pDevice->mVkHandle = vkHandle;
            pDevice->mspControlBlock = std::make_shared<Managed<VkDevice>::ControlBlock>();
            pDevice->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pDevice->mspControlBlock->set(std::move(Managed<VkPhysicalDevice>(physicalDevice)));
            pDevice->mspControlBlock->set(std::move(Managed<VkDeviceCreateInfo>(*pCreateInfo)));
            pDevice->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pDevice->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pDevice);
        }
    }
    return vkResult;
}

Managed<VkDevice>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkDevice>();
    if (vkHandle) {
        vkDestroyDevice(vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkBuffer>::ControlBlock::create(const Managed<VkDevice>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBuffer>* pBuffer)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pBuffer) {
        pBuffer->reset();
        VkBuffer vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateBuffer(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pBuffer->mVkHandle = vkHandle;
            pBuffer->mspControlBlock = std::make_shared<Managed<VkBuffer>::ControlBlock>();
            pBuffer->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pBuffer->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pBuffer->mspControlBlock->set(std::move(Managed<VkBufferCreateInfo>(*pCreateInfo)));
            pBuffer->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pBuffer->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pBuffer);
        }
    }
    return vkResult;
}

Managed<VkBuffer>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkBuffer>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyBuffer(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkBufferView>::ControlBlock::create(const Managed<VkDevice>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBufferView>* pView)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pView) {
        pView->reset();
        VkBufferView vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateBufferView(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pView->mVkHandle = vkHandle;
            pView->mspControlBlock = std::make_shared<Managed<VkBufferView>::ControlBlock>();
            pView->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pView->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pView->mspControlBlock->set(std::move(Managed<VkBufferViewCreateInfo>(*pCreateInfo)));
            pView->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pView->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pView);
        }
    }
    return vkResult;
}

Managed<VkBufferView>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkBufferView>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyBufferView(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkCommandPool>::ControlBlock::create(const Managed<VkDevice>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkCommandPool>* pCommandPool)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pCommandPool) {
        pCommandPool->reset();
        VkCommandPool vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateCommandPool(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pCommandPool->mVkHandle = vkHandle;
            pCommandPool->mspControlBlock = std::make_shared<Managed<VkCommandPool>::ControlBlock>();
            pCommandPool->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pCommandPool->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pCommandPool->mspControlBlock->set(std::move(Managed<VkCommandPoolCreateInfo>(*pCreateInfo)));
            pCommandPool->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pCommandPool->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pCommandPool);
        }
    }
    return vkResult;
}

Managed<VkCommandPool>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkCommandPool>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyCommandPool(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

#if 0
// The following ControlBlock is manually implemented
VkResult Managed<VkCommandBuffer>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pCommandBuffers) {
        pCommandBuffers->reset();
        VkCommandBuffer vkHandle = VK_NULL_HANDLE;
        vkResult = vkAllocateCommandBuffers(device, pAllocateInfo, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pCommandBuffers->mVkHandle = vkHandle;
            pCommandBuffers->mspControlBlock = std::make_shared<Managed<VkCommandBuffer>::ControlBlock>();
            pCommandBuffers->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pCommandBuffers->mspControlBlock->set(std::move(Managed<VkCommandBufferAllocateInfo>(*pAllocateInfo)));
            pCommandBuffers->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pCommandBuffers);
        }
    }
    return vkResult;
}

Managed<VkCommandBuffer>::ControlBlock::~ControlBlock()
{
}
#endif

VkResult Managed<VkDescriptorPool>::ControlBlock::create(const Managed<VkDevice>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorPool>* pDescriptorPool)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pDescriptorPool) {
        pDescriptorPool->reset();
        VkDescriptorPool vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDescriptorPool(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pDescriptorPool->mVkHandle = vkHandle;
            pDescriptorPool->mspControlBlock = std::make_shared<Managed<VkDescriptorPool>::ControlBlock>();
            pDescriptorPool->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pDescriptorPool->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pDescriptorPool->mspControlBlock->set(std::move(Managed<VkDescriptorPoolCreateInfo>(*pCreateInfo)));
            pDescriptorPool->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pDescriptorPool->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pDescriptorPool);
        }
    }
    return vkResult;
}

Managed<VkDescriptorPool>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkDescriptorPool>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyDescriptorPool(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

#if 0
// The following ControlBlock is manually implemented
VkResult Managed<VkDescriptorSet>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkDescriptorSetAllocateInfo* pAllocateInfo, Managed<VkDescriptorSet>* pDescriptorSets)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pDescriptorSets) {
        pDescriptorSets->reset();
        VkDescriptorSet vkHandle = VK_NULL_HANDLE;
        vkResult = vkAllocateDescriptorSets(device, pAllocateInfo, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pDescriptorSets->mVkHandle = vkHandle;
            pDescriptorSets->mspControlBlock = std::make_shared<Managed<VkDescriptorSet>::ControlBlock>();
            pDescriptorSets->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pDescriptorSets->mspControlBlock->set(std::move(Managed<VkDescriptorSetAllocateInfo>(*pAllocateInfo)));
            pDescriptorSets->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pDescriptorSets);
        }
    }
    return vkResult;
}

Managed<VkDescriptorSet>::ControlBlock::~ControlBlock()
{
}
#endif

VkResult Managed<VkDescriptorSetLayout>::ControlBlock::create(const Managed<VkDevice>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorSetLayout>* pSetLayout)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSetLayout) {
        pSetLayout->reset();
        VkDescriptorSetLayout vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSetLayout->mVkHandle = vkHandle;
            pSetLayout->mspControlBlock = std::make_shared<Managed<VkDescriptorSetLayout>::ControlBlock>();
            pSetLayout->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSetLayout->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pSetLayout->mspControlBlock->set(std::move(Managed<VkDescriptorSetLayoutCreateInfo>(*pCreateInfo)));
            pSetLayout->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSetLayout->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSetLayout);
        }
    }
    return vkResult;
}

Managed<VkDescriptorSetLayout>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkDescriptorSetLayout>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyDescriptorSetLayout(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkDescriptorUpdateTemplate>::ControlBlock::create(const Managed<VkDevice>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pDescriptorUpdateTemplate) {
        pDescriptorUpdateTemplate->reset();
        VkDescriptorUpdateTemplate vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pDescriptorUpdateTemplate->mVkHandle = vkHandle;
            pDescriptorUpdateTemplate->mspControlBlock = std::make_shared<Managed<VkDescriptorUpdateTemplate>::ControlBlock>();
            pDescriptorUpdateTemplate->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pDescriptorUpdateTemplate->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pDescriptorUpdateTemplate->mspControlBlock->set(std::move(Managed<VkDescriptorUpdateTemplateCreateInfo>(*pCreateInfo)));
            pDescriptorUpdateTemplate->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pDescriptorUpdateTemplate->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pDescriptorUpdateTemplate);
        }
    }
    return vkResult;
}

Managed<VkDescriptorUpdateTemplate>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkDescriptorUpdateTemplate>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyDescriptorUpdateTemplate(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}


VkResult Managed<VkDeviceMemory>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDeviceMemory>* pMemory)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pMemory) {
        pMemory->reset();
        VkDeviceMemory vkHandle = VK_NULL_HANDLE;
        vkResult = vkAllocateMemory(device, pAllocateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pMemory->mVkHandle = vkHandle;
            pMemory->mspControlBlock = std::make_shared<Managed<VkDeviceMemory>::ControlBlock>();
            pMemory->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pMemory->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pMemory->mspControlBlock->set(std::move(Managed<VkMemoryAllocateInfo>(*pAllocateInfo)));
            pMemory->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pMemory->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pMemory);
        }
    }
    return vkResult;
}

Managed<VkDeviceMemory>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkDeviceMemory>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkFreeMemory(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

Managed<VkDisplayKHR>::ControlBlock::~ControlBlock()
{
}

VkResult Managed<VkDisplayModeKHR>::ControlBlock::create(const Managed<VkPhysicalDevice>& physicalDevice, const Managed<VkDisplayKHR>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDisplayModeKHR>* pMode)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pMode) {
        pMode->reset();
        VkDisplayModeKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pMode->mVkHandle = vkHandle;
            pMode->mspControlBlock = std::make_shared<Managed<VkDisplayModeKHR>::ControlBlock>();
            pMode->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pMode->mspControlBlock->set(std::move(Managed<VkPhysicalDevice>(physicalDevice)));
            pMode->mspControlBlock->set(std::move(Managed<VkDisplayKHR>(display)));
            pMode->mspControlBlock->set(std::move(Managed<VkDisplayModeCreateInfoKHR>(*pCreateInfo)));
            pMode->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pMode->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pMode);
        }
    }
    return vkResult;
}

Managed<VkDisplayModeKHR>::ControlBlock::~ControlBlock()
{
}

VkResult Managed<VkEvent>::ControlBlock::create(const Managed<VkDevice>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkEvent>* pEvent)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pEvent) {
        pEvent->reset();
        VkEvent vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateEvent(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pEvent->mVkHandle = vkHandle;
            pEvent->mspControlBlock = std::make_shared<Managed<VkEvent>::ControlBlock>();
            pEvent->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pEvent->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pEvent->mspControlBlock->set(std::move(Managed<VkEventCreateInfo>(*pCreateInfo)));
            pEvent->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pEvent->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pEvent);
        }
    }
    return vkResult;
}

Managed<VkEvent>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkEvent>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyEvent(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkFence>::ControlBlock::create(const Managed<VkDevice>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFence>* pFence)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pFence) {
        pFence->reset();
        VkFence vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateFence(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pFence->mVkHandle = vkHandle;
            pFence->mspControlBlock = std::make_shared<Managed<VkFence>::ControlBlock>();
            pFence->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pFence->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pFence->mspControlBlock->set(std::move(Managed<VkFenceCreateInfo>(*pCreateInfo)));
            pFence->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pFence->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pFence);
        }
    }
    return vkResult;
}

Managed<VkFence>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkFence>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyFence(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkFramebuffer>::ControlBlock::create(const Managed<VkDevice>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFramebuffer>* pFramebuffer)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pFramebuffer) {
        pFramebuffer->reset();
        VkFramebuffer vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateFramebuffer(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pFramebuffer->mVkHandle = vkHandle;
            pFramebuffer->mspControlBlock = std::make_shared<Managed<VkFramebuffer>::ControlBlock>();
            pFramebuffer->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pFramebuffer->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pFramebuffer->mspControlBlock->set(std::move(Managed<VkFramebufferCreateInfo>(*pCreateInfo)));
            pFramebuffer->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pFramebuffer->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pFramebuffer);
        }
    }
    return vkResult;
}

Managed<VkFramebuffer>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkFramebuffer>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyFramebuffer(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkImage>::ControlBlock::create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImage>* pImage)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pImage) {
        pImage->reset();
        VkImage vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateImage(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pImage->mVkHandle = vkHandle;
            pImage->mspControlBlock = std::make_shared<Managed<VkImage>::ControlBlock>();
            pImage->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pImage->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pImage->mspControlBlock->set(std::move(Managed<VkImageCreateInfo>(*pCreateInfo)));
            pImage->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pImage->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pImage);
        }
    }
    return vkResult;
}

Managed<VkImage>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkImage>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyImage(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkImageView>::ControlBlock::create(const Managed<VkDevice>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImageView>* pView)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pView) {
        pView->reset();
        VkImageView vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateImageView(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pView->mVkHandle = vkHandle;
            pView->mspControlBlock = std::make_shared<Managed<VkImageView>::ControlBlock>();
            pView->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pView->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pView->mspControlBlock->set(std::move(Managed<VkImageViewCreateInfo>(*pCreateInfo)));
            pView->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pView->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pView);
        }
    }
    return vkResult;
}

Managed<VkImageView>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkImageView>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyImageView(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

Managed<VkPerformanceConfigurationINTEL>::ControlBlock::~ControlBlock()
{
}

VkResult Managed<VkPipeline>::ControlBlock::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pPipelines) {
        pPipelines->reset();
        VkPipeline vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pPipelines->mVkHandle = vkHandle;
            pPipelines->mspControlBlock = std::make_shared<Managed<VkPipeline>::ControlBlock>();
            pPipelines->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pPipelines->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pPipelines->mspControlBlock->set(std::move(Managed<VkComputePipelineCreateInfo>(*pCreateInfos)));
            pPipelines->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pPipelines->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pPipelines);
        }
    }
    return vkResult;
}
VkResult Managed<VkPipeline>::ControlBlock::create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pPipelines) {
        pPipelines->reset();
        VkPipeline vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pPipelines->mVkHandle = vkHandle;
            pPipelines->mspControlBlock = std::make_shared<Managed<VkPipeline>::ControlBlock>();
            pPipelines->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pPipelines->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pPipelines->mspControlBlock->set(std::move(Managed<VkGraphicsPipelineCreateInfo>(*pCreateInfos)));
            pPipelines->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pPipelines->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pPipelines);
        }
    }
    return vkResult;
}

Managed<VkPipeline>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkPipeline>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyPipeline(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkPipelineCache>::ControlBlock::create(const Managed<VkDevice>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineCache>* pPipelineCache)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pPipelineCache) {
        pPipelineCache->reset();
        VkPipelineCache vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreatePipelineCache(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pPipelineCache->mVkHandle = vkHandle;
            pPipelineCache->mspControlBlock = std::make_shared<Managed<VkPipelineCache>::ControlBlock>();
            pPipelineCache->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pPipelineCache->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pPipelineCache->mspControlBlock->set(std::move(Managed<VkPipelineCacheCreateInfo>(*pCreateInfo)));
            pPipelineCache->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pPipelineCache->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pPipelineCache);
        }
    }
    return vkResult;
}

Managed<VkPipelineCache>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkPipelineCache>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyPipelineCache(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkPipelineLayout>::ControlBlock::create(const Managed<VkDevice>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineLayout>* pPipelineLayout)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pPipelineLayout) {
        pPipelineLayout->reset();
        VkPipelineLayout vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreatePipelineLayout(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pPipelineLayout->mVkHandle = vkHandle;
            pPipelineLayout->mspControlBlock = std::make_shared<Managed<VkPipelineLayout>::ControlBlock>();
            pPipelineLayout->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pPipelineLayout->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pPipelineLayout->mspControlBlock->set(std::move(Managed<VkPipelineLayoutCreateInfo>(*pCreateInfo)));
            pPipelineLayout->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pPipelineLayout->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pPipelineLayout);
        }
    }
    return vkResult;
}

Managed<VkPipelineLayout>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkPipelineLayout>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyPipelineLayout(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkQueryPool>::ControlBlock::create(const Managed<VkDevice>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkQueryPool>* pQueryPool)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pQueryPool) {
        pQueryPool->reset();
        VkQueryPool vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateQueryPool(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pQueryPool->mVkHandle = vkHandle;
            pQueryPool->mspControlBlock = std::make_shared<Managed<VkQueryPool>::ControlBlock>();
            pQueryPool->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pQueryPool->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pQueryPool->mspControlBlock->set(std::move(Managed<VkQueryPoolCreateInfo>(*pCreateInfo)));
            pQueryPool->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pQueryPool->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pQueryPool);
        }
    }
    return vkResult;
}

Managed<VkQueryPool>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkQueryPool>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyQueryPool(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

Managed<VkQueue>::ControlBlock::~ControlBlock()
{
}

VkResult Managed<VkRenderPass>::ControlBlock::create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pRenderPass) {
        pRenderPass->reset();
        VkRenderPass vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateRenderPass(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pRenderPass->mVkHandle = vkHandle;
            pRenderPass->mspControlBlock = std::make_shared<Managed<VkRenderPass>::ControlBlock>();
            pRenderPass->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pRenderPass->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pRenderPass->mspControlBlock->set(std::move(Managed<VkRenderPassCreateInfo>(*pCreateInfo)));
            pRenderPass->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pRenderPass->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pRenderPass);
        }
    }
    return vkResult;
}
VkResult Managed<VkRenderPass>::ControlBlock::create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pRenderPass) {
        pRenderPass->reset();
        VkRenderPass vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateRenderPass2(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pRenderPass->mVkHandle = vkHandle;
            pRenderPass->mspControlBlock = std::make_shared<Managed<VkRenderPass>::ControlBlock>();
            pRenderPass->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pRenderPass->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pRenderPass->mspControlBlock->set(std::move(Managed<VkRenderPassCreateInfo2>(*pCreateInfo)));
            pRenderPass->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pRenderPass->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pRenderPass);
        }
    }
    return vkResult;
}

Managed<VkRenderPass>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkRenderPass>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyRenderPass(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkSampler>::ControlBlock::create(const Managed<VkDevice>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSampler>* pSampler)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSampler) {
        pSampler->reset();
        VkSampler vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateSampler(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSampler->mVkHandle = vkHandle;
            pSampler->mspControlBlock = std::make_shared<Managed<VkSampler>::ControlBlock>();
            pSampler->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSampler->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pSampler->mspControlBlock->set(std::move(Managed<VkSamplerCreateInfo>(*pCreateInfo)));
            pSampler->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSampler->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSampler);
        }
    }
    return vkResult;
}

Managed<VkSampler>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkSampler>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroySampler(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkSamplerYcbcrConversion>::ControlBlock::create(const Managed<VkDevice>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pYcbcrConversion) {
        pYcbcrConversion->reset();
        VkSamplerYcbcrConversion vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pYcbcrConversion->mVkHandle = vkHandle;
            pYcbcrConversion->mspControlBlock = std::make_shared<Managed<VkSamplerYcbcrConversion>::ControlBlock>();
            pYcbcrConversion->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pYcbcrConversion->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pYcbcrConversion->mspControlBlock->set(std::move(Managed<VkSamplerYcbcrConversionCreateInfo>(*pCreateInfo)));
            pYcbcrConversion->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pYcbcrConversion->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pYcbcrConversion);
        }
    }
    return vkResult;
}

Managed<VkSamplerYcbcrConversion>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkSamplerYcbcrConversion>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroySamplerYcbcrConversion(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}


VkResult Managed<VkSemaphore>::ControlBlock::create(const Managed<VkDevice>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSemaphore>* pSemaphore)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSemaphore) {
        pSemaphore->reset();
        VkSemaphore vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateSemaphore(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSemaphore->mVkHandle = vkHandle;
            pSemaphore->mspControlBlock = std::make_shared<Managed<VkSemaphore>::ControlBlock>();
            pSemaphore->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSemaphore->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pSemaphore->mspControlBlock->set(std::move(Managed<VkSemaphoreCreateInfo>(*pCreateInfo)));
            pSemaphore->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSemaphore->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSemaphore);
        }
    }
    return vkResult;
}

Managed<VkSemaphore>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkSemaphore>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroySemaphore(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkShaderModule>::ControlBlock::create(const Managed<VkDevice>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkShaderModule>* pShaderModule)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pShaderModule) {
        pShaderModule->reset();
        VkShaderModule vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateShaderModule(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pShaderModule->mVkHandle = vkHandle;
            pShaderModule->mspControlBlock = std::make_shared<Managed<VkShaderModule>::ControlBlock>();
            pShaderModule->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pShaderModule->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pShaderModule->mspControlBlock->set(std::move(Managed<VkShaderModuleCreateInfo>(*pCreateInfo)));
            pShaderModule->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pShaderModule->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pShaderModule);
        }
    }
    return vkResult;
}

Managed<VkShaderModule>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkShaderModule>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroyShaderModule(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkAndroidSurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkDirectFBSurfaceCreateInfoEXT>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkDisplaySurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#ifdef VK_USE_PLATFORM_IOS_MVK
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkIOSSurfaceCreateInfoMVK>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_FUCHSIA
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_MACOS_MVK
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkMacOSSurfaceCreateInfoMVK>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_MACOS_MVK
#ifdef VK_USE_PLATFORM_METAL_EXT
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkMetalSurfaceCreateInfoEXT>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_GGP
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkStreamDescriptorSurfaceCreateInfoGGP>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_USE_PLATFORM_VI_NN
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkViSurfaceCreateInfoNN>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkWaylandSurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkWin32SurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkXcbSurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
VkResult Managed<VkSurfaceKHR>::ControlBlock::create(const Managed<VkInstance>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSurface) {
        pSurface->reset();
        VkSurfaceKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSurface->mVkHandle = vkHandle;
            pSurface->mspControlBlock = std::make_shared<Managed<VkSurfaceKHR>::ControlBlock>();
            pSurface->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSurface->mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
            pSurface->mspControlBlock->set(std::move(Managed<VkXlibSurfaceCreateInfoKHR>(*pCreateInfo)));
            pSurface->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSurface->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSurface);
        }
    }
    return vkResult;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

Managed<VkSurfaceKHR>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkSurfaceKHR>();
    if (vkHandle) {
        auto vkInstance = *get<Managed<VkInstance>>();
        assert(vkInstance);
        vkDestroySurfaceKHR(vkInstance, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

VkResult Managed<VkSwapchainKHR>::ControlBlock::create(const Managed<VkDevice>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchains)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSwapchains) {
        pSwapchains->reset();
        VkSwapchainKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSwapchains->mVkHandle = vkHandle;
            pSwapchains->mspControlBlock = std::make_shared<Managed<VkSwapchainKHR>::ControlBlock>();
            pSwapchains->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSwapchains->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pSwapchains->mspControlBlock->set(std::move(Managed<VkSwapchainCreateInfoKHR>(*pCreateInfos)));
            pSwapchains->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSwapchains->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSwapchains);
        }
    }
    return vkResult;
}
VkResult Managed<VkSwapchainKHR>::ControlBlock::create(const Managed<VkDevice>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchain)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pSwapchain) {
        pSwapchain->reset();
        VkSwapchainKHR vkHandle = VK_NULL_HANDLE;
        vkResult = vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pSwapchain->mVkHandle = vkHandle;
            pSwapchain->mspControlBlock = std::make_shared<Managed<VkSwapchainKHR>::ControlBlock>();
            pSwapchain->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pSwapchain->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pSwapchain->mspControlBlock->set(std::move(Managed<VkSwapchainCreateInfoKHR>(*pCreateInfo)));
            pSwapchain->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
            pSwapchain->mspControlBlock->set(std::move(vkHandle));
            detail::on_managed_handle_created(*pSwapchain);
        }
    }
    return vkResult;
}

Managed<VkSwapchainKHR>::ControlBlock::~ControlBlock()
{
    auto vkHandle = get<VkSwapchainKHR>();
    if (vkHandle) {
        auto vkDevice = *get<Managed<VkDevice>>();
        assert(vkDevice);
        vkDestroySwapchainKHR(vkDevice, vkHandle, get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
    }
}

} // namespace vk
} // namespace dst
