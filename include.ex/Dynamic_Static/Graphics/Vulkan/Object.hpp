
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

#include <string>

namespace dst {
namespace gfx {
namespace vk {

    /*
    * Common base for Vulkan Objects.
    */
    template <typename VkHandleType>
    class Object
        : NonCopyable
    {
    protected:
        VkHandleType mHandle { VK_NULL_HANDLE };

    private:
        std::string mName { "VkObject" };

    public:
        /*
        * Constructs an instance of Object.
        */
        inline Object() = default;

        /*
        * Moves an instance of Object<VkHandleType>.
        * @param [in] other The Object<VkHandleType> to move from
        */
        inline Object(Object<VkHandleType>&& other)
        {
            *this = std::move(other);
        }

        /*
        * Destroys this instance of Object<VkHandleType>.
        */
        virtual ~Object() = 0;

        /*
        * Moves an instance of Object<VkHandleType>.
        * @param [in] other The Object<VkHandleType> to move from
        * @return This Object<VkHandleType>
        */
        inline Object<VkHandleType>& operator=(Object<VkHandleType>&& other)
        {
            if (this != &other) {
                mHandle = std::move(other.mHandle);
                mName = std::move(other.mName);
                other.mHandle = VK_NULL_HANDLE;
            }
            return *this;
        }

        /*
        * Converts this Object to its Vulkan handle
        * @return This Object's Vulkan handle
        */
        inline operator const VkHandleType&() const
        {
            return mHandle;
        }

        /*
        * Converts this Object to a value indicating whether or not its valid.
        * @return Whether or not this Object is valid
        */
        inline operator bool() const
        {
            return mHandle != VK_NULL_HANDLE;
        }

    public:
        /*
        * Gets this Object's name.
        * @return This Object's name
        */
        inline const std::string& get_name() const
        {
            return mName;
        }

        /*
        * Sets this Object's name.
        * @param [in] name This Object's name
        */
        inline void set_name(dst::StringView name)
        {
            mName = name;
        }

        /*
        * Gets this Object's Vulkan handle.
        * @return This Object's Vulkan handle
        */
        inline const VkHandleType& get_handle() const
        {
            return mHandle;
        }
    };

    template <typename VkObjectType>
    inline Object<VkObjectType>::~Object()
    {
    }

} // namespace vk
} // namespace gfx
} // namespace dst
