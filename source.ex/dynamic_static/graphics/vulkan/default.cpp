
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/default.hpp"

#include <array>

namespace dst {
namespace vk {

template <>
const VkPipelineShaderStageCreateInfo& get_default<VkPipelineShaderStageCreateInfo>()
{
    static const VkPipelineShaderStageCreateInfo DefaultPipelineShaderStageCreateInfo {
        /* VkStructureType                  sType;               */ VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
        /* const void*                      pNext;               */ nullptr,
        /* VkPipelineShaderStageCreateFlags flags;               */ 0,
        /* VkShaderStageFlagBits            stage;               */ VK_SHADER_STAGE_ALL,
        /* VkShaderModule                   module;              */ VK_NULL_HANDLE,
        /* const char*                      pName;               */ "main",
        /* const VkSpecializationInfo*      pSpecializationInfo; */ nullptr,
    };
    return DefaultPipelineShaderStageCreateInfo;
}

template <>
const VkPipelineInputAssemblyStateCreateInfo& get_default<VkPipelineInputAssemblyStateCreateInfo>()
{
    static const VkPipelineInputAssemblyStateCreateInfo DefaultPipelineInputAssemblyStateCreateInfo {
        /* VkStructureType                         sType;                  */ VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,
        /* const void*                             pNext;                  */ nullptr,
        /* VkPipelineInputAssemblyStateCreateFlags flags;                  */ 0,
        /* VkPrimitiveTopology                     topology;               */ VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,
        /* VkBool32                                primitiveRestartEnable; */ VK_FALSE,
    };
    return DefaultPipelineInputAssemblyStateCreateInfo;
}

template <>
const VkViewport& get_default<VkViewport>()
{
    static const VkViewport DefaultViewport {
        /* float x;        */ 0.0f,
        /* float y;        */ 0.0f,
        /* float width;    */ 0.0f,
        /* float height;   */ 0.0f,
        /* float minDepth; */ 0.0f,
        /* float maxDepth; */ 1.0f,
    };
    return DefaultViewport;
}

template <>
const VkPipelineViewportStateCreateInfo& get_default<VkPipelineViewportStateCreateInfo>()
{
    static const VkPipelineViewportStateCreateInfo DefaultPipelineViewportStateCreateInfo {
        /* VkStructureType                    sType;         */ VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,
        /* const void*                        pNext;         */ nullptr,
        /* VkPipelineViewportStateCreateFlags flags;         */ 0,
        /* uint32_t                           viewportCount; */ 1,
        /* const VkViewport*                  pViewports;    */ &get_default<VkViewport>(),
        /* uint32_t                           scissorCount;  */ 1,
        /* const VkRect2D*                    pScissors;     */ &get_default<VkRect2D>(),
    };
    return DefaultPipelineViewportStateCreateInfo;
}

template <>
const VkPipelineRasterizationStateCreateInfo& get_default<VkPipelineRasterizationStateCreateInfo>()
{
    static const VkPipelineRasterizationStateCreateInfo DefaultPipelineRasterizationStateCreateInfo {
        /* VkStructureType                         sType;                   */ VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,
        /* const void*                             pNext;                   */ nullptr,
        /* VkPipelineRasterizationStateCreateFlags flags;                   */ 0,
        /* VkBool32                                depthClampEnable;        */ VK_FALSE,
        /* VkBool32                                rasterizerDiscardEnable; */ VK_FALSE,
        /* VkPolygonMode                           polygonMode;             */ VK_POLYGON_MODE_FILL,
        /* VkCullModeFlags                         cullMode;                */ VK_CULL_MODE_BACK_BIT,
        /* VkFrontFace                             frontFace;               */ VK_FRONT_FACE_CLOCKWISE,
        /* VkBool32                                depthBiasEnable;         */ VK_FALSE,
        /* float                                   depthBiasConstantFactor; */ 0,
        /* float                                   depthBiasClamp;          */ 0,
        /* float                                   depthBiasSlopeFactor;    */ 0,
        /* float                                   lineWidth;               */ 1,
    };
    return DefaultPipelineRasterizationStateCreateInfo;
}

template <>
const VkPipelineMultisampleStateCreateInfo& get_default<VkPipelineMultisampleStateCreateInfo>()
{
    static const VkPipelineMultisampleStateCreateInfo DefaultPipelineRasterizationStateCreateInfo {
        /* VkStructureType                       sType;                 */ VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,
        /* const void*                           pNext;                 */ nullptr,
        /* VkPipelineMultisampleStateCreateFlags flags;                 */ 0,
        /* VkSampleCountFlagBits                 rasterizationSamples;  */ VK_SAMPLE_COUNT_1_BIT,
        /* VkBool32                              sampleShadingEnable;   */ VK_FALSE,
        /* float                                 minSampleShading;      */ 1,
        /* const VkSampleMask*                   pSampleMask;           */ nullptr,
        /* VkBool32                              alphaToCoverageEnable; */ VK_FALSE,
        /* VkBool32                              alphaToOneEnable;      */ VK_FALSE,
    };
    return DefaultPipelineRasterizationStateCreateInfo;
}

template <>
const VkPipelineColorBlendAttachmentState& get_default<VkPipelineColorBlendAttachmentState>()
{
    static const VkPipelineColorBlendAttachmentState DefaultPipelineColorBlendStateCreateInfo {
        /* VkBool32              blendEnable;         */ VK_FALSE,
        /* VkBlendFactor         srcColorBlendFactor; */ VK_BLEND_FACTOR_SRC_ALPHA,
        /* VkBlendFactor         dstColorBlendFactor; */ VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,
        /* VkBlendOp             colorBlendOp;        */ VK_BLEND_OP_ADD,
        /* VkBlendFactor         srcAlphaBlendFactor; */ VK_BLEND_FACTOR_ONE,
        /* VkBlendFactor         dstAlphaBlendFactor; */ VK_BLEND_FACTOR_ZERO,
        /* VkBlendOp             alphaBlendOp;        */ VK_BLEND_OP_ADD,
        /* VkColorComponentFlags colorWriteMask;      */ VK_COLOR_COMPONENT_R_BIT |
                                                         VK_COLOR_COMPONENT_G_BIT |
                                                         VK_COLOR_COMPONENT_B_BIT |
                                                         VK_COLOR_COMPONENT_A_BIT,
    };
    return DefaultPipelineColorBlendStateCreateInfo;
}

template <>
const VkPipelineColorBlendStateCreateInfo& get_default<VkPipelineColorBlendStateCreateInfo>()
{
    static const VkPipelineColorBlendStateCreateInfo DefaultPipelineColorBlendStateCreateInfo {
        /* VkStructureType                            sType;             */ VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,
        /* const void*                                pNext;             */ nullptr,
        /* VkPipelineColorBlendStateCreateFlags       flags;             */ 0,
        /* VkBool32                                   logicOpEnable;     */ VK_FALSE,
        /* VkLogicOp                                  logicOp;           */ VK_LOGIC_OP_CLEAR,
        /* uint32_t                                   attachmentCount;   */ 1,
        /* const VkPipelineColorBlendAttachmentState* pAttachments;      */ &get_default<VkPipelineColorBlendAttachmentState>(),
        /* float                                      blendConstants[4]; */ { 0, 0, 0, 0 },
    };
    return DefaultPipelineColorBlendStateCreateInfo;
}

template <>
const VkPipelineDynamicStateCreateInfo& get_default<VkPipelineDynamicStateCreateInfo>()
{
    static const std::array<VkDynamicState, 2> DefaultDynamicStates { VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_VIEWPORT };
    static const VkPipelineDynamicStateCreateInfo DefaultPipelineDynamicStateCreateInfo {
        /* VkStructureType                      sType;             */ VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,
        /* const void*                          pNext;             */ nullptr,
        /* VkPipelineDynamicStateCreateFlags    flags;             */ 0,
        /* uint32_t                             dynamicStateCount; */ (uint32_t)DefaultDynamicStates.size(),
        /* const VkDynamicState*                pDynamicStates;    */ DefaultDynamicStates.data(),
    };
    return DefaultPipelineDynamicStateCreateInfo;
}

template <>
const VkGraphicsPipelineCreateInfo& get_default<VkGraphicsPipelineCreateInfo>()
{
    static const VkGraphicsPipelineCreateInfo DefaultGraphicsPipelineCreateInfo {
        /* VkStructureType                               sType;               */ VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
        /* const void*                                   pNext;               */nullptr,
        /* VkPipelineCreateFlags                         flags;               */ 0,
        /* uint32_t                                      stageCount;          */ 0,
        /* const VkPipelineShaderStageCreateInfo*        pStages;             */ nullptr,
        /* const VkPipelineVertexInputStateCreateInfo*   pVertexInputState;   */ &get_default<VkPipelineVertexInputStateCreateInfo>(),
        /* const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState; */ &get_default<VkPipelineInputAssemblyStateCreateInfo>(),
        /* const VkPipelineTessellationStateCreateInfo*  pTessellationState;  */ nullptr,
        /* const VkPipelineViewportStateCreateInfo*      pViewportState;      */ &get_default<VkPipelineViewportStateCreateInfo>(),
        /* const VkPipelineRasterizationStateCreateInfo* pRasterizationState; */ &get_default<VkPipelineRasterizationStateCreateInfo>(),
        /* const VkPipelineMultisampleStateCreateInfo*   pMultisampleState;   */ &get_default<VkPipelineMultisampleStateCreateInfo>(),
        /* const VkPipelineDepthStencilStateCreateInfo*  pDepthStencilState;  */ &get_default<VkPipelineDepthStencilStateCreateInfo>(),
        /* const VkPipelineColorBlendStateCreateInfo*    pColorBlendState;    */ &get_default<VkPipelineColorBlendStateCreateInfo>(),
        /* const VkPipelineDynamicStateCreateInfo*       pDynamicState;       */ &get_default<VkPipelineDynamicStateCreateInfo>(),
        /* VkPipelineLayout                              layout;              */ VK_NULL_HANDLE,
        /* VkRenderPass                                  renderPass;          */ VK_NULL_HANDLE,
        /* uint32_t                                      subpass;             */ 0,
        /* VkPipeline                                    basePipelineHandle;  */ VK_NULL_HANDLE,
        /* int32_t                                       basePipelineIndex;   */ 0,
    };
    return DefaultGraphicsPipelineCreateInfo;
}

} // namespace vk
} // namespace dst
