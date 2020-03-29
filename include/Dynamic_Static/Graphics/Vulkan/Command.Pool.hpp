
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Command.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <type_traits>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Command Pool.
     */
    class Command::Pool final
        : public Object<VkCommandPool>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Default Command::Pool creation parameters.
         */
        static constexpr VkCommandPoolCreateInfo CreateInfo {
            /* sType            */ VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
            /* pNext            */ nullptr,
            /* flags            */ 0,
            /* queueFamilyIndex */ 0,
        };

    private:
        std::vector<std::unique_ptr<Command::Buffer>> mBuffers;

    private:
        Pool(const std::shared_ptr<Device>& device, const VkCommandPoolCreateInfo& info);

    public:
        /**
         * Destroys this instance of Command::Pool.
         */
        ~Pool();

    public:
        /**
         * Gets this Command::Pool's Command::Buffers.
         * @return This Command::Pool's Command::Buffers
         */
        const std::vector<std::unique_ptr<Command::Buffer>>& buffers() const;

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        ObjectType* allocate(Args&&... args)
        {
            static_assert(
                std::is_same<ObjectType, Command::Buffer>::value,
                "Command::Pool can only allocate Command::Buffer"
            );

            // TODO : DRY...
            // TODO : UniqueObject factory...
            std::unique_ptr<Command::Buffer> buffer(new Command::Buffer(*this, args...));
            mBuffers.push_back(std::move(buffer));
            return mBuffers.back().get();
        }

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        std::unique_ptr<ObjectType> allocate_transient(Args&&... args)
        {
            static_assert(
                std::is_same<ObjectType, Command::Buffer>::value,
                "Command::Pool can only allocate Command::Buffer"
            );

            // TODO : DRY...
            return std::unique_ptr<Command::Buffer>(new Command::Buffer(*this, args...));
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
