
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
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Pipeline.
     */
    class Pipeline final
        : public Object<VkPipeline>
    {
        friend class Device;

    public:
        class Layout;

        /**
         * Configuration paramaters for Graphics Pipeline construction.
         */
        struct GraphicsInfo final
            : public VkGraphicsPipelineCreateInfo
        {
            /**
             * Constructs an instance of Pipeline::GraphicsInfo with default paramaters.
             */
            GraphicsInfo()
            {
                sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                stageCount = 0;
                pStages = nullptr;
                pVertexInputState = nullptr;
                pInputAssemblyState = nullptr;
                pTessellationState = nullptr;
                pViewportState = nullptr;
                pRasterizationState = nullptr;
                pMultisampleState = nullptr;
                pDepthStencilState = nullptr;
                pColorBlendState = nullptr;
                pDynamicState = nullptr;
                layout = VK_NULL_HANDLE;
                renderPass = VK_NULL_HANDLE;
                subpass = 0;
                basePipelineHandle = VK_NULL_HANDLE;
                basePipelineIndex = 0;
            }
        };

        /**
         * Configuration paramaters for Compute Pipeline construction.
         */
        struct ComputeInfo final
            : public VkComputePipelineCreateInfo
        {
            /**
             * Constructs an instance of Pipeline::ComputeInfo with default paramaters.
             */
            ComputeInfo()
            {
                sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                stage = { };
                layout = VK_NULL_HANDLE;
                basePipelineHandle = VK_NULL_HANDLE;
                basePipelineIndex = 0;
            }
        };

    private:
        std::shared_ptr<Device> mDevice;

    private:
        Pipeline(const std::shared_ptr<Device>& device, const GraphicsInfo& info);

    public:
        /**
         * Destroys this instance of Pipeline.
         */
        ~Pipeline();

    public:
        /**
         * Gets this Pipeline's Device.
         * @return This Pipeline's Device
         */
        Device& device();

        /**
         * Gets this Pipeline's Device.
         * @return This Pipeline's Device
         */
        const Device& device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
