
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Queue::Queue(Device& device, const VkDeviceQueueCreateInfo& info, size_t index)
        : mDevice { &device }
        , mFamilyIndex { info.queueFamilyIndex }
        , mPriority { info.pQueuePriorities[index] }
    {
        vkGetDeviceQueue(device, static_cast<uint32_t>(mFamilyIndex), static_cast<uint32_t>(index), &mHandle);
        name("Queue");
    }

    Device& Queue::device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& Queue::device() const
    {
        assert(mDevice);
        return *mDevice;
    }

    size_t Queue::family_index() const
    {
        return mFamilyIndex;
    }

    float Queue::priority() const
    {
        return mPriority;
    }

    void Queue::submit(const VkSubmitInfo& submitInfo)
    {
        validate(vkQueueSubmit(mHandle, 1, &submitInfo, VK_NULL_HANDLE));
    }

    void Queue::present(const VkPresentInfoKHR& presentInfo)
    {
        validate(vkQueuePresentKHR(mHandle, &presentInfo));
    }

    void Queue::wait_idle()
    {
        validate(vkQueueWaitIdle(mHandle));
    }

    void Queue::prepare_immediate_command_buffer()
    {
        if (!mImmediateCommandBuffer) {
            auto commandPoolInfo = Command::Pool::CreateInfo;
            commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(mFamilyIndex);
            mImmediateCommandPool = mDevice->create<Command::Pool>(commandPoolInfo);
            mImmediateCommandBuffer = mImmediateCommandPool->allocate<Command::Buffer>();
        }

        auto beginInfo = Command::Buffer::BeginInfo;
        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        mImmediateCommandBuffer->begin(beginInfo);
    }

    void Queue::submit_immediate_command_buffer()
    {
        assert(mImmediateCommandPool);
        assert(mImmediateCommandBuffer);
        mImmediateCommandBuffer->end();
        auto submitInfo = SubmitInfo;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &mImmediateCommandBuffer->handle();
        wait_idle();
        submit(submitInfo);
        wait_idle();
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
