
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
class LessThanOperatorsGenerator final
{
public:
    /**
    TODO : Documentation
    */
    inline LessThanOperatorsGenerator(const xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "less-than-operators.hpp");
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "less-than-operators.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/structure-to-tuple.hpp" };
        sourceFile << std::endl;
        CppFunction::Collection lessThanOperatorFunctions;
        for (const auto& structureitr : vkXmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppParameter lhsParameter;
                lhsParameter.type = "const " + structure.name + "&";
                lhsParameter.name = "lhs";
                CppParameter rhsParameter;
                rhsParameter.type = "const " + structure.name + "&";
                rhsParameter.name = "rhs";
                CppFunction lessThanOperatorFunction;
                lessThanOperatorFunction.cppCompileGuards = { structure.compileGuard };
                lessThanOperatorFunction.cppReturn = "bool";
                lessThanOperatorFunction.name = "operator<";
                lessThanOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                lessThanOperatorFunction.cppSourceBlock.add_snippet(R"(
                    using namespace dst::gfx::vk::detail;
                    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
                )");
                CppFunction lessThanOrEqualOperatorFunction;
                lessThanOrEqualOperatorFunction.cppCompileGuards = { structure.compileGuard };
                lessThanOrEqualOperatorFunction.cppReturn = "bool";
                lessThanOrEqualOperatorFunction.name = "operator<=";
                lessThanOrEqualOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                lessThanOrEqualOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return !(rhs < lhs);
                )");
                lessThanOperatorFunctions.push_back(lessThanOperatorFunction);
                lessThanOperatorFunctions.push_back(lessThanOrEqualOperatorFunction);
            }
        }
        headerFile << lessThanOperatorFunctions.generate_declaration();
        sourceFile << lessThanOperatorFunctions.generate_definition() << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
        sourceFile << generate_pnext_equality_operator_functions(vkXmlManifest).generate_definition();
        sourceFile << CppNamespace("dst::gfx::vk::detail").close();
    }

private:
    inline dst::cppgen::CppFunction::Collection generate_pnext_equality_operator_functions(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction::Collection lessThanOperatorFunctions;
        CppParameter lhsParameter;
        lhsParameter.type = "const PNextTupleElementWrapper&";
        lhsParameter.name = "lhs";
        CppParameter rhsParameter;
        rhsParameter.type = "const PNextTupleElementWrapper&";
        rhsParameter.name = "rhs";
        CppFunction lessThanOperatorFunction;
        lessThanOperatorFunction.cppReturn = "bool";
        lessThanOperatorFunction.name = "operator<";
        lessThanOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
        lessThanOperatorFunction.cppSourceBlock.add_snippet(R"(
            if (lhs.pNext == rhs.pNext) {
                return false;
            }
            if (lhs.pNext && !rhs.pNext) {
                return false;
            }
            if (!lhs.pNext && rhs.pNext) {
                return true;
            }
            const auto& lhsBaseInStructure = *(const VkBaseInStructure*)lhs.pNext;
            const auto& rhsBaseInStructure = *(const VkBaseInStructure*)rhs.pNext;
            if (lhsBaseInStructure.sType < rhsBaseInStructure.sType) {
                return true;
            }
            if (lhsBaseInStructure.sType > rhsBaseInStructure.sType) {
                return false;
            }
        )");
#if 0
        CppSwitch vkStructureTypeSwitch;
        vkStructureTypeSwitch.cppCondition = "((const VkBaseInStructure*)lhs.pNext)->sType";
        auto vkStructureTypeEnumerationItr = vkXmlManifest.enumerations.find("VkStructureType");
        if (vkStructureTypeEnumerationItr != vkXmlManifest.enumerations.end()) {
            const auto& vkStructureTypeEnumeration = vkStructureTypeEnumerationItr->second;
            for (const auto& vkStructureTypeEnumerator : vkStructureTypeEnumeration.enumerators) {
                if (vkStructureTypeEnumerator.alias.empty()) {
                    auto vkStructureTypeItr = vkXmlManifest.structureTypes.find(vkStructureTypeEnumerator.name);
                    if (vkStructureTypeItr != vkXmlManifest.structureTypes.end()) {
                        auto vkStructureItr = vkXmlManifest.structures.find(vkStructureTypeItr->second);
                        if (vkStructureItr != vkXmlManifest.structures.end()) {
                            CppSwitch::CppCase vkStructureTypeCase;
                            vkStructureTypeCase.cppCompileGuards = { vkStructureTypeEnumerator.compileGuard };
                            vkStructureTypeCase.name = vkStructureTypeEnumerator.name;
                            vkStructureTypeCase.cppSourceBlock.add_snippet(
                                R"(
                                    return (const ${VK_STRUCTURE_TYPE}&)lhsBaseInStructure < (const ${VK_STRUCTURE_TYPE}&)rhsBaseInStructure;
                                )", {
                                    { "${VK_STRUCTURE_TYPE}", vkStructureItr->first },
                                }
                            );
                            vkStructureTypeSwitch.cppCases.push_back(vkStructureTypeCase);
                        }
                    }
                }
            }
        }
#endif
        lessThanOperatorFunction.cppSourceBlock.add_snippet(
            generate_vk_structure_type_switch(
                vkXmlManifest,
                "lhsBaseInStructure.sType",
                [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase) {
                    cppCase.cppSourceBlock.add_snippet(
                        R"(
                            return (const ${VK_STRUCTURE_TYPE}&)lhsBaseInStructure < (const ${VK_STRUCTURE_TYPE}&)rhsBaseInStructure;
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name },
                        }
                    );
                }
            ).generate_inline_definition()
        );
        lessThanOperatorFunction.cppSourceBlock.add_snippet(R"(
            return false;
        )");
        CppFunction lessThanOrEqualOperatorFunction;
        lessThanOrEqualOperatorFunction.cppReturn = "bool";
        lessThanOrEqualOperatorFunction.name = "operator<=";
        lessThanOrEqualOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
        lessThanOrEqualOperatorFunction.cppSourceBlock.add_snippet(R"(
            return !(rhs < lhs);
        )");
        lessThanOperatorFunctions.push_back(lessThanOperatorFunction);
        lessThanOperatorFunctions.push_back(lessThanOrEqualOperatorFunction);
        return lessThanOperatorFunctions;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
