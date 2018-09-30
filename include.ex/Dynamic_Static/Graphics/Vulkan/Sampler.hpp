
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan sampler.
    */
    class Sampler final
        : public Object<VkSampler>
        , public SharedObject<Sampler>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for Sampler construction.
        */
        struct CreateInfo final
            : public VkSamplerCreateInfo
        {
            /*!
            Constructs an instance of Sampler::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                minFilter = VK_FILTER_LINEAR;
                magFilter = VK_FILTER_LINEAR;
                mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
                addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
                addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
                addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
                mipLodBias = 0;
                anisotropyEnable = VK_TRUE;
                maxAnisotropy = 16;
                compareEnable = VK_FALSE;
                compareOp = VK_COMPARE_OP_ALWAYS;
                minLod = 0;
                maxLod = 0;
                borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
                unnormalizedCoordinates = VK_FALSE;
                static_assert(
                    sizeof(Sampler::CreateInfo) == sizeof(VkSamplerCreateInfo),
                    "sizeof(Sampler::CreateInfo) != sizeof(VkSamplerCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of Sampler.
        @param [in] device This Sampler's Device
        @param [in] createInfo This Sampler's Sampler::CreateInfo (optional = { })
        */
        Sampler(
            const std::shared_ptr<Device>& device,
            Sampler::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of Sampler.
        */
        ~Sampler();

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
