
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

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Descriptor Set.
     */
    class Descriptor::Set final
        : public Object<VkDescriptorSet>
    {
        friend Descriptor::Pool;

    public:
        class Layout;

        /**
         * Configuration paramaters for Descriptor::Set construction.
         */
        struct Info final
            : public VkDescriptorSetAllocateInfo
        {
            /**
             * Constructs an instance of Descriptor::Set::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
                pNext = nullptr;
                descriptorPool = VK_NULL_HANDLE;
                descriptorSetCount = 0;
                pSetLayouts = nullptr;
            }
        };

    private:
        Descriptor::Pool* mPool { nullptr };

    private:
        Set(Descriptor::Pool& pool, const Info& info);

    public:
        /**
         * Gets this Descriptor::Set's Descriptor::Pool.
         * @return This Descriptor::Set's Descriptor::Pool
         */
        Descriptor::Pool& pool();

        /**
         * Gets this Descriptor::Set's Descriptor::Pool.
         * @return This Descriptor::Set's Descriptor::Pool
         */
        const Descriptor::Pool& pool() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
