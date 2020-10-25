
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
const VkApplicationInfo& get_default<VkApplicationInfo>()
{
    static const VkApplicationInfo DefaultApplicationInfo {
        /* VkStructureType sType;              */ VK_STRUCTURE_TYPE_APPLICATION_INFO,
        /* const void*     pNext;              */ nullptr,
        /* const char*     pApplicationName;   */ "dynamic_static Application",
        /* uint32_t        applicationVersion; */ 0,
        /* const char*     pEngineName;        */ "dynamic_static",
        /* uint32_t        engineVersion;      */ 0,
        /* uint32_t        apiVersion;         */ VK_API_VERSION_1_2,
    };
    return DefaultApplicationInfo;
}

template <>
const VkAttachmentDescription& get_default<VkAttachmentDescription>()
{
    static const VkAttachmentDescription DefaultAttachmentDescription {
        /* VkAttachmentDescriptionFlags flags;         */ 0,
        /* VkFormat                     format;        */ VK_FORMAT_UNDEFINED,
        /* VkSampleCountFlagBits        samples;       */ VK_SAMPLE_COUNT_1_BIT,
        /* VkAttachmentLoadOp           loadOp;        */ VK_ATTACHMENT_LOAD_OP_DONT_CARE,
        /* VkAttachmentStoreOp          storeOp;       */ VK_ATTACHMENT_STORE_OP_DONT_CARE,
        /* VkAttachmentLoadOp           stencilLoadOp; */ VK_ATTACHMENT_LOAD_OP_DONT_CARE,
        /* VkAttachmentStoreOp          stencilStoreOp;*/ VK_ATTACHMENT_STORE_OP_DONT_CARE,
        /* VkImageLayout                initialLayout; */ VK_IMAGE_LAYOUT_UNDEFINED,
        /* VkImageLayout                finalLayout;   */ VK_IMAGE_LAYOUT_UNDEFINED,
    };
    return DefaultAttachmentDescription;
}

template <>
const VkBufferImageCopy& get_default<VkBufferImageCopy>()
{
    static const VkBufferImageCopy DefaultBuffyImageCopy {
        /* VkDeviceSize             bufferOffset;      */ 0,
        /* uint32_t                 bufferRowLength;   */ 0,
        /* uint32_t                 bufferImageHeight; */ 0,
        /* VkImageSubresourceLayers imageSubresource;  */ get_default<VkImageSubresourceLayers>(),
        /* VkOffset3D               imageOffset;       */ { 0, 0, 0 },
        /* VkExtent3D               imageExtent;       */ { 0, 0, 0 },
    };
    return DefaultBuffyImageCopy;
}

template <>
const VkImageCreateInfo& get_default<VkImageCreateInfo>()
{
    static const VkImageCreateInfo DefaultImageCreateInfo {
        /* VkStructureType       sType;                 */ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
        /* const void*           pNext;                 */ nullptr,
        /* VkImageCreateFlags    flags;                 */ 0,
        /* VkImageType           imageType;             */ VK_IMAGE_TYPE_2D,
        /* VkFormat              format;                */ VK_FORMAT_UNDEFINED,
        /* VkExtent3D            extent;                */ { 1, 1, 1 },
        /* uint32_t              mipLevels;             */ 1,
        /* uint32_t              arrayLayers;           */ 1,
        /* VkSampleCountFlagBits samples;               */ VK_SAMPLE_COUNT_1_BIT,
        /* VkImageTiling         tiling;                */ VK_IMAGE_TILING_OPTIMAL,
        /* VkImageUsageFlags     usage;                 */ 0,
        /* VkSharingMode         sharingMode;           */ VK_SHARING_MODE_EXCLUSIVE,
        /* uint32_t              queueFamilyIndexCount; */ 0,
        /* const uint32_t*       pQueueFamilyIndices;   */ nullptr,
        /* VkImageLayout         initialLayout;         */ VK_IMAGE_LAYOUT_UNDEFINED,
    };
    return DefaultImageCreateInfo;
}

