
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/string.hpp"
#include "dynamic_static/core/vector.hpp"
#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

namespace dst {
namespace vk {
namespace cppgen {

/**
TODO : Documentation
*/
inline std::string get_managed_handle_shared_ptr_declaration(const std::string& vkHandleName)
{
    return "std::shared_ptr<Managed<" + vkHandleName + ">>";
}

inline dst::cppgen::CppFunction::Collection generate_managed_handle_constructors(
    const xml::Manifest& xmlManifest,
    const xml::Handle& handle
)
{
    using namespace dst::cppgen;
    CppFunction::Collection cppConstructors;
    CppFunction cppDefaultConstructor;
    cppDefaultConstructor.cppReturn = std::string();
    cppDefaultConstructor.name = "Managed" + strip_vk(handle.name);
    cppDefaultConstructor.flags = CppFunction::Default;
    cppConstructors.push_back(cppDefaultConstructor);
    for (const auto& vkCreateFunctionName : handle.createFunctions) {
        auto vkCreateFunctionItr = xmlManifest.functions.find(vkCreateFunctionName);
        assert(vkCreateFunctionItr != xmlManifest.functions.end());
        const auto& vkCreateFunction = vkCreateFunctionItr->second;
        CppFunction cppConstructor;
        cppConstructor.cppCompileGuards = { vkCreateFunction.compileGuard };
        cppConstructor.cppReturn = std::string();
        cppConstructor.name = "Managed" + strip_vk(handle.name);
        std::string parentHandleMember;
        std::string parentHandleArgument;
        std::string createInfoMember;
        std::string createFunctionParameters;
        for (const auto& vkCreateFunctionParameter : vkCreateFunction.parameters) {
            if (vkCreateFunctionParameter.unqualifiedType != handle.name) {
                CppParameter cppConstructorParameter;
                if (handle.parents.count(vkCreateFunctionParameter.type)) {
                    auto managedHandleSharedPtrDeclaration = get_managed_handle_shared_ptr_declaration(vkCreateFunctionParameter.type);
                    cppConstructorParameter.type = "const " + managedHandleSharedPtrDeclaration + "&";
                    parentHandleMember = "m" + strip_vk(vkCreateFunctionParameter.type);
                    parentHandleArgument = vkCreateFunctionParameter.name;
                    createFunctionParameters += "*" + vkCreateFunctionParameter.name + ", ";
                } else {
                    cppConstructorParameter.type = vkCreateFunctionParameter.type;
                    createFunctionParameters += vkCreateFunctionParameter.name + ", ";
                }
                if (handle.createInfos.count(vkCreateFunctionParameter.unqualifiedType)) {
                    createInfoMember = "m" + strip_vk(vkCreateFunctionParameter.unqualifiedType);
                }
                cppConstructorParameter.name = vkCreateFunctionParameter.name;
                cppConstructor.cppParameters.push_back(cppConstructorParameter);
            }
        }
        cppConstructor.cppSourceBlock.add_snippet(R"(
            reset();
            if (${PARENT_HANDLE_ARGUMENT} && pCreateInfo) {
                mResult = dst_vk(${VK_CREATE_FUNCTION}(${VK_CREATE_FUNCTION_PARAMETERS}&mHandle));
                if (mResult == VK_SUCCESS) {
                    ${PARENT_HANDLE_MEMBER} = ${PARENT_HANDLE_ARGUMENT};
                    ${VK_CREATE_INFO_MEMBER} = *pCreateInfo;
                    if (pAllocator) {
                        assert(pAllocator->pfnAllocation);
                        assert(pAllocator->pfnReallocation);
                        assert(pAllocator->pfnFree);
                        assert(pAllocator->pfnInternalAllocation);
                        assert(pAllocator->pfnInternalFree);
                        mAllocationCallbacks = *pAllocator;
                    }
                }
            } else {
                mResult = VK_ERROR_INITIALIZATION_FAILED;
            }
        )", {
            { "${VK_CREATE_FUNCTION}", vkCreateFunctionName },
            { "${VK_CREATE_FUNCTION_PARAMETERS}", createFunctionParameters },
            { "${PARENT_HANDLE_MEMBER}", parentHandleMember },
            { "${PARENT_HANDLE_ARGUMENT}", parentHandleArgument },
            { "${VK_CREATE_INFO_MEMBER}", createInfoMember },
        });
        cppConstructors.push_back(cppConstructor);
    }
    return cppConstructors;
}

inline dst::cppgen::CppFunction generate_destructor(
    const xml::Manifest& xmlManifest,
    const xml::Handle& handle
)
{
    using namespace dst::cppgen;
    CppFunction cppFunction;
    cppFunction.cppReturn = std::string();
    cppFunction.flags = CppFunction::Virtual | CppFunction::Override;
    cppFunction.name = "~Managed" + strip_vk(handle.name);
    cppFunction.cppSourceBlock.add_snippet(R"(
        reset();
    )");
    return cppFunction;
}

inline dst::cppgen::CppFunction::Collection generate_managed_handle_getters(
    const xml::Manifest& xmlManifest,
    const xml::Handle& handle
)
{
    using namespace dst::cppgen;
    CppFunction::Collection cppGetters;
    CppFunction cppObjectTypeGetter;
    cppObjectTypeGetter.flags = CppFunction::Const | CppFunction::Override | CppFunction::Final;
    cppObjectTypeGetter.cppReturn = "VkObjectType";
    cppObjectTypeGetter.name = "get_object_type";
    cppObjectTypeGetter.cppSourceBlock.add_snippet(R"(
        return ${VK_OBJECT_TYPE}; // TODO : Parse VkObjectType from xml..
    )", {
        { "${VK_OBJECT_TYPE}", "VK_OBJECT_TYPE_UNKNOWN" },
    });
    cppGetters.push_back(cppObjectTypeGetter);
    for (const auto& parentName : handle.parents) {
        CppFunction cppGetter;
        auto managedHandleSharedPtrDeclaration = get_managed_handle_shared_ptr_declaration(parentName);
        cppGetter.flags = CppFunction::Const;
        cppGetter.cppReturn = "const " + managedHandleSharedPtrDeclaration + "&";
        cppGetter.name = "get";
        for (const auto& token : string::split_camel_case(strip_vk(parentName))) {
            cppGetter.name += "_" + string::to_lower(token);
        }
        cppGetter.cppSourceBlock.add_snippet(R"(
            return ${PARENT_MEMBER_NAME};
        )", {
            { "${PARENT_MEMBER_NAME}", "m" + strip_vk(parentName) },
        });
        cppGetters.push_back(cppGetter);
    }
    for (const auto& createInfoName : handle.createInfos) {
        const auto& createInfoItr = xmlManifest.structures.find(createInfoName);
        assert(createInfoItr != xmlManifest.structures.end());
        const auto& createInfo = createInfoItr->second;
        CppFunction cppGetter;
        cppGetter.cppCompileGuards = { createInfo.compileGuard };
        cppGetter.flags = CppFunction::Const;
        cppGetter.cppReturn = "const Managed<" + createInfoName + ">&";
        cppGetter.name = "get";
        for (const auto& token : string::split_camel_case(strip_vk(createInfoName))) {
            cppGetter.name += "_" + string::to_lower(token);
        }
        cppGetter.cppSourceBlock.add_snippet(R"(
            return ${CREATE_INFO_MEMBER_NAME};
        )", {
            { "${CREATE_INFO_MEMBER_NAME}", "m" + strip_vk(createInfoName) },
        });
        cppGetters.push_back(cppGetter);
    }
    return cppGetters;
}

