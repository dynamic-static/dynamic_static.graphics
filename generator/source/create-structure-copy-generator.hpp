
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

namespace dst {
namespace vk {
namespace cppgen {

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
            cppFunction.cppDocumentation.brief = "Gets a deep copy of a given " + structure.name;
            cppFunction.cppDocumentation.notes.push_back(
                string::replace(
                    "Any ${VK_STRUCTURE_TYPE} copied via create_structure_copys() must be destroyed via destroy_structure_copy()",
                    {{ "${VK_STRUCTURE_TYPE}", structure.name }}
                )
            );
            cppFunction.cppDocumentation.notes.push_back(
                string::replace(
                    "Prefer Managed<${VK_STRUCTURE_TYPE}> over direct usage of create_structure_copy()/destroy_structure_copy()",
                    {{ "${VK_STRUCTURE_TYPE}", structure.name }}
                )
            );
            cppFunction.cppCompileGuards.insert(structure.compileGuard);
            cppFunction.cppTemplate.cppSpecializations.push_back(structure.name);
            cppFunction.cppReturn = structure.name;
            cppFunction.name = "create_structure_copy";
            CppParameter vkStructureCppParameter { };
            vkStructureCppParameter.cppDocumentation.brief = "A const reference to the ${VK_STRUCTURE_TYPE} to copy";
            vkStructureCppParameter.type = "const " + structure.name + "&";
            vkStructureCppParameter.name = "obj";
            cppFunction.cppParameters.push_back(vkStructureCppParameter);
            CppParameter vkAllocationCallbacksCppParameter { };
            vkAllocationCallbacksCppParameter.cppDocumentation.brief = "A const pointer to a VkAllocationCallbacks structure to use while copying the given ${VK_STRUCTURE_TYPE}";
            vkAllocationCallbacksCppParameter.cppDocumentation.notes.push_back("If pVkAllocationCallbacks is null any allocations will use new()");
            vkAllocationCallbacksCppParameter.cppDocumentation.notes.push_back("If pVkAllocationCallbacks is not null the call to ${DESTROY_FUNCTION_NAME}() must provide a compatible VkAllocationCallbacks structure");
            vkAllocationCallbacksCppParameter.type = "const VkAllocationCallbacks*";
            vkAllocationCallbacksCppParameter.name = "pAllocationCallbacks";
            vkAllocationCallbacksCppParameter.value = "nullptr";
            cppFunction.cppParameters.push_back(vkAllocationCallbacksCppParameter);
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
        std::ofstream headerFile("create-structure-copy.hpp");
        if (headerFile.is_open()) {
            headerFile << cppFunctions.generate_declaration();
        }
        std::ofstream sourceFile("create-structure-copy.cpp");
        if (sourceFile.is_open()) {
            sourceFile << cppFunctions.generate_definition();
        }
    }

private:
    inline std::string generate_member_copy_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkStructureMember
    )
    {
        if (vkStructureMember.name == "pNext") {
            return "result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks)";
        } else
        if (vkStructureMember.flags & xml::Parameter::Array) {
            if (vkStructureMember.flags & xml::Parameter::StringArray) {
                return "// TODO : String Array : ${MEMBER_NAME}";
            } else 
            if (vkStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkStructureMember.flags & xml::Parameter::String) {
                    return "// TODO : Static String Array : ${MEMBER_NAME}";
                } else {
                    return "// TODO : Static Array : ${MEMBER_NAME}";
                }
            }
            if (vkStructureMember.flags & xml::Parameter::DynamicArray) {
                if (vkStructureMember.flags & xml::Parameter::String) {
                    return "result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
                } else {
                    return "result.${MEMBER_NAME} = create_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
                }
            }
        } else
        if (vkStructureMember.flags & xml::Parameter::Pointer) {
            if (vkStructureMember.flags & xml::Parameter::FunctionPointer) {
                return "result.${MEMBER_NAME} = obj.${MEMBER_NAME};";
            } else {
                return "// TODO : Pointer : ${MEMBER_NAME}";
            }
        } else
        if (vkXmlManifest.handles.find(vkStructureMember.type) != vkXmlManifest.handles.end()) {
            return "result.${MEMBER_NAME} = obj.${MEMBER_NAME};";
        }
        return "result.${MEMBER_NAME} = create_structure_copy(obj.${MEMBER_NAME}, pAllocationCallbacks);";
    }
};

