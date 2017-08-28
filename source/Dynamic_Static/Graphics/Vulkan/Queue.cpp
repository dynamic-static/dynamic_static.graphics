
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
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

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
