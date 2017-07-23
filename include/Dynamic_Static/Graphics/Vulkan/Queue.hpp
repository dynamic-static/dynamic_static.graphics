
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

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Queue.
     */
    class Queue final
        : public Object<VkQueue>
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Queue construction.
         */
        struct Info final
            : public VkDeviceQueueCreateInfo
        {
            /**
             * Constructs an instance of Queue::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueFamilyIndex = 0;
                queueCount = 1;
                pQueuePriorities = nullptr;
            }
        };

        /**
         * TODO : Documentation.
         */
        struct SubmitInfo final
            : public VkSubmitInfo
        {
            /**
             * TODO : Documentation.
             */
            SubmitInfo()
            {
                sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
                pNext = nullptr;
                waitSemaphoreCount = 0;
                pWaitSemaphores = nullptr;
                pWaitDstStageMask = nullptr;
                commandBufferCount = 0;
                pCommandBuffers = nullptr;
                signalSemaphoreCount = 0;
                pSignalSemaphores = nullptr;
            }
        };

        /**
         * TODO : Documentation.
         */
        struct PresentInfoKHR final
            : public VkPresentInfoKHR
        {
            /**
             * TODO : Documentation.
             */
            PresentInfoKHR()
            {
                sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
                pNext = nullptr;
                waitSemaphoreCount = 0;
                pWaitSemaphores = nullptr;
                swapchainCount = 0;
                pSwapchains = nullptr;
                pImageIndices = nullptr;
                pResults = nullptr;
            }
        };

    private:
        size_t mFamilyIndex { 0 };
        float mPriority { 0 };
        Device* mDevice { nullptr };

    private:
        Queue(Device& device, const Info& info, size_t familyIndex);

    public:
        /**
         * Gets this Queue's Device.
         * @return This Queue's Device
         */
        Device& device();

        /**
         * Gets this Queue's Device.
         * @return This Queue's Device
         */
        const Device& device() const;

        /**
         * Gets this Queue's family index.
         * @return This Queue's family index
         */
        size_t family_index() const;

        /**
         * Gets this Queue's priority.
         * @return This Queue's priority
         */
        float priority() const;

        /**
         * TODO : Documentation.
         */
        void submit(const SubmitInfo& submitInfo);

        /**
         * TODO : Documentation.
         */
        void present(const PresentInfoKHR& presentInfo);

        /**
         * TODO : Documentation.
         */
        void wait_idle();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
