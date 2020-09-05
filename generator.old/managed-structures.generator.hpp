
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
inline void generate_managed_structures(const xml::Manifest& vkXmlManifest)
{
    using namespace dst::cppgen;
    CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "managed-structures.hpp");
    headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/managed.hpp")" << std::endl;
    headerFile << R"(#include "dynamic_static/graphics/vulkan/detail/managed-structure.hpp")" << std::endl;
    headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << std::endl;
    headerFile << std::endl;
    CppStructure::Collection cppStructures;
    for (const auto& vkStructureItr : vkXmlManifest.structures) {
        const auto& vkStructure = vkStructureItr.second;
        CppStructure cppStructure;
        cppStructure.cppType = CppStructure::Type::Class;
        cppStructure.cppCompileGuards = { vkStructure.compileGuard };
        cppStructure.cppName = "Managed";
        cppStructure.cppTemplate.cppSpecializations = { vkStructure.name };
        auto cppBaseType = "detail::ManagedStructure<" + vkStructure.name + ">";
        cppStructure.cppBaseTypes = {{ CppAccessModifier::Public, cppBaseType }};
        auto cppBaseTypeConstructor = cppBaseType + "::" + string::remove(cppBaseType, "detail::");
        cppStructure.cppDeclarations = {{ CppAccessModifier::Public, "using " + cppBaseTypeConstructor + ";" }};
        cppStructures.push_back(cppStructure);
    }
    headerFile << CppNamespace("dst::gfx::vk").open();
    headerFile << cppStructures.generate_inline_definition();
    headerFile << CppNamespace("dst::gfx::vk").close();
}

} // namespace cppgen
} // namespace vk
} // namespace dst
