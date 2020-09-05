
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
        headerFile << R"(#include "dynamic_static/graphics/vulkan/defines.hpp")" << std::endl;
        headerFile << std::endl;
        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "less-than-operators.cpp");
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp")" << std::endl;
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp")" << std::endl;
        sourceFile << R"(#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp")" << std::endl;
        sourceFile << std::endl;
        CppFunction::Collection lessThanOperatorFunctions;
        for (const auto& structureitr : vkXmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                CppFunction lessThanOperatorFunction;
                lessThanOperatorFunction.cppCompileGuards = { structure.compileGuard };
                lessThanOperatorFunction.cppReturnType = "bool";
                lessThanOperatorFunction.cppName = "operator<";
                lessThanOperatorFunction.cppParameters = {{ "const " + structure.name + "&", "lhs" }, { "const " + structure.name + "&", "rhs" }};
                lessThanOperatorFunction.cppSourceBlock = {R"(
                    using namespace dst::gfx::vk::detail;
                    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
                )"};
                #if 0
                lessThanOperatorFunction.cppSourceBlock.add_snippet(R"(
                    using namespace dst::gfx::vk::detail;
                    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
                )");
                #endif
                CppFunction lessThanOrEqualOperatorFunction = lessThanOperatorFunction;
                lessThanOrEqualOperatorFunction.cppName = "operator<=";
                lessThanOrEqualOperatorFunction.cppSourceBlock = {R"(
                    return !(rhs < lhs);
                )"};
                #if 0
                lessThanOrEqualOperatorFunction.cppSourceBlock.add_snippet(R"(
                    return !(rhs < lhs);
                )");
                #endif
                lessThanOperatorFunctions.push_back(lessThanOperatorFunction);
                lessThanOperatorFunctions.push_back(lessThanOrEqualOperatorFunction);
            }
        }
        headerFile << lessThanOperatorFunctions.generate_declaration();
        sourceFile << lessThanOperatorFunctions.generate_definition() << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
        sourceFile << generate_pnext_less_than_operator_function(vkXmlManifest).generate_definition();
        sourceFile << CppNamespace("dst::gfx::vk::detail").close();
    }

private:
    inline dst::cppgen::CppFunction generate_pnext_less_than_operator_function(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction lessThanOperatorFunction;
        lessThanOperatorFunction.cppReturnType = "bool";
        lessThanOperatorFunction.cppName = "operator<";
        lessThanOperatorFunction.cppParameters = {{ "const PNextTupleElementWrapper&", "lhs" }, { "const PNextTupleElementWrapper&", "rhs" }};
        lessThanOperatorFunction.cppSourceBlock = {R"(
            if (lhs.pNext == rhs.pNext) {
                return false;
            }
            if (lhs.pNext && !rhs.pNext) {
                return false;
            }
            if (!lhs.pNext && rhs.pNext) {
                return true;
            }
            if (*(VkStructureType*)lhs.pNext < *(VkStructureType*)rhs.pNext) {
                return true;
            }
            if (*(VkStructureType*)lhs.pNext > *(VkStructureType*)rhs.pNext) {
                return false;
            }
            ${VK_STRUCTURE_TYPE_SWITCH}
            return false;
        )", {
            {
                "${VK_STRUCTURE_TYPE_SWITCH}",
                generate_vk_structure_type_switch(
                    vkXmlManifest,
                    "*(VkStructureType*)pNext",
                    [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase)
                    {
                        cppCase.cppSourceBlock = {R"(
                            return *(const ${VK_STRUCTURE_TYPE}*)lhs.pNext < *(const ${VK_STRUCTURE_TYPE}*)rhs.pNext;
                        )", {
                            { "${VK_STRUCTURE_TYPE}", vkXmlStructure.name }
                        }};
                    }
                ).generate_inline_definition()
            }
        }};
        #if 0
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
            if (*(VkStructureType*)lhs.pNext < *(VkStructureType*)rhs.pNext) {
                return true;
            }
            if (*(VkStructureType*)lhs.pNext > *(VkStructureType*)rhs.pNext) {
                return false;
            }
        )");
        lessThanOperatorFunction.cppSourceBlock.add_snippet(
            generate_vk_structure_type_switch(
                vkXmlManifest,
                "*(VkStructureType*)lhs.pNext",
                [](const vk::xml::Structure& vkXmlStructure, CppSwitch::CppCase& cppCase) {
                    cppCase.cppSourceBlock.add_snippet(
                        R"(
                            return *(const ${VK_STRUCTURE_TYPE}*)lhs.pNext < *(const ${VK_STRUCTURE_TYPE}*)rhs.pNext;
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
        #endif
        return lessThanOperatorFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
