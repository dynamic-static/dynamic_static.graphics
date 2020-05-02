
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
            if (structure.alias.empty()) {
                CppFunction createStructureCopyFunction;
                createStructureCopyFunction.cppCompileGuards.insert(structure.compileGuard);
                createStructureCopyFunction.cppTemplate.cppSpecializations = { structure.name };
                createStructureCopyFunction.cppReturn = structure.name;
                createStructureCopyFunction.name = "create_structure_copy";
                CppParameter objParameter;
                objParameter.type = "const " + structure.name + "&";
                objParameter.name = "obj";
                CppParameter pAllocationCallbacksParameter;
                pAllocationCallbacksParameter.type = "const VkAllocationCallbacks*";
                pAllocationCallbacksParameter.name = "pAllocationCallbacks";
                createStructureCopyFunction.cppParameters = { objParameter, pAllocationCallbacksParameter };
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
                            { "${MEMBER_TYPE}", member.type },
                        }
                    );
                }
                createStructureCopyFunction.cppSourceBlock.add_snippet(R"(
                    return result;
                )");
                cppFunctions.push_back(createStructureCopyFunction);
            }
        }

        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "create-structure-copy.hpp");
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp" };
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        headerFile << CppNamespace("dst::gfx::vk::detail").open();
        headerFile << cppFunctions.generate_declaration();
        headerFile << CppNamespace("dst::gfx::vk::detail").close();

        for (auto& cppFunction : cppFunctions) {
            if (structure_requires_custom_handling(cppFunction)) {
                cppFunction.cppCompileGuards.insert("DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING");
            }
        }
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "create-structure-copy.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp" };
        sourceFile << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
        auto pNextHandlerFunction = create_pnext_handler_function(xmlManifest);
        sourceFile << pNextHandlerFunction.generate_declaration() << std::endl;
        sourceFile << cppFunctions.generate_definition() << std::endl;
        sourceFile << pNextHandlerFunction.generate_definition();
        sourceFile << CppNamespace("dst::gfx::vk::detail").close();
    }

private:
    inline std::string generate_member_copy_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "result.pNext = (${MEMBER_TYPE})create_pnext_copy(obj.pNext, pAllocationCallbacks);";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "create_static_string_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                } else {
                    return "create_static_array_copy<${MEMBER_TYPE}, ${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
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
            if (vkXmlStructureMember.flags & xml::Parameter::FunctionPointer | xml::Parameter::VoidPointer) {
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

    inline dst::cppgen::CppFunction create_pnext_handler_function(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction createPNextCopyFunction;
        createPNextCopyFunction.cppReturn = "void*";
        createPNextCopyFunction.name = "create_pnext_copy";
        CppParameter pNextParameter;
        pNextParameter.type = "const void*";
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
                if (vkStructureTypeEnumerator.name == "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT" ||
                    vkStructureTypeEnumerator.name == "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT"
                    ) {
                    int b = 0;
                }
                if (vkStructureTypeEnumerator.alias.empty()) {
                    auto vkStructureTypeItr = vkXmlManifest.structureTypes.find(vkStructureTypeEnumerator.name);
                    if (vkStructureTypeItr != vkXmlManifest.structureTypes.end()) {
                        auto vkStructureItr = vkXmlManifest.structures.find(vkStructureTypeItr->second);
                        if (vkStructureItr != vkXmlManifest.structures.end()) {
                            CppSwitch::CppCase vkStructureTypeCase;
                            vkStructureTypeCase.cppCompileGuards = { vkStructureTypeEnumerator.compileGuard };
                            vkStructureTypeCase.name = vkStructureTypeEnumerator.name;
                            vkStructureTypeCase.cppSourceBlock.add_snippet(
                                R"(
                                    return create_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                                )", {
                                    { "${VK_STRUCTURE_TYPE}", vkStructureItr->first },
                                }
                            );
                            vkStructureTypeSwitch.cppCases.push_back(vkStructureTypeCase);
                        }
                    }
                }
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
