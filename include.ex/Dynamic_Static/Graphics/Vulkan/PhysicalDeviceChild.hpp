
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
        * Constructs an instance of PhysicalDevice::Child.
        * @param [in] physicalDevice This PhysicalDevice::Child's PhysicalDevice
        */
        PhysicalDeviceChild(PhysicalDevice* physicalDevice);

    public:
        /*
        * Destroys this instance of PhysicalDevice::Child.
        */
        virtual ~PhysicalDeviceChild() = 0;

    public:
        /*
        * Gets this PhysicalDevice::Child's Instance.
        * @return This PhysicalDevice::Child's Instance
        */
        Instance& get_instance();

        /*
        * Gets this PhysicalDevice::Child's Instance.
        * @return This PhysicalDevice::Child's Instance
        */
        const Instance& get_instance() const;

        /*
        * Gets this PhysicalDevice::Child's PhysicalDevice.
        * @return This PhysicalDevice::Child's PhysicalDevice
        */
        PhysicalDevice& get_physical_device();

        /*
        * Gets this PhysicalDevice::Child's PhysicalDevice.
        * @return This PhysicalDevice::Child's PhysicalDevice
        */
        const PhysicalDevice& get_physical_device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
