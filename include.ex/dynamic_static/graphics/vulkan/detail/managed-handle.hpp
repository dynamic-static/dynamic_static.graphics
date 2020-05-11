
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

#include <string>
#include <utility>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
class ManagedHandle
{
public:
    /**
    Constructs an instance of ManagedHandle<>
    */
    ManagedHandle() = default;

    /**
    Destroys this instance of ManagedHandle<>
    */
    virtual ~ManagedHandle() = 0;

    /**
    TODO : Documentation
    */
    inline ManagedHandle(ManagedHandle<VulkanHandleType>&& other)
    {
        *this = move(std::move(other));
    }

    /**
    TODO : Documentation
    */
    inline ManagedHandle<VulkanHandleType>& operator=(ManagedHandle<VulkanHandleType>&& other)
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
    inline operator const VulkanHandleType& () const
    {
        return mHandle;
    }

    /**
    Gets this ManagedHandle<> object's VkObjectType
    @return This ManagedHandle<> object's VkObjectType
    */
    inline virtual VkObjectType get_object_type() const = 0;

    /**
    TODO : Documentation
    */
    inline VkResult get_result() const
    {
        return mResult;
    }

    /**
    Gets this ManagedHandle<> object's Vulkan handle
    @return This ManagedHandle<> object's Vulkan handle
    */
    inline const VulkanHandleType& get_handle() const
    {
        return mHandle;
    }

    /**
    Gets this ManagedHandle<> object's name
    @return This ManagedHandle<> object's name
    */
    inline const std::string& get_name() const
    {
        return mName;
    }

    /**
    Sets this ManagedHandle<> object's name
    @param [in] name This ManagedHandle<> object's name
    */
    inline void set_name(const std::string& name)
    {
        // TODO : Set debug name
        mName = name;
    }

    /**
    TODO : Documentation
    */
    virtual void reset() = 0;

    /**
    TODO : Documentation
    */
    inline [[nodiscard]] VulkanHandleType release()
    {
        auto handle = mHandle;
        mHandle = VK_NULL_HANDLE;
        reset();
        return handle;
    }

protected:
    inline virtual ManagedHandle<VulkanHandleType>& move(ManagedHandle<VulkanHandleType>&& other)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
            mName = std::move(other.mName);
            other.mHandle = VK_NULL_HANDLE;
        }
        return *this;
    }

    VulkanHandleType mHandle { VK_NULL_HANDLE };
    VkResult mResult { VK_SUCCESS };

private:
    std::string mName;
    ManagedHandle(const ManagedHandle<VulkanHandleType>&) = delete;
    ManagedHandle<VulkanHandleType>& operator=(const ManagedHandle<VulkanHandleType>&) = delete;
};

template <typename VulkanHandleType>
inline ManagedHandle<VulkanHandleType>::~ManagedHandle()
{
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator==(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() == rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator!=(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() != rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() < rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<=(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() <= rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() > rhs.get_handle();
}

/**
TODO : Documentation
*/
template <typename VulkanHandleType>
inline bool operator<=(const ManagedHandle<VulkanHandleType>& lhs, const ManagedHandle<VulkanHandleType>& rhs)
{
    return lhs.get_handle() >= rhs.get_handle();
}

} // anemspace detail
} // namespace vk
} // namespace gfx
} // namespace dst
