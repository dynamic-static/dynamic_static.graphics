
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
class EquailtyOperatorsGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline EquailtyOperatorsGenerator(const xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "equality-operators.hpp");
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "equality-operators.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/equality-operators.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp" };
        sourceFile << std::endl;
        CppFunction::Collection equalityOperatorFunctions;
        for (const auto& structureitr : vkXmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppParameter lhsParameter;
                lhsParameter.type = "const " + structure.name + "&";
                lhsParameter.name = "lhs";
                CppParameter rhsParameter;
                rhsParameter.type = "const " + structure.name + "&";
                rhsParameter.name = "rhs";
                CppFunction equalityOperatorFunction;
                equalityOperatorFunction.cppCompileGuards = { structure.compileGuard };
                equalityOperatorFunction.cppReturn = "bool";
                equalityOperatorFunction.name = "operator==";
                equalityOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                equalityOperatorFunction.cppSourceBlock.add_snippet(R"(
                    using namespace dst::gfx::vk::detail;
                    return structure_to_tuple(lhs) == structure_to_tuple(rhs);
                )");
                CppFunction inequalityOperatorFunction;
                inequalityOperatorFunction.cppCompileGuards = { structure.compileGuard };
                inequalityOperatorFunction.cppReturn = "bool";
                inequalityOperatorFunction.name = "operator!=";
                inequalityOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                inequalityOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return !(lhs == rhs);
                )");
                equalityOperatorFunctions.push_back(equalityOperatorFunction);
                equalityOperatorFunctions.push_back(inequalityOperatorFunction);
            }
        }
        headerFile << equalityOperatorFunctions.generate_declaration();
        sourceFile << equalityOperatorFunctions.generate_definition() << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
        sourceFile << generate_pnext_equality_operator_functions(vkXmlManifest).generate_definition();
        sourceFile << CppNamespace("dst::gfx::vk::detail").close();
    }

private:
    inline dst::cppgen::CppFunction::Collection generate_pnext_equality_operator_functions(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction::Collection equalityOperatorFunctions;
        CppParameter lhsParameter;
        lhsParameter.type = "const PNextTupleElementWrapper&";
        lhsParameter.name = "lhs";
        CppParameter rhsParameter;
        rhsParameter.type = "const PNextTupleElementWrapper&";
        rhsParameter.name = "rhs";
        CppFunction equalityOperatorFunction;
        equalityOperatorFunction.cppReturn = "bool";
        equalityOperatorFunction.name = "operator==";
        equalityOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
        equalityOperatorFunction.cppSourceBlock.add_snippet(R"(
            if (lhs.pNext == rhs.pNext) {
                return true;
            }
            if ((lhs.pNext && !rhs.pNext) || (!lhs.pNext && rhs.pNext)) {
                return false;
            }
            if (((const VkBaseInStructure*)lhs.pNext)->sType != ((const VkBaseInStructure*)rhs.pNext)->sType) {
                return false;
            }
        )");
        equalityOperatorFunction.cppSourceBlock.add_snippet(
            generate_vk_structure_type_switch(
                vkXmlManifest,
                "*(VkStructureType*)lhs.pNext",
                [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase) {
                    cppCase.cppSourceBlock.add_snippet(
                        R"(
                            return (const ${VK_STRUCTURE_TYPE}*)lhs.pNext == (const ${VK_STRUCTURE_TYPE}*)rhs.pNext;
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name },
                        }
                    );
                }
            ).generate_inline_definition()
        );
        equalityOperatorFunction.cppSourceBlock.add_snippet(R"(
            return false;
        )");
        CppFunction inequalityOperatorFunction;
        inequalityOperatorFunction.cppReturn = "bool";
        inequalityOperatorFunction.name = "operator!=";
        inequalityOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
        inequalityOperatorFunction.cppSourceBlock.add_snippet(R"(
            return !(lhs == rhs);
        )");
        equalityOperatorFunctions.push_back(equalityOperatorFunction);
        equalityOperatorFunctions.push_back(inequalityOperatorFunction);
        return equalityOperatorFunctions;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
