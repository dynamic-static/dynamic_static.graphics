
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/managed.hpp"
#include "dynamic_static/graphics/vulkan/detail/managed-handle.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed-structures.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <memory>

namespace dst {
namespace vk {

template <typename ManagedHandleType, typename ...Args>
inline VkResult allocate<ManagedHandleType>(Args&&... args)
{
    return VK_INCOMPLETE;
}

template <typename ManagedHandleType, typename ...Args>
inline VkResult create<ManagedHandleType>(Args&&... args)
{
    return VK_INCOMPLETE;
}

$<HANDLE_TYPES:"\n">
$<HANDLE_COMPILE_GUARDS>
#ifdef ${COMPILE_GUARD}
$</HANDLE_COMPILE_GUARDS>
template <>
class BasicManaged${HANDLE_NAME}
    : public detail::BasicManaged<${HANDLE_TYPE}>
{
public:
    BasicManaged${HANDLE_TYPE}() = default;
    virtual ~BasicManaged${HANDLE_NAME}() override;
    template <typename T> inline const T& get() const { static_assert(false && "TODO : Documentation"); };
    template <> const ${HANDLE_TYPE}& get<${HANDLE_TYPE}>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    $<PARENT_HANDLE_TYPES>
    template <> const Managed<${PARENT_HANDLE_TYPE}>& get<Managed<${PARENT_HANDLE_TYPE}>>() const;
    $</PARENT_HANDLE_TYPES>
    $<CREATE_INFO_TYPES>
    $<CREATE_INFO_COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</CREATE_INFO_COMPILE_GUARDS>
    template <> const Managed<${CREATE_INFO_TYPE}>& get<Managed<${CREATE_INFO_TYPE}>>() const;
    $<CREATE_INFO_COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</CREATE_INFO_COMPILE_GUARDS>
    $</CREATE_INFO_TYPES>

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
    $<CREATE_FUNCTIONS>
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    friend VkResult ${STRIP_VK_CREATE_FUNCTION_NAME}<Managed<HANDLE_TYPE>, $<ARGUMENTS:", ">${UNQUALIFIED_ARGUMENT_TYPE}$</>>($<ARGUMENTS:", ">${ARGUMENT_TYPE}$</>);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>
};

$<CREATE_FUNCTIONS>
$<CREATE_FUNCTION_COMPILE_GUARDS>
#ifdef ${COMPILE_GUARD}
$</CREATE_FUNCTION_COMPILE_GUARDS>
template <>
VkResult ${STRIP_VK_CREATE_FUNCTION_NAME}<Managed<HANDLE_TYPE>, $<ARGUMENTS:", ">${UNQUALIFIED_ARGUMENT_TYPE}$</>>($<ARGUMENTS:", ">${ARGUMENT_TYPE} ${ARGUMENT_NAME}${" = ":DEFAULT_VALUE}$</>);
$<CREATE_FUNCTION_COMPILE_GUARDS:reverse=true>
#endif // ${COMPILE_GUARD}
$</CREATE_FUNCTION_COMPILE_GUARDS>
$</CREATE_FUNCTIONS>
$<HANDLE_COMPILE_GUARDS:reverse=true>
#endif // ${COMPILE_GUARD}
$</HANDLE_COMPILE_GUARDS>
$</HANDLE_TYPES>

} // namespace vk
} // namespace dst
