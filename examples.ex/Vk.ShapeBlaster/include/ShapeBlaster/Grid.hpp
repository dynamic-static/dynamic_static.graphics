
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : Based on "Cross-Platform Vector Shooter: XNA" by Michael Hoffman...
//  https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Dynamic_Static.Graphics.hpp"

#include <vector>

namespace ShapeBlaster {

    class Grid final
        : dst::NonCopyable
    {
    private:
        struct PointMass final
        {
            glm::vec2 position { };
            glm::vec2 velocity { };
            glm::vec3 acceleration { };
            float inverseMass { };
            float damping { 0.98f };
            static inline auto get_attribute_descriptions()
            {
                return dst::vk::create_attribute_descriptions<glm::vec2>();
            }
        };

        struct Spring final
        {
            uint32_t pointMass0 { };
            uint32_t pointMass1 { };
            float stiffness { };
            float damping { };
            float targetLength { };
        };

    private:
        std::shared_ptr<dst::vk::Buffer> mSpringBuffer;
        std::shared_ptr<dst::vk::Buffer> mPointMassBuffer;
        std::shared_ptr<dst::vk::Buffer> mPointMassIndexBuffer;
        uint32_t mPointMassIndexCount { };
        std::shared_ptr<dst::vk::Pipeline> mSpringComputePipeline;
        std::shared_ptr<dst::vk::Pipeline> mPointMassComputePipeline;
        std::shared_ptr<dst::vk::Pipeline> mGraphicsPipeline;

        std::vector<PointMass> mPointMasses;
        std::vector<Spring> mSprings;

    public:
        Grid(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass,
            const glm::vec2& extent,
            const glm::vec2& spacing
        )
        {
            int w = (int)(extent.x / spacing.x) + 1;
            int h = (int)(extent.y / spacing.y) + 1;
            mPointMasses.reserve(w * h);
            mSprings.reserve((w - 1) * h + w * (h - 1));
            std::vector<uint16_t> pointMassIndices;
            pointMassIndices.reserve(mSprings.size() * 2);
            for (int y = 0; y < h; ++y) {
                for (int x = 0; x < w; ++x) {
                    PointMass pointMass { };
                    pointMass.position.x = (float)x / (float)w;
                    pointMass.position.y = (float)y / (float)h;
                    pointMass.position *= extent;
                    pointMass.position -= extent * 0.5f;
                    pointMass.inverseMass = 1;

                    Spring spring { };
                    spring.pointMass0 = y * w + x;
                    spring.stiffness = 0.28f;
                    spring.damping = 0.06f;

                    if (x == 0 || y == 0 || x == w - 1 || y == h - 1) {
                        pointMass.inverseMass = 0;
                        spring.stiffness = 0.1f;
                        spring.damping = 0.1f;
                    } else
                    if (x % 3 == 0 || y % 3 == 0) {
                        pointMass.inverseMass = 0;
                        spring.stiffness = 0.002f;
                        spring.damping = 0.02f;
                    }

                    mPointMasses.push_back(pointMass);
                    if (x < w - 1) {
                        spring.pointMass1 = y * w + x + 1;
                        mSprings.push_back(spring);
                    }
                    if (y < h - 1) {
                        spring.pointMass1 = (y + 1) * w + x;
                        mSprings.push_back(spring);
                    }
                }
            }
            for (auto& spring : mSprings) {
                pointMassIndices.push_back(spring.pointMass0);
                pointMassIndices.push_back(spring.pointMass1);
                const auto& pointMass0 = mPointMasses[spring.pointMass0];
                const auto& pointMass1 = mPointMasses[spring.pointMass1];
                spring.targetLength = glm::distance(pointMass0.position, pointMass1.position) * 0.95f;
            }

            using namespace dst::vk;
            Buffer::CreateInfo bufferCreateInfo { };
            bufferCreateInfo.size = mSprings.size() * sizeof(Spring);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mSpringBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = mPointMasses.size() * sizeof(PointMass);
            bufferCreateInfo.usage |= VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
            mPointMassBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = pointMassIndices.size() * sizeof(uint16_t);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mPointMassIndexBuffer = device->create<Buffer>(bufferCreateInfo);
            DeviceMemory::allocate_multi_resource_memory(
                std::array<Buffer*, 3> { mSpringBuffer.get(), mPointMassBuffer.get(), mPointMassIndexBuffer.get() },
                VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
            );
            mSpringBuffer->write<Spring>(mSprings);
            mPointMassBuffer->write<PointMass>(mPointMasses);
            mPointMassIndexBuffer->write<uint16_t>(pointMassIndices);
            mPointMassIndexCount = (uint32_t)pointMassIndices.size();

            assert(device);
            assert(renderPass);
            create_compute_resources(device);
            create_graphics_resources(device, renderPass);
        }

    public:
        inline void apply_force(glm::vec3 force)
        {

        }

        inline void record_draw_cmds(
            const dst::vk::CommandBuffer& commandBuffer,
            const dst::vk::DescriptorSet& cameraDescriptorSet
        )
        {
            auto bindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            vkCmdBindPipeline(commandBuffer, bindPoint, *mGraphicsPipeline);
            auto vkPipelineLayout = mGraphicsPipeline->get_layout().get_handle();
            auto vkDescriptorSet = cameraDescriptorSet.get_handle();
            vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
            VkDeviceSize offset = 0;
            vkCmdBindVertexBuffers(commandBuffer, 0, 1, &mPointMassBuffer->get_handle(), &offset);
            vkCmdBindIndexBuffer(commandBuffer, *mPointMassIndexBuffer, 0, VK_INDEX_TYPE_UINT16);
            vkCmdDrawIndexed(commandBuffer, mPointMassIndexCount, 1, 0, 0, 0);
        }

    private:
        inline void create_compute_resources(const std::shared_ptr<dst::vk::Device>& device)
        {
            using namespace dst::vk;
            int computeShaderSourceLineOffset = __LINE__ + 1;
            std::string computeShaderSource =
            R"(
                #version 450

                struct PointMass
                {
                    vec2 position;
                    vec2 velocity;
                    vec2 acceleration;
                    float inverseMass;
                    float damping;
                };

                struct Spring
                {
                    uint pointMass0;
                    uint pointMass1;
                    float stiffness;
                    float damping;
                    float targetLength;
                };

                layout(set = 0, binding = 0) buffer PointMasses { PointMass pointMasses[]; };
                layout(set = 0, binding = 1) buffer Springs { Spring springs[]; };

                void PointMass_apply_force(uint index, vec2 force)
                {
                    pointMasses[index].acceleration += force * pointMasses[index].inverseMass;
                }

                void PointMass_increase_damping(uint index, float factor)
                {
                    pointMasses[index].damping *= factor;
                }

                void process_springs()
                {
                    uint index = gl_GlobalInvocationID.x;
                    Spring spring = springs[index];
                    PointMass pointMass0 = pointMasses[spring.pointMass0];
                    PointMass pointMass1 = pointMasses[spring.pointMass1];
                    vec2 edge = pointMass0.position - pointMass1.position;
                    float l = length(edge);
                    if (l > spring.targetLength) {
                        edge = (edge / l) * (l - spring.targetLength);
                        vec2 dv = pointMass1.velocity - pointMass0.velocity;
                        vec2 force = spring.stiffness * edge - dv * spring.damping;
                        PointMass_apply_force(spring.pointMass0, -force);
                        PointMass_apply_force(spring.pointMass1, force);
                    }
                }

                void process_point_masses()
                {
                    uint index = gl_GlobalInvocationID.x;
                    PointMass pointMass = pointMasses[index];
                    pointMass.velocity += pointMass.acceleration;
                    pointMass.position += pointMass.velocity;
                    if (dot(pointMass.velocity, pointMass.velocity) < 0.001 * 0.001) {
                        pointMass.velocity = vec2(0, 0);
                    }
                    pointMass.velocity *= pointMass.damping;
                    pointMass.damping = 0.98;
                    pointMasses[index] = pointMass;
                }
            )";

            auto processSpringsShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                computeShaderSourceLineOffset,
                computeShaderSource + "void main() { process_springs(); }"
            );
            auto pipelineLayout = device->create<PipelineLayout>(processSpringsShader);
            Pipeline::ComputeCreateInfo pipelineCreateInfo { };
            pipelineCreateInfo.stage = processSpringsShader->get_pipeline_stage_create_info();
            mSpringComputePipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);

            auto processPointMassesShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                computeShaderSourceLineOffset,
                computeShaderSource + "void main() { process_point_masses(); }"
            );
            pipelineCreateInfo.stage = processPointMassesShader->get_pipeline_stage_create_info();
            mPointMassComputePipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
        }

        inline void create_graphics_resources(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass
        )
        {
            using namespace dst::vk;
            std::array<std::shared_ptr<ShaderModule>, 2> shaderModules { };
            static const int Vertex = 0;
            shaderModules[Vertex] = device->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(set = 0, binding = 0)
                    uniform Camera
                    {
                        mat4 projectionFromWorld;
                    } camera;

                    layout(location = 0) in vec2 vsPosition;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        gl_Position = camera.projectionFromWorld * vec4(vsPosition, 0, 1);
                    }
                )"
            );
            static const int Fragment = 1;
            shaderModules[Fragment] = device->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(location = 0) out vec4 fragColor;

                    void main()
                    {
                        float r =  30.0 / 255.0;
                        float g =  30.0 / 255.0;
                        float b = 139.0 / 255.0;
                        float a =  85.0 / 255.0;
                        fragColor = vec4(r, g, b, 1);
                        // fragColor = vec4(1, 1, 1, 1);
                    }
                )"
            );
            std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages { };
            shaderStages[Vertex] = shaderModules[Vertex]->get_pipeline_stage_create_info();
            shaderStages[Fragment] = shaderModules[Fragment]->get_pipeline_stage_create_info();

            VkVertexInputBindingDescription vertexBindingDescription { };
            vertexBindingDescription.stride = sizeof(PointMass);
            vertexBindingDescription.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
            auto vertexAttributeDescriptions = PointMass::get_attribute_descriptions();
            Pipeline::VertexInputStateCreateInfo vertexInputState { };
            vertexInputState.vertexBindingDescriptionCount = 1;
            vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
            vertexInputState.vertexAttributeDescriptionCount = (uint32_t)vertexAttributeDescriptions.size();
            vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

            Pipeline::InputAssemblyStateCreateInfo inputAssemblyState { };
            inputAssemblyState.topology = VK_PRIMITIVE_TOPOLOGY_LINE_LIST;

            Pipeline::ColorBlendAttachmentState colorBlendAttachmentState { };
            colorBlendAttachmentState.blendEnable = VK_TRUE;
            Pipeline::ColorBlendStateCreateInfo colorBlendCreateInfo { };
            colorBlendCreateInfo.attachmentCount = 1;
            colorBlendCreateInfo.pAttachments = &colorBlendAttachmentState;

            Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
            pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
            pipelineCreateInfo.pStages = shaderStages.data();
            pipelineCreateInfo.pVertexInputState = &vertexInputState;
            pipelineCreateInfo.pInputAssemblyState = &inputAssemblyState;
            pipelineCreateInfo.pColorBlendState = &colorBlendCreateInfo;
            pipelineCreateInfo.renderPass = *renderPass;
            auto pipelineLayout = device->create<PipelineLayout>(shaderModules);
            mGraphicsPipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
        }
    };

} // namespace ShapeBlaster
