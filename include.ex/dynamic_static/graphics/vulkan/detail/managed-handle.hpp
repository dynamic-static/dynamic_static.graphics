
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <utility>

namespace dst {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
class BasicManaged
{
public:
    /**
    Constructs an instance of ManagedHandle<>
    */
    BasicManaged() = default;

    /**
    Destroys this instance of ManagedHandle<>
    */
    virtual ~BasicManaged() = 0;

    /**
    TODO : Documentation
    */
    inline BasicManaged(BasicManaged<VulkanHandleType>&& other)
    {
        *this = move(std::move(other));
    }

    /**
    TODO : Documentation
    */
    inline BasicManaged<VulkanHandleType>& operator=(BasicManaged<VulkanHandleType>&& other)
    {
        *this = move(std::move(other));
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline operator bool() const
    {
        return mHandle != VK_NULL_HANDLE;
    }

    /**
    TODO : Documentation
    */
    inline operator const VulkanHandleType&() const
    {
        return mHandle;
    }

    /**
    Gets this ManagedHandle<> object's VkObjectType
    @return This ManagedHandle<> object's VkObjectType
    */
    inline virtual VkObjectType get_type() const = 0;

    /**
    Gets this ManagedHandle<> object's Vulkan handle
    @return This ManagedHandle<> object's Vulkan handle
    */
    inline const VulkanHandleType& get_handle() const
    {
        return mHandle;
    }

    /**
    TODO : Documentation
    */
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) = 0;

    /**
    TODO : Documentation
    */
    inline VulkanHandleType release()
    {
        auto handle = mHandle;
        mHandle = VK_NULL_HANDLE;
        reset();
        return handle;
    }

protected:
    inline virtual BasicManaged<VulkanHandleType>& move(BasicManaged<VulkanHandleType>&& other)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
            other.mHandle = VK_NULL_HANDLE;
        }
        return *this;
    }

    VulkanHandleType mHandle { VK_NULL_HANDLE };

    BasicManaged(const BasicManaged<VulkanHandleType>&) = delete;
    BasicManaged<VulkanHandleType>& operator=(const BasicManaged<VulkanHandleType>&) = delete;
};

template <typename VulkanHandleType>
inline BasicManaged<VulkanHandleType>::~BasicManaged()
{
}

template <typename VulkanHandleType>
inline void BasicManaged<VulkanHandleType>::reset(const VkAllocationCallbacks* pAllocator)
{
    (void)pAllocator;
    // TODO : reset()
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator==(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() == rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator!=(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() != rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() < rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<=(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() <= rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator>(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() > rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator>=(const BasicManaged<VulkanHandleType>& lhs, const BasicManaged<VulkanHandleType>& rhs)
{
    return lhs.get_handle() >= rhs.get_handle();
}

} // anemspace detail
} // namespace vk
} // namespace dst
