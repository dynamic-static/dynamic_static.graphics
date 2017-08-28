
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
     * Provides high level control over a Vulkan Pipeline.
     */
    class Pipeline final
        : public Object<VkPipeline>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        class Layout;

        /**
         * Default graphics Pipeline creation parameters.
         */
        static constexpr VkGraphicsPipelineCreateInfo GraphicsCreateInfo {
            /* sType               */ VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
            /* pNext               */ nullptr,
            /* flags               */ 0,
            /* stageCount          */ 0,
            /* pStages             */ nullptr,
            /* pVertexInputState   */ nullptr,
            /* pInputAssemblyState */ nullptr,
            /* pTessellationState  */ nullptr,
            /* pViewportState      */ nullptr,
            /* pRasterizationState */ nullptr,
            /* pMultisampleState   */ nullptr,
            /* pDepthStencilState  */ nullptr,
            /* pColorBlendState    */ nullptr,
            /* pDynamicState       */ nullptr,
            /* layout              */ VK_NULL_HANDLE,
            /* renderPass          */ VK_NULL_HANDLE,
            /* subpass             */ 0,
            /* basePipelineHandle  */ VK_NULL_HANDLE,
            /* basePipelineIndex   */ 0,
        };

        /**
         * Default compute Pipeline creation parameters.
         */
        static constexpr VkComputePipelineCreateInfo ComputeCreateInfo {
            /* sType              */ VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
            /* pNext              */ nullptr,
            /* flags              */ 0,
            /* stage              */ { },
            /* layout             */ VK_NULL_HANDLE,
            /* basePipelineHandle */ VK_NULL_HANDLE,
            /* basePipelineIndex  */ 0,
        };

    private:
        Pipeline(
            const std::shared_ptr<Device>& device,
            const VkGraphicsPipelineCreateInfo& info
        );

    public:
        /**
         * Destroys this instance of Pipeline.
         */
        ~Pipeline();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
