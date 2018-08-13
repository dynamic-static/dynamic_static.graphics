
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

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Common base for all Vulkan PhysicalDevice child objects.
    */
    class PhysicalDeviceChild
    {
    private:
        PhysicalDevice* mPhysicalDevice { nullptr };
        std::shared_ptr<Instance> mInstance;

    protected:
        /*
        * Constructs an instance of PhysicalDeviceChild.
        * @param [in] physicalDevice This PhysicalDeviceChild's PhysicalDevice
        */
        PhysicalDeviceChild(PhysicalDevice* physicalDevice);

    public:
        /*
        * Destroys this instance of PhysicalDeviceChild.
        */
        virtual ~PhysicalDeviceChild() = 0;

    public:
        /*
        * Gets this PhysicalDeviceChild's Instance.
        * @return This PhysicalDeviceChild's Instance
        */
        Instance& get_instance();

        /*
        * Gets this PhysicalDeviceChild's Instance.
        * @return This PhysicalDeviceChild's Instance
        */
        const Instance& get_instance() const;

        /*
        * Gets this PhysicalDeviceChild's PhysicalDevice.
        * @return This PhysicalDeviceChild's PhysicalDevice
        */
        PhysicalDevice& get_physical_device();

        /*
        * Gets this PhysicalDeviceChild's PhysicalDevice.
        * @return This PhysicalDeviceChild's PhysicalDevice
        */
        const PhysicalDevice& get_physical_device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
