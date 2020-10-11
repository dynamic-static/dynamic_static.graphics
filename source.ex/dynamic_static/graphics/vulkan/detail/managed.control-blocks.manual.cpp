
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

namespace dst {
namespace vk {

VkResult Managed<VkCommandBuffer>::ControlBlock::allocate(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers)
{
    auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
    if (pCommandBuffers && pAllocateInfo && pAllocateInfo->commandBufferCount) {
        #if 0
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
            pCommandBuffers[i].reset();
        }
        // TODO : Scratch pad allocator...
        thread_local std::vector<VkCommandBuffer> tlVkCommandBuffers;
        tlVkCommandBuffers.clear();
        tlVkCommandBuffers.resize(pAllocateInfo->commandBufferCount);
        vkResult = vkAllocateCommandBuffers(device, pAllocateInfo, tlVkCommandBuffers.data());
        if (vkResult == VK_SUCCESS) {
            for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
                pCommandBuffers[i].mVkHandle = tlVkCommandBuffers[i];
                pCommandBuffers[i].mspControlBlock = std::make_shared<ControlBlock>();
                pCommandBuffers[i].mspControlBlock->set(VK_OBJECT_TYPE_COMMAND_BUFFER);
                // pCommandBuffers->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
                pCommandBuffers->mspControlBlock->set(std::move(Managed<VkCommandBufferAllocateInfo>(*pAllocateInfo)));
                pCommandBuffers->mspControlBlock->set(std::move(tlVkCommandBuffers[i]));
            }
        }
        #endif

        #if 0
        pCommandBuffers->reset();
        VkCommandBuffer vkHandle = VK_NULL_HANDLE;
        vkResult = vkAllocateCommandBuffers(device, pAllocateInfo, &vkHandle);
        if (vkResult == VK_SUCCESS) {
            pCommandBuffers->mVkHandle = vkHandle;
            pCommandBuffers->mspControlBlock = std::make_shared<Managed<VkCommandBuffer>::ControlBlock>();
            pCommandBuffers->mspControlBlock->set(VK_OBJECT_TYPE_UNKNOWN);
            pCommandBuffers->mspControlBlock->set(std::move(Managed<VkDevice>(device)));
            pCommandBuffers->mspControlBlock->set(std::move(Managed<VkCommandBufferAllocateInfo>(*pAllocateInfo)));
            pCommandBuffers->mspControlBlock->set(std::move(vkHandle));
        }
        #endif
    }
    return vkResult;
}

Managed<VkCommandBuffer>::ControlBlock::~ControlBlock()
{
}

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

} // namespace vk
} // namespace dst
