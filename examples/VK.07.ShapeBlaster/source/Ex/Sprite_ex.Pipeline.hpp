
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

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <string>

namespace ShapeBlaster_ex {

    class Sprite::Pipeline final
    {
    public:
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> descriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> pipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> pipeline;
        std::shared_ptr<dst::vlkn::Descriptor::Pool> descriptorPool;

    public:
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

            auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
            descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(bindings.size());
            descriptorSetLayoutInfo.pBindings = bindings.data();
            descriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

            auto pipelineLayoutInfo = dst::vlkn::Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &descriptorSetLayout->handle();
            pipelineLayout = device.create<dst::vlkn::Pipeline::Layout>(pipelineLayoutInfo);

            auto vertexShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450

                    layout(location = 0) in vec2 vsPosition;
                    layout(location = 1) in float vsRotation;
                    layout(location = 2) in float vsScale;
                    layout(location = 3) in vec4 vsColor;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                    }

                )"
            );

            auto geometryShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_GEOMETRY_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450

                    layout (points) in
                    layout (triangle_strip, max_vertices = 4) out;

                    layout (binding = 1) uniform UBO
                    {
                        mat4 projection;
                        mat4 model;
                    } ubo;

                    layout (location = 0) in vec3 inNormal[];
                    layout (location = 0) out vec3 outColor;

                    void main()
                    {
                        gl_Position = vec3(0);
                        EmitVertex();

                        gl_Position = vec3(0);
                        EmitVertex();
                        EndPrimitive();
                    }

                )"
            );

            auto fragmentShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                ShaderModule::Source::Code,
                R"(

                )"
            );

            std::array<VkPipelineShaderStageCreateInfo, 3> shaderStages {
                vertexShader->pipeline_stage_create_info(),
                geometryShader->pipeline_stage_create_info(),
                fragmentShader->pipeline_stage_create_info()
            };

            auto vertexBindingDescription = binding_description<Vertex>();
            auto vertexAttributeDescriptions = Vertex::attribute_descriptions();
            auto vertexInputState = dst::vlkn::Pipeline::VertexInputStateCreateInfo;
            vertexInputState.vertexBindingDescriptionCount = 1;
            vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
            vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
            vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

            auto pipelineInfo = dst::vlkn::Pipeline::GraphicsCreateInfo;
            pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
            pipelineInfo.pStages = shaderStages.data();
            pipelineInfo.pVertexInputState = &vertexInputState;
            pipelineInfo.layout = *pipelineLayout;
            pipelineInfo.renderPass = renderPass;
            pipeline = device.create<dst::vlkn::Pipeline>(pipelineInfo);
        }
    };

} // namespace ShapeBlaster_ex
