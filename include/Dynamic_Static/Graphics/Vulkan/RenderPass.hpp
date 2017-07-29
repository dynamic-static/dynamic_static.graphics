
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

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
     * Provides high level control over a Vulkan RenderPass.
     */
    class RenderPass final
        : public Object<VkRenderPass>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for RenderPass construction.
         */
        struct Info final
            : public VkRenderPassCreateInfo
        {
            /**
             * Constructs an instance of RenderPass with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                attachmentCount = 0;
                pAttachments = nullptr;
                subpassCount = 0;
                pSubpasses = nullptr;
                dependencyCount = 0;
                pDependencies = nullptr;
            }
        };

        /**
         * TODO : Documentation.
         */
        struct BeginInfo final
            : public VkRenderPassBeginInfo
        {
            /**
             * TODO : Documentation.
             */
            BeginInfo()
            {
                sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
                pNext = nullptr;
                renderPass = VK_NULL_HANDLE;
                framebuffer = VK_NULL_HANDLE;
                renderArea = { };
                clearValueCount = 0;
                pClearValues = nullptr;
            }
        };

    private:
        RenderPass(const std::shared_ptr<Device>& device, const Info& info);

    public:
        /**
         * Destroys this instance of RenderPass.
         */
        ~RenderPass();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
