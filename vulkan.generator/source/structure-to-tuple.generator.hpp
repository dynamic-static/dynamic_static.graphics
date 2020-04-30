
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
        CppFunction::Collection structureToTupleFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction structureToTupleFunction;
                structureToTupleFunction.cppCompileGuards.insert(structure.compileGuard);
                structureToTupleFunction.cppTemplate.cppSpecializations = { structure.name };
                structureToTupleFunction.cppReturn = "auto";
                structureToTupleFunction.name = "structure_to_tuple";
                CppParameter vkStructureParameter;
                vkStructureParameter.type = "const " + structure.name + "&";
                vkStructureParameter.name = "obj";
                structureToTupleFunction.cppParameters = {
                    vkStructureParameter,
                };
                CppParameter pAllocationCallbacksCppParameter;
                pAllocationCallbacksCppParameter.type = "const VkAllocationCallbacks*";
                pAllocationCallbacksCppParameter.name = "pAllocationCallbacks";
                pAllocationCallbacksCppParameter.value = "nullptr";
                structureToTupleFunction.cppSourceBlock.replacements = {
                    { "${VK_STRUCTURE_TYPE}", structure.name },
                };
                structureToTupleFunction.cppSourceBlock.add_snippet(R"(
                    return std::make_tuple(
                )");
                for (const auto& member : structure.members) {
                    structureToTupleFunction.cppSourceBlock.add_snippet(
                        Tab { 1 },
                        get_member_snippet(xmlManifest, member),
                        {
                            { "${MEMBER_NAME}", member.name },
                            { "${MEMBER_LENGTH}", member.length },
                        }
                    );
                }
                structureToTupleFunction.cppSourceBlock.add_snippet(R"(
                    );
                )");
                structureToTupleFunctions.push_back(structureToTupleFunction);
            }
        }
        std::ofstream headerFile("structure-to-tuple.hpp");
        if (headerFile.is_open()) {
            for (auto& cppFunction : structureToTupleFunctions) {
                if (structure_requires_custom_handling(cppFunction)) {
                    cppFunction.cppCompileGuards.insert("DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING");
                }
            }
            headerFile << structureToTupleFunctions.generate_inline_definition();
        }
    }

private:
    inline std::string get_member_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "pnext_member_to_tuple_element(obj.pNext),";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "dynamic_string_array_member_to_tuple_element(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}),";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "static_array_member_to_tuple_element(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                } else {
                    return "static_array_member_to_tuple_element(result.${MEMBER_NAME}, obj.${MEMBER_NAME}),";
                }
            }
            if (vkXmlStructureMember.flags & xml::Parameter::DynamicArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "dynamic_string_member_to_tuple_element(obj.${MEMBER_NAME}),";
                } else {
                    return "dynamic_array_member_to_tuple_element(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}),";
                }
            }
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Pointer) {
            if (vkXmlStructureMember.flags & xml::Parameter::FunctionPointer) {
                return "obj.${MEMBER_NAME},";
            } else {
                return "obj.${MEMBER_NAME},";
            }
        } else
        if (vkXmlManifest.handles.find(vkXmlStructureMember.type) != vkXmlManifest.handles.end()) {
            return "obj.${MEMBER_NAME},";
        }
        return "member_to_tuple_element(obj.${MEMBER_NAME}),";
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
