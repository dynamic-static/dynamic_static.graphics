
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
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"

#include <vector>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan queue family.
    */
    class QueueFamily final
        : NonCopyable
    {
    private:
        Device* mDevice { nullptr };
        VkDeviceQueueCreateFlags mFlags { 0 };
        uint32_t mIndex { 0 };
        std::vector<Queue> mQueues;

    private:
        /*!
        Creates an instance of Queue::Family.
        @param [in] device This Queue::Family's Device
        @param [in] createInfo This Queue::Family's Queue::CreateInfo
        */
        QueueFamily(
            Device* device,
            Queue::CreateInfo createInfo
        );

    public:
        /*!
        Moves an instance of QueueFamily.
        @param [in] other The QueueFamily to move from
        */
        QueueFamily(QueueFamily&& other);

        /*!
        Moves an instance of QueueFamily.
        @param [in] other The QueueFamily to move from
        */
        QueueFamily& operator=(QueueFamily&& other);

    public:
        /*!
        Gets this Queue::Family's Device.
        @return This Queue::Family's Device
        */
        Device& get_device();

        /*!
        Gets this Queue::Family's Device.
        @return This Queue::Family's Device
        */
        const Device& get_device() const;

        /*!
        Gets this Queue::Family's VkDeviceQueueCreateFlags.
        @return This Queue::Family's VkDeviceQueueCreateFlags
        */
        VkDeviceQueueCreateFlags get_flags() const;

        /*!
        Gets this Queue::Family's index.
        @return This Queue::Family's index
        */
        uint32_t get_index() const;

        /*!
        Gets this Queue::Family's Queues.
        @return This Queue::Family's Queues
        */
        dst::Span<Queue> get_queues();

        /*!
        Gets this Queue::Family's Queues.
        @return This Queue::Family's Queues
        */
        dst::Span<const Queue> get_queues() const;

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
