
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Common base for Vulkan objects.
     */
    template <typename VkHandleType>
    class Object
        // : public gfx::Object
    {
    protected:
        VkHandleType mHandle { VK_NULL_HANDLE };

    protected:
        /**
         * Constructs an instance of Object.
         */
        inline Object()
        {
            name("Dynamic_Static::Vulkan::Object");
        }
        
    private:
        std::string mName;

    public:
        const std::string& name() const { return mName; }
        void name(const std::string& name) { mName = name; }
    
        /**
         * Moves an instance of Object.
         * @param [in] other The Object to move from
         */
        Object(Object<VkHandleType>&& other)
        {
            *this = std::move(other);
        }

        /**
         * Destroys this Object.
         */
        virtual ~Object() = 0;

        /**
         * Moves an instance of Object.
         * @param [in] other The Object to move from
         */
        inline Object<VkHandleType>& operator=(Object<VkHandleType>&& other)
        {
            if (this != &other) {
                gfx::Object::operator=(std::move(other));
                mHandle = std::move(other.mHandle);
                other.mHandle = VK_NULL_HANDLE;
            }

            return *this;
        }

        /**
         * TODO : Documentation.
         */
        inline operator bool() const
        {
            return mHandle != VK_NULL_HANDLE;
        }

        /**
         * TODO : Documentation.
         */
        inline operator const VkHandleType&() const
        {
            return mHandle;
        }

    public:
        /**
         * TODO : Documentation.
         */
        inline const VkHandleType& handle() const
        {
            return mHandle;
        }
    };

    template <typename VkObjectType>
    inline Object<VkObjectType>::~Object()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
