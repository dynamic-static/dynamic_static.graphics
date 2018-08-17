
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
    * Common base for Vulkan Device child objects.
    */
    class DeviceChild
    {
    private:
        std::shared_ptr<Device> mDevice;

    protected:
        /*
        * Constructs an instance of DeviceChild.
        * @param [in] device This DeviceChild's Device
        */
        DeviceChild(const std::shared_ptr<Device>& device);

        /*
        * Moves an instance of DeviceChild.
        * @param [in] other The DeviceChild to move from
        */
        DeviceChild(DeviceChild&& other);

        /*
        * Moves an instance of DeviceChild.
        * @param [in] other The DeviceChild to move from
        * @return This DeviceChild
        */
        DeviceChild& operator=(DeviceChild&& other);

    public:
        /*
        * Destroys this instance of DeviceChild.
        */
        virtual ~DeviceChild() = 0;

    public:
        /*
        * Gets this DeviceChild's Device.
        * @return This DeviceChild's Device
        */
        Device& get_device();

        /*
        * Gets this DeviceChild's Device.
        * @return This DeviceChild's Device
        */
        const Device& get_device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
