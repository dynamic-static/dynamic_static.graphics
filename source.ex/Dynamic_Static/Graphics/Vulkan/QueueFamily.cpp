
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

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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

    const std::vector<Queue>& QueueFamily::get_queues() const
    {
        return mQueues;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
