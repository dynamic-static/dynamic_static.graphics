
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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
         * Default Queue creation parameters.
         */
        static constexpr VkDeviceQueueCreateInfo CreateInfo {
            /* sType            */ VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
            /* pNext            */ nullptr,
            /* flags            */ 0,
            /* queueFamilyIndex */ 0,
            /* queueCount       */ 1,
            /* pQueuePriorities */ nullptr,
        };

        /**
         * Default Queue submit parameters.
         */
        static constexpr VkSubmitInfo SubmitInfo {
            /* sType                */ VK_STRUCTURE_TYPE_SUBMIT_INFO,
            /* pNext                */ nullptr,
            /* waitSemaphoreCount   */ 0,
            /* pWaitSemaphores      */ nullptr,
            /* pWaitDstStageMask    */ nullptr,
            /* commandBufferCount   */ 0,
            /* pCommandBuffers      */ nullptr,
            /* signalSemaphoreCount */ 0,
            /* pSignalSemaphores    */ nullptr,
        };

        /**
         * Default Queue present parameters.
         */
        static constexpr VkPresentInfoKHR PresentInfoKHR {
            /* sType              */ VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,
            /* pNext              */ nullptr,
            /* waitSemaphoreCount */ 0,
            /* pWaitSemaphores    */ nullptr,
            /* swapchainCount     */ 0,
            /* pSwapchains        */ nullptr,
            /* pImageIndices      */ nullptr,
            /* pResults           */ nullptr,
        };

    private:
        size_t mFamilyIndex { 0 };
        float mPriority { 0 };
        std::shared_ptr<Command::Pool> mImmediateCommandPool;
        Command::Buffer* mImmediateCommandBuffer { nullptr };
        Device* mDevice { nullptr };

    private:
        Queue(Device& device, const VkDeviceQueueCreateInfo& info, size_t familyIndex);

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
        void submit(const VkSubmitInfo& submitInfo);

        /**
         * TODO : Documentation.
         */
        void present(const VkPresentInfoKHR& presentInfo);

        /**
         * TODO : Documentation.
         */
        void wait_idle();

        /**
         * TODO : Documentation.
         */
        template <typename FunctionType>
        void process_immediate(const FunctionType& function)
        {
            prepare_immediate_command_buffer();
            assert(mImmediateCommandPool);
            assert(mImmediateCommandBuffer);
            function(*mImmediateCommandBuffer);
            submit_immediate_command_buffer();
        }

    private:
        void prepare_immediate_command_buffer();
        void submit_immediate_command_buffer();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
