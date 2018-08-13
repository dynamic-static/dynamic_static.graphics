
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
#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"

#include <string>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan device.
    */
    class Device final
        : public Object<VkDevice>
        , public SharedObject<Device>
        , public PhysicalDeviceChild
    {
    public:
        /*
        * Configuration parameters for Device construction.
        */
        struct CreateInfo final
            : public VkDeviceCreateInfo
        {
            /*
            * Constructs an instance of Device::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueCreateInfoCount = 0;
                pQueueCreateInfos = nullptr;
                enabledLayerCount = 0;
                ppEnabledLayerNames = nullptr;
                enabledExtensionCount = 0;
                ppEnabledExtensionNames = nullptr;
                pEnabledFeatures = nullptr;
            }
        };

    private:
        std::vector<std::string> mEnabledExtensions;
        std::vector<QueueFamily> mQueueFamilies;
        VkPhysicalDeviceFeatures mEnabledFeatures { };

    private:
        /*
        * Constructs an instance of Device.
        * @param [in] physicalDevice This Device's PhysicalDevice
        * @param [in] createInfo This Device's Device::CreateInfo
        */
        Device(
            PhysicalDevice* physicalDevice,
            CreateInfo createInfo
        );

    public:
        /*
        * Destroys this instance of Device.
        */
        ~Device();

    public:
        /*
        * Gets this Device's enabled extensions.
        * @return This Device's enabled extensions
        */
        const std::vector<std::string>& get_enabled_extensions() const;

        /*
        * Gets this Device's Queue::Families.
        * @return This Device's Queue::Families
        */
        const std::vector<QueueFamily>& get_queue_families() const;

        /*
        * Gets this Device's enabled VkPhysicalDeviceFeatures.
        * @return This Device's enabled VkPhysicalDeviceFeatures
        */
        const VkPhysicalDeviceFeatures& get_enabled_features() const;

    private:
        friend class PhysicalDevice;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static