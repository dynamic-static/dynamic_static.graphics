
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Buffer.
     */
    class Buffer
        : public Object<VkBuffer>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Default Buffer creation parameters.
         */
        static constexpr VkBufferCreateInfo CreateInfo {
            /* sType                 */ VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
            /* pNext                 */ nullptr,
            /* flags                 */ 0,
            /* size                  */ 0,
            /* usage                 */ 0,
            /* sharingMode           */ VK_SHARING_MODE_EXCLUSIVE,
            /* queueFamilyIndexCount */ 0,
            /* pQueueFamilyIndices   */ nullptr,
        };

    private:
        std::shared_ptr<Memory> mMemory;

    private:
        Buffer(
            const std::shared_ptr<Device>& device,
            const VkBufferCreateInfo& info,
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
         * Gets this Buffer's Memory.
         * @return This Buffer's Memory
         */
        std::shared_ptr<Memory> memory();

        /**
         * Gets this Buffer's Memory.
         * @return This Buffer's Memory
         */
        const std::shared_ptr<Memory>& memory() const;

        /**
         * TODO : Documentation.
         */
        void* mapped_ptr();

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(gsl::span<const T> data)
        {
            assert(mMemory);
            mMemory->write(data);
        }

        /**
         * TODO : Documentation.
         */
        void* map();

        /**
         * TODO : Documentation.
         */
        void unmap();

        /**
         * TODO : Documentation.
         */
        void flush();

    private:
        void initialize(
            const VkBufferCreateInfo& info,
            VkMemoryPropertyFlags memoryPropertyFlags
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
