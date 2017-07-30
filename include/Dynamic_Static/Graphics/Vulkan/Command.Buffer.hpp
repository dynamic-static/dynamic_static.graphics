
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Command.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
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
        void begin(const BeginInfo& beginInfo);

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
            size_t instanceCount = 0,
            size_t firstVertex = 0,
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
