
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
class ComparisonOperatorsGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline ComparisonOperatorsGenerator(const xml::Manifest& xmlManifest)
    {
        generate_comparison_operators(xmlManifest, "equality", "==");
        generate_comparison_operators(xmlManifest, "inequality", "!=");
        generate_comparison_operators(xmlManifest, "less-than", "<");
        generate_comparison_operators(xmlManifest, "greater-than", ">");
        generate_comparison_operators(xmlManifest, "less-than-or-equal", "<=");
        generate_comparison_operators(xmlManifest, "greater-than-or-equal", ">=");
    }

private:
    void generate_comparison_operators(const xml::Manifest& xmlManifest, const std::string& fileName, const std::string& comparisonOperator)
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
        CppFunction::Collection createStructureCopyFunctions;
        for (auto structureItr : xmlManifest.structures) {
            const auto& structure = structureItr.second;
            if (structure.alias.empty()) {
                auto argumentType = "const " + structure.name + "&";
                createStructureCopyFunctions.emplace_back(
                    CppCompileGuard { structure.compileGuard },
                    "bool", "operator" + comparisonOperator, CppParameters {{ argumentType, "lhs" }, { argumentType, "rhs" }},
                    CppSourceBlock { "return to_tuple(lhs) " + comparisonOperator + " to_tuple(rhs);" }
                );
            }
        }

        std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
        std::ofstream headerFile(includePath / (fileName + "-operators.hpp"));
        headerFile << copyrightHeader;
        headerFile << "#pragma once" << '\n';
        headerFile << '\n';
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << '\n';
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Open);
        headerFile << '\n';
        createStructureCopyFunctions.generate(headerFile, Declaration);
        headerFile << '\n';
        cppNamespaces.generate(headerFile, Close);

        std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
        std::ofstream sourceFile(sourcePath / (fileName + "-operators.cpp"));
        sourceFile << copyrightHeader;
        sourceFile << std::string("#include \"dynamic_static/graphics/vulkan/generated/") + fileName + "-operators.hpp\"" << '\n';
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp")" << '\n';
        sourceFile << '\n';
        cppNamespaces.generate(sourceFile, Open);
        sourceFile << '\n';
        sourceFile << '\n';
        createStructureCopyFunctions.generate(sourceFile, Definition);
        sourceFile << '\n';
        cppNamespaces.generate(sourceFile, Close);
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
