
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

namespace dst {
namespace vk {
namespace cppgen {

inline void generate_managed_control_block_declarations(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "managed.control-blocks.hpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #pragma once

    #include "dynamic_static/graphics/vulkan/detail/managed.hpp"
    #include "dynamic_static/graphics/vulkan/defines.hpp"

    #include <cassert>
    #include <tuple>
    #include <utility>
    #include <vector>

    namespace dst {
    namespace vk {

    $<HANDLES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    class Managed<${HANDLE_TYPE_NAME}>::ControlBlock
    {
    public:
        $<CREATE_FUNCTIONS>
        $<COMPILE_GUARDS>
        #ifdef ${COMPILE_GUARD}
        $</>
        static VkResult ${MANAGED_CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${MANAGED_PARAMETER_TYPE} ${MANAGED_PARAMETER_NAME}$</>);
        $<COMPILE_GUARDS:reverse="true">
        #endif // ${COMPILE_GUARD}
        $</>
        $</>
        ControlBlock(${HANDLE_TYPE_NAME} vkHandle);
        ~ControlBlock();

        template <typename T>
        inline const T& get() const
        {
            return std::get<T>(mFields);
        }

        template <typename T>
        inline void set(T&& field)
        {
            std::get<T>(mFields) = std::move(field);
        }

    private:
        std::tuple<
            VkObjectType,
            $<PARENT_HANDLES>
            Managed<${PARENT_HANDLE_TYPE_NAME}>,
            $</>
            $<CREATE_INFO_STRUCTURES>
            $<COMPILE_GUARDS>
            #ifdef ${COMPILE_GUARD}
            $</>
            Managed<${STRUCTURE_TYPE_NAME}>,
            $<COMPILE_GUARDS:reverse="true">
            #endif // ${COMPILE_GUARD}
            $</>
            $</>
            $<condition="HAS_ALLOCATOR">
            VkAllocationCallbacks,
            $</>
            $<CUSTOM_FIELDS>
            ${CUSTOM_FIELD},
            $</>
            ${HANDLE_TYPE_NAME}
        > mFields;
    };
    $<COMPILE_GUARDS:reverse="true">
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    } // namespace vk
    } // namespace dst
    )", {
        get_handle_source_blocks(xmlManifest)
    });
}

