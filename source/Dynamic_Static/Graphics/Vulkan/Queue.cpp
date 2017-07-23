
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Queue::Queue(Device& device, const Info& info, size_t index)
        : mDevice { &device }
        , mFamilyIndex { info.queueFamilyIndex }
        , mPriority { info.pQueuePriorities[index] }
    {
        vkGetDeviceQueue(device, static_cast<uint32_t>(mFamilyIndex), static_cast<uint32_t>(index), &mHandle);
        name("Dynamic_Static::Vulkan::Queue");
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

    void Queue::submit(const SubmitInfo& submitInfo)
    {
        validate(vkQueueSubmit(mHandle, 1, &submitInfo, VK_NULL_HANDLE));
    }

    void Queue::present(const PresentInfoKHR& presentInfo)
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
