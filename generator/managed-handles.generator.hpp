
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

namespace dst {
namespace vk {
namespace cppgen {

inline void generate_managed_handle_declarations(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "managed-handles.hpp") << SourceBlock(R"(
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
    namespace detail {

    $<HANDLE_TYPES:"\n">
    $<HANDLE_COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</HANDLE_COMPILE_GUARDS>
    class BasicManaged${HANDLE_TYPE}
        : public BasicManaged<${HANDLE_TYPE}>
    {
    public:
        BasicManaged${HANDLE_TYPE}() = default;
        $<CREATE_FUNCTIONS>
        $<CREATE_FUNCTION_COMPILE_GUARDS>
        #ifdef ${COMPILE_GUARD}
        $</CREATE_FUNCTION_COMPILE_GUARDS>
        static VkResult ${CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${MANAGED_PARAMETER_TYPE} ${MANAGED_PARAMETER_NAME}$</>);
        $<CREATE_FUNCTION_COMPILE_GUARDS:reverse=true>
        #endif // ${COMPILE_GUARD}
        $</CREATE_FUNCTION_COMPILE_GUARDS>
        $</CREATE_FUNCTIONS>
        virtual ~BasicManaged${HANDLE_TYPE}() override;
        template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<${HANDLE_TYPE}>"); };
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
    };
    $<HANDLE_COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</HANDLE_COMPILE_GUARDS>
    $</HANDLE_TYPES>

    } // namespace detail
    } // namespace vk
    } // namespace dst
    )", {
        get_handle_source_blocks(xmlManifest)
    });
}

inline void generate_managed_handle_definitions(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / "managed-handles.cpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #include "dynamic_static/graphics/vulkan/generated/managed-handles.hpp"
    #include "dynamic_static/graphics/vulkan/managed.hpp"

    namespace dst {
    namespace vk {
    namespace detail {

    $<HANDLE_TYPES:"\n">
    $<HANDLE_COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</HANDLE_COMPILE_GUARDS>
    class BasicManaged${HANDLE_TYPE}::ControlBlock final
    {
    public:
        inline ~ControlBlock()
        {
            #if 0
            assert(vkHandle);
            $<PARENT_HANDLE_TYPES:"\n">
            assert(parent${PARENT_HANDLE_TYPE});
            $</PARENT_HANDLE_TYPES>
            $<DESTROY_FUNCTIONS>
            ${VK_DESTROY_FUNCTION_NAME}($<PARAMETERS:", ">${VK_PARAMETER}$</>);
            $</>
            #endif
        }

        ${HANDLE_TYPE} vkHandle { VK_NULL_HANDLE };
        $<PARENT_HANDLE_TYPES:"\n">
        Managed<${PARENT_HANDLE_TYPE}> parent${PARENT_HANDLE_TYPE};
        $</PARENT_HANDLE_TYPES>
        $<CREATE_INFO_TYPES>
        $<CREATE_INFO_COMPILE_GUARDS>
        #ifdef ${COMPILE_GUARD}
        $</CREATE_INFO_COMPILE_GUARDS>
        Managed<${CREATE_INFO_TYPE}> ${STRIP_VK_CREATE_INFO_TYPE};
        $<CREATE_INFO_COMPILE_GUARDS:reverse=true>
        #endif // ${COMPILE_GUARD}
        $</CREATE_INFO_COMPILE_GUARDS>
        $</CREATE_INFO_TYPES>
        VkAllocationCallbacks allocator { };
        ControlBlock(const ControlBlock&) = delete;
        ControlBlock& operator=(const ControlBlock&) = delete;
    };

    $<CREATE_FUNCTIONS:"\n">
    $<CREATE_FUNCTION_COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</CREATE_FUNCTION_COMPILE_GUARDS>
    VkResult BasicManaged${HANDLE_TYPE}::${CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${MANAGED_PARAMETER_TYPE} ${MANAGED_PARAMETER_NAME}$</>)
    {
        #if 0
        ${HANDLE_TYPE} handle = VK_NULL_HANDLE;
        auto vkResult = dst_vk(${VK_CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${VK_PARAMETER}$</>));
        if (vkResult == VK_SUCCESS) {
            // TODO : std::allocate_shared<>() using pAllocator...
            handle.mspControlBlock = std::make_shared<ControlBlock>();
        }
        return vkResult;
        #endif
        return VK_SUCCESS;
    }
    $<CREATE_FUNCTION_COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</CREATE_FUNCTION_COMPILE_GUARDS>
    $</CREATE_FUNCTIONS>

    BasicManaged${HANDLE_TYPE}::~BasicManaged${HANDLE_TYPE}()
    {
    }

    template <>
    const ${HANDLE_TYPE}& BasicManaged${HANDLE_TYPE}::get<${HANDLE_TYPE}>() const
    {
        return mHandle;
    }

    template <>
    const VkObjectType& BasicManaged${HANDLE_TYPE}::get<VkObjectType>() const
    {
        return ${OBJECT_TYPE};
    }

    $<"\n":PARENT_HANDLE_TYPES:"\n">
    template <>
    const Managed<${PARENT_HANDLE_TYPE}>& BasicManaged${HANDLE_TYPE}::get<Managed<${PARENT_HANDLE_TYPE}>>() const
    {
        static const Managed<${PARENT_HANDLE_TYPE}> sNullManaged${PARENT_HANDLE_TYPE};
        return mspControlBlock ? mspControlBlock->parent${PARENT_HANDLE_TYPE} : sNullManaged${PARENT_HANDLE_TYPE};
    }
    $</PARENT_HANDLE_TYPES>
    $<"\n":CREATE_INFO_TYPES:"\n">
    $<CREATE_INFO_COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</CREATE_INFO_COMPILE_GUARDS>
    template <>
    const Managed<${CREATE_INFO_TYPE}>& BasicManaged${HANDLE_TYPE}::get<Managed<${CREATE_INFO_TYPE}>>() const
    {
        // TODO : Return Default<${CREATE_INFO_TYPE}>...
        static const Managed<${CREATE_INFO_TYPE}> sEmptyManaged${CREATE_INFO_TYPE};
        return mspControlBlock ? mspControlBlock->${STRIP_VK_CREATE_INFO_TYPE} : sEmptyManaged${CREATE_INFO_TYPE};
    }
    $<CREATE_INFO_COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</CREATE_INFO_COMPILE_GUARDS>
    $</CREATE_INFO_TYPES>
    $<HANDLE_COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</HANDLE_COMPILE_GUARDS>
    $</HANDLE_TYPES>

    } // namespace detail
    } // namespace vk
    } // namespace dst
    )", {
        get_handle_source_blocks(xmlManifest)
    });
}

inline void generate_managed_handles(const xml::Manifest& xmlManifest)
{
    generate_managed_handle_declarations(xmlManifest);
    generate_managed_handle_definitions(xmlManifest);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
