
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

#include <utility>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {

    QueueFamily::QueueFamily(
        Device* device,
        Queue::CreateInfo createInfo
    )
        : mDevice { device }
        , mFlags { createInfo.flags }
    {
        mQueues.reserve(createInfo.queueCount);
        for (uint32_t i = 0; i < createInfo.queueCount; ++i) {
            VkQueue queue = VK_NULL_HANDLE;
            vkGetDeviceQueue(get_device(), mIndex, i, &queue);
            mQueues.push_back(Queue(this, createInfo, queue));
            ++createInfo.pQueuePriorities;
        }
    }

    QueueFamily::QueueFamily(QueueFamily&& other)
    {
        *this = std::move(other);
    }

    QueueFamily& QueueFamily::operator=(QueueFamily&& other)
    {
        if (this != &other) {
            mDevice = std::move(other.mDevice);
            mFlags = std::move(other.mFlags);
            mIndex = std::move(other.mIndex);
            mQueues = std::move(other.mQueues);
            other.mDevice = nullptr;
            for (auto& queue : mQueues) {
                queue.mFamily = this;
            }
        }
        return *this;
    }

    Device& QueueFamily::get_device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& QueueFamily::get_device() const
    {
        assert(mDevice);
        return *mDevice;
    }

    VkDeviceQueueCreateFlags QueueFamily::get_flags() const
    {
        return mFlags;
    }

    uint32_t QueueFamily::get_index() const
    {
        return mIndex;
    }

    dst::Span<Queue> QueueFamily::get_queues()
    {
        return mQueues;
    }

    dst::Span<const Queue> QueueFamily::get_queues() const
    {
        return mQueues;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
