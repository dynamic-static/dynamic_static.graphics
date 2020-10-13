
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/detail/managed.control-blocks.manual.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <algorithm>

namespace dst {
namespace vk {
namespace detail {

template <>
void on_managed_handle_created(Managed<VkInstance>& instance)
{
    // TODO : Scratch pad allocator...
    // TODO : Error handling...
    uint32_t physicalDeviceCount = 0;
    dst_vk(vkEnumeratePhysicalDevices(instance, &physicalDeviceCount, nullptr));
    std::vector<VkPhysicalDevice> vkPhysicalDevices(physicalDeviceCount);
    dst_vk(vkEnumeratePhysicalDevices(instance, &physicalDeviceCount, vkPhysicalDevices.data()));
    std::vector<Managed<VkPhysicalDevice>> physicalDevices(physicalDeviceCount);
    for (uint32_t i = 0; i < physicalDeviceCount; ++i) {
        auto& physicalDevice = physicalDevices[i];
        physicalDevice.mVkHandle = vkPhysicalDevices[i];
        physicalDevice.mspControlBlock = Managed<VkPhysicalDevice>::create_control_block(vkPhysicalDevices[i]);
        physicalDevice.mspControlBlock->set(VK_OBJECT_TYPE_PHYSICAL_DEVICE);
        physicalDevice.mspControlBlock->set(std::move(Managed<VkInstance>(instance)));
        physicalDevice.mspControlBlock->set(std::move(vkPhysicalDevices[i]));
    }
    instance.mspControlBlock->set(std::move(physicalDevices));
}

template <>
void on_managed_handle_destroyed(Managed<VkInstance>& instance)
{
    if (instance) {
        auto& physicalDevices = const_cast<std::vector<Managed<VkPhysicalDevice>>&>(instance.get<std::vector<Managed<VkPhysicalDevice>>>());
        if (instance.mspControlBlock.use_count() <= physicalDevices.size() + 1) {
            if (std::all_of(physicalDevices.begin(), physicalDevices.end(),
                [](const auto& physicalDevice)
                {
                    return !physicalDevice.mspControlBlock || physicalDevice.mspControlBlock.use_count() <= 2;
                }
            )) {
                for (const auto& physicalDevice : physicalDevices) {
                    if (physicalDevice.mspControlBlock) {
                        physicalDevice.mspControlBlock->set(VK_OBJECT_TYPE_MAX_ENUM /* TODO : Setup VkObject from XML so this can use VK_OBJECT_TYPE_UNKNOWN*/);
                    }
                }
                physicalDevices.clear();
            }
        }
    }
}

template <>
void on_managed_handle_destroyed(Managed<VkPhysicalDevice>& physicalDevice)
{
    if (physicalDevice) {
        on_managed_handle_destroyed(const_cast<Managed<VkInstance>&>(physicalDevice.get<Managed<VkInstance>>()));
    }
}

template <>
void on_managed_handle_created(Managed<VkDevice>& device)
{
    // TODO : Scratch pad allocator...
    const auto& deviceCreateInfo = device.get<Managed<VkDeviceCreateInfo>>();
    if (deviceCreateInfo->queueCreateInfoCount && deviceCreateInfo->pQueueCreateInfos) {
        std::vector<Managed<VkQueue>> queues;
        queues.reserve(deviceCreateInfo->queueCreateInfoCount);
        for (uint32_t queueCreateInfo_i = 0; queueCreateInfo_i < deviceCreateInfo->queueCreateInfoCount; ++queueCreateInfo_i) {
            const auto& deviceQueueCreateInfo = deviceCreateInfo->pQueueCreateInfos[queueCreateInfo_i];
            for (uint32_t queue_i = 0; queue_i < deviceQueueCreateInfo.queueCount; ++queue_i) {
                VkQueue vkQueue = VK_NULL_HANDLE;
                vkGetDeviceQueue(device, deviceQueueCreateInfo.queueFamilyIndex, queue_i, &vkQueue);
                assert(vkQueue);
                Managed<VkQueue> queue;
                queue.mVkHandle = vkQueue;
                queue.mspControlBlock = Managed<VkQueue>::create_control_block(vkQueue);
                queue.mspControlBlock->set(VK_OBJECT_TYPE_QUEUE);
                queue.mspControlBlock->set(std::move(Managed<VkDevice>(device)));
                queue.mspControlBlock->set(std::move(Managed<VkDeviceQueueCreateInfo>(deviceQueueCreateInfo)));
                queue.mspControlBlock->set(std::move(vkQueue));
                queues.push_back(std::move(queue));
            }
        }
        device.mspControlBlock->set(std::move(queues));
    }
}

template <>
void on_managed_handle_destroyed(Managed<VkDevice>& device)
{
    if (device) {
        auto& queues = const_cast<std::vector<Managed<VkQueue>>&>(device.get<std::vector<Managed<VkQueue>>>());
        if (device.mspControlBlock.use_count() <= queues.size() + 1) {
            if (std::all_of(queues.begin(), queues.end(),
                [](const auto& queue)
                {
                    return !queue.mspControlBlock || queue.mspControlBlock.use_count() <= 2;
                }
            )) {
                for (const auto& queue : queues) {
                    if (queue.mspControlBlock) {
                        queue.mspControlBlock->set(VK_OBJECT_TYPE_MAX_ENUM /* TODO : Setup VkObject from XML so this can use VK_OBJECT_TYPE_UNKNOWN*/);
                    }
                }
                queues.clear();
            }
        }
    }
}

template <>
void on_managed_handle_destroyed(Managed<VkQueue>& queue)
{
    if (queue) {
        on_managed_handle_destroyed(const_cast<Managed<VkDevice>&>(queue.get<Managed<VkDevice>>()));
    }
}

template <>
void on_managed_handle_created(Managed<VkSwapchainKHR>& swapchain)
{
    // TODO : Scratch pad allocator...
    // TODO : Error handling...
    assert(swapchain);
    const auto& device = swapchain.get<Managed<VkDevice>>();
    assert(device);
    uint32_t imageCount = 0;
    dst_vk(vkGetSwapchainImagesKHR(device, swapchain, &imageCount, nullptr));
    assert(imageCount);
    std::vector<VkImage> vkImages(imageCount);
    dst_vk(vkGetSwapchainImagesKHR(device, swapchain, &imageCount, vkImages.data()));
    std::vector<Managed<VkImage>> images(vkImages.size());
    const auto& swapchainCreateInfo = swapchain.get<Managed<VkSwapchainCreateInfoKHR>>();
    VkImageCreateInfo imageCreateInfo { };
    imageCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
    imageCreateInfo.format = swapchainCreateInfo->imageFormat;
    imageCreateInfo.extent.width = swapchainCreateInfo->imageExtent.width;
    imageCreateInfo.extent.height = swapchainCreateInfo->imageExtent.height;
    imageCreateInfo.extent.depth = 1;
    imageCreateInfo.mipLevels = 1;
    imageCreateInfo.arrayLayers = swapchainCreateInfo->imageArrayLayers;
    imageCreateInfo.samples = VK_SAMPLE_COUNT_1_BIT;
    imageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
    imageCreateInfo.usage = swapchainCreateInfo->imageUsage;
    imageCreateInfo.sharingMode = swapchainCreateInfo->imageSharingMode;
    imageCreateInfo.queueFamilyIndexCount = swapchainCreateInfo->queueFamilyIndexCount;
    imageCreateInfo.pQueueFamilyIndices = swapchainCreateInfo->pQueueFamilyIndices;
    imageCreateInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    for (uint32_t i = 0; i < imageCount; ++i) {
        auto& image = images[i];
        image.mVkHandle = vkImages[i];
        image.mspControlBlock = Managed<VkImage>::create_control_block(vkImages[i]);
        image.mspControlBlock->set(VK_OBJECT_TYPE_IMAGE);
        image.mspControlBlock->set(std::move(Managed<VkDevice>(device)));
        image.mspControlBlock->set(std::move(Managed<VkImageCreateInfo>(imageCreateInfo)));
        image.mspControlBlock->set(std::move(Managed<VkSwapchainKHR>(swapchain)));
        image.mspControlBlock->set(std::move(vkImages[i]));
    }
    swapchain.mspControlBlock->set(std::move(images));
}

template <>
void on_managed_handle_destroyed(Managed<VkSwapchainKHR>& swapchain)
{
    if (swapchain) {
        auto& images = const_cast<std::vector<Managed<VkImage>>&>(swapchain.get<std::vector<Managed<VkImage>>>());
        if (swapchain.mspControlBlock.use_count() <= images.size() + 1) {
            if (std::all_of(images.begin(), images.end(),
                [](const auto& image)
                {
                    return !image.mspControlBlock || image.mspControlBlock.use_count() <= 2;
                }
            )) {
                for (const auto& image : images) {
                    if (image.mspControlBlock) {
                        image.mspControlBlock->set(VK_OBJECT_TYPE_MAX_ENUM /* TODO : Setup VkObject from XML so this can use VK_OBJECT_TYPE_UNKNOWN*/);
                    }
                }
                images.clear();
            }
        }
    }
}

template <>
void on_managed_handle_destroyed(Managed<VkImage>& image)
{
    if (image) {
        on_managed_handle_destroyed(const_cast<Managed<VkSwapchainKHR>&>(image.get<Managed<VkSwapchainKHR>>()));
    }
}

} // namespace detail

Managed<VkCommandBuffer>::ControlBlock::ControlBlock(VkCommandBuffer vkHandle)
{
    assert(vkHandle);
    set(std::move(vkHandle));
}

VkResult Managed<VkCommandBuffer>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pAllocateInfo && pAllocateInfo->commandBufferCount && pCommandBuffers) {
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
            pCommandBuffers[i].reset();
        }
        Managed<VkCommandPool> commandPool(pAllocateInfo ? pAllocateInfo->commandPool : VK_NULL_HANDLE);
        if (device && commandPool) {
            // TODO : Scratch pad allocator...
            std::vector<VkCommandBuffer> vkCommandBuffers(pAllocateInfo->commandBufferCount);
            vkResult = dst_vk(vkAllocateCommandBuffers(device, pAllocateInfo, vkCommandBuffers.data()));
            if (vkResult == VK_SUCCESS) {
                for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
                    pCommandBuffers[i].mVkHandle = vkCommandBuffers[i];
                    pCommandBuffers[i].mspControlBlock = Managed<VkCommandBuffer>::create_control_block(vkCommandBuffers[i]);
                    pCommandBuffers[i].mspControlBlock->set(VK_OBJECT_TYPE_COMMAND_BUFFER);
                    pCommandBuffers[i].mspControlBlock->set(std::move(Managed<VkCommandPool>(commandPool)));
                    pCommandBuffers[i].mspControlBlock->set(std::move(Managed<VkCommandBufferAllocateInfo>(*pAllocateInfo)));
                    pCommandBuffers[i].mspControlBlock->set(std::move(vkCommandBuffers[i]));
                }
            }
        }
    }
    return vkResult;
}

