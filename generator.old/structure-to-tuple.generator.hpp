
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
        using namespace dst::cppgen;
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "structure-to-tuple.hpp");
        headerFile << R"(#include "dynamic_static/core/span.hpp")" << std::endl;
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp")" << std::endl;
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp")" << std::endl;
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << std::endl;
        headerFile << std::endl;
        headerFile << R"(#include <string_view>)" << std::endl;
        headerFile << R"(#include <tuple>)" << std::endl;
        headerFile << R"(#include <utility>)" << std::endl;
        headerFile << std::endl;
        CppFunction::Collection structureToTupleFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction structureToTupleFunction;
                structureToTupleFunction.cppCompileGuards = { structure.compileGuard };
                structureToTupleFunction.cppTemplate.cppSpecializations = { structure.name };
                structureToTupleFunction.cppReturnType = "auto";
                structureToTupleFunction.cppName = "structure_to_tuple";
                CppParameter vkStructureParameter;
                vkStructureParameter.cppType = "const " + structure.name + "&";
                vkStructureParameter.cppName = "obj";
                structureToTupleFunction.cppParameters = { vkStructureParameter };
                CppParameter pAllocationCallbacksCppParameter;
                pAllocationCallbacksCppParameter.cppType = "const VkAllocationCallbacks*";
                pAllocationCallbacksCppParameter.cppName = "pAllocationCallbacks";
                pAllocationCallbacksCppParameter.cppValue = "nullptr";
                #if 0
                structureToTupleFunction.cppSourceBlock.replacements = {
                    { "${VK_STRUCTURE_TYPE}", structure.name },
                };
                structureToTupleFunction.cppSourceBlock.add_snippet(R"(
                    return std::make_tuple(
                )");
                for (size_t i = 0; i < structure.members.size(); ++i) {
                    const auto& member = structure.members[i];
                    structureToTupleFunction.cppSourceBlock.add_snippet(
                        Tab { 1 },
                        get_member_snippet(xmlManifest, member) + (i < structure.members.size() - 1 ? "," : std::string()),
                        {
                            { "${MEMBER_TYPE}", member.type },
                            { "${MEMBER_NAME}", member.name },
                            { "${MEMBER_LENGTH}", member.length },
                            { "${VOID_PTR_TO_UINT8_PTR_CAST}", member.unqualifiedType == "void" ? "(const uint8_t*)" : std::string() },
                        }
                    );
                }
                structureToTupleFunction.cppSourceBlock.add_snippet(R"(
                    );
                )");
                #endif
                structureToTupleFunctions.push_back(structureToTupleFunction);
            }
        }
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
    }

private:
    inline std::string get_member_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "PNextTupleElementWrapper { obj.pNext }";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "DynamicStringArrayTupleElementWrapper { obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME} }";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})";
                } else {
                    return "Span(obj.${MEMBER_NAME}, ${MEMBER_LENGTH})";
                }
            }
            if (vkXmlStructureMember.flags & xml::Parameter::DynamicArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "obj.${MEMBER_NAME} ? std::string_view(obj.${MEMBER_NAME}) : std::string_view()";
                } else {
                    return "Span(${VOID_PTR_TO_UINT8_PTR_CAST}obj.${MEMBER_NAME}, obj.${MEMBER_LENGTH})";
                }
            }
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Pointer) {
            if (vkXmlStructureMember.flags & xml::Parameter::FunctionPointer) {
                return "obj.${MEMBER_NAME}";
            } else {
                if (vkXmlManifest.structures.count(vkXmlStructureMember.unqualifiedType)) {
                    return "Span(obj.${MEMBER_NAME}, 1)";
                } else {
                    return "obj.${MEMBER_NAME}";
                }
            }
        } else
        if (vkXmlManifest.structures.count(vkXmlStructureMember.unqualifiedType)) {
            return "std::ref(obj.${MEMBER_NAME})";
        }
        return "obj.${MEMBER_NAME}";
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
