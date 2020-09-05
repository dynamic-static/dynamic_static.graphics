
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

#include <array>

namespace dst {
namespace vk {
namespace cppgen {

/**
TODO : Documentation
*/
class GreaterThanOperatorsGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline GreaterThanOperatorsGenerator(const xml::Manifest& xmlManifest)
    {
        using namespace dst::cppgen;
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "greater-than-operators.hpp");
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << std::endl;
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "greater-than-operators.cpp");
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/generated/greater-than-operators.hpp")" << std::endl;
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp")" << std::endl;
        sourceFile << std::endl;
        CppFunction::Collection greaterThanOperatorFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction greaterThanOperatorFunction;
                greaterThanOperatorFunction.cppCompileGuards = { structure.compileGuard };
                greaterThanOperatorFunction.cppReturnType = "bool";
                greaterThanOperatorFunction.cppName = "operator>";
                greaterThanOperatorFunction.cppParameters = {{ "const " + structure.name + "&", "lhs" }, { "const " + structure.name + "&", "rhs" }};
                greaterThanOperatorFunction.cppSourceBlock = {R"(
                    return rhs < lhs;
                )"};
                #if 0
                greaterThanOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return rhs < lhs;
                )");
                #endif
                CppFunction greaterThanOrEqualOperatorFunction = greaterThanOperatorFunction;
                greaterThanOrEqualOperatorFunction.cppCompileGuards = { structure.compileGuard };
                greaterThanOrEqualOperatorFunction.cppName = "operator>=";
                greaterThanOrEqualOperatorFunction.cppSourceBlock = {R"(
                    return !(lhs < rhs);
                )"};
                #if 0
                greaterThanOrEqualOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return !(lhs < rhs);
                )");
                #endif
                greaterThanOperatorFunctions.push_back(greaterThanOperatorFunction);
                greaterThanOperatorFunctions.push_back(greaterThanOrEqualOperatorFunction);
            }
        }
        headerFile << greaterThanOperatorFunctions.generate_declaration();
        sourceFile << greaterThanOperatorFunctions.generate_definition();
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
