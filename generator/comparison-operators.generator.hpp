
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
        using namespace dst::cppgen;
        CppFunction::Collection cppFunctions;
        for (const auto& structureitr : xmlManifest.structures) {
            const auto& structure = structureitr.second;
            if (structure.alias.empty()) {
                static const size_t Equality = 0;
                static const size_t Inequality = 1;
                static const size_t LessThan = 2;
                static const size_t GreaterThan = 3;
                static const size_t LessThanOrEqual = 4;
                static const size_t GreaterThanOrEqual = 5;
                std::array<CppFunction, 6> comparisonOperatorFunctions;
                for (auto& comparisonOperatorFunction : comparisonOperatorFunctions) {
                    comparisonOperatorFunction.cppCompileGuards = { structure.compileGuard };
                    comparisonOperatorFunction.cppReturn = "bool";
                    CppParameter lhsParameter;
                    lhsParameter.type = "const " + structure.name + "&";
                    lhsParameter.name = "lhs";
                    CppParameter rhsParameter;
                    rhsParameter.type = "const " + structure.name + "&";
                    rhsParameter.name = "rhs";
                    comparisonOperatorFunction.cppParameters = { lhsParameter, rhsParameter };
                }
                //comparisonOperatorFunctions[Equality].cppCompileGuards.insert(manual_implemntation_compile_guard(structure.name));
                comparisonOperatorFunctions[Equality].name = "operator==";
                comparisonOperatorFunctions[Equality].cppSourceBlock.add_snippet(R"(
                    return structure_to_tuple(lhs) == structure_to_tuple(rhs);
                )");
                comparisonOperatorFunctions[Inequality].name = "operator!=";
                comparisonOperatorFunctions[Inequality].cppSourceBlock.add_snippet(R"(
                    return !(lhs == rhs);
                )");
                //comparisonOperatorFunctions[LessThan].cppCompileGuards.insert(manual_implemntation_compile_guard(structure.name));
                comparisonOperatorFunctions[LessThan].name = "operator<";
                comparisonOperatorFunctions[LessThan].cppSourceBlock.add_snippet(R"(
                    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
                )");
                comparisonOperatorFunctions[GreaterThan].name = "operator>";
                comparisonOperatorFunctions[GreaterThan].cppSourceBlock.add_snippet(R"(
                    return rhs < lhs;
                )");
                comparisonOperatorFunctions[LessThanOrEqual].name = "operator<=";
                comparisonOperatorFunctions[LessThanOrEqual].cppSourceBlock.add_snippet(R"(
                    return !(rhs < lhs);
                )");
                comparisonOperatorFunctions[GreaterThanOrEqual].name = "operator>=";
                comparisonOperatorFunctions[GreaterThanOrEqual].cppSourceBlock.add_snippet(R"(
                    return !(lhs < rhs);
                )");
                cppFunctions.insert(cppFunctions.end(), comparisonOperatorFunctions.begin(), comparisonOperatorFunctions.end());
            }
        }

        CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "comparison-operators.hpp");
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp" };
        headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
        headerFile << std::endl;
        headerFile << CppNamespace("dst::gfx::vk::detail").open();
        headerFile << cppFunctions.generate_declaration();
        headerFile << CppNamespace("dst::gfx::vk::detail").close();

        CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "comparison-operators.cpp");
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/comparison-operators.hpp" };
        sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/structure-to-tuple.hpp" };
        sourceFile << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").open();
        sourceFile << cppFunctions.generate_definition() << std::endl;
        sourceFile << CppNamespace("dst::gfx::vk::detail").close();
    }

private:
    inline std::string generate_member_copy_snippet(
        const vk::xml::Manifest& vkXmlManifest,
        const vk::xml::Parameter& vkXmlStructureMember
    )
    {
        if (vkXmlStructureMember.name == "pNext") {
            return "result.pNext = (${MEMBER_TYPE})create_pnext_copy(obj.pNext, pAllocationCallbacks);";
        } else
        if (vkXmlStructureMember.flags & xml::Parameter::Array) {
            if (vkXmlStructureMember.flags & xml::Parameter::StringArray) {
                return "result.${MEMBER_NAME} = create_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocationCallbacks);";
            } else 
            if (vkXmlStructureMember.flags & xml::Parameter::StaticArray) {
                if (vkXmlStructureMember.flags & xml::Parameter::String) {
                    return "create_static_string_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
                } else {
                    return "create_static_array_copy<${MEMBER_LENGTH}>(result.${MEMBER_NAME}, obj.${MEMBER_NAME});";
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
            if (vkXmlStructureMember.flags & xml::Parameter::FunctionPointer | xml::Parameter::VoidPointer) {
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

    inline dst::cppgen::CppFunction create_pnext_handler_function(const vk::xml::Manifest& vkXmlManifest)
    {
        using namespace dst::cppgen;
        CppFunction createPNextCopyFunction;
        createPNextCopyFunction.cppReturn = "void*";
        createPNextCopyFunction.name = "create_pnext_copy";
        CppParameter pNextParameter;
        pNextParameter.type = "const void*";
        pNextParameter.name = "pNext";
        CppParameter pAllocationCallbacksParameter;
        pAllocationCallbacksParameter.type = "const VkAllocationCallbacks*";
        pAllocationCallbacksParameter.name = "pAllocationCallbacks";
        createPNextCopyFunction.cppParameters = {
            pNextParameter,
            pAllocationCallbacksParameter,
        };
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            if (pNext) {
        )");
        CppSwitch vkStructureTypeSwitch;
        vkStructureTypeSwitch.cppCondition = "*(VkStructureType*)pNext";
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
                                    return create_dynamic_array_copy(1, (const ${VK_STRUCTURE_TYPE}*)pNext, pAllocationCallbacks);
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
        createPNextCopyFunction.cppSourceBlock.add_snippet(Tab { 1 }, vkStructureTypeSwitch.generate_inline_definition());
        createPNextCopyFunction.cppSourceBlock.add_snippet(R"(
            };
            return nullptr;
        )");
        return createPNextCopyFunction;
    }
};

} // namespace cppgen
} // namespace vk
} // namespace dst
