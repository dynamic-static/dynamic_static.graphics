
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDeviceChild.hpp"

#include <memory>
#include <string>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan queue.
    */
    class Queue final
        : public Object<VkQueue>
    {
    public:
        using Family = QueueFamily;

        /*!
        Configuration parameters for Queue construction.
        */
        struct CreateInfo final
            : public VkDeviceQueueCreateInfo
        {
            /*!
            Constructs an instance of Queue::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueFamilyIndex = 0;
                queueCount = 0;
                pQueuePriorities = nullptr;
                static_assert(
                    sizeof(Queue::CreateInfo) == sizeof(VkDeviceQueueCreateInfo),
                    "sizeof(Queue::CreateInfo) != sizeof(VkDeviceQueueCreateInfo)"
                );
            }

            /*!
            Copies an instance of Queue::CreateInfo.
            @param [in] other The VkDeviceQueueCreateInfo to copy from
            */
            CreateInfo(const VkDeviceQueueCreateInfo& other);

            /*!
            Copies an instance of Queue::CreateInfo.
            @param [in] other The VkDeviceQueueCreateInfo to copy from
            */
            CreateInfo& operator=(const VkDeviceQueueCreateInfo& other);
        };

        /*!
        Configuration parameters for Queue submission.
        */
        struct SubmitInfo final
            : public VkSubmitInfo
        {
            /*!
            Constructs an instance of Queue::SubmitInfo.
            */
            inline SubmitInfo()
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
                static_assert(
                    sizeof(Queue::SubmitInfo) == sizeof(VkSubmitInfo),
                    "sizeof(Queue::SubmitInfo) != sizeof(VkSubmitInfo)"
                );
            }
        };

        /*!
        Configuration parameters for Queue presentation.
        */
        struct PresentInfoKHR final
            : public VkPresentInfoKHR
        {
            /*!
            Constructs an instance of Queue::PresentInfoKHR.
            */
            inline PresentInfoKHR()
            {
                sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
                pNext = nullptr;
                waitSemaphoreCount = 0;
                pWaitSemaphores = nullptr;
                swapchainCount = 0;
                pSwapchains = nullptr;
                pImageIndices = nullptr;
                pResults = nullptr;
                static_assert(
                    sizeof(Queue::PresentInfoKHR) == sizeof(VkPresentInfoKHR),
                    "sizeof(Queue::PresentInfoKHR) != sizeof(VkPresentInfoKHR)"
                );
            }
        };

    private:
        QueueFamily * mFamily { nullptr };
        float mPriority { 0 };
        std::shared_ptr<CommandBuffer> mImmediateCommandBuffer;

    private:
        /*!
        Constructs an instance of Queue.
        @param [in] device This Queue's Queue::Family
        @param [in] createInfo This Queue's Queue::CreateInfo
        @param [in] handle This Queue's handle
        */
        Queue(
            QueueFamily* queueFamily,
            Queue::CreateInfo createInfo,
            VkQueue handle
        );

    public:
        /*!
        Gets this Queue's Device.
        @return This Queue's Device
        */
        Device& get_device();

        /*!
        Gets this Queue's Device.
        @return This Queue's Device
        */
        const Device& get_device() const;

        /*!
        Gets this Queue's Queue::Family.
        @return This Queue's Queue::Family
        */
        QueueFamily& get_family();

        /*!
        Gets this Queue's Queue::Family.
        @return This Queue's Queue::Family
        */
        const QueueFamily& get_family() const;

        /*!
        Gets this Queue's priority.
        @return This Queue's priority
        */
        float get_priority() const;

        /*!
        Blocks the calling thread until this Queue has completed all pending operations.
        */
        void wait_idle() const;

        /*!
        TODO : Documentation.
        */
        template <typename FunctionType>
        inline void process_immediately(
            FunctionType function,
            const Fence* fence = nullptr
        )
        {
            prepare_immediate_command_buffer();
            function(*mImmediateCommandBuffer);
            submit_immediate_command_buffer(fence);
        }

    private:
        void prepare_immediate_command_buffer();
        void submit_immediate_command_buffer(const Fence* fence);
        friend class QueueFamily;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
