
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Common base for all Vulkan CommandPool child objects.
    */
    class CommandPoolChild
    {
    private:
        std::shared_ptr<CommandPool> mCommandPool;

    protected:
        /*!
        Constructs an instance of CommandPoolChild.
        @param [in] commandPool This CommandPoolChild's CommandPool
        */
        CommandPoolChild(const std::shared_ptr<CommandPool>& commandPool);

    public:
        /*!
        Destroys this instance of CommandPoolChild.
        */
        virtual ~CommandPoolChild() = 0;

    public:
        /*!
        Gets this CommandPoolChild's CommandPool.
        @return This CommandPoolChild's CommandPool
        */
        CommandPool& get_command_pool();

        /*!
        Gets this CommandPoolChild's CommandPool.
        @return This CommandPoolChild's CommandPool
        */
        const CommandPool& get_command_pool() const;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
