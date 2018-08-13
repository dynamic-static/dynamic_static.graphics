
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

#include <set>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Device::Device(
        PhysicalDevice* physicalDevice,
        CreateInfo createInfo
    )
        : PhysicalDeviceChild(physicalDevice)
        , mEnabledFeatures { *createInfo.pEnabledFeatures }
    {
        set_name(get_physical_device().get_name());
        std::set<std::string> enabledExtensionsSet;
        mEnabledExtensions.reserve(createInfo.enabledExtensionCount);
        for (uint32_t i = 0; i < createInfo.enabledExtensionCount; ++i) {
            if (enabledExtensionsSet.insert(createInfo.ppEnabledExtensionNames[i]).second) {
                mEnabledExtensions.push_back(createInfo.ppEnabledExtensionNames[i]);
            }
        }
        dst_vk(vkCreateDevice(get_physical_device(), &createInfo, nullptr, &mHandle));
        mQueueFamilies.reserve(createInfo.queueCreateInfoCount);
        for (uint32_t i = 0; i < createInfo.queueCreateInfoCount; ++i) {
            mQueueFamilies.push_back(QueueFamily(this, createInfo.pQueueCreateInfos[i]));
        }
    }

    Device::~Device()
    {
        if (mHandle) {
            vkDestroyDevice(mHandle, nullptr);
        }
    }

    const std::vector<std::string>& Device::get_enabled_extensions() const
    {
        return mEnabledExtensions;
    }

    const std::vector<QueueFamily>& Device::get_queue_families() const
    {
        return mQueueFamilies;
    }

    const VkPhysicalDeviceFeatures& Device::get_enabled_features() const
    {
        return mEnabledFeatures;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
