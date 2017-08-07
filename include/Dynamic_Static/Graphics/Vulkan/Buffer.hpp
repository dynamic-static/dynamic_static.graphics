
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
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

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
        void write(const gsl::span<const T>& data)
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
