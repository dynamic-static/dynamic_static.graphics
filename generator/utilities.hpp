
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
inline bool structure_requires_manual_implementation(const std::string& structureName)
{
    static const std::set<std::string> sStructuresRequiringCustomHandling {
        "VkAccelerationStructureVersionKHR",
        //"VkAllocationCallbacks",
        //"VkCheckpointDataNV",
        //"VkDebugMarkerObjectTagInfoEXT",
        //"VkDebugReportCallbackCreateInfoEXT",
        //"VkDebugUtilsMessengerCreateInfoEXT",
        //"VkDebugUtilsObjectTagInfoEXT",
        //"VkImportMemoryHostPointerInfoEXT",
        //"VkInitializePerformanceApiInfoINTEL",
        "VkPipelineMultisampleStateCreateInfo",
        "VkShaderModuleCreateInfo",
        "VkTransformMatrixKHR",
    };
    return sStructuresRequiringCustomHandling.count(structureName);
}

/**
TODO : Documentation
*/
inline std::string manual_implemntation_compile_guard(const std::string& structureName)
{
    return structure_requires_manual_implementation(structureName) ? "DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_MANUAL_IMPLEMENTATION" : std::string();
}

/**
TODO : Documentation
*/
inline bool structure_requires_custom_handling(const dst::cppgen::CppFunction& cppFunction)
{
    static const std::set<std::string> sStructuresRequiringCustomHandling {
        "VkAccelerationStructureVersionKHR",
        //"VkAllocationCallbacks",
        //"VkCheckpointDataNV",
        //"VkDebugMarkerObjectTagInfoEXT",
        //"VkDebugReportCallbackCreateInfoEXT",
        //"VkDebugUtilsMessengerCreateInfoEXT",
        //"VkDebugUtilsObjectTagInfoEXT",
        //"VkImportMemoryHostPointerInfoEXT",
        //"VkInitializePerformanceApiInfoINTEL",
        "VkPipelineMultisampleStateCreateInfo",
        "VkShaderModuleCreateInfo",
        "VkTransformMatrixKHR",
    };
    return sStructuresRequiringCustomHandling.count(string::remove(string::remove(cppFunction.cppParameters[0].type, "const "), "&"));
}

/**
TODO : Documentation
*/
inline std::string strip_vk(const std::string& str)
{
    return string::remove(string::remove(string::remove(str, "VK_"), "Vk"), "vk");
}

} // namespace cppgen
} // namespace vk
} // namespace dst
