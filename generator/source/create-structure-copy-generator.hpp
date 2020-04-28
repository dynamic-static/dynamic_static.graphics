
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

#include <fstream>
#include <set>

namespace dst {
namespace vk {
namespace cppgen {

inline bool structure_requires_custom_handling(const dst::cppgen::CppFunction& cppFunction)
{
    static const std::set<std::string> sStructuresRequiringCustomHandling {
        "VkTransformMatrixKHR"
    };
    return sStructuresRequiringCustomHandling.count(string::remove(string::remove(cppFunction.cppParameters[0].type, "const "), "&"));
}

inline std::string strip_vk(const std::string& str)
{
    return string::remove(string::remove(string::remove(str, "VK_"), "Vk"), "vk");
}

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
            CppFunction cppFunction { };
            cppFunction.cppCompileGuards.insert(structure.compileGuard);
            cppFunction.cppTemplate.cppSpecializations.push_back(structure.name);
            cppFunction.cppReturn = structure.name;
            cppFunction.name = "create_structure_copy";
            CppParameter objCppParameter { };
            objCppParameter.type = "const " + structure.name + "&";
            objCppParameter.name = "obj";
            cppFunction.cppParameters.push_back(objCppParameter);
            CppParameter pAllocationCallbacksCppParameter { };
            pAllocationCallbacksCppParameter.type = "const VkAllocationCallbacks*";
            pAllocationCallbacksCppParameter.name = "pAllocationCallbacks";
            pAllocationCallbacksCppParameter.value = "nullptr";
            cppFunction.cppParameters.push_back(pAllocationCallbacksCppParameter);
            cppFunction.cppSourceBlock.replacements.push_back({ "${VK_STRUCTURE_TYPE}", structure.name });
            cppFunction.cppSourceBlock.add_snippet(R"(
                ${VK_STRUCTURE_TYPE} result { };
            )");
            for (const auto& member : structure.members) {
                cppFunction.cppSourceBlock.add_snippet(
                    generate_member_copy_snippet(xmlManifest, member),
                    {
                        { "${MEMBER_NAME}", member.name },
                        { "${MEMBER_LENGTH}", member.length },
                    }
                );
            }
            cppFunction.cppSourceBlock.add_snippet(R"(
                return result;
            )");
            cppFunctions.push_back(cppFunction);
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
            return "result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks)";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAlloactionCallbacks);";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "memcpy(result.${MEMBER_NAME}, obj.${MEMBER_NAME}, sizeof(obj.${MEMBER_NAME}));";
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
        CppFunction cppFunction { };
        cppFunction.name = "create_pnext_copy";
        CppParameter pNextCppParameter { };
        pNextCppParameter.type = "void*";
        pNextCppParameter.name = "pNext";
        cppFunction.cppParameters.push_back(pNextCppParameter);
        CppParameter pAllocationCallbacksCppParameter { };
        pAllocationCallbacksCppParameter.type = "const VkAllocationCallbacks*";
        pAllocationCallbacksCppParameter.name = "pAllocationCallbacks";
        cppFunction.cppParameters.push_back(pAllocationCallbacksCppParameter);
        cppFunction.cppSourceBlock.add_snippet("return nullptr;");
        return cppFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
