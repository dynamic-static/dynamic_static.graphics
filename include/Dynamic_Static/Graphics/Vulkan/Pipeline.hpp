
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

#include <array>
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

    private:
        static constexpr VkRect2D EmptyScissor { };
        static constexpr VkViewport EmptyViewport { 0, 0, 0, 0, 0, 1 };
        static constexpr std::array<VkDynamicState, 2> DynamicStates {
            VK_DYNAMIC_STATE_VIEWPORT,
            VK_DYNAMIC_STATE_SCISSOR,
        };

    public:
        class Layout;

        /**
         * Default graphics Pipeline shader stage creation parameters.
         */
        static constexpr VkPipelineShaderStageCreateInfo ShaderStageCreateInfo {
            /* sType               */ VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
            /* pNext               */ nullptr,
            /* flags               */ 0,
            /* stage               */ VK_SHADER_STAGE_ALL_GRAPHICS,
            /* module              */ VK_NULL_HANDLE,
            /* pName               */ "main",
            /* pSpecializationInfo */ nullptr,
        };

        /**
         * Default graphics Pipeline vertex input state creation parameters.
         */
        static constexpr VkPipelineVertexInputStateCreateInfo VertexInputStateCreateInfo {
            /* sType                           */ VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,
            /* pNext                           */ nullptr,
            /* flags                           */ 0,
            /* vertexBindingDescriptionCount   */ 0,
            /* pVertexBindingDescriptions      */ nullptr,
            /* vertexAttributeDescriptionCount */ 0,
            /* pVertexAttributeDescriptions    */ nullptr,
        };

        /**
         * Default graphics Pipeline input assembly state creation parameters.
         */
        static constexpr VkPipelineInputAssemblyStateCreateInfo InputAssemblyStateCreateInfo {
            /* sType                  */ VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,
            /* pNext                  */ nullptr,
            /* flags                  */ 0,
            /* topology               */ VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,
            /* primitiveRestartEnable */ VK_FALSE,
        };

        /**
         * Default graphics Pipeline tesselation state creation parameters.
         */
        static constexpr VkPipelineTessellationStateCreateInfo TesselationStateCreateInfo {
            /* sType              */ VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,
            /* pNext              */ nullptr,
            /* flags              */ 0,
            /* patchControlPoints */ 0,
        };

        /**
         * Default graphics Pipeline viewport state creation parameters.
         */
        static constexpr VkPipelineViewportStateCreateInfo ViewportStateCreateInfo {
            /* sType         */ VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,
            /* pNext         */ nullptr,
            /* flags         */ 0,
            /* viewportCount */ 1,
            /* pViewports    */ &EmptyViewport,
            /* scissorCount  */ 1,
            /* pScissors     */ &EmptyScissor,
        };

        /**
         * Default graphics Pipeline rasterization state creation parameters.
         */
        static constexpr VkPipelineRasterizationStateCreateInfo RasterizationStateCreateInfo {
            /* sType                   */ VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,
            /* pNext                   */ nullptr,
            /* flags                   */ 0,
            /* depthClampEnable        */ VK_FALSE,
            /* rasterizerDiscardEnable */ VK_FALSE,
            /* polygonMode             */ VK_POLYGON_MODE_FILL,
            /* cullMode                */ VK_CULL_MODE_BACK_BIT,
            /* frontFace               */ VK_FRONT_FACE_CLOCKWISE,
            /* depthBiasEnable         */ VK_FALSE,
            /* depthBiasConstantFactor */ 0,
            /* depthBiasClamp          */ 0,
            /* depthBiasSlopeFactor    */ 0,
            /* lineWidth               */ 1,
        };

        /**
         * Default graphics Pipeline multisample state creation parameters.
         */
        static constexpr VkPipelineMultisampleStateCreateInfo MultisampleStateCreateInfo {
            /* sType                 */ VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,
            /* pNext                 */ nullptr,
            /* flags                 */ 0,
            /* rasterizationSamples  */ VK_SAMPLE_COUNT_1_BIT,
            /* sampleShadingEnable   */ VK_FALSE,
            /* minSampleShading      */ 1,
            /* pSampleMask           */ nullptr,
            /* alphaToCoverageEnable */ VK_FALSE,
            /* alphaToOneEnable      */ VK_FALSE,
        };

        /**
         * Default graphics Pipeline depth stencil state creation parameters.
         */
        static constexpr VkPipelineDepthStencilStateCreateInfo DepthStencilStateCreateInfo {
            /* sType                 */ VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,
            /* pNext                 */ nullptr,
            /* flags                 */ 0,
            /* depthTestEnable       */ VK_FALSE,
            /* depthWriteEnable      */ VK_FALSE,
            /* depthCompareOp        */ VK_COMPARE_OP_ALWAYS,
            /* depthBoundsTestEnable */ VK_FALSE,
            /* stencilTestEnable     */ VK_FALSE,
            /* front                 */ { },
            /* back                  */ { },
            /* minDepthBounds        */ 0,
            /* maxDepthBounds        */ 0,
        };

        /**
         * Default graphics Pipeline color blend attachment state parameters.
         */
        static constexpr VkPipelineColorBlendAttachmentState ColorBlendAttachmentState {
            /* blendEnable         */ VK_FALSE,
            /* srcColorBlendFactor */ VK_BLEND_FACTOR_SRC_ALPHA,
            /* dstColorBlendFactor */ VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,
            /* colorBlendOp        */ VK_BLEND_OP_ADD,
            /* srcAlphaBlendFactor */ VK_BLEND_FACTOR_ONE,
            /* dstAlphaBlendFactor */ VK_BLEND_FACTOR_ZERO,
            /* alphaBlendOp        */ VK_BLEND_OP_ADD,
            /* colorWriteMask      */ VK_COLOR_COMPONENT_R_BIT |
                                      VK_COLOR_COMPONENT_G_BIT |
                                      VK_COLOR_COMPONENT_B_BIT |
                                      VK_COLOR_COMPONENT_A_BIT,
        };

        /**
         * Default graphics Pipeline color blend state creation parameters.
         */
        static constexpr VkPipelineColorBlendStateCreateInfo ColorBlendStateCreateInfo {
            /* sType           */ VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,
            /* pNext           */ nullptr,
            /* flags           */ 0,
            /* logicOpEnable   */ VK_FALSE,
            /* logicOp         */ VK_LOGIC_OP_CLEAR,
            /* attachmentCount */ 1,
            /* pAttachments    */ &ColorBlendAttachmentState,
            /* blendConstants  */ { 0, 0, 0, 0 }
        };

        /**
         * Default graphics Pipeline dynamic state creation parameters.
         */
        static constexpr VkPipelineDynamicStateCreateInfo DynamicStateCreateInfo {
            /* sType             */ VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,
            /* pNext             */ nullptr,
            /* flags             */ 0,
            /* dynamicStateCount */ static_cast<uint32_t>(DynamicStates.size()),
            /* pDynamicStates    */ &DynamicStates[0],
        };

        /**
         * Default graphics Pipeline creation parameters.
         */
        static constexpr VkGraphicsPipelineCreateInfo GraphicsCreateInfo {
            /* sType               */ VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
            /* pNext               */ nullptr,
            /* flags               */ 0,
            /* stageCount          */ 0,
            /* pStages             */ nullptr,
            /* pVertexInputState   */ &VertexInputStateCreateInfo,
            /* pInputAssemblyState */ &InputAssemblyStateCreateInfo,
            /* pTessellationState  */ nullptr,
            /* pViewportState      */ &ViewportStateCreateInfo,
            /* pRasterizationState */ &RasterizationStateCreateInfo,
            /* pMultisampleState   */ &MultisampleStateCreateInfo,
            /* pDepthStencilState  */ &DepthStencilStateCreateInfo,
            /* pColorBlendState    */ &ColorBlendStateCreateInfo,
            /* pDynamicState       */ &DynamicStateCreateInfo,
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