inline dst::cppgen::CppVariable::Collection generate_managed_handle_member_variables(
    const xml::Manifest& xmlManifest,
    const xml::Handle& handle
)
{
    using namespace dst::cppgen;
    CppVariable::Collection cppVariables;
    for (const auto& parent : handle.parents) {
        CppVariable cppVariable;
        cppVariable.cppAccessModifier = CppAccessModifier::Protected;
        cppVariable.type = get_managed_handle_shared_ptr_declaration(parent);
        cppVariable.name = "m" + strip_vk(parent);
        cppVariables.push_back(cppVariable);
    }
    for (const auto& createInfoName : handle.createInfos) {
        const auto& createInfoItr = xmlManifest.structures.find(createInfoName);
        assert(createInfoItr != xmlManifest.structures.end());
        const auto& createInfo = createInfoItr->second;
        CppVariable cppVariable;
        cppVariable.cppCompileGuards = { createInfo.compileGuard };
        cppVariable.cppAccessModifier = CppAccessModifier::Protected;
        cppVariable.type = "Managed<" + createInfoName + ">";
        cppVariable.name = "m" + strip_vk(createInfoName);
        cppVariables.push_back(cppVariable);
    }
    CppVariable cppAllocationCallbacksMember;
    cppAllocationCallbacksMember.cppAccessModifier = CppAccessModifier::Protected;
    cppAllocationCallbacksMember.type = "VkAllocationCallbacks";
    cppAllocationCallbacksMember.name = "mAllocationCallbacks";
    cppVariables.push_back(cppAllocationCallbacksMember);
    return cppVariables;
}

