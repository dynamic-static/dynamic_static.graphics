
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"

#include <memory>
#include <string>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Queue::Queue(
        QueueFamily* queueFamily,
        CreateInfo createInfo,
        VkQueue handle
    )
        : mFamily { queueFamily }
        , mPriority { *createInfo.pQueuePriorities }
    {
        set_name("Queue");
        mHandle = handle;
    }

    Device& Queue::get_device()
    {
        return get_family().get_device();
    }

    const Device& Queue::get_device() const
    {
        return get_family().get_device();
    }

    QueueFamily& Queue::get_family()
    {
        assert(mFamily);
        return *mFamily;
    }

    const QueueFamily& Queue::get_family() const
    {
        assert(mFamily);
        return *mFamily;
    }

    float Queue::get_priority() const
    {
        return mPriority;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