#if 0

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
    inline CreateStructureCopyGenerator(
        const dst::vk::xml::Manifest& vkXmlManifest,
        const std::string& includeDirectory
    )
    {
        using namespace dst::cppgen;
        module.name = "create-structure-copy";
        module.documentation.brief = "TODO : Documentation";
        module.headerIncludes.insert({ Include::Type::External, "dynamic_static/graphics/vulkan/defines.hpp" });
        auto includeFilePath = includeDirectory + "/" + "create-structure-copy.hpp";
        module.sourceIncludes.insert({ Include::Type::Project, includeFilePath });
        Namespace dstGfxVkNamespace("dst::gfx::vk");
        Function createStructureCopyBase;
        createStructureCopyBase.documentation.brief = "TODO : Documentation";
        createStructureCopyBase.documentation.notes.push_back("TODO : Documentation");
        createStructureCopyBase.documentation.notes.push_back("TODO : Documentation");
        dstGfxVkNamespace.functions.push_back(createStructureCopyBase);

        for (const auto& structureItr : vkXmlManifest.structures) {
            const auto& structure = structureItr.second;
            if (structure.alias.empty()) {
                dstGfxVkNamespace.functions.push_back({ });
                auto& createStructureCopyFunction = dstGfxVkNamespace.functions.back();
                // createStructureCopyFunction.documentation.brief = "Creates a deep copy of a given " + structure.name;
                createStructureCopyFunction.returnDocumentation = "The created " + structure.name;
                createStructureCopyFunction.documentation.notes.push_back("The created " + structure.name + " must be destroyed using destroy_structure_copy()");
                createStructureCopyFunction.documentation.notes.push_back("create_structure_copy() should not be used directly, prefer Managed<" + structure.name + ">");
                createStructureCopyFunction.compileGuard = structure.compileGuard;
                createStructureCopyFunction.returnType = structure.name;
                createStructureCopyFunction.name = "create_structure_copy";

                Function::Parameter structureParameter;
                structureParameter.documentation.brief = "A const reference to the " + structure.name + " to create a copy of";
                structureParameter.type = "const " + structure.name + "&";
                structureParameter.name = "obj";
                createStructureCopyFunction.parameters.push_back(structureParameter);

                Function::Parameter allocatorParameter;
                allocatorParameter.documentation.brief = "A const pointer to a VkAllocationCallbacks used to control allocations";
                allocatorParameter.type = "const VkAllocationCallbacks*";
                allocatorParameter.name = "pAllocator";
                allocatorParameter.defaultValue = "nullptr";
                createStructureCopyFunction.parameters.push_back(allocatorParameter);

                createStructureCopyFunction.body << structure.name << " result;" << std::endl;
                for (const auto& member : structure.members) {
                    if (member.name == "pNext") {
                        // process_pnext_member();
                    } else
                    if (member.flags & xml::Parameter::Array) {
                        if (member.flags & xml::Parameter::StringArray) {
                            // process_string_array_member();
                        } else 
                        if (member.flags & xml::Parameter::StaticArray) {
                            if (member.flags & xml::Parameter::String) {
                                // process_statically_sized_string_member();
                            } else {
                                // process_statically_sized_array_member();
                            }
                        }
                        if (member.flags & xml::Parameter::DynamicArray) {
                            if (member.flags & xml::Parameter::String) {
                                // process_dynamically_sized_string_member();
                            } else {
                                // process_dynamically_sized_array_member();
                            }
                        }
                    } else
                    if (member.flags & xml::Parameter::Pointer) {
                        if (member.flags & xml::Parameter::FunctionPointer) {
                            // process_function_pointer_member();
                        } else {
                            // process_pointer_member();
                        }
                    } else
                    if (vkXmlManifest.handles.find(member.type) != vkXmlManifest.handles.end()) {
                        // process_vk_handle_member();
                    } else {
                        process_member(member, createStructureCopyFunction.body);
                    }
                }
                createStructureCopyFunction.body << "return result;" << std::endl;
            }
        }
        module.namespaces.push_back(dstGfxVkNamespace);
    }

    ///////////////////////////////////////////////////////////////////////////////
    inline void process_member(const xml::Parameter& member, std::stringstream& strStrm)
    {
        strStrm << "result." + member.name + " = obj." + member.name + ";" << std::endl;
    }
    ///////////////////////////////////////////////////////////////////////////////

    dst::cppgen::Module module; //!< TODO : Documentation
};

#endif

} // namespace cppgen
} // namespace vk
} // namespace dst
