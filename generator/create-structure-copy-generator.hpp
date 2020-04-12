
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"

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

} // namespace cppgen
} // namespace vk
} // namespace dst
