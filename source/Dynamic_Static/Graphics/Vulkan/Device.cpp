
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

#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Core/VectorUtilities.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"

#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {
    Device::Device(
        PhysicalDevice& physicalDevice,
        const gsl::span<std::string>& layers,
        const gsl::span<std::string>& extensions,
        const gsl::span<Queue::Info>& queueInfos
    )
        : Device(physicalDevice, layers, extensions, queueInfos, physicalDevice.features())
    {
    }

    Device::Device(
        PhysicalDevice& physicalDevice,
        const gsl::span<std::string>& layers,
        const gsl::span<std::string>& extensions,
        const gsl::span<Queue::Info>& queueInfos,
        const VkPhysicalDeviceFeatures& features
    )
        : mPhysicalDevice { &physicalDevice }
        , mInstance { physicalDevice.instance().shared() }
        , mLayers(layers.begin(), layers.end())
        , mExtensions(extensions.begin(), extensions.end())
        , mFeatures { features }
    {
        // NOTE : This code is duplicated in Instance.cpp.
        auto validate_requests =
        [](std::vector<std::string>& requests)
        {
            dst::remove_duplicates(requests);
            return dst::convert<std::string, const char*>(
                requests,
                [](const std::string& str)
                {
                    return str.c_str();
                }
            );
        };

        auto requestedLayers = validate_requests(mLayers);
        auto requestedExtensions = validate_requests(mExtensions);

        Info info { };
        info.queueCreateInfoCount = static_cast<uint32_t>(queueInfos.size());
        info.pQueueCreateInfos = queueInfos.data();
        info.enabledLayerCount = static_cast<uint32_t>(requestedLayers.size());
        info.ppEnabledLayerNames = requestedLayers.data();
        info.enabledExtensionCount = static_cast<uint32_t>(requestedExtensions.size());
        info.ppEnabledExtensionNames = requestedExtensions.data();
        validate(vkCreateDevice(*mPhysicalDevice, &info, nullptr, &mHandle));

        mQueues.reserve(queueInfos.size());
        for (auto queueInfo : queueInfos) {
            mQueues.push_back(std::vector<std::unique_ptr<Queue>>());
            mQueues.back().reserve(std::max(1u, queueInfo.queueCount));
            for (uint32_t i = 0; i < queueInfo.queueCount; ++i) {
                std::unique_ptr<Queue> queue;
                queue.reset(new Queue(*this, queueInfo, i));
                mQueues.back().push_back(std::move(queue));
            }
        }

        name("Dynamic_Static::Vulkan::Device");
    }

    Device::~Device()
    {
        mQueues.clear();
    }

    std::shared_ptr<Device> Device::shared()
    {
        return shared_from_this();
    }

    const PhysicalDevice& Device::physical_device() const
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

    const std::vector<std::string>& Device::layers() const
    {
        return mLayers;
    }

    const std::vector<std::string>& Device::extensions() const
    {
        return mExtensions;
    }

    const VkPhysicalDeviceFeatures& Device::features() const
    {
        return mFeatures;
    }

    const std::vector<std::vector<std::unique_ptr<Queue>>>& Device::queues() const
    {
        return mQueues;
    }

    void Device::wait_idle()
    {
        validate(vkDeviceWaitIdle(mHandle));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
