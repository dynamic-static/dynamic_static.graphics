
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Sampler.
     */
    class Sampler final
        : public Object<VkSampler>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Sampler construction.
         */
        struct Info final
            : public VkSamplerCreateInfo
        {
            /**
             * Constructs an instance of Sampler::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                magFilter = VK_FILTER_LINEAR;
                minFilter = VK_FILTER_LINEAR;
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
            }
        };

    private:
        Sampler(const std::shared_ptr<Device>& device, const Info& info = { });

    public:
        ~Sampler();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
