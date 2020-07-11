
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
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "create-structure-copy.hpp");
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp" };
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "create-structure-copy.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp" };
        sourceFile << std::endl;
        CppFunction::Collection cppFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction createStructureCopyFunction;
                createStructureCopyFunction.cppCompileGuards = { structure.compileGuard };
                createStructureCopyFunction.cppTemplate.cppSpecializations = { structure.name };
                createStructureCopyFunction.cppReturnType = structure.name;
                createStructureCopyFunction.cppName = "create_structure_copy";
                createStructureCopyFunction.cppParameters = {
                    { "const " + structure.name + "&", "obj" },
                    { "const VkAllocationCallbacks*", "pAllocationCallbacks" },
                };
                #if 0
                CppParameter objParameter;
                objParameter.cppType = "const " + structure.name + "&";
                objParameter.cppName = "obj";
                CppParameter pAllocationCallbacksParameter;
                pAllocationCallbacksParameter.cppType = "const VkAllocationCallbacks*";
                pAllocationCallbacksParameter.cppName = "pAllocationCallbacks";
                createStructureCopyFunction.cppParameters = { objParameter, pAllocationCallbacksParameter };
                #endif
                createStructureCopyFunction.cppSourceBlock = { R"(
                    ${VK_STRUCTURE_TYPE} result { };
                    $<MEMBERS>
                    ${MEMBER_COPY_SNIPPET}
                    $</MEMBERS>
                    return result;
                )", {
                    { "TODO", "TODO" },
                }};
                #if 0
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
                #endif
                cppFunctions.push_back(createStructureCopyFunction);
            }
        }
        auto pNextHandlerFunction = create_pnext_handler_function(xmlManifest);
        headerFile << CppNamespace("dst::gfx::vk::detail").open();
        headerFile << pNextHandlerFunction.generate_declaration() << std::endl;
        headerFile << cppFunctions.generate_declaration();
        headerFile << CppNamespace("dst::gfx::vk::detail").close();
        for (auto& cppFunction : cppFunctions) {
            auto unqualifiedVkStructureTypeName = cppFunction.cppParameters[0].get_unqualified_type();
            cppFunction.cppCompileGuards.insert(vk_structure_manual_implemntation_compile_guard(unqualifiedVkStructureTypeName));
        }
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
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
                    return "create_static_array_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                }
            }
            
            // TODO : Double check this logic...
            else


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
        createPNextCopyFunction.cppReturnType = "void*";
        createPNextCopyFunction.cppName = "create_pnext_copy";
        CppParameter pNextParameter;
        pNextParameter.cppType = "const void*";
        pNextParameter.cppName = "pNext";
        CppParameter pAllocationCallbacksParameter;
        pAllocationCallbacksParameter.cppType = "const VkAllocationCallbacks*";
        pAllocationCallbacksParameter.cppName = "pAllocationCallbacks";
        createPNextCopyFunction.cppParameters = { pNextParameter, pAllocationCallbacksParameter };
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            if (pNext) {
        )");
        createPNextCopyFunction.cppSourceBlock.add_snippet(
            Tab { 1 },
            generate_vk_structure_type_switch(
                vkXmlManifest,
                "*(VkStructureType*)pNext",
                [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase) {
                    cppCase.cppSourceBlock.add_snippet(
                        R"(
                            return create_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name },
                        }
                    );
                }
            ).generate_inline_definition()
        );
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            }
            return nullptr;
        )");
        return createPNextCopyFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