inline void generate_managed_control_block_definitions(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / "managed.control-blocks.cpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
    #include "dynamic_static/graphics/vulkan/detail/managed.control-blocks.manual.hpp"
    #include "dynamic_static/graphics/vulkan/managed.hpp"

    namespace dst {
    namespace vk {

    $<HANDLES:"\n">
    ${OPEN_MANUALLY_IMPLEMENTED_COMPILE_GUARD}
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    Managed<${HANDLE_TYPE_NAME}>::ControlBlock::ControlBlock(${HANDLE_TYPE_NAME} vkHandle)
    {
        assert(vkHandle);
        set(std::move(vkHandle));
    }

    $<CREATE_FUNCTIONS>
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    VkResult Managed<${HANDLE_TYPE_NAME}>::ControlBlock::${MANAGED_CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${MANAGED_PARAMETER_TYPE} ${MANAGED_PARAMETER_NAME}$</>)
    {
        auto vkResult = VK_ERROR_INITIALIZATION_FAILED;
        if (${MANAGED_HANDLE_PARAMETER_NAME}) {
            ${MANAGED_HANDLE_PARAMETER_NAME}->reset();
            ${HANDLE_TYPE_NAME} vkHandle = VK_NULL_HANDLE;
            vkResult = ${CREATE_FUNCTION_NAME}($<PARAMETERS:", ">${VK_CALL_ARGUMENT}$</>);
            if (vkResult == VK_SUCCESS) {
                ${MANAGED_HANDLE_PARAMETER_NAME}->mVkHandle = vkHandle;
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock = create_control_block(vkHandle);
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock->set(${HANDLE_OBJECT_TYPE});
                $<PARAMETERS>
                $<condition="PARENT_PARAMETER">
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock->set(std::move(Managed<${MANAGED_PARAMETER_UNQUALIFIED_TYPE}>(${MANAGED_PARAMETER_NAME})));
                $</>
                $<condition="CREATE_INFO_PARAMETER">
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock->set(std::move(Managed<${MANAGED_PARAMETER_UNQUALIFIED_TYPE}>(*${MANAGED_PARAMETER_NAME})));
                $</>
                $</>
                $<condition="HAS_ALLOCATOR">
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock->set(std::move(pAllocator ? *pAllocator : VkAllocationCallbacks { }));
                $</>
                ${MANAGED_HANDLE_PARAMETER_NAME}->mspControlBlock->set(std::move(vkHandle));
                detail::on_managed_handle_created(*${MANAGED_HANDLE_PARAMETER_NAME});
            }
        }
        return vkResult;
    }
    $<COMPILE_GUARDS:reverse="true">
    #endif // ${COMPILE_GUARD}
    $</>
    $</"\n">
    Managed<${HANDLE_TYPE_NAME}>::ControlBlock::~ControlBlock()
    {
        assert(get<${HANDLE_TYPE_NAME}>());
        unregister_control_block(get<${HANDLE_TYPE_NAME}>());
        if (get<VkObjectType>() != VK_OBJECT_TYPE_MAX_ENUM) {
            $<DESTROY_FUNCTIONS>
            $<PARENT_PARAMETERS>
            auto vk${STRIP_VK_PARENT_HANDLE_PARAMETER_TYPE_NAME} = *get<Managed<${PARENT_HANDLE_PARAMETER_TYPE_NAME}>>();
            assert(vk${STRIP_VK_PARENT_HANDLE_PARAMETER_TYPE_NAME});
            $</>
            ${VK_DESTROY_FUNCTION_NAME}($<PARENT_PARAMETERS:", ">vk${STRIP_VK_PARENT_HANDLE_PARAMETER_TYPE_NAME}$</", ">get<${HANDLE_TYPE_NAME}>(), get<VkAllocationCallbacks>().pfnFree ? &get<VkAllocationCallbacks>() : nullptr);
            $</>
        }
    }
    $<COMPILE_GUARDS:reverse="true">
    #endif // ${COMPILE_GUARD}
    $</>
    ${CLOSE_MANUALLY_IMPLEMENTED_COMPILE_GUARD}
    $</>

    } // namespace vk
    } // namespace dst
    )", {
        get_handle_source_blocks(xmlManifest)
    });
}

inline void generate_managed_handles(xml::Manifest xmlManifest)
{
    auto addParents =
    [&xmlManifest](const std::string& handleTypeName, const std::vector<std::string>& parentTypeNames)
    {
        auto handleItr = xmlManifest.handles.find(handleTypeName);
        if (handleItr != xmlManifest.handles.end()) {
            for (const auto& parentTypeName : parentTypeNames) {
                handleItr->second.parents.insert(parentTypeName);
            }
        }
    };
    addParents("VkDisplayModeKHR", { "VkPhysicalDevice" });
    #if 1
    // TODO : These should be exposed but they're failing to link
    xmlManifest.handles.erase("VkAccelerationStructureKHR");
    xmlManifest.handles.erase("VkDebugReportCallbackEXT");
    xmlManifest.handles.erase("VkDebugUtilsMessengerEXT");
    xmlManifest.handles.erase("VkDeferredOperationKHR");
    xmlManifest.handles.erase("VkIndirectCommandsLayoutNV");
    xmlManifest.handles.erase("VkPrivateDataSlotEXT");
    xmlManifest.handles.erase("VkRayTracingPipelinesKHR");
    xmlManifest.handles.erase("VkRayTracingPipelinesNV");
    xmlManifest.handles.erase("VkValidationCacheEXT");
    xmlManifest.functions.erase("vkCreateHeadlessSurfaceEXT");
    xmlManifest.functions.erase("vkCreateRayTracingPipelinesKHR");
    xmlManifest.functions.erase("vkCreateRayTracingPipelinesNV");
    #endif
    generate_managed_control_block_declarations(xmlManifest);
    generate_managed_control_block_definitions(xmlManifest);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
