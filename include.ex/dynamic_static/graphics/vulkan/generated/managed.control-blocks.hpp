
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


template <>
class Managed<VkInstance>::ControlBlock
{
public:
    static VkResult create(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkInstance>* pInstance);
    ControlBlock(VkInstance vkHandle);
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
        Managed<VkInstanceCreateInfo>,
        VkAllocationCallbacks,
        std::vector<Managed<VkPhysicalDevice>>,
        VkInstance
    > mFields;
};

template <>
class Managed<VkPhysicalDevice>::ControlBlock
{
public:
    ControlBlock(VkPhysicalDevice vkHandle);
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
        Managed<VkInstance>,
        VkPhysicalDevice
    > mFields;
};

template <>
class Managed<VkDevice>::ControlBlock
{
public:
    static VkResult create(const Managed<VkPhysicalDevice>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDevice>* pDevice);
    ControlBlock(VkDevice vkHandle);
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
        Managed<VkPhysicalDevice>,
        Managed<VkDeviceCreateInfo>,
        VkAllocationCallbacks,
        std::vector<Managed<VkQueue>>,
        VkDevice
    > mFields;
};

template <>
class Managed<VkBuffer>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBuffer>* pBuffer);
    ControlBlock(VkBuffer vkHandle);
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
        Managed<VkDevice>,
        Managed<VkBufferCreateInfo>,
        VkAllocationCallbacks,
        Managed<VkDeviceMemory>,
        VkBuffer
    > mFields;
};

template <>
class Managed<VkBufferView>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBufferView>* pView);
    ControlBlock(VkBufferView vkHandle);
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
        Managed<VkDevice>,
        Managed<VkBufferViewCreateInfo>,
        VkAllocationCallbacks,
        Managed<VkBuffer>,
        VkBufferView
    > mFields;
};

template <>
class Managed<VkCommandPool>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkCommandPool>* pCommandPool);
    ControlBlock(VkCommandPool vkHandle);
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
        Managed<VkDevice>,
        Managed<VkCommandPoolCreateInfo>,
        VkAllocationCallbacks,
        VkCommandPool
    > mFields;
};

template <>
class Managed<VkCommandBuffer>::ControlBlock
{
public:
    static VkResult allocate(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers);
    ControlBlock(VkCommandBuffer vkHandle);
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
        Managed<VkCommandPool>,
        Managed<VkCommandBufferAllocateInfo>,
        VkCommandBuffer
    > mFields;
};

template <>
class Managed<VkDescriptorPool>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorPool>* pDescriptorPool);
    ControlBlock(VkDescriptorPool vkHandle);
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
        Managed<VkDevice>,
        Managed<VkDescriptorPoolCreateInfo>,
        VkAllocationCallbacks,
        VkDescriptorPool
    > mFields;
};

template <>
class Managed<VkDescriptorSet>::ControlBlock
{
public:
    static VkResult allocate(const Managed<VkDevice>& device, const VkDescriptorSetAllocateInfo* pAllocateInfo, Managed<VkDescriptorSet>* pDescriptorSets);
    ControlBlock(VkDescriptorSet vkHandle);
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
        Managed<VkDescriptorPool>,
        Managed<VkDescriptorSetAllocateInfo>,
        VkDescriptorSet
    > mFields;
};

template <>
class Managed<VkDescriptorSetLayout>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorSetLayout>* pSetLayout);
    ControlBlock(VkDescriptorSetLayout vkHandle);
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
        Managed<VkDevice>,
        Managed<VkDescriptorSetLayoutCreateInfo>,
        VkAllocationCallbacks,
        VkDescriptorSetLayout
    > mFields;
};

template <>
class Managed<VkDescriptorUpdateTemplate>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate);
    ControlBlock(VkDescriptorUpdateTemplate vkHandle);
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
        Managed<VkDevice>,
        Managed<VkDescriptorUpdateTemplateCreateInfo>,
        VkAllocationCallbacks,
        VkDescriptorUpdateTemplate
    > mFields;
};


template <>
class Managed<VkDeviceMemory>::ControlBlock
{
public:
    static VkResult allocate(const Managed<VkDevice>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDeviceMemory>* pMemory);
    ControlBlock(VkDeviceMemory vkHandle);
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
        Managed<VkDevice>,
        Managed<VkMemoryAllocateInfo>,
        VkAllocationCallbacks,
        VkDeviceMemory
    > mFields;
};

template <>
class Managed<VkDisplayKHR>::ControlBlock
{
public:
    ControlBlock(VkDisplayKHR vkHandle);
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
        Managed<VkPhysicalDevice>,
        VkDisplayKHR
    > mFields;
};

