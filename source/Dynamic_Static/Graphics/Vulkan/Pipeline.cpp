
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    constexpr VkRect2D Pipeline::EmptyScissor;
    constexpr VkViewport Pipeline::EmptyViewport;
    constexpr std::array<VkDynamicState, 2> Pipeline::DynamicStates;
    constexpr VkPipelineShaderStageCreateInfo Pipeline::ShaderStageCreateInfo;
    constexpr VkPipelineVertexInputStateCreateInfo Pipeline::VertexInputStateCreateInfo;
    constexpr VkPipelineInputAssemblyStateCreateInfo Pipeline::InputAssemblyStateCreateInfo;
    constexpr VkPipelineTessellationStateCreateInfo Pipeline::TesselationStateCreateInfo;
    constexpr VkPipelineViewportStateCreateInfo Pipeline::ViewportStateCreateInfo;
    constexpr VkPipelineRasterizationStateCreateInfo Pipeline::RasterizationStateCreateInfo;
    constexpr VkPipelineMultisampleStateCreateInfo Pipeline::MultisampleStateCreateInfo;
    constexpr VkPipelineDepthStencilStateCreateInfo Pipeline::DepthStencilStateCreateInfo;
    constexpr VkPipelineColorBlendAttachmentState Pipeline::ColorBlendAttachmentState;
    constexpr VkPipelineColorBlendStateCreateInfo Pipeline::ColorBlendStateCreateInfo;
    constexpr VkPipelineDynamicStateCreateInfo Pipeline::DynamicStateCreateInfo;
    constexpr VkGraphicsPipelineCreateInfo Pipeline::GraphicsCreateInfo;
    constexpr VkComputePipelineCreateInfo Pipeline::ComputeCreateInfo;

    Pipeline::Pipeline(
        const std::shared_ptr<Device>& device,
        const VkGraphicsPipelineCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateGraphicsPipelines(DeviceChild::device(), VK_NULL_HANDLE, 1, &info, nullptr, &mHandle));
        name("Graphics Pipeline");
    }

    Pipeline::Pipeline(
        const std::shared_ptr<Device>& device,
        const VkComputePipelineCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateComputePipelines(DeviceChild::device(), VK_NULL_HANDLE, 1, &info, nullptr, &mHandle));
        name("Compute Pipeline");
    }

    Pipeline::~Pipeline()
    {
        if (mHandle) {
            vkDestroyPipeline(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
