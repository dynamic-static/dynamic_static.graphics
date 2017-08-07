
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Descriptor::Set::Layout::Layout(const std::shared_ptr<Device>& device, const Info& info)
        : DeviceChild(device)
    {
        validate(vkCreateDescriptorSetLayout(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Layout");
    }

    Descriptor::Set::Layout::~Layout()
    {
        if (mHandle) {
            vkDestroyDescriptorSetLayout(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