template <>
class Managed<VkDisplayModeKHR>::ControlBlock
{
public:
    static VkResult create(const Managed<VkPhysicalDevice>& physicalDevice, const Managed<VkDisplayKHR>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDisplayModeKHR>* pMode);
    ControlBlock(VkDisplayModeKHR vkHandle);
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
        Managed<VkDisplayKHR>,
        Managed<VkPhysicalDevice>,
        Managed<VkDisplayModeCreateInfoKHR>,
        VkAllocationCallbacks,
        VkDisplayModeKHR
    > mFields;
};

template <>
class Managed<VkEvent>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkEvent>* pEvent);
    ControlBlock(VkEvent vkHandle);
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
        Managed<VkDevice>,
        Managed<VkEventCreateInfo>,
        VkAllocationCallbacks,
        VkEvent
    > mFields;
};

template <>
class Managed<VkFence>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFence>* pFence);
    ControlBlock(VkFence vkHandle);
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
        Managed<VkDevice>,
        Managed<VkFenceCreateInfo>,
        VkAllocationCallbacks,
        VkFence
    > mFields;
};

template <>
class Managed<VkFramebuffer>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFramebuffer>* pFramebuffer);
    ControlBlock(VkFramebuffer vkHandle);
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
        Managed<VkDevice>,
        Managed<VkFramebufferCreateInfo>,
        VkAllocationCallbacks,
        std::vector<Managed<VkImageView>>,
        VkFramebuffer
    > mFields;
};

template <>
class Managed<VkImage>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImage>* pImage);
    ControlBlock(VkImage vkHandle);
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
        Managed<VkDevice>,
        Managed<VkImageCreateInfo>,
        VkAllocationCallbacks,
        Managed<VkSwapchainKHR>,
        Managed<VkDeviceMemory>,
        VkImage
    > mFields;
};

template <>
class Managed<VkImageView>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImageView>* pView);
    ControlBlock(VkImageView vkHandle);
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
        Managed<VkDevice>,
        Managed<VkImageViewCreateInfo>,
        VkAllocationCallbacks,
        Managed<VkImage>,
        VkImageView
    > mFields;
};

template <>
class Managed<VkPerformanceConfigurationINTEL>::ControlBlock
{
public:
    ControlBlock(VkPerformanceConfigurationINTEL vkHandle);
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
        Managed<VkDevice>,
        VkPerformanceConfigurationINTEL
    > mFields;
};

template <>
class Managed<VkPipeline>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    ControlBlock(VkPipeline vkHandle);
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
        Managed<VkDevice>,
        Managed<VkComputePipelineCreateInfo>,
        Managed<VkGraphicsPipelineCreateInfo>,
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        Managed<VkRayTracingPipelineCreateInfoKHR>,
        #endif // VK_ENABLE_BETA_EXTENSIONS
        Managed<VkRayTracingPipelineCreateInfoNV>,
        VkAllocationCallbacks,
        VkPipeline
    > mFields;
};

template <>
class Managed<VkPipelineCache>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineCache>* pPipelineCache);
    ControlBlock(VkPipelineCache vkHandle);
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
        Managed<VkDevice>,
        Managed<VkPipelineCacheCreateInfo>,
        VkAllocationCallbacks,
        VkPipelineCache
    > mFields;
};

template <>
class Managed<VkPipelineLayout>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineLayout>* pPipelineLayout);
    ControlBlock(VkPipelineLayout vkHandle);
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
        Managed<VkDevice>,
        Managed<VkPipelineLayoutCreateInfo>,
        VkAllocationCallbacks,
        VkPipelineLayout
    > mFields;
};

template <>
class Managed<VkQueryPool>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkQueryPool>* pQueryPool);
    ControlBlock(VkQueryPool vkHandle);
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
        Managed<VkDevice>,
        Managed<VkQueryPoolCreateInfo>,
        VkAllocationCallbacks,
        VkQueryPool
    > mFields;
};

template <>
class Managed<VkQueue>::ControlBlock
{
public:
    ControlBlock(VkQueue vkHandle);
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
        Managed<VkDevice>,
        Managed<VkDeviceQueueCreateInfo>,
        VkQueue
    > mFields;
};

template <>
class Managed<VkRenderPass>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass);
    static VkResult create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass);
    ControlBlock(VkRenderPass vkHandle);
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
        Managed<VkDevice>,
        Managed<VkRenderPassCreateInfo>,
        Managed<VkRenderPassCreateInfo2>,
        VkAllocationCallbacks,
        VkRenderPass
    > mFields;
};

