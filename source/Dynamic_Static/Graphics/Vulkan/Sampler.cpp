
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Sampler.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    constexpr VkSamplerCreateInfo Sampler::CreateInfo;

    Sampler::Sampler(
        const std::shared_ptr<Device>& device,
        const VkSamplerCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateSampler(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Sampler");
    }

    Sampler::~Sampler()
    {
        if (mHandle) {
            vkDestroySampler(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
