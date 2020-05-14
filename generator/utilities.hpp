
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

#include <set>

namespace dst {
namespace vk {
namespace cppgen {

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
                        cppCase.name = vkStructureTypeEnumerator.name;
                        generateCase(vkStructureItr->second, cppCase);
                        cppSwitch.cppCases.push_back(cppCase);
                    }
                }
            }
        }
    }
    return cppSwitch;
}

} // namespace cppgen
} // namespace vk
} // namespace dst
