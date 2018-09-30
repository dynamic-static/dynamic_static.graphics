
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Sampler.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    Sampler::Sampler(
        const std::shared_ptr<Device>& device,
        Sampler::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("Sampler");
        dst_vk(vkCreateSampler(get_device(), &createInfo, nullptr, &mHandle));
    }

    Sampler::~Sampler()
    {
        if (mHandle) {
            vkDestroySampler(get_device(), mHandle, nullptr);
        }
    }

} // namespace vk
} // namespace gfx
} // namespace dst
