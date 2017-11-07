
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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

    constexpr VkDeviceCreateInfo Device::CreateInfo;

    Device::Device(
        PhysicalDevice& physicalDevice,
        const gsl::span<std::string>& layers,
        const gsl::span<std::string>& extensions,
        const gsl::span<VkDeviceQueueCreateInfo>& queueInfos
    )
        : Device(physicalDevice, layers, extensions, queueInfos, physicalDevice.features())
    {
    }

    Device::Device(
        PhysicalDevice& physicalDevice,
        const gsl::span<std::string>& layers,
        const gsl::span<std::string>& extensions,
        const gsl::span<VkDeviceQueueCreateInfo>& queueInfos,
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

        auto info = CreateInfo;
        info.queueCreateInfoCount = static_cast<uint32_t>(queueInfos.size());
        info.pQueueCreateInfos = queueInfos.data();
        info.enabledLayerCount = static_cast<uint32_t>(requestedLayers.size());
        info.ppEnabledLayerNames = requestedLayers.data();
        info.enabledExtensionCount = static_cast<uint32_t>(requestedExtensions.size());
        info.ppEnabledExtensionNames = requestedExtensions.data();
        info.pEnabledFeatures = &mFeatures;
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

        name("Device");
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
