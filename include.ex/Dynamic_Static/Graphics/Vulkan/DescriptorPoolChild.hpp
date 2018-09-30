
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
    Common base for all Vulkan DescriptorPool child objects.
    */
    class DescriptorPoolChild
    {
    private:
        std::shared_ptr<DescriptorPool> mDescriptorPool;

    protected:
        /*!
        Constructs an instance of DescriptorPoolChild.
        @param [in] commandPool This DescriptorPoolChild's DescriptorPool
        */
        DescriptorPoolChild(const std::shared_ptr<DescriptorPool>& descriptorPool);

    public:
        /*!
        Destroys this instance of DescriptorPoolChild.
        */
        virtual ~DescriptorPoolChild() = 0;

    public:
        /*!
        Gets this DescriptorPoolChild's DescriptorPool.
        @return This DescriptorPoolChild's DescriptorPool
        */
        DescriptorPool& get_descriptor_pool();

        /*!
        Gets this DescriptorPoolChild's DescriptorPool.
        @return This DescriptorPoolChild's DescriptorPool
        */
        const DescriptorPool& get_descriptor_pool() const;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
