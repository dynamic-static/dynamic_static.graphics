
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
class CreateStructureCopyGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline CreateStructureCopyGenerator(const xml::Manifest& xmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction::Collection cppFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (!structure.alias.empty()) {
                continue;
            }
            CppFunction createStructureCopyFunction;
            createStructureCopyFunction.cppCompileGuards.insert(structure.compileGuard);
            createStructureCopyFunction.cppTemplate.cppSpecializations = { structure.name };
            createStructureCopyFunction.cppReturn = structure.name;
            createStructureCopyFunction.name = "create_structure_copy";
            CppParameter vkStructureParameter;
            vkStructureParameter.type = "const " + structure.name + "&";
            vkStructureParameter.name = "obj";
            CppParameter pAllocationCallbacksParameter;
            pAllocationCallbacksParameter.type = "const VkAllocationCallbacks*";
            pAllocationCallbacksParameter.name = "pAllocationCallbacks";
            pAllocationCallbacksParameter.value = "nullptr";
            createStructureCopyFunction.cppParameters = {
                vkStructureParameter,
                pAllocationCallbacksParameter,
            };
            createStructureCopyFunction.cppSourceBlock.replacements = {
                { "${VK_STRUCTURE_TYPE}", structure.name },
            };
            createStructureCopyFunction.cppSourceBlock.add_snippet(R"(
                ${VK_STRUCTURE_TYPE} result { };
            )");
            for (const auto& member : structure.members) {
                createStructureCopyFunction.cppSourceBlock.add_snippet(
                    generate_member_copy_snippet(xmlManifest, member),
                    {
                        { "${MEMBER_NAME}", member.name },
                        { "${MEMBER_LENGTH}", member.length },
                    }
                );
            }
            createStructureCopyFunction.cppSourceBlock.add_snippet(R"(
                return result;
            )");
            cppFunctions.push_back(createStructureCopyFunction);
        }
        auto pNextHandler = generate_pnext_handler(xmlManifest);
        std::ofstream headerFile("create-structure-copy.hpp");
        if (headerFile.is_open()) {
            headerFile << cppFunctions.generate_declaration();
        }
        std::ofstream sourceFile("create-structure-copy.cpp");
        if (sourceFile.is_open()) {
            for (auto& cppFunction : cppFunctions) {
                if (structure_requires_custom_handling(cppFunction)) {
                    cppFunction.cppCompileGuards.insert("DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING");
                }
            }
            sourceFile << pNextHandler.generate_declaration() << std::endl;
            sourceFile << cppFunctions.generate_definition() << std::endl;
            sourceFile << pNextHandler.generate_definition();
        }
    }

private:
    inline std::string generate_member_copy_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks);";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAlloactionCallbacks);";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "create_static_string_copy(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                } else {
                    return "create_static_array_copy(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                }
            }
            if (vkXmlStructureMember.flags & xml::Parameter::DynamicArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "result.${MEMBER_NAME} = create_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
                } else {
                    return "result.${MEMBER_NAME} = create_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
                }
            }
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Pointer) {
            if (vkXmlStructureMember.flags & xml::Parameter::FunctionPointer) {
                return "result.${MEMBER_NAME} = obj.${MEMBER_NAME};";
            } else {
                return "result.${MEMBER_NAME} = create_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            }
        } else
        if (vkXmlManifest.handles.find(vkXmlStructureMember.type) != vkXmlManifest.handles.end()) {
            return "result.${MEMBER_NAME} = obj.${MEMBER_NAME};";
        }
        return "result.${MEMBER_NAME} = create_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
    }

    inline dst::cppgen::CppFunction generate_pnext_handler(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction createPNextCopyFunction;
        createPNextCopyFunction.name = "create_pnext_copy";
        CppParameter pNextParameter;
        pNextParameter.type = "void*";
        pNextParameter.name = "pNext";
        CppParameter pAllocationCallbacksParameter;
        pAllocationCallbacksParameter.type = "const VkAllocationCallbacks*";
        pAllocationCallbacksParameter.name = "pAllocationCallbacks";
        createPNextCopyFunction.cppParameters = {
            pNextParameter,
            pAllocationCallbacksParameter,
        };
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            if (pNext) {
        )");
        CppSwitch vkStructureTypeSwitch;
        vkStructureTypeSwitch.cppCondition = "*(VkStructureType*)pNext";
        auto vkStructureTypeEnumerationItr = vkXmlManifest.enumerations.find("VkStructureType");
        if (vkStructureTypeEnumerationItr != vkXmlManifest.enumerations.end()) {
            const auto& vkStructureTypeEnumeration = vkStructureTypeEnumerationItr->second;
            for (const auto& vkStructureTypeEnumerator : vkStructureTypeEnumeration.enumerators) {
                CppSwitch::CppCase vkStructureTypeCase;
                vkStructureTypeCase.cppCompileGuards = { vkStructureTypeEnumerator.compileGuard };
                vkStructureTypeCase.name = vkStructureTypeEnumerator.name;
                vkStructureTypeCase.cppSourceBlock.add_snippet(
                    R"(
                        return create_vk_structure_dynamic_array_copy(1, *(${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                    )", {
                        {
                            "${VK_STRUCTURE_TYPE}",
                            [&]()
                            {
                                auto itr = vkXmlManifest.structureTypes.find(vkStructureTypeEnumerator.name);
                                return itr != vkXmlManifest.structureTypes.end() ? itr->second : "ERROR";
                            }()
                        },
                    }
                );
                vkStructureTypeSwitch.cppCases.push_back(vkStructureTypeCase);
            }
        }
        createPNextCopyFunction.cppSourceBlock.add_snippet(Tab { 1 }, vkStructureTypeSwitch.generate_inline_definition());
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            };
            return nullptr;
        )");
        return createPNextCopyFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
