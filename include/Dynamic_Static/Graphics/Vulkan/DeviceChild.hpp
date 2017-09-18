
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/NonCopyable.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {
namespace detail {

    /**
     * Common base for Vulkan::Objects that are created by Vulkan::Devices.
     */
    class DeviceChild
        : NonCopyable
    {
    private:
        std::shared_ptr<Device> mDevice;

    public:
        /**
         * Constructs an instance of Device::Child.
         * @param [in] device This Device::Child's Device
         */
        DeviceChild(const std::shared_ptr<Device>& device);

        /**
         * Destroys this instance of DeviceChild.
         */
        virtual ~DeviceChild() = 0;

    public:
        /**
         * Gets this Device::Child's Device.
         * @return This Device::Child's Device
         */
        Device& device();

        /**
         * Gets this Device::Child's Device.
         * @return This Device::Child's Device
         */
        const Device& device() const;
    };

} // namespace detail
} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
