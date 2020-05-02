
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
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "greater-than-operators.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/greater-than-operators.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp" };
        sourceFile << std::endl;
        CppFunction::Collection greaterThanOperatorFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppParameter lhsParameter;
                lhsParameter.type = "const " + structure.name + "&";
                lhsParameter.name = "lhs";
                CppParameter rhsParameter;
                rhsParameter.type = "const " + structure.name + "&";
                rhsParameter.name = "rhs";
                CppFunction greaterThanOperatorFunction;
                greaterThanOperatorFunction.cppCompileGuards = { structure.compileGuard };
                greaterThanOperatorFunction.cppReturn = "bool";
                greaterThanOperatorFunction.name = "operator>";
                greaterThanOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                greaterThanOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return rhs < lhs;
                )");
                CppFunction greaterThanOrEqualOperatorFunction;
                greaterThanOrEqualOperatorFunction.cppCompileGuards = { structure.compileGuard };
                greaterThanOrEqualOperatorFunction.cppReturn = "bool";
                greaterThanOrEqualOperatorFunction.name = "operator>=";
                greaterThanOrEqualOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                greaterThanOrEqualOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return !(lhs < rhs);
                )");
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
