
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
class DestroyStructureCopyGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline DestroyStructureCopyGenerator(const xml::Manifest& xmlManifest)
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
        CppNamespace::Collection cppNamespaces { "dst", "vk" };
        CppFunction::Collection destroyStructureCopyFunctions;
        for (auto structureItr : xmlManifest.structures) {
            const auto& structure = structureItr.second;
            if (structure.alias.empty()) {
                destroyStructureCopyFunctions.push_back(generate_destroy_structure_copy_function(xmlManifest, structure));
            }
        }

        std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
        std::ofstream headerFile(includePath / "destroy-structure-copy.hpp");
        headerFile << copyrightHeader;
        headerFile << "#pragma once" << '\n';
        headerFile << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp")" << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << '\n';
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Open);
        headerFile << '\n';
        destroyStructureCopyFunctions.generate(headerFile, Declaration);
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Close);

        std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
        std::ofstream sourceFile(sourcePath / "destroy-structure-copy.cpp");
        sourceFile << copyrightHeader;
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp")" << '\n';
        sourceFile << '\n';
        cppNamespaces.generate(sourceFile, Open);
        sourceFile << '\n';
        generate_pnext_copy_function(xmlManifest).generate(sourceFile, Definition);
        sourceFile << '\n';
        destroyStructureCopyFunctions.generate(sourceFile, Definition);
        sourceFile << '\n';
        cppNamespaces.generate(sourceFile, Close);
    }

private:
    inline dst::cppgen::CppFunction generate_destroy_structure_copy_function(const xml::Manifest& xmlManifest, const xml::Structure& structure)
    {
        using namespace dst::cppgen;
        return {
            CppCompileGuard { structure.compileGuard },
            CppTemplate { structure.name },
            structure.name, "destroy_structure_copy", CppParameters {{ "const " + structure.name + "&", "obj" }, { "const VkAllocationCallbacks*", "pAllocationCallbacks" }},
            CppSourceBlock {R"(
                ${VK_STRUCTURE_TYPE} result { };
                $<MEMBERS>
                ${MEMBER_SNIPPET}
                $</>
                return result;
            )", {
                { "VK_STRUCTURE_TYPE", structure.name },
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
                                }
                            }
                        }};
                    }
                }
            }}
        };
    }

    inline std::string generate_member_snippet(const xml::Manifest& xmlManifest, const xml::Parameter& member)
    {
        if (member.name == "pNext") {
            return "destroy_pnext_copy(obj.pNext, pAllocationCallbacks);";
        } else
        if (member.flags & xml::Parameter::Array) {
            if (member.flags & xml::Parameter::StringArray) {
                return "destroy_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            } else
            if (member.flags & xml::Parameter::StaticArray) {
                if (member.flags & xml::Parameter::String) {
                    return std::string();
                } else {
                    return "destroy_static_array_copy<${MEMBER_LENGTH}>(obj.${MEMBER_NAME}, pAllocationCallbacks);";
                }
            } else
            if (member.flags & xml::Parameter::DynamicArray) {
                if (member.flags & xml::Parameter::String) {
                    return "destroy_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
                } else {
                    return "destroy_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
                }
            }
        } else
        if (member.flags & xml::Parameter::Pointer) {
            if (member.flags & xml::Parameter::FunctionPointer | xml::Parameter::VoidPointer) {
                return std::string();
            } else {
                return "destroy_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            }
        }
        return "destroy_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
    }

    inline dst::cppgen::CppFunction generate_pnext_copy_function(const xml::Manifest& xmlManifest)
    {
        using namespace dst::cppgen;
        return {
            Static, "void", "destroy_pnext_copy", CppParameters {{ "const coid*", "pNext" }, { "const VkAllocationCallbacks*", "pAllocationCallbacks" }},
            CppSourceBlock {R"(
                if (pNext) {
                    ${VK_STRUCTURE_TYPE_SWITCH}
                }
                return nullptr;
            )", {
                {
                    "VK_STRUCTURE_TYPE_SWITCH",
                    generate_vk_structure_type_switch(
                        xmlManifest,
                        "*(VkStructuretype*)pNext",
                        [](const xml::Structure& structure)
                        {
                            return CppSourceBlock {R"(
                                return destroy_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
                            )", {
                                { "VK_STRUCTURE_TYPE", structure.name }
                            }};
                        }
                    )
                }
            }}
        };
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
