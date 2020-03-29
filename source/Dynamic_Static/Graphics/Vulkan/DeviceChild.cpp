
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {
namespace detail {

    DeviceChild::DeviceChild(const std::shared_ptr<Device>& device)
        : mDevice { device }
    {
        assert(mDevice);
    }

    DeviceChild::~DeviceChild()
    {
    }

    Device& DeviceChild::device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& DeviceChild::device() const
    {
        assert(mDevice);
        return *mDevice;
    }

} // namespace detail
} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
