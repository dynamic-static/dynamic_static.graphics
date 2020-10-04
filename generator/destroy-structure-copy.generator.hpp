
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

inline void generate_destroy_structure_copy_declaration(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "destroy-structure-copy.hpp") << SourceBlock(R"(
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

    void* destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks);

    $<STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    ${STRUCTURE_NAME} destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks);
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

inline void generate_destroy_structure_copy_definition(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / "destroy-structure-copy.cpp") << SourceBlock(R"(
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
    ${STRUCTURE_NAME} destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks);
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
    ${STRUCTURE_NAME} destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocationCallbacks)
    {
        ${STRUCTURE_NAME} result { };
        $<MEMBERS>
        $<condition="PNEXT">
        destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
        $</>
        $<condition="STATIC_ARRAY">
        destroy_static_array_copy<${MEMBER_LENGTH}>(obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_ARRAY">
        destroy_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_STRING">
        destroy_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="DYNAMIC_STRING_ARRAY">
        destroy_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="STRUCTURE_POINTER">
        destroy_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $<condition="STRUCTURE">
        destroy_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);
        $</>
        $</>
        return result;
    }
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
    {
        if (pNext) {
            swtich (*(VkStructureType*)pNext) {
            $<UNFILTERED_STRUCTURES>
            $<COMPILE_GUARDS>
            #ifdef ${COMPILE_GUARD}
            $</>
            case ${STRUCTURE_NAME}: {
                destroy_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
            } break;
            $<COMPILE_GUARDS:reverse=true>
            #endif // ${COMPILE_GUARD}
            $</>
            $</>
            default:
            }
        }
    }

    } // namespace vk
    } // namespace dst
    )", {
        get_manually_implemented_structure_source_blocks(xmlManifest),
        get_automatically_implemented_structure_source_blocks(xmlManifest),
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

inline void generate_destroy_structure_copy(const xml::Manifest& xmlManifest)
{
    generate_destroy_structure_copy_declaration(xmlManifest);
    generate_destroy_structure_copy_definition(xmlManifest);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
