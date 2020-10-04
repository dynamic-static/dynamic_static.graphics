
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/string.hpp"
#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"

#include <set>

namespace dst {
namespace vk {
namespace cppgen {

inline const std::set<std::string>& get_manually_implemented_structures()
{
    static const std::set<std::string> sManuallyImplementedStructures {
        "VkAccelerationStructureInstanceKHR",
        "VkAccelerationStructureVersionKHR",
        "VkClearColorValue",
        "VkClearValue",
        "VkPerformanceCounterResultKHR",
        "VkPerformanceValueDataINTEL",
        "VkPipelineExecutableStatisticValueKHR",
        "VkPipelineMultisampleStateCreateInfo",
        "VkShaderModuleCreateInfo",
        "VkTransformMatrixKHR",
    };
    return sManuallyImplementedStructures;
}

inline bool is_manually_implemented(const xml::Structure& structure)
{
    return get_manually_implemented_structures().count(structure.name);
}

/**
TODO : Documentation
*/
inline std::vector<std::string> get_structure_compile_guards(const xml::Structure& structure)
{
    std::vector<std::string> compileGuards;
    if (!structure.compileGuard.empty()) {
        compileGuards.push_back(structure.compileGuard);
    }
    return compileGuards;
}

/**
TODO : Documentation
*/
inline dst::cppgen::Condition get_variable_type_condition(const xml::Manifest& xmlManifest, const xml::Parameter& variable)
{
    if (variable.name == "pNext") {
        return { "PNEXT", true };
    } else
    if (variable.flags & xml::Parameter::Array) {
        if (variable.flags & xml::Parameter::StringArray) {
            return { "DYNAMIC_STRING_ARRAY", true };
        } else 
        if (variable.flags & xml::Parameter::StaticArray) {
            if (variable.flags & xml::Parameter::String) {
                return { "STATIC_STRING", true };
            } else {
                return { "STATIC_ARRAY", true };
            }
        }
        if (variable.flags & xml::Parameter::DynamicArray) {
            if (variable.flags & xml::Parameter::String) {
                return { "DYNAMIC_STRING", true };
            } else {
                return { "DYNAMIC_ARRAY", true };
            }
        }
    } else
    if (variable.flags & xml::Parameter::Pointer && xmlManifest.structures.count(variable.unqualifiedType)) {
        return { "STRUCTURE_POINTER", true };
    } else
    if (xmlManifest.structures.count(variable.unqualifiedType)) {
        return { "STRUCTURE", true };
    }
    return { "POD", true };
}

/**
TODO : Documentation
*/
inline bool vk_handle_requires_manual_implementation(const std::string& structureName)
{
    static const std::set<std::string> sHandlesRequiringManualImplementation {
        "VkCommandBuffer",
        "VkDeferredOperationKHR",
        "VkDescriptorSet",
        "VkInstance",
    };
    return sHandlesRequiringManualImplementation.count(structureName);
}

/**
TODO : Documentation
*/
inline bool vk_structure_requires_manual_implementation(const std::string& structureName)
{
    static const std::set<std::string> sStructuresRequiringManualImplementation {
        // Structures with bitfields
        "VkAccelerationStructureInstanceKHR",
        "VkAccelerationStructureVersionKHR",
        //"VkAllocationCallbacks",
        //"VkCheckpointDataNV",
        
        //"VkDebugMarkerObjectTagInfoEXT",
        //"VkDebugReportCallbackCreateInfoEXT",
        //"VkDebugUtilsMessengerCreateInfoEXT",
        //"VkDebugUtilsObjectTagInfoEXT",
        //"VkImportMemoryHostPointerInfoEXT",
        //"VkInitializePerformanceApiInfoINTEL",
        
        // Structures with members with special case length
        "VkPipelineMultisampleStateCreateInfo",
        "VkShaderModuleCreateInfo",
        "VkTransformMatrixKHR",
        // Unions
        "VkClearColorValue",
        "VkClearValue",
        "VkPerformanceCounterResultKHR",
        "VkPerformanceValueDataINTEL",
        "VkPipelineExecutableStatisticValueKHR",
    };
    return sStructuresRequiringManualImplementation.count(structureName);
}

/**
TODO : Documentation
*/
inline std::string vk_structure_manual_implemntation_compile_guard(const std::string& structureName)
{
    return vk_structure_requires_manual_implementation(structureName) ? "DST_GFX_VK_STRUCTURE_MANUAL_IMPLEMENTATION" : std::string();
}

/**
TODO : Documentation
*/
inline std::string strip_vk(const std::string& str)
{
    return string::remove(string::remove(string::remove(str, "VK_"), "Vk"), "vk");
}

#if 0
/**
TODO : Documentation
*/
template <typename GenerateCaseFunctionType>
inline dst::cppgen::CppSwitch generate_vk_structure_type_switch(
    const vk::xml::Manifest& vkXmlManifest,
    const std::string& condition,
    GenerateCaseFunctionType generateCase
)
{
    using namespace dst::cppgen;
    CppSwitch cppSwitch;
    cppSwitch.cppCondition = condition;
    auto vkStructureTypeEnumerationItr = vkXmlManifest.enumerations.find("VkStructureType");
    if (vkStructureTypeEnumerationItr != vkXmlManifest.enumerations.end()) {
        const auto& vkStructureTypeEnumeration = vkStructureTypeEnumerationItr->second;
        for (const auto& vkStructureTypeEnumerator : vkStructureTypeEnumeration.enumerators) {
            if (vkStructureTypeEnumerator.alias.empty()) {
                auto vkStructureTypeItr = vkXmlManifest.structureTypes.find(vkStructureTypeEnumerator.name);
                if (vkStructureTypeItr != vkXmlManifest.structureTypes.end()) {
                    auto vkStructureItr = vkXmlManifest.structures.find(vkStructureTypeItr->second);
                    if (vkStructureItr != vkXmlManifest.structures.end()) {
                        CppSwitch::CppCase cppCase;
                        cppCase.cppCompileGuards = { vkStructureTypeEnumerator.compileGuard };
                        cppCase.cppName = vkStructureTypeEnumerator.name;
                        generateCase(vkStructureItr->second, cppCase);
                        cppSwitch.cppCases.push_back(cppCase);
                    }
                }
            }
        }
    }
    return cppSwitch;
}
#endif

/**
TODO : Documentation
*/
template <typename GenerateCaseFunctionType>
inline std::string generate_vk_structure_type_switch(
    const vk::xml::Manifest& vkXmlManifest,
    const std::string& condition,
    GenerateCaseFunctionType generateCase
)
{
    using namespace dst::cppgen;
    CppSwitch cppSwitch;
    cppSwitch.cppCondition = condition;
    auto structureTypeEnumerationItr = vkXmlManifest.enumerations.find("VkStructureType");
    if (structureTypeEnumerationItr != vkXmlManifest.enumerations.end()) {
        const auto& vkStructureTypeEnumeration = structureTypeEnumerationItr->second;
        for (const auto& structureTypeEnumerator : vkStructureTypeEnumeration.enumerators) {
            if (structureTypeEnumerator.alias.empty()) {
                auto structureTypeItr = vkXmlManifest.structureTypes.find(structureTypeEnumerator.name);
                if (structureTypeItr != vkXmlManifest.structureTypes.end()) {
                    auto structureItr = vkXmlManifest.structures.find(structureTypeItr->second);
                    if (structureItr != vkXmlManifest.structures.end()) {
                        cppSwitch.cppCases.emplace_back(
                            CppCompileGuard { structureTypeEnumerator.compileGuard },
                            structureTypeEnumerator.name,
                            generateCase(structureItr->second),
                            Break
                        );
                        #if 0
                        CppCase cppCase;
                        cppCase.cppCompileGuards = { vkStructureTypeEnumerator.compileGuard };
                        cppCase.cppLabel = vkStructureTypeEnumerator.name;
                        cppCase.cppSourceBlock = generateCase(vkStructureItr->second);
                        cppSwitch.cppCases.push_back(cppCase);
                        #endif
                    }
                }
            }
        }
    }
    return to_string(cppSwitch, 0);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
