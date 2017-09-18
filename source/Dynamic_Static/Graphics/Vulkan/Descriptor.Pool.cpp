
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Descriptor::Pool::Pool(const std::shared_ptr<Device>& device, const VkDescriptorPoolCreateInfo& info)
        : DeviceChild(device)
    {
        validate(vkCreateDescriptorPool(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Descriptor::Pool");
    }

    Descriptor::Pool::~Pool()
    {
        if (mHandle) {
            vkDestroyDescriptorPool(device(), mHandle, nullptr);
        }
    }

    const std::vector<std::unique_ptr<Descriptor::Set>>& Descriptor::Pool::sets() const
    {
        return mSets;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
