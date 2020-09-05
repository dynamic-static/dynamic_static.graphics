
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/string.hpp"
#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

#include <fstream>

namespace dst {
namespace vk {
namespace cppgen {

/**
TODO : Documentation
*/
class StructureToTupleGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline StructureToTupleGenerator(const xml::Manifest& xmlManifest)
    {
        std::string copyrightHeader = R"(
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

)";
        using namespace dst::cppgen;
        using namespace dst::cppgen;
        CppNamespace::Collection cppNamespaces { "dst", "vk" };
        CppFunction::Collection structureToTupleFunctions;
        for (auto structureItr : xmlManifest.structures) {
            const auto& structure = structureItr.second;
            if (structure.alias.empty()) {
                structureToTupleFunctions.push_back(generate_structure_to_tuple_function(xmlManifest, structure));
            }
        }

        std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
        std::ofstream headerFile(includePath / "structure-to-tuple.hpp");
        headerFile << copyrightHeader;
        headerFile << "#pragma once" << '\n';
        headerFile << '\n';
        headerFile << R"(#include "dynamic_static/core/span.hpp")" << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp")" << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp")" << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << '\n';
        headerFile << '\n';
        headerFile << "#include <string_view>" << '\n';
        headerFile << "#include <tuple>" << '\n';
        headerFile << "#include <utility>" << '\n';
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Open);
        headerFile << '\n';
        structureToTupleFunctions.generate(headerFile, Declaration | Definition);
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Close);

        #if 0
        CppFunction::Collection manuallyImplementedStructureToTupleFunctions;
        for (auto itr = structureToTupleFunctions.begin(); itr != structureToTupleFunctions.end(); ++itr) {
            auto unqualifiedVkStructureTypeName = itr->cppParameters[0].get_unqualified_type();
            if (vk_structure_requires_manual_implementation(unqualifiedVkStructureTypeName)) {
                manuallyImplementedStructureToTupleFunctions.push_back(*itr);
                itr = structureToTupleFunctions.erase(itr);
            }
        }
        headerFile << CppNamespace("dst::gfx::vk::detail").open();
        headerFile << "///////////////////////////////////////////////////////////////////////////////" << std::endl;
        headerFile << "// NOTE : The following structure_to_tuple<> functions are manually implemented" << std::endl;
        headerFile << manuallyImplementedStructureToTupleFunctions.generate_declaration();
        headerFile << "///////////////////////////////////////////////////////////////////////////////" << std::endl;
        headerFile << std::endl;
        headerFile << structureToTupleFunctions.generate_inline_definition();
        headerFile << CppNamespace("dst::gfx::vk::detail").close();
        #endif
    }

private:
    inline dst::cppgen::CppFunction generate_structure_to_tuple_function(const xml::Manifest& xmlManifest, const xml::Structure& structure)
    {
        using namespace dst::cppgen;
        return {
            CppCompileGuard { structure.compileGuard },
            CppTemplate { structure.name },
            "auto", "to_tuple", CppParameters {{ "const " + structure.name + "&", "obj" }},
            CppSourceBlock {R"(
                return std::make_tuple(
                    $<MEMBERS>
                    ${MEMBER_SNIPPET}
                    $</s=",">
                );
            )", {
                {
                    "MEMBERS", structure.members,
                    CppSourceBlockLogic(const xml::Parameter& member)
                    {
                        return {{
                            "MEMBER_SNIPPET",
                            (std::string)CppSourceBlock {
                                generate_member_snippet(xmlManifest, member),
                                {
                                    { "MEMBER_TYPE", member.type },
                                    { "MEMBER_NAME", member.name },
                                    { "MEMBER_LENGTH", member.length },
                                    { "VOID_PTR_TO_UINT8_PTR_CAST", member.unqualifiedType == "void" ? "(const uint8_t*)" : std::string() },
                                }
                            }
                        }};
                    }
                }
            }}
        };
    }

    inline std::string generate_member_snippet(const vk::xml::Manifest& xmlManifest, const vk::xml::Parameter& member)
    {
        if (member.name == "pNext") {
            return "PNextTupleElementWrapper(obj.pNext)";
        } else
        if (member.flags & xml::Parameter::Array) {
            if (member.flags & xml::Parameter::StringArray) {
                return "DynamicStringArrayTupleElementWrapper { obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME} }";
            } else 
            if (member.flags & xml::Parameter::StaticArray) {
                if (member.flags & xml::Parameter::String) {
                    return "Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})";
                } else {
                    return "Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})";
                }
            }
            if (member.flags & xml::Parameter::DynamicArray) {
                if (member.flags & xml::Parameter::String) {
                    return "obj.${MEMBER_NAME} ? std::string_view(obj.${MEMBER_NAME}) : std::string_view()";
                } else {
                    return "Span(${VOID_PTR_TO_UINT8_PTR_CAST}obj.${MEMBER_NAME}, obj.${MEMBER_LENGTH})";
                }
            }
        } else
        if (member.flags & xml::Parameter::Pointer) {
            if (member.flags & xml::Parameter::FunctionPointer) {
                return "obj.${MEMBER_NAME}";
            } else {
                if (xmlManifest.structures.count(member.unqualifiedType)) {
                    return "Span(obj.${MEMBER_NAME}, 1)";
                } else {
                    return "obj.${MEMBER_NAME}";
                }
            }
        } else
        if (xmlManifest.structures.count(member.unqualifiedType)) {
            return "std::ref(obj.${MEMBER_NAME})";
        }
        return "obj.${MEMBER_NAME}";
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
