
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan queue.
    */
    class Queue final
        : public Object<VkQueue>
    {
    public:
        using Family = QueueFamily;

        /*
        * Configuration parameters for Queue construction.
        */
        struct CreateInfo final
            : public VkDeviceQueueCreateInfo
        {
            /*
            * Constructs an instance of Queue::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueFamilyIndex = 0;
                queueCount = 0;
                pQueuePriorities = nullptr;
            }

            /*
            * Copies an instance of Queue::CreateInfo.
            * @param [in] other The VkDeviceQueueCreateInfo to copy from
            */
            CreateInfo(const VkDeviceQueueCreateInfo& other)
            {
                *this = other;
            }

            /*
            * Copies an instance of Queue::CreateInfo.
            * @param [in] other The VkDeviceQueueCreateInfo to copy from
            */
            CreateInfo& operator=(const VkDeviceQueueCreateInfo& other)
            {
                if (this != &other) {
                    memcpy(this, &other, sizeof(*this));
                }
                return *this;
            }
        };

    private:
        QueueFamily * mFamily { nullptr };
        float mPriority { 0 };
        std::shared_ptr<CommandPool> mImmediateCommandPool;
        CommandBuffer* mImmediateCommandBuffer { nullptr };

    private:
        /*
        * Constructs an instance of Queue.
        * @param [in] device This Queue's Queue::Family
        * @param [in] createInfo This Queue's Queue::CreateInfo
        */
        Queue(
            QueueFamily* queueFamily,
            CreateInfo createInfo
        );

    public:
        /*
        * Gets this Queue's Device.
        * @return This Queue's Device
        */
        Device& get_device();

        /*
        * Gets this Queue's Device.
        * @return This Queue's Device
        */
        const Device& get_device() const;

        /*
        * Gets this Queue's Queue::Family.
        * @return This Queue's Queue::Family
        */
        QueueFamily& get_family();

        /*
        * Gets this Queue's Queue::Family.
        * @return This Queue's Queue::Family
        */
        const QueueFamily& get_family() const;

        /*
        * Gets this Queue's priority.
        * @return This Queue's priority
        */
        float get_priority() const;

    private:
        friend class QueueFamily;
    };

    static_assert(
        sizeof(Queue::CreateInfo) == sizeof(VkDeviceQueueCreateInfo),
        "sizeof(Queue::CreateInfo) != sizeof(VkDeviceQueueCreateInfo)"
    );

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