template <>
class Managed<VkSampler>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSampler>* pSampler);
    ControlBlock(VkSampler vkHandle);
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
        Managed<VkDevice>,
        Managed<VkSamplerCreateInfo>,
        VkAllocationCallbacks,
        VkSampler
    > mFields;
};

template <>
class Managed<VkSamplerYcbcrConversion>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSamplerYcbcrConversion>* pYcbcrConversion);
    ControlBlock(VkSamplerYcbcrConversion vkHandle);
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
        Managed<VkDevice>,
        Managed<VkSamplerYcbcrConversionCreateInfo>,
        VkAllocationCallbacks,
        VkSamplerYcbcrConversion
    > mFields;
};


template <>
class Managed<VkSemaphore>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSemaphore>* pSemaphore);
    ControlBlock(VkSemaphore vkHandle);
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
        Managed<VkDevice>,
        Managed<VkSemaphoreCreateInfo>,
        VkAllocationCallbacks,
        VkSemaphore
    > mFields;
};

template <>
class Managed<VkShaderModule>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkShaderModule>* pShaderModule);
    ControlBlock(VkShaderModule vkHandle);
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
        Managed<VkDevice>,
        Managed<VkShaderModuleCreateInfo>,
        VkAllocationCallbacks,
        VkShaderModule
    > mFields;
};

template <>
class Managed<VkSurfaceKHR>::ControlBlock
{
public:
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    static VkResult create(const Managed<VkInstance>& instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_DIRECTFB_EXT
    static VkResult create(const Managed<VkInstance>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #ifdef VK_USE_PLATFORM_IOS_MVK
    static VkResult create(const Managed<VkInstance>& instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    static VkResult create(const Managed<VkInstance>& instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    static VkResult create(const Managed<VkInstance>& instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    static VkResult create(const Managed<VkInstance>& instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    static VkResult create(const Managed<VkInstance>& instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    static VkResult create(const Managed<VkInstance>& instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_XLIB_KHR
    ControlBlock(VkSurfaceKHR vkHandle);
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
        Managed<VkInstance>,
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        Managed<VkAndroidSurfaceCreateInfoKHR>,
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        Managed<VkDirectFBSurfaceCreateInfoEXT>,
        #endif // VK_USE_PLATFORM_DIRECTFB_EXT
        Managed<VkDisplaySurfaceCreateInfoKHR>,
        Managed<VkHeadlessSurfaceCreateInfoEXT>,
        #ifdef VK_USE_PLATFORM_IOS_MVK
        Managed<VkIOSSurfaceCreateInfoMVK>,
        #endif // VK_USE_PLATFORM_IOS_MVK
        #ifdef VK_USE_PLATFORM_FUCHSIA
        Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>,
        #endif // VK_USE_PLATFORM_FUCHSIA
        #ifdef VK_USE_PLATFORM_MACOS_MVK
        Managed<VkMacOSSurfaceCreateInfoMVK>,
        #endif // VK_USE_PLATFORM_MACOS_MVK
        #ifdef VK_USE_PLATFORM_METAL_EXT
        Managed<VkMetalSurfaceCreateInfoEXT>,
        #endif // VK_USE_PLATFORM_METAL_EXT
        #ifdef VK_USE_PLATFORM_GGP
        Managed<VkStreamDescriptorSurfaceCreateInfoGGP>,
        #endif // VK_USE_PLATFORM_GGP
        #ifdef VK_USE_PLATFORM_VI_NN
        Managed<VkViSurfaceCreateInfoNN>,
        #endif // VK_USE_PLATFORM_VI_NN
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        Managed<VkWaylandSurfaceCreateInfoKHR>,
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        Managed<VkWin32SurfaceCreateInfoKHR>,
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_XCB_KHR
        Managed<VkXcbSurfaceCreateInfoKHR>,
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        Managed<VkXlibSurfaceCreateInfoKHR>,
        #endif // VK_USE_PLATFORM_XLIB_KHR
        VkAllocationCallbacks,
        VkSurfaceKHR
    > mFields;
};

template <>
class Managed<VkSwapchainKHR>::ControlBlock
{
public:
    static VkResult create(const Managed<VkDevice>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchains);
    static VkResult create(const Managed<VkDevice>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchain);
    ControlBlock(VkSwapchainKHR vkHandle);
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
        Managed<VkDevice>,
        Managed<VkSurfaceKHR>,
        Managed<VkSwapchainCreateInfoKHR>,
        VkAllocationCallbacks,
        std::vector<Managed<VkImage>>,
        VkSwapchainKHR
    > mFields;
};

} // namespace vk
} // namespace dst
