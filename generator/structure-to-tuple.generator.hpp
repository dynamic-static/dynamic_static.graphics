
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

inline void generate_to_tuple(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "to-tuple.hpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #pragma once

    #include "dynamic_static/core/span.hpp"
    #include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp"
    #include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
    #include "dynamic_static/graphics/vulkan/defines.hpp"

    #include <string_view>
    #include <tuple>
    #include <utility>

    namespace dst {
    namespace vk {

    ////////////////////////////////////////////////////////////////////////////////
    // NOTE : The following functions are manually implemented
    $<MANUALLY_IMPLEMENTED_STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    inline auto to_tuple<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>
    ////////////////////////////////////////////////////////////////////////////////

    $<STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    inline auto to_tuple<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj)
    {
        return std::make_tuple(
            $<MEMBERS:",">
            $<condition="PNEXT">
            PNextTupleElementWrapper(obj.pNext)
            $</>
            $<condition="STATIC_ARRAY">
            Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})
            $</>
            $<condition="STATIC_STRING">
            Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})
            $</>
            $<condition="DYNAMIC_ARRAY">
            Span(${VOID_PTR_TO_UINT8_PTR_CAST}obj.${MEMBER_NAME}, obj.${MEMBER_LENGTH})
            $</>
            $<condition="DYNAMIC_STRING">
            obj.${MEMBER_NAME} ? std::string_view(obj.${MEMBER_NAME}) : std::string_view()
            $</>
            $<condition="DYNAMIC_STRING_ARRAY">
            DynamicStringArrayTupleElementWrapper { obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME} }
            $</>
            $<condition="STRUCTURE_POINTER">
            Span(obj.${MEMBER_NAME}, 1)
            $</>
            $<condition="STRUCTURE">
            std::ref(obj.${MEMBER_NAME})
            $</>
            $<condition="POD">
            obj.${MEMBER_NAME}
            $</>
            $</>
        );
    }
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

} // namespace cppgen
} // namespace vk
} // namespace dst