inline dst::cppgen::CppFunction generate_reset_method(
    const xml::Manifest& xmlManifest,
    const xml::Handle& handle
)
{
    using namespace dst::cppgen;
    CppFunction cppFunction;
    cppFunction.flags = CppFunction::Override | CppFunction::Final;
    cppFunction.name = "reset";
    cppFunction.cppSourceBlock.add_snippet(R"(
        #if 0
        if (mHandle) {
            assert(${PARENT_HANDLE});
            auto pAllocator =
                mAllocationCallbacks.pfnAllocation &&
                mAllocationCallbacks.pfnReallocation &&
                mAllocationCallbacks.pfnFree &&
                mAllocationCallbacks.pfnInternalAllocation &&
                mAllocationCallbacks.pfnInternalFree ?
                &mAllocationCallbacks:
                nullptr;                
            ${VK_DESTROY_FUNCTION}(${PARENT_HANDLE}, mHandle, pAllocator);
        }
        #endif
    )");
    return cppFunction;
}

/**
TODO : Documentation
*/
inline void generate_managed_handles(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    CppFile headerFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH) / "managed-handles.hpp");
    headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/managed.hpp" };
    headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/detail/managed-handle.hpp" };
    headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/managed-structures.hpp" };
    headerFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/defines.hpp" };
    headerFile << CppInclude { CppInclude::Type::System, "memory" };
    headerFile << std::endl;
    CppFile sourceFile(std::filesystem::path(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH) / "managed-handles.cpp");
    sourceFile << CppInclude { CppInclude::Type::Internal, "dynamic_static/graphics/vulkan/generated/managed-handles.hpp" };
    sourceFile << std::endl;
    CppStructure::Collection cppStructures;
    for (const auto& handleItr : xmlManifest.handles) {
        const auto& handle = handleItr.second;
        CppStructure cppStructure;
        cppStructure.flags = CppStructure::Class;
        cppStructure.cppCompileGuards = { handle.compileGuard };
        cppStructure.name = "Managed" + strip_vk(handle.name);
        cppStructure.cppBaseTypes = {{ CppAccessModifier::Public, "detail::ManagedHandle<" + handle.name  + ">" }};
        vector::append(cppStructure.cppFunctions, generate_managed_handle_constructors(xmlManifest, handle));
        cppStructure.cppFunctions.push_back(generate_destructor(xmlManifest, handle));
        vector::append(cppStructure.cppFunctions, generate_managed_handle_getters(xmlManifest, handle));
        cppStructure.cppFunctions.push_back(generate_reset_method(xmlManifest, handle));
        cppStructure.cppVariables = generate_managed_handle_member_variables(xmlManifest, handle);
        cppStructures.push_back(cppStructure);
    }
    headerFile << CppNamespace("dst::gfx::vk::detail").open();
    headerFile << cppStructures.generate_declaration();
    headerFile << CppNamespace("dst::gfx::vk::detail").close();
    sourceFile << CppNamespace("dst::gfx::vk::detail").open();
    sourceFile << cppStructures.generate_definition();
    sourceFile << CppNamespace("dst::gfx::vk::detail").close();
}

} // namespace cppgen
} // namespace vk
} // namespace dst
