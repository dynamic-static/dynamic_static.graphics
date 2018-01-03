
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Sprite_ex.hpp"

#include "Dynamic_Static/Core/NonCopyable.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <string>

namespace ShapeBlaster_ex {

    struct Sprite::UniformBuffer final
    {
        glm::mat4 wvp;
        glm::vec4 color;
    };

} // namespace ShapeBlaster_ex

namespace ShapeBlaster_ex {

    class Sprite::Pipeline final
    {
        friend class Sprite::Pool;

    private:
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mPipeline;

    public:
        Pipeline() = default;
        Pipeline(
            dst::vlkn::Device& device,
            dst::vlkn::RenderPass& renderPass
        )
        {
            using namespace dst::vlkn;
            VkDescriptorSetLayoutBinding uniformBufferBinding { };
            uniformBufferBinding.binding = 0;
            uniformBufferBinding.descriptorCount = 1;
            uniformBufferBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            uniformBufferBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

            VkDescriptorSetLayoutBinding samplerBinding { };
            samplerBinding.binding = 1;
            samplerBinding.descriptorCount = 1;
            samplerBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            samplerBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            std::array<VkDescriptorSetLayoutBinding, 2> bindings {
                uniformBufferBinding,
                samplerBinding,
            };

            Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo;
            descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(bindings.size());
            descriptorSetLayoutInfo.pBindings = bindings.data();
            mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

            auto pipelineLayoutInfo = dst::vlkn::Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
            mPipelineLayout = device.create<dst::vlkn::Pipeline::Layout>(pipelineLayoutInfo);

            auto vertexShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450

                    vec2 positions[4] = vec2[](
                        vec2(-0.5,  0.5),
                        vec2( 0.5,  0.5),
                        vec2( 0.5, -0.5),
                        vec2(-0.5, -0.5)
                    );

                    vec2 texCoords[4] = vec2[](
                        vec2(0, 0),
                        vec2(1, 0),
                        vec2(1, 1),
                        vec2(0, 1)
                    );

                    int indices[6] = int[](
                        0, 1, 2,
                        2, 3, 0
                    );

                    layout (binding = 0) uniform UniformBuffer
                    {
                        mat4 wvp;
                        vec4 color;
                    } ubo;

                    layout (location = 0) out vec2 fsTexCoord;
                    layout (location = 1) out vec4 fsColor;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        int index = indices[gl_VertexIndex];
                        gl_Position = ubo.wvp * vec4(positions[index], 0, 1);
                        fsTexCoord = texCoords[index];
                        fsColor = ubo.color;
                    }

                )"
            );

            auto fragmentShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450

                    layout (binding = 1) uniform sampler2D image;
                    layout (location = 0) in vec2 fsTexCoord;
                    layout (location = 1) in vec4 fsColor;

                    layout (location = 0) out vec4 fragColor;

                    void main()
                    {
                        fragColor = texture(image, fsTexCoord);
                        fragColor *= fsColor;
                    }

                )"
            );

            std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
                vertexShader->pipeline_stage_create_info(),
                fragmentShader->pipeline_stage_create_info(),
            };

            auto colorBlendAttachment = dst::vlkn::Pipeline::ColorBlendAttachmentState;
            colorBlendAttachment.blendEnable = VK_TRUE;
            auto colorBlendInfo = dst::vlkn::Pipeline::ColorBlendStateCreateInfo;
            colorBlendInfo.attachmentCount = 1;
            colorBlendInfo.pAttachments = &colorBlendAttachment;

            auto pipelineInfo = dst::vlkn::Pipeline::GraphicsCreateInfo;
            pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
            pipelineInfo.pStages = shaderStages.data();
            pipelineInfo.layout = *mPipelineLayout;
            pipelineInfo.renderPass = renderPass;
            pipelineInfo.pColorBlendState = &colorBlendInfo;
            mPipeline = device.create<dst::vlkn::Pipeline>(pipelineInfo);
        }
    };

} // namespace ShapeBlaster_ex
