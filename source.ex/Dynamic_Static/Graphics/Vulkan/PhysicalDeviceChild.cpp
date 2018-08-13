
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/PhysicalDeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PhysicalDeviceChild::PhysicalDeviceChild(PhysicalDevice* physicalDevice)
        : mPhysicalDevice { physicalDevice }
        , mInstance { get_physical_device().get_instance().get_shared_ptr() }
    {
    }

    PhysicalDeviceChild::~PhysicalDeviceChild()
    {
    }

    Instance& PhysicalDeviceChild::get_instance()
    {
        assert(mInstance);
        return *mInstance;
    }

    const Instance& PhysicalDeviceChild::get_instance() const
    {
        assert(mInstance);
        return *mInstance;
    }

    PhysicalDevice& PhysicalDeviceChild::get_physical_device()
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

    const PhysicalDevice& PhysicalDeviceChild::get_physical_device() const
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
