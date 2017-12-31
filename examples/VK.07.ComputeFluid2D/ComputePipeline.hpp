
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <memory>

namespace ComputeFluid2D {

    class ComputePipeline final
    {
    private:
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mPipeline;

    public:
        ComputePipeline() = default;
        ComputePipeline(dst::vlkn::Device& device, const std::string& shaderSource)
        {
            using namespace dst::vlkn;
            auto shader = device.create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                ShaderModule::Source::Code,
                shaderSource
            );

            mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(*shader);

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
            pipelineLayoutInfo.pushConstantRangeCount = static_cast<uint32_t>(shader->push_constant_ranges().size());
            pipelineLayoutInfo.pPushConstantRanges = shader->push_constant_ranges().data();
            mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

            auto pipelineInfo = Pipeline::ComputeCreateInfo;
            pipelineInfo.stage = shader->pipeline_stage_create_info();
            pipelineInfo.layout = *mPipelineLayout;
            mPipeline = device.create<Pipeline>(pipelineInfo);
        }

    public:
        void dispatch(dst::vlkn::Command::Buffer& commandBuffer, dst::vlkn::Descriptor::Set& descriptorSet)
        {
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_COMPUTE, *mPipeline);
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mPipelineLayout, 0, 1, &descriptorSet.handle(), 0, nullptr);
            vkCmdDispatch(commandBuffer, 1280, 720, 1);
        }
    };

} // namespace ComputeFluid2D
