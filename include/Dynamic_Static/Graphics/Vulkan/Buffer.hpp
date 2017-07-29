
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

#include "Dynamic_Static/Core/Collection.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Buffer.
     */
    class Buffer final
        : public Object<VkBuffer>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Buffer construction.
         */
        struct Info final
            : public VkBufferCreateInfo
        {
            /**
             * Constructs an instance of Buffer::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                size = 0;
                usage = 0;
                sharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
            }
        };

    private:
        std::shared_ptr<Memory> mMemory;

    private:
        Buffer(
            const std::shared_ptr<Device>& device,
            const Info& info,
            VkMemoryPropertyFlags memoryPropertyFlags
        );

    public:
        /**
         * Destroys this instance of Buffer.
         */
        ~Buffer();

    public:
        /**
         * Gets this Buffer's memory requirements.
         * @return This Buffer's memory requirements
         */
        VkMemoryRequirements memory_requirements() const;

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(const Collection<T>& data)
        {
            assert(mMemory);
            mMemory->write(data);
        }

    private:
        void initialize(
            const Info& info,
            VkMemoryPropertyFlags memoryPropertyFlags
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
