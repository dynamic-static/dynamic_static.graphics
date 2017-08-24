
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Command.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Command Buffer.
     */
    class Command::Buffer final
        : public Object<VkCommandBuffer>
    {
        friend Command::Pool;

    public:
        /**
         * Configuration paramaters for Command::Buffer allocation.
         */
        struct Info final
            : public VkCommandBufferAllocateInfo
        {
            /**
             * Constructs an instance of Command::Buffer::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
                pNext = nullptr;
                commandPool = VK_NULL_HANDLE;
                level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
                commandBufferCount = 1;
            }
        };

        /**
         * TODO : Documentation.
         */
        struct BeginInfo final
            : public VkCommandBufferBeginInfo
        {
            /**
             * TODO : Documentation.
             */
            BeginInfo()
            {
                sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
                pNext = nullptr;
                flags = 0;
                pInheritanceInfo = nullptr;
            }
        };

    private:
        Command::Pool* mPool { nullptr };

    private:
        Buffer(Command::Pool& pool);

    public:
        /**
         * Gets this Command::Buffer's Command::Pool.
         * @return This Command::Buffer's Command::Pool
         */
        Command::Pool& pool();

        /**
         * Gets this Command::Buffer's Command::Pool.
         * @return This Command::Buffer's Command::Pool
         */
        const Command::Pool& pool() const;

        /**
         * TODO : Documentation.
         */
        void begin(const BeginInfo& beginInfo = BeginInfo { });

        /**
         * TODO : Documentation.
         */
        void begin_render_pass(
            const RenderPass::BeginInfo& renderPassBeginInfo,
            VkSubpassContents subpassContents = VK_SUBPASS_CONTENTS_INLINE
        );

        /**
         * TODO : Documentation.
         */
        void bind_pipeline(
            VkPipelineBindPoint bindPoint,
            const Pipeline& pipeline
        );

        /**
         * TODO : Documentation.
         */
        void bind_descriptor_set(
            const Descriptor::Set& descriptorSet,
            const Pipeline::Layout& pipelineLayout
        );

        /**
         * TODO : Documentation.
         */
        void bind_index_buffer(const vlkn::Buffer& indexBuffer);

        /**
         * TODO : Documentation.
         */
        void bind_vertex_buffer(const vlkn::Buffer& vertexBuffer);

        /**
         * TODO : Documentation.
         */
        void copy_buffer(
            const vlkn::Buffer& source,
            const vlkn::Buffer& destination,
            VkDeviceSize size
        );

        /**
         * TODO : Documentation.
         */
        void set_viewport(const VkViewport& viewport);

        /**
         * TODO : Documentation.
         */
        void set_scissor(const VkRect2D& scissor);

        /**
         * TODO : Documentation.
         */
        void draw(
            size_t vertexCount = 0,
            size_t instanceCount = 1,
            size_t firstVertex = 0,
            size_t firstInstance = 0
        );

        /**
         * TODO : Documentation.
         */
        void draw_indexed(
            size_t indexCount = 0,
            size_t instanceCount = 1,
            size_t firstIndex = 0,
            int32_t vertexOffset = 0,
            size_t firstInstance = 0
        );

        /**
         * TODO : Documentation.
         */
        void end_render_pass();

        /**
         * TODO : Documentation.
         */
        void end();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
