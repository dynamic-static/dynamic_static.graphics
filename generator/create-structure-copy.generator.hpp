
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

inline void generate_create_structure_copy_declarations(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "create-structure-copy.hpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #pragma once

    #include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp"
    #include "dynamic_static/graphics/vulkan/defines.hpp"

    namespace dst {
    namespace vk {

    void* create_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks);

    $<STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    ${STRUCTURE_NAME} create_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    } // namespace vk
    } // namespace dst
    )", {
        get_structure_source_blocks(xmlManifest)
    });
}

inline void generate_create_structure_copy_definitions(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / "create-structure-copy.cpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #include "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp"

    namespace dst {
    namespace vk {

    ////////////////////////////////////////////////////////////////////////////////
    // NOTE : The following functions are manually implemented
    #if 0
    $<MANUALLY_IMPLEMENTED_STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    ${STRUCTURE_NAME} create_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>
    #endif
    ////////////////////////////////////////////////////////////////////////////////

    $<STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    ${STRUCTURE_NAME} create_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks)
    {
        ${STRUCTURE_NAME} result { };
        $<MEMBERS>
        $<condition="PNEXT">
        result.pNext = (${MEMBER_TYPE})create_pnext_copy(obj.pNext, pAllocationCallbacks);
        $</>
        $<condition="STATIC_ARRAY">
        create_static_array_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="STATIC_STRING">
        create_static_string_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_ARRAY">
        result.${MEMBER_NAME} = create_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_STRING">
        result.${MEMBER_NAME} = create_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_STRING_ARRAY">
        result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="STRUCTURE_POINTER">
        result.${MEMBER_NAME} = create_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="STRUCTURE">
        result.${MEMBER_NAME} = create_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="POD">
        result.${MEMBER_NAME} = obj.${MEMBER_NAME};
        $</>
        $</>
        return result;
    }
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    void* create_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
    {
        if (pNext) {
            swtich (*(VkStructureType*)pNext) {
            $<UNFILTERED_STRUCTURES>
            $<COMPILE_GUARDS>
            #ifdef ${COMPILE_GUARD}
            $</>
            case ${STRUCTURE_TYPE_ENUM}: {
                return create_dynamic_array_copy(1, (${STRUCTURE_NAME}*)pNext, pAllocationCallbacks);
            } break;
            $<COMPILE_GUARDS:reverse=true>
            #endif // ${COMPILE_GUARD}
            $</>
            $</>
            default:
            }
        }
        return nullptr;
    }

    } // namespace vk
    } // namespace dst
    )", {
        get_manually_implemented_structure_source_blocks(xmlManifest),
        get_automatically_implemented_structure_source_blocks(xmlManifest),
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

inline void generate_create_structure_copy(const xml::Manifest& xmlManifest)
{
    generate_create_structure_copy_declarations(xmlManifest);
    generate_create_structure_copy_definitions(xmlManifest);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
