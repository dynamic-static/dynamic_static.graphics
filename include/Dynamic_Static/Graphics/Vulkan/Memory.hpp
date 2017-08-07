
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

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>
#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over Vulkan Memory.
     */
    class Memory final
        : public Object<VkDeviceMemory>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Memory allocation.
         */
        struct Info final
            : public VkMemoryAllocateInfo
        {
            /**
             * Constructs an instance of Memory::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
                pNext = nullptr;
                allocationSize = 0;
                memoryTypeIndex = 0;
            }
        };

    public:
        Memory(const std::shared_ptr<Device>& device, const Info& info);

    public:
        /**
         * Destroys this instance of Memory.
         */
        ~Memory();

    public:
        /**
         * TODO : Documentation.
         */
        void* map();

        /**
         * TODO : Documentation.
         */
        void* map(size_t offset, size_t size);

        /**
         * TODO : Documentation.
         */
        void unmap();

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(const gsl::span<const T>& data)
        {
            write(data, 0);
        }

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(const gsl::span<const T>& data, size_t offset)
        {
            auto mappedPtr = map(offset, data.size_bytes());
            memcpy(mappedPtr, data.data(), data.size_bytes());
            unmap();
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
