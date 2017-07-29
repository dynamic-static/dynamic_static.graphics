/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
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
