
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
        struct Force final
        {
            enum class Type : uint32_t
            {
                Directed  = 0,
                Implosive = 1,
                Explosive = 2,
            };

            glm::vec3 force { };
            glm::vec2 position { };
            float radius { };
            Type type { };
        };

        struct PointMass final
        {
            glm::vec4 position { };
            glm::vec4 velocity { };
            glm::vec4 acceleration { };
            float inverseMass { };
            float damping { 0.98f };
            static inline auto get_attribute_descriptions()
            {
                return dst::vk::create_attribute_descriptions<glm::vec4>();
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

        struct CountBuffer final
        {
            uint32_t forceCount { };
            uint32_t pointMassCount { };
            uint32_t springCount { };
        };

    private:
        uint32_t mPointMassCount { };
        uint32_t mSpringCount { };
        std::vector<Force> mForces;
        std::shared_ptr<dst::vk::Buffer> mForceBuffer;
        std::shared_ptr<dst::vk::Buffer> mCountBuffer;
        std::shared_ptr<dst::vk::Buffer> mSpringBuffer;
        std::shared_ptr<dst::vk::Buffer> mPointMassBuffer;
        std::shared_ptr<dst::vk::Buffer> mPointMassIndexBuffer;
        std::shared_ptr<dst::vk::DescriptorSet> mDescriptorSet;
        uint32_t mPointMassIndexCount { };
        std::shared_ptr<dst::vk::CommandBuffer> mCommandBuffer;
        std::shared_ptr<dst::vk::Pipeline> mApplyForcesComputePipeline;
        std::shared_ptr<dst::vk::Pipeline> mProcessSpringsComputePipeline;
        std::shared_ptr<dst::vk::Pipeline> mProcessPointMassesComputePipeline;
        std::shared_ptr<dst::vk::Pipeline> mGraphicsPipeline;

    public:
        Grid(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass,
            const glm::vec2& extent,
            const glm::vec2& spacing
        )
        {
            assert(device);
            assert(renderPass);

            int w = (int)(extent.x / spacing.x) + 1;
            int h = (int)(extent.y / spacing.y) + 1;
            std::vector<PointMass> pointMasses;
            std::vector<Spring> springs;
            pointMasses.reserve(w * h);
            springs.reserve((w - 1) * h + w * (h - 1));
            std::vector<uint16_t> pointMassIndices;
            pointMassIndices.reserve(springs.size() * 2);
            for (int y = 0; y < h; ++y) {
                for (int x = 0; x < w; ++x) {
                    PointMass pointMass { };
                    pointMass.position.x = (float)x / (float)w;
                    pointMass.position.y = (float)y / (float)h;
                    pointMass.position *= glm::vec4(extent, 0, 0);
                    pointMass.position -= glm::vec4(extent, 0, 0) * 0.5f;
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

                    pointMasses.push_back(pointMass);
                    if (x < w - 1) {
                        spring.pointMass1 = y * w + x + 1;
                        springs.push_back(spring);
                    }
                    if (y < h - 1) {
                        spring.pointMass1 = (y + 1) * w + x;
                        springs.push_back(spring);
                    }
                }
            }
            for (auto& spring : springs) {
                pointMassIndices.push_back(spring.pointMass0);
                pointMassIndices.push_back(spring.pointMass1);
                const auto& pointMass0 = pointMasses[spring.pointMass0];
                const auto& pointMass1 = pointMasses[spring.pointMass1];
                spring.targetLength = glm::distance(pointMass0.position, pointMass1.position) * 0.95f;
            }

            using namespace dst::vk;
            Buffer::CreateInfo bufferCreateInfo { };
            bufferCreateInfo.size = springs.size() * sizeof(Spring);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mSpringBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = pointMasses.size() * sizeof(PointMass);
            bufferCreateInfo.usage |= VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
            mPointMassBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = pointMassIndices.size() * sizeof(uint16_t);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mPointMassIndexBuffer = device->create<Buffer>(bufferCreateInfo);
            DeviceMemory::allocate_multi_resource_memory(
                std::array<Buffer*, 3> { mSpringBuffer.get(), mPointMassBuffer.get(), mPointMassIndexBuffer.get() },
                VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
            );
            mSpringBuffer->write<Spring>(springs);
            mPointMassBuffer->write<PointMass>(pointMasses);
            mPointMassIndexBuffer->write<uint16_t>(pointMassIndices);
            mPointMassIndexCount = (uint32_t)pointMassIndices.size();
            mPointMassCount = (uint32_t)pointMasses.size();
            mSpringCount = (uint32_t)springs.size();

            create_compute_resources(device);
            create_graphics_resources(device, renderPass);
        }

    public:
        inline void apply_directed_force(
            const glm::vec3& force,
            const glm::vec2& position,
            float radius
        )
        {
            apply_force(force, position, radius, Force::Type::Directed);
        }

        inline void apply_implosive_force(
            float force,
            const glm::vec2& position,
            float radius
        )
        {
            apply_force(glm::vec3 { force, force, force }, position, radius, Force::Type::Implosive);
        }

        inline void apply_explosive_force(
            float force,
            const glm::vec2& position,
            float radius
        )
        {
            apply_force(glm::vec3 { force, force, force }, position, radius, Force::Type::Explosive);
        }

        inline void update(const dst::vk::Queue& queue)
        {
            using namespace dst::vk;
            auto forcesSize = mForces.size() * sizeof(Force);
            if (!mForceBuffer || !mCountBuffer || mForceBuffer->get_size() < forcesSize) {
                auto& device = mApplyForcesComputePipeline->get_device();
                // TODO : This wait_idle() needs to go away.
                device.wait_idle();
                Buffer::CreateInfo bufferCreateInfo { };
                bufferCreateInfo.size = forcesSize;
                bufferCreateInfo.usage = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT;
                mForceBuffer = device.create<Buffer>(bufferCreateInfo);
                bufferCreateInfo.size = sizeof(CountBuffer);
                bufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
                mCountBuffer = device.create<Buffer>(bufferCreateInfo);
                DeviceMemory::allocate_multi_resource_memory(
                    std::array<Buffer*, 2> { mForceBuffer.get(), mCountBuffer.get() },
                    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
                );
                if (!mDescriptorSet) {
                    std::array<VkDescriptorPoolSize, 2> poolSizes { };
                    poolSizes[0].type = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
                    poolSizes[0].descriptorCount = 3;
                    poolSizes[1].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
                    poolSizes[1].descriptorCount = 1;
                    DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
                    descriptorPoolCreateInfo.poolSizeCount = (uint32_t)poolSizes.size();
                    descriptorPoolCreateInfo.pPoolSizes = poolSizes.data();
                    descriptorPoolCreateInfo.maxSets = 1;
                    auto descriptorPool = device.create<DescriptorPool>(descriptorPoolCreateInfo);
                    auto& descriptorSetLayout = mApplyForcesComputePipeline->get_layout().get_descriptor_set_layouts()[0];
                    mDescriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayout);
                }
                static const int BufferCount = 4;
                std::array<VkDescriptorBufferInfo, BufferCount> bufferInfos { };
                bufferInfos[0].buffer = *mForceBuffer;
                bufferInfos[1].buffer = *mPointMassBuffer;
                bufferInfos[2].buffer = *mSpringBuffer;
                bufferInfos[3].buffer = *mCountBuffer;
                for (auto& bufferInfo : bufferInfos) {
                    bufferInfo.range = VK_WHOLE_SIZE;
                }
                std::array<DescriptorSet::Write, BufferCount> writes { };
                for (int i = 0; i < BufferCount; ++i) {
                    writes[i].dstSet = *mDescriptorSet;
                    writes[i].dstBinding = i;
                    writes[i].descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
                    writes[i].descriptorCount = 1;
                    writes[i].pBufferInfo = &bufferInfos[i];
                }
                writes.back().descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
                vkUpdateDescriptorSets(device, (uint32_t)writes.size(), writes.data(), 0, nullptr);
            }
            mForceBuffer->write<Force>(mForces);
            CountBuffer countBuffer { };
            countBuffer.forceCount = (uint32_t)mForces.size();
            countBuffer.pointMassCount = mPointMassCount;
            countBuffer.springCount = mSpringCount;
            mCountBuffer->write<CountBuffer>({ &countBuffer, 1 });
            mForces.clear();

            auto vkPipelineLayout = mApplyForcesComputePipeline->get_layout().get_handle();
            auto vkDescriptorSet = mDescriptorSet->get_handle();
            static bool sOnce;
            if (!sOnce) {
                sOnce = true;
                CommandBuffer::BeginInfo beginInfo { };
                beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
                mCommandBuffer->begin(beginInfo);
                vkCmdBindDescriptorSets(*mCommandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
                vkCmdBindPipeline(*mCommandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mApplyForcesComputePipeline);
                // vkCmdDispatch(*mCommandBuffer, countBuffer.forceCount, 1, 1);
                vkCmdBindPipeline(*mCommandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mProcessSpringsComputePipeline);
                // vkCmdDispatch(*mCommandBuffer, countBuffer.springCount, 1, 1);
                vkCmdBindPipeline(*mCommandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mProcessPointMassesComputePipeline);
                vkCmdDispatch(*mCommandBuffer, countBuffer.pointMassCount, 1, 1);
                mCommandBuffer->end();
            }
            Queue::SubmitInfo submitInfo { };
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &mCommandBuffer->get_handle();
            dst_vk(vkQueueSubmit(queue, 1, &submitInfo, VK_NULL_HANDLE));
        }

        inline void record_draw_cmds(
            const dst::vk::CommandBuffer& commandBuffer,
            const dst::vk::DescriptorSet& cameraDescriptorSet
        )
        {
            using namespace dst::vk;
            vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipeline);
            auto vkPipelineLayout = mGraphicsPipeline->get_layout().get_handle();
            auto vkDescriptorSet = cameraDescriptorSet.get_handle();
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
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

                #define Directed 0
                #define Implosive 1
                #define Explosive 2
                struct Force
                {
                    vec3 force;
                    vec2 position;
                    float radius;
                    uint type;
                };

                struct PointMass
                {
                    vec4 position;
                    vec4 velocity;
                    vec4 acceleration;
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

                layout(local_size_x = 1024, local_size_y = 1, local_size_z = 1) in;
                layout(set = 0, binding = 0) buffer Forces { Force forces[]; };
                layout(set = 0, binding = 1) buffer PointMasses { PointMass pointMasses[]; };
                layout(set = 0, binding = 2) buffer Springs { Spring springs[]; };
                layout(set = 0, binding = 3)
                uniform CountBuffer
                {
                    uint forceCount;
                    uint pointMassCount;
                    uint springCount;
                };

                void PointMass_apply_force(uint index, vec3 force)
                {
                    pointMasses[index].acceleration.xyz += force * pointMasses[index].inverseMass;
                }

                void PointMass_increase_damping(uint index, float factor)
                {
                    pointMasses[index].damping *= factor;
                }

                void apply_forces()
                {
                    uint index = gl_GlobalInvocationID.x;
                    for (uint i = 0; i < forceCount; ++i) {
                        Force force = forces[i];
                        vec3 forcePosition = vec3(force.position, 0);
                        vec3 pointMassPosition = pointMasses[index].position.xyz;
                        vec3 d = forcePosition - pointMassPosition;
                        float d2 = dot(d, d);
                        if (d2 < force.radius * force.radius) {
                            switch (force.type) {
                                case Directed: {
                                    PointMass_apply_force(index, force.force * 10.0 / (10.0 + sqrt(d2)));
                                } break;
                                case Implosive: {
                                    PointMass_apply_force(index, force.force * 10.0 * (forcePosition - pointMassPosition) / (100.0 + d2));
                                    PointMass_increase_damping(index, 0.6);
                                } break;
                                case Explosive: {
                                    PointMass_apply_force(index, force.force * 100.0 * (pointMassPosition - forcePosition) / (10000.0 + d2));
                                    PointMass_increase_damping(index, 0.6);
                                } break;
                            }
                        }
                    }
                }

                void process_springs()
                {
                    uint index = gl_GlobalInvocationID.x;
                    Spring spring = springs[index];
                    PointMass pointMass0 = pointMasses[spring.pointMass0];
                    PointMass pointMass1 = pointMasses[spring.pointMass1];
                    vec3 edge = pointMass0.position.xyz - pointMass1.position.xyz;
                    float l = length(edge);
                    if (l > spring.targetLength) {
                        edge = (edge / l) * (l - spring.targetLength);
                        vec3 dv = pointMass1.velocity.xyz - pointMass0.velocity.xyz;
                        vec3 force = spring.stiffness * edge - dv * spring.damping;
                        PointMass_apply_force(spring.pointMass0, -force);
                        PointMass_apply_force(spring.pointMass1, force);
                    }
                }

                void process_point_masses()
                {
                    uint index = 25; // gl_GlobalInvocationID.x;
                    // bool good = index == 0 || index == 10;
                    // if (!good) {
                    //     return;
                    // }

                    PointMass pointMass = pointMasses[index];
                    pointMass.position.x += 1;
                    pointMass.position.y += 1;

                    // pointMass.velocity += pointMass.acceleration;
                    // pointMass.position += pointMass.velocity;
                    // if (dot(pointMass.velocity, pointMass.velocity) < 0.001 * 0.001) {
                    //     pointMass.velocity *= 0;
                    // }
                    // pointMass.velocity *= pointMass.damping;
                    // pointMass.damping = 0.98;

                    pointMasses[index] = pointMass;
                }
            )";

            auto applyForcesShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                computeShaderSourceLineOffset,
                computeShaderSource + "void main() { apply_forces(); }"
            );
            auto pipelineLayout = device->create<PipelineLayout>(applyForcesShader);
            Pipeline::ComputeCreateInfo pipelineCreateInfo { };
            pipelineCreateInfo.stage = applyForcesShader->get_pipeline_stage_create_info();
            mApplyForcesComputePipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);

            auto processSpringsShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                computeShaderSourceLineOffset,
                computeShaderSource + "void main() { process_springs(); }"
            );
            pipelineCreateInfo.stage = processSpringsShader->get_pipeline_stage_create_info();
            mProcessSpringsComputePipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);

            auto processPointMassesShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                computeShaderSourceLineOffset,
                computeShaderSource + "void main() { process_point_masses(); }"
            );
            pipelineCreateInfo.stage = processPointMassesShader->get_pipeline_stage_create_info();
            mProcessPointMassesComputePipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);

            CommandPool::CreateInfo commandPoolCreateInfo { };
            commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            auto commandPool = device->create<CommandPool>(commandPoolCreateInfo);
            mCommandBuffer = commandPool->allocate<CommandBuffer>();
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

                    layout(location = 0) in vec4 vsPosition;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        gl_Position = camera.projectionFromWorld * vec4(vsPosition.xyz, 1);
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

        inline void apply_force(
            const glm::vec3& force,
            const glm::vec2& position,
            float radius,
            Force::Type type
        )
        {
            mForces.push_back({ });
            mForces.back().force = force;
            mForces.back().position = position;
            mForces.back().radius = radius;
            mForces.back().type = type;
        }
    };

} // namespace ShapeBlaster
