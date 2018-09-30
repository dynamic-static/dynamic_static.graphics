
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
    Provides high level control over a Vulkan pipeline.
    */
    class Pipeline final
        : public Object<VkPipeline>
        , public SharedObject<Pipeline>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for a Pipeline shader stage.
        */
        struct ShaderStageCreateInfo final
            : public VkPipelineShaderStageCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::ShaderStageCreateInfo.
            */
            inline ShaderStageCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                stage = VK_SHADER_STAGE_ALL_GRAPHICS;
                module = VK_NULL_HANDLE;
                pName = "main";
                pSpecializationInfo = nullptr;
                static_assert(
                    sizeof(Pipeline::ShaderStageCreateInfo) == sizeof(VkPipelineShaderStageCreateInfo),
                    "sizeof(Pipeline::ShaderStageCreateInfo) != sizeof(VkPipelineShaderStageCreateInfo)"
                );
            }

            /*!
            Copies an instance of Pipeline::ShaderStageCreateInfo.
            @param [in] other The VkPipelineShaderStageCreateInfo to copy from
            */
            ShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& other);

            /*!
            Copies an instance of Pipeline::ShaderStageCreateInfo.
            @param [in] other The VkPipelineShaderStageCreateInfo to copy from
            */
            ShaderStageCreateInfo& operator=(const VkPipelineShaderStageCreateInfo& other);
        };

        /*!
        Configuration parameters for a Pipeline's vertex input state.
        */
        struct VertexInputStateCreateInfo final
            : public VkPipelineVertexInputStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::VertexInputStateCreateInfo.
            */
            inline VertexInputStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,
                pNext = nullptr;
                flags = 0;
                vertexBindingDescriptionCount = 0;
                pVertexBindingDescriptions = nullptr;
                vertexAttributeDescriptionCount = 0;
                pVertexAttributeDescriptions = nullptr;
                static_assert(
                    sizeof(Pipeline::VertexInputStateCreateInfo) == sizeof(VkPipelineVertexInputStateCreateInfo),
                    "sizeof(Pipeline::VertexInputStateCreateInfo) != sizeof(VkPipelineVertexInputStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's input assembly state.
        */
        struct InputAssemblyStateCreateInfo final
            : public VkPipelineInputAssemblyStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::InputAssemblyStateCreateInfo.
            */
            inline InputAssemblyStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
                primitiveRestartEnable = VK_FALSE;
                static_assert(
                    sizeof(Pipeline::InputAssemblyStateCreateInfo) == sizeof(VkPipelineInputAssemblyStateCreateInfo),
                    "sizeof(Pipeline::InputAssemblyStateCreateInfo) != sizeof(VkPipelineInputAssemblyStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's tesselation state.
        */
        struct TesselationStateCreateInfo final
            : public VkPipelineTessellationStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::TesselationStateCreateInfo.
            */
            inline TesselationStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                patchControlPoints = 0;
                static_assert(
                    sizeof(Pipeline::TesselationStateCreateInfo) == sizeof(VkPipelineTessellationStateCreateInfo),
                    "sizeof(Pipeline::TesselationStateCreateInfo) != sizeof(VkPipelineTessellationStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's viewport state.
        */
        struct ViewportStateCreateInfo final
            : public VkPipelineViewportStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::ViewportStateCreateInfo.
            */
            inline ViewportStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                viewportCount = 1;
                static VkViewport sDefaultViewport { 0, 0, 0, 0, 0, 1 };
                pViewports = &sDefaultViewport;
                scissorCount = 1;
                static VkRect2D sDefaultScissor { };
                pScissors = &sDefaultScissor;
                static_assert(
                    sizeof(Pipeline::ViewportStateCreateInfo) == sizeof(VkPipelineViewportStateCreateInfo),
                    "sizeof(Pipeline::ViewportStateCreateInfo) != sizeof(VkPipelineViewportStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's rasterization state.
        */
        struct RasterizationStateCreateInfo final
            : public VkPipelineRasterizationStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::RasterizationStateCreateInfo.
            */
            inline RasterizationStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                depthClampEnable = VK_FALSE;
                rasterizerDiscardEnable = VK_FALSE;
                polygonMode = VK_POLYGON_MODE_FILL;
                cullMode = VK_CULL_MODE_BACK_BIT;
                frontFace = VK_FRONT_FACE_CLOCKWISE;
                depthBiasEnable = VK_FALSE;
                depthBiasConstantFactor = 0;
                depthBiasClamp = 0;
                depthBiasSlopeFactor = 0;
                lineWidth = 1;
                static_assert(
                    sizeof(Pipeline::RasterizationStateCreateInfo) == sizeof(VkPipelineRasterizationStateCreateInfo),
                    "sizeof(Pipeline::RasterizationStateCreateInfo) != sizeof(VkPipelineRasterizationStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's nultisample state.
        */
        struct MultisampleStateCreateInfo final
            : public VkPipelineMultisampleStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::MultisampleStateCreateInfo.
            */
            inline MultisampleStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
                sampleShadingEnable = VK_FALSE;
                minSampleShading = 1;
                pSampleMask = nullptr;
                alphaToCoverageEnable = VK_FALSE;
                alphaToOneEnable = VK_FALSE;
                static_assert(
                    sizeof(Pipeline::MultisampleStateCreateInfo) == sizeof(VkPipelineMultisampleStateCreateInfo),
                    "sizeof(Pipeline::MultisampleStateCreateInfo) != sizeof(VkPipelineMultisampleStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's depth stencil state.
        */
        struct DepthStencilStateCreateInfo final
            : public VkPipelineDepthStencilStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::DepthStencilStateCreateInfo.
            */
            inline DepthStencilStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                depthTestEnable = VK_FALSE;
                depthWriteEnable = VK_FALSE;
                depthCompareOp = VK_COMPARE_OP_ALWAYS;
                depthBoundsTestEnable = VK_FALSE;
                stencilTestEnable = VK_FALSE;
                front = { };
                back = { };
                minDepthBounds = 0;
                maxDepthBounds = 0;
                static_assert(
                    sizeof(Pipeline::DepthStencilStateCreateInfo) == sizeof(VkPipelineDepthStencilStateCreateInfo),
                    "sizeof(Pipeline::DepthStencilStateCreateInfo) != sizeof(VkPipelineDepthStencilStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's color blend attachment state.
        */
        struct ColorBlendAttachmentState final
            : public VkPipelineColorBlendAttachmentState
        {
            /*!
            Constructs an instance of Pipeline::ColorBlendAttachmentState.
            */
            inline ColorBlendAttachmentState()
            {
                blendEnable = VK_FALSE;
                srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
                dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
                colorBlendOp = VK_BLEND_OP_ADD;
                srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
                dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
                alphaBlendOp = VK_BLEND_OP_ADD;
                colorWriteMask =
                    VK_COLOR_COMPONENT_R_BIT |
                    VK_COLOR_COMPONENT_G_BIT |
                    VK_COLOR_COMPONENT_B_BIT |
                    VK_COLOR_COMPONENT_A_BIT;
                static_assert(
                    sizeof(Pipeline::ColorBlendAttachmentState) == sizeof(VkPipelineColorBlendAttachmentState),
                    "sizeof(Pipeline::ColorBlendAttachmentState) != sizeof(VkPipelineColorBlendAttachmentState)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's color blend state.
        */
        struct ColorBlendStateCreateInfo final
            : public VkPipelineColorBlendStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::ColorBlendStateCreateInfo.
            */
            inline ColorBlendStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                logicOpEnable = VK_FALSE;
                logicOp = VK_LOGIC_OP_CLEAR;
                attachmentCount = 1;
                static ColorBlendAttachmentState sDefaultColorBlendAttachmentState;
                pAttachments = &sDefaultColorBlendAttachmentState;
                blendConstants[0] = 0;
                blendConstants[1] = 0;
                blendConstants[2] = 0;
                blendConstants[3] = 0;
                static_assert(
                    sizeof(Pipeline::ColorBlendStateCreateInfo) == sizeof(VkPipelineColorBlendStateCreateInfo),
                    "sizeof(Pipeline::ColorBlendStateCreateInfo) != sizeof(VkPipelineColorBlendStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for a Pipeline's dynamic state.
        */
        struct DynamicStateCreateInfo final
            : public VkPipelineDynamicStateCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::DynamicStateCreateInfo.
            */
            inline DynamicStateCreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                static std::array<VkDynamicState, 2> sDefaultDynamicStates {
                    VK_DYNAMIC_STATE_VIEWPORT,
                    VK_DYNAMIC_STATE_SCISSOR,
                };
                dynamicStateCount = (uint32_t)sDefaultDynamicStates.size();
                pDynamicStates = sDefaultDynamicStates.data();
                static_assert(
                    sizeof(Pipeline::DynamicStateCreateInfo) == sizeof(VkPipelineDynamicStateCreateInfo),
                    "sizeof(Pipeline::DynamicStateCreateInfo) != sizeof(VkPipelineDynamicStateCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for graphics Pipeline construction.
        */
        struct GraphicsCreateInfo final
            : public VkGraphicsPipelineCreateInfo
        {
            /*!
            Constructs an instance of Pipeline::CreateInfo.
            */
            GraphicsCreateInfo()
            {
                static VertexInputStateCreateInfo sDefaultVertexInputState;
                static InputAssemblyStateCreateInfo sDefaultInputAssemblyState;
                static ViewportStateCreateInfo sDefaultViewportState;
                static RasterizationStateCreateInfo sDefaultRasterizationState;
                static MultisampleStateCreateInfo sDefaultMultisampleState;
                static DepthStencilStateCreateInfo sDefaultDepthStencilState;
                static ColorBlendStateCreateInfo sDefaultColorBlendState;
                static DynamicStateCreateInfo sDefaultDynamicState;
                sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                stageCount = 0;
                pStages = nullptr;
                pTessellationState = nullptr;
                pVertexInputState = &sDefaultVertexInputState;
                pInputAssemblyState = &sDefaultInputAssemblyState;
                pViewportState = &sDefaultViewportState;
                pRasterizationState = &sDefaultRasterizationState;
                pMultisampleState = &sDefaultMultisampleState;
                pDepthStencilState = &sDefaultDepthStencilState;
                pColorBlendState = &sDefaultColorBlendState;
                pDynamicState = &sDefaultDynamicState;
                layout = VK_NULL_HANDLE;
                renderPass = VK_NULL_HANDLE;
                subpass = 0;
                basePipelineHandle = VK_NULL_HANDLE;
                basePipelineIndex = 0;
                static_assert(
                    sizeof(Pipeline::GraphicsCreateInfo) == sizeof(VkGraphicsPipelineCreateInfo),
                    "sizeof(Pipeline::GraphicsCreateInfo) != sizeof(VkGraphicsPipelineCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of Pipeline.
        @param [in] device This Pipeline's Device
        @param [in] layout This Pipeline's PipelineLayout
        @param [in] createInfo This Pipeline's Pipeline::CreateInfo
        */
        Pipeline(
            const std::shared_ptr<Device>& device,
            const std::shared_ptr<PipelineLayout>& layout,
            Pipeline::GraphicsCreateInfo createInfo
        );

    private:
        std::shared_ptr<PipelineLayout> mLayout;

    public:
        /*!
        Destroys this instance of Pipeline.
        */
        ~Pipeline();

    public:
        /*!
        Gets this Pipeline's PipelineLayout.
        @return This Pipeline's PipelineLayout
        */
        PipelineLayout& get_layout();

        /*!
        Gets this Pipeline's PipelineLayout.
        @return This Pipeline's PipelineLayout
        */
        const PipelineLayout& get_layout() const;

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