template <>
const VkImageMemoryBarrier& get_default<VkImageMemoryBarrier>()
{
    static const VkImageMemoryBarrier DefaultImageMemoryBarrier {
        /* VkStructureType         sType;               */ VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        /* const void*             pNext;               */ nullptr,
        /* VkAccessFlags           srcAccessMask;       */ 0,
        /* VkAccessFlags           dstAccessMask;       */ 0,
        /* VkImageLayout           oldLayout;           */ VK_IMAGE_LAYOUT_UNDEFINED,
        /* VkImageLayout           newLayout;           */ VK_IMAGE_LAYOUT_UNDEFINED,
        /* uint32_t                srcQueueFamilyIndex; */ VK_QUEUE_FAMILY_IGNORED,
        /* uint32_t                dstQueueFamilyIndex; */ VK_QUEUE_FAMILY_IGNORED,
        /* VkImage                 image;               */ VK_NULL_HANDLE,
        /* VkImageSubresourceRange subresourceRange;    */ get_default<VkImageSubresourceRange>()
    };
    return DefaultImageMemoryBarrier;
}

template <>
const VkImageSubresourceLayers& get_default<VkImageSubresourceLayers>()
{
    static const VkImageSubresourceLayers DefaultImageSubresourceLayers {
        /* VkImageAspectFlags aspectMask;     */ 0,
        /* uint32_t           mipLevel;       */ 0,
        /* uint32_t           baseArrayLayer; */ 0,
        /* uint32_t           layerCount;     */ 1, //!< HUH? : VK_REMAINING_ARRAY_LAYERS,
    };
    return DefaultImageSubresourceLayers;
}

template <>
const VkImageSubresourceRange& get_default<VkImageSubresourceRange>()
{
    static const VkImageSubresourceRange DefaultImageMemorySubresourceRange {
        /* VkImageAspectFlags aspectMask;     */ 0,
        /* uint32_t           baseMipLevel;   */ 0,
        /* uint32_t           levelCount;     */ VK_REMAINING_MIP_LEVELS,
        /* uint32_t           baseArrayLayer; */ 0,
        /* uint32_t           layerCount;     */ VK_REMAINING_ARRAY_LAYERS,
    };
    return DefaultImageMemorySubresourceRange;
}

template <>
const VkSamplerCreateInfo& get_default<VkSamplerCreateInfo>()
{
    static const VkSamplerCreateInfo DefaultSamplerCreateInfo {
        /* VkStructureType         sType;                   */ VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
        /* const void*             pNext;                   */ nullptr,
        /* VkSamplerCreateFlags    flags;                   */ 0,
        /* VkFilter                magFilter;               */ VK_FILTER_LINEAR,
        /* VkFilter                minFilter;               */ VK_FILTER_LINEAR,
        /* VkSamplerMipmapMode     mipmapMode;              */ VK_SAMPLER_MIPMAP_MODE_LINEAR,
        /* VkSamplerAddressMode    addressModeU;            */ VK_SAMPLER_ADDRESS_MODE_REPEAT,
        /* VkSamplerAddressMode    addressModeV;            */ VK_SAMPLER_ADDRESS_MODE_REPEAT,
        /* VkSamplerAddressMode    addressModeW;            */ VK_SAMPLER_ADDRESS_MODE_REPEAT,
        /* float                   mipLodBias;              */ 0.0f,
        /* VkBool32                anisotropyEnable;        */ VK_TRUE,
        /* float                   maxAnisotropy;           */ 16.0f,
        /* VkBool32                compareEnable;           */ VK_FALSE,
        /* VkCompareOp             compareOp;               */ VK_COMPARE_OP_ALWAYS,
        /* float                   minLod;                  */ 0.0f,
        /* float                   maxLod;                  */ 0.0f,
        /* VkBorderColor           borderColor;             */ VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
        /* VkBool32                unnormalizedCoordinates; */ VK_FALSE,
    };
    return DefaultSamplerCreateInfo;
}

////////////////////////////////////////////////////////////////////////////////
// VkGraphicsPipelineCreateInfo defaults
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
        /* float                                   depthBiasConstantFactor; */ 0.0f,
        /* float                                   depthBiasClamp;          */ 0.0f,
        /* float                                   depthBiasSlopeFactor;    */ 0.0f,
        /* float                                   lineWidth;               */ 1.0f,
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
        /* float                                 minSampleShading;      */ 1.0f,
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
        /* float                                      blendConstants[4]; */ { 0.0f, 0.0f, 0.0f, 0.0f },
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
