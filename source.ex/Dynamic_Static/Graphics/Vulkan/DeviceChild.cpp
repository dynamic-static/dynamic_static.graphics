
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

#include <utility>

namespace dst {
namespace gfx {
namespace vk {

    DeviceChild::DeviceChild(const std::shared_ptr<Device>& device)
        : mDevice { device }
    {
    }

    DeviceChild::DeviceChild(DeviceChild&& other)
    {
        *this = std::move(other);
    }

    DeviceChild& DeviceChild::operator=(DeviceChild&& other)
    {
        if (this != &other) {
            mDevice = std::move(other.mDevice);
        }
        return *this;
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

} // namespace vk
} // namespace gfx
} // namespace dst
