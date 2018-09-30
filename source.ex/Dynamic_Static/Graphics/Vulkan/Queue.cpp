
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Fence.hpp"
#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"

#include <memory>
#include <string>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {

    Queue::CreateInfo::CreateInfo(const VkDeviceQueueCreateInfo& other)
    {
        *this = other;
    }

    Queue::CreateInfo& Queue::CreateInfo::operator=(const VkDeviceQueueCreateInfo& other)
    {
        if (this != &other) {
            memcpy(this, &other, sizeof(*this));
        }
        return *this;
    }

    Queue::Queue(
        QueueFamily* queueFamily,
        Queue::CreateInfo createInfo,
        VkQueue handle
    )
        : mFamily { queueFamily }
        , mPriority { *createInfo.pQueuePriorities }
    {
        set_name("Queue");
        mHandle = handle;
    }

    Device& Queue::get_device()
    {
        return get_family().get_device();
    }

    const Device& Queue::get_device() const
    {
        return get_family().get_device();
    }

    QueueFamily& Queue::get_family()
    {
        assert(mFamily);
        return *mFamily;
    }

    const QueueFamily& Queue::get_family() const
    {
        assert(mFamily);
        return *mFamily;
    }

    float Queue::get_priority() const
    {
        return mPriority;
    }

    void Queue::wait_idle() const
    {
        dst_vk(vkQueueWaitIdle(mHandle));
    }

    void Queue::prepare_immediate_command_buffer()
    {
        if (!mImmediateCommandBuffer) {
            CommandPool::CreateInfo commandPoolCreateInfo { };
            commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            commandPoolCreateInfo.queueFamilyIndex = mFamily->get_index();
            auto commandPool = get_device().create<CommandPool>(commandPoolCreateInfo);
            mImmediateCommandBuffer = commandPool->allocate<CommandBuffer>();
        }
        assert(mImmediateCommandBuffer);
        auto beginInfo = CommandBuffer::BeginInfo { };
        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        dst_vk(vkBeginCommandBuffer(*mImmediateCommandBuffer, &beginInfo));
    }

    void Queue::submit_immediate_command_buffer(const Fence* fence)
    {
        assert(mImmediateCommandBuffer);
        dst_vk(vkEndCommandBuffer(*mImmediateCommandBuffer));
        SubmitInfo submitInfo { };
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &mImmediateCommandBuffer->get_handle();
        vkQueueSubmit(mHandle, 1, &submitInfo, fence ? fence->get_handle() : VK_NULL_HANDLE);
        dst_vk(vkQueueWaitIdle(mHandle));
    }

} // namespace vk
} // namespace gfx
} // namespace dst
