
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

#include "Dynamic_Static/Graphics/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

namespace Dynamic_Static
{
    namespace Graphics
    {
        namespace Vulkan
        {
            /**
             * Common base for Vulkan objects.
             */
            template <typename VkHandleType>
            class Object
                : public gfx::Object
            {
            protected:
                VkHandleType mHandle { VK_NULL_HANDLE };

            protected:
                /**
                 * Constructs an instance of Object.
                 */
                inline Object()
                {
                    name("Dynamic_Static::Graphics::Vulkan::Object");
                }

                // /**
                //  * Moves an instance of Object.
                //  * @param [in] other The Object to move from
                //  */
                // inline Object<VkHandleType>& operator=(Object<VkHandleType>&& other)
                // {
                //     *this = std::move(other);
                // }

                /**
                 * Destroys this Object.
                 */
                virtual ~Object() = 0;

                /**
                 * Moves an instance of Object.
                 * @param [in] other The Object to move from
                 */
                // inline Object<VkHandleType>& operator=(Object<VkHandleType>&& other)
                // {
                //     if (this != &other) {
                //         gfx::Object::operator=(std::move(other));
                //         mHandle = std::move(other.mHandle);
                //         other.mHandle = VK_NULL_HANDLE;
                //     }
                // 
                //     return *this;
                // }

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
            };

            template <typename VkObjectType>
            inline Object<VkObjectType>::~Object()
            {
            }
        } // namespace Vulkan
    } // namespace Graphics
} // namespace Dynamic_Static
