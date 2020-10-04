
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

void generate_structure_to_tuple(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "structure-to-tuple.hpp") << SourceBlock(R"(
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
    // NOTE : The following to_tuple<> functions are manually implemented
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
        SourceBlock("MANUALLY_IMPLEMENTED_STRUCTURES", get_manually_implemented_structures(),
            [&](const std::string& manuallyImpelementedStructure) -> std::vector<SourceBlock>
            {
                auto structureItr = xmlManifest.structures.find(manuallyImpelementedStructure);
                if (structureItr != xmlManifest.structures.end() && structureItr->second.alias.empty()) {
                    const auto& structure = structureItr->second;
                    return {
                        SourceBlock("STRUCTURE_NAME", structure.name),
                        SourceBlock("COMPILE_GUARDS", get_structure_compile_guards(structure),
                            [&](const std::string& compileGuard) -> std::vector<SourceBlock>
                            {
                                return { SourceBlock("COMPILE_GUARD", compileGuard) };
                            }
                        ),
                    };
                }
                return { };
            }
        ),
        SourceBlock("STRUCTURES", xmlManifest.structures,
            [&](const std::pair<std::string, Structure>& structureItr) -> std::vector<SourceBlock>
            {
                const auto& structure = structureItr.second;
                if (structure.alias.empty() && !is_manually_implemented(structure)) {
                    return {
                        SourceBlock("STRUCTURE_NAME", structure.name),
                        SourceBlock("COMPILE_GUARDS", get_structure_compile_guards(structure),
                            [&](const std::string& compileGuard) -> std::vector<SourceBlock>
                            {
                                return { SourceBlock("COMPILE_GUARD", compileGuard) };
                            }
                        ),
                        SourceBlock("MEMBERS", structure.members,
                            [&](const Parameter& member) -> std::vector<SourceBlock>
                            {
                                return {
                                    get_variable_type_condition(xmlManifest, member),
                                    SourceBlock("MEMBER_NAME", member.name),
                                    SourceBlock("MEMBER_LENGTH", member.length)
                                };
                            }
                        )
                    };
                }
                return { };
            }
        )
    });
}

} // namespace cppgen
} // namespace vk
} // namespace dst
