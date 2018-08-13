
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    DeviceChild::DeviceChild(const std::shared_ptr<Device>& device)
        : mDevice { device }
    {
    }

    DeviceChild::~DeviceChild()
    {
    }

    Device& DeviceChild::get_device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& DeviceChild::get_device() const
    {
        assert(mDevice);
        return *mDevice;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