Managed<VkCommandBuffer>::ControlBlock::~ControlBlock()
{
    assert(get<VkCommandBuffer>());
    unregister_control_block(get<VkCommandBuffer>());
    const auto& commandPool = get<Managed<VkCommandPool>>();
    assert(commandPool);
    const auto& device = commandPool.get<Managed<VkDevice>>();
    assert(device);
    vkFreeCommandBuffers(device, commandPool, 1, &get<VkCommandBuffer>());
}

#if 0
VkResult Managed<VkDescriptorSet>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkDescriptorSetAllocateInfo* pAllocateInfo, Managed<VkDescriptorSet>* pDescriptorSets)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pDescriptorSets) {
        #if 0
        pDescriptorSets->reset();
        VkDescriptorSet vkHandle = VK_NULL_HANDLE;
        vkResult = vkAllocateDescriptorSets(device, pAllocateInfo, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pDescriptorSets->mVkHandle = vkHandle;
            pDescriptorSets->mspControlBlock = std::make_shared<Managed<VkDescriptorSet>::ControlBlock>();
            pDescriptorSets->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pDescriptorSets->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pDescriptorSets->mspControlBlock->set(std::move(Managed<VkDescriptorSetAllocateInfo>(*pAllocateInfo)));
            pDescriptorSets->mspControlBlock->set(std::move(vkHandle));
        }
        #endif
    }
    return vkResult;
}

Managed<VkDescriptorSet>::ControlBlock::~ControlBlock()
{
}
#endif

} // namespace vk
} // namespace dst
