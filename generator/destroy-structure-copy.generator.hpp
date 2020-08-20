
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
class DestroyStructureCopyGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline DestroyStructureCopyGenerator(const xml::Manifest& xmlManifest)
    {
        using namespace dst::cppgen;
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "destroy-structure-copy.hpp");
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp")" << std::endl;
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << std::endl;
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "destroy-structure-copy.cpp");
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp")" << std::endl;
        sourceFile << std::endl;
        CppFunction::Collection cppFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction destroyStructureCopyFunction;
                destroyStructureCopyFunction.cppCompileGuards = { structure.compileGuard };
                destroyStructureCopyFunction.cppTemplate.cppSpecializations = { structure.name };
                destroyStructureCopyFunction.cppName = "destroy_structure_copy";
                destroyStructureCopyFunction.cppParameters = {{ "const " + structure.name + "&", "obj" }, { "const VkAllocationCallbacks*", "pAllocationCallbacks" }};
                #if 0
                destroyStructureCopyFunction.cppSourceBlock.replacements = {
                    { "${VK_STRUCTURE_TYPE}", structure.name },
                };
                for (const auto& member : structure.members) {
                    destroyStructureCopyFunction.cppSourceBlock.add_snippet(
                        generate_member_destroy_snippet(xmlManifest, member),
                        {
                            { "${MEMBER_NAME}", member.name },
                            { "${MEMBER_LENGTH}", member.length },
                            { "${MEMBER_TYPE}", member.type },
                        }
                    );
                }
                #endif
                destroyStructureCopyFunction.cppSourceBlock = {R"(
                    ${VK_STRUCTURE_TYPE} result { };
                    $<MEMBERS>
                    ${MEMBER_COPY_SNIPPET}
                    $</MEMBERS>
                    return result;
                )", {
                    { "${VK_STRUCTURE_TYPE}", structure.name },
                    {
                        "$<MEMBERS>",
                        structure.members,
                        dst_cppgen_logic([&](const vk::xml::Parameter& member, size_t))
                        {
                            return {{
                                "${MEMBER_COPY_SNIPPET}",
                                (std::string)CppSourceBlock(
                                    generate_member_destroy_snippet(xmlManifest, member), {
                                        { "${MEMBER_NAME}", member.name },
                                        { "${MEMBER_LENGTH}", member.length },
                                        { "${MEMBER_TYPE}", member.type },
                                    }
                                )
                            }};
                        },
                        "$</MEMBERS>"
                    }
                }};
                cppFunctions.push_back(destroyStructureCopyFunction);
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
    inline std::string generate_member_destroy_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "destroy_pnext_copy(obj.pNext, pAllocationCallbacks);";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "destroy_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            } else




            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return std::string();
                } else {
                    return "destroy_static_array_copy<${MEMBER_LENGTH}>(obj.${MEMBER_NAME});";
                }
            }

            
            // TODO : Double check this logic...
            else


            if (vkXmlStructureMember.flags & xml::Parameter::DynamicArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "destroy_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
                } else {
                    return "destroy_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
                }
            }




        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Pointer) {
            if (!(vkXmlStructureMember.flags & xml::Parameter::FunctionPointer | xml::Parameter::VoidPointer)) {
                return "destroy_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            }
        }
        return "destroy_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
    }

    inline dst::cppgen::CppFunction create_pnext_handler_function(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction createPNextCopyFunction;
        createPNextCopyFunction.cppName = "destroy_pnext_copy";
        createPNextCopyFunction.cppParameters = {{ "const void*", "pNext" }, { "const VkAllocationCallbacks*", "pAllocationCallbacks" }};
        createPNextCopyFunction.cppSourceBlock = {R"(
            if (pNext) {
                ${VK_STRUCTURE_TYPE_SWITCH}
            }
            return nullptr;
        )", {
            {
                "${VK_STRUCTURE_TYPE_SWITCH}",
                generate_vk_structure_type_switch(
                    vkXmlManifest,
                    "*(VkStructureType*)pNext",
                    [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase)
                    {
                        cppCase.cppSourceBlock = {R"(
                            destroy_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name }
                        }};
                    }
                ).generate_inline_definition()
            }
        }};
        #if 0
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
                            destroy_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name },
                        }
                    );
                }
            ).generate_inline_definition()
        );
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            }
        )");
        #endif
        return createPNextCopyFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
