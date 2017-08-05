
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
                borderColor = VK_BORDER_COLOR_INT_TRANSPARENT_BLACK;
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
