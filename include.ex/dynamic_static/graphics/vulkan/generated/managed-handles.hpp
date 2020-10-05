
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
#include "dynamic_static/graphics/vulkan/detail/managed-handle.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed-structures.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <memory>

namespace dst {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedVkAccelerationStructureKHR
    : public BasicManaged<VkAccelerationStructureKHR>
{
public:
    BasicManagedVkAccelerationStructureKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    static VkResult create(const Managed<VkDevice>& device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkAccelerationStructureKHR>* pAccelerationStructure);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedVkAccelerationStructureKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkAccelerationStructureKHR>"); };
    template <> const VkAccelerationStructureKHR& get<VkAccelerationStructureKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    template <> const Managed<VkAccelerationStructureCreateInfoKHR>& get<Managed<VkAccelerationStructureCreateInfoKHR>>() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


class BasicManagedVkBuffer
    : public BasicManaged<VkBuffer>
{
public:
    BasicManagedVkBuffer() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBuffer>* pBuffer);
    virtual ~BasicManagedVkBuffer() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkBuffer>"); };
    template <> const VkBuffer& get<VkBuffer>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkBufferCreateInfo>& get<Managed<VkBufferCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkBufferView
    : public BasicManaged<VkBufferView>
{
public:
    BasicManagedVkBufferView() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkBufferView>* pView);
    virtual ~BasicManagedVkBufferView() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkBufferView>"); };
    template <> const VkBufferView& get<VkBufferView>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkBufferViewCreateInfo>& get<Managed<VkBufferViewCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkCommandBuffer
    : public BasicManaged<VkCommandBuffer>
{
public:
    BasicManagedVkCommandBuffer() = default;
    static VkResult allocate(const Managed<VkDevice>& device, const VkCommandBufferAllocateInfo* pAllocateInfo, Managed<VkCommandBuffer>* pCommandBuffers);
    virtual ~BasicManagedVkCommandBuffer() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkCommandBuffer>"); };
    template <> const VkCommandBuffer& get<VkCommandBuffer>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkCommandPool>& get<Managed<VkCommandPool>>() const;
    template <> const Managed<VkCommandBufferAllocateInfo>& get<Managed<VkCommandBufferAllocateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkCommandPool
    : public BasicManaged<VkCommandPool>
{
public:
    BasicManagedVkCommandPool() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkCommandPool>* pCommandPool);
    virtual ~BasicManagedVkCommandPool() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkCommandPool>"); };
    template <> const VkCommandPool& get<VkCommandPool>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkCommandPoolCreateInfo>& get<Managed<VkCommandPoolCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDebugReportCallbackEXT
    : public BasicManaged<VkDebugReportCallbackEXT>
{
public:
    BasicManagedVkDebugReportCallbackEXT() = default;
    static VkResult create(const Managed<VkInstance>& instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDebugReportCallbackEXT>* pCallback);
    virtual ~BasicManagedVkDebugReportCallbackEXT() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDebugReportCallbackEXT>"); };
    template <> const VkDebugReportCallbackEXT& get<VkDebugReportCallbackEXT>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkInstance>& get<Managed<VkInstance>>() const;
    template <> const Managed<VkDebugReportCallbackCreateInfoEXT>& get<Managed<VkDebugReportCallbackCreateInfoEXT>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDebugUtilsMessengerEXT
    : public BasicManaged<VkDebugUtilsMessengerEXT>
{
public:
    BasicManagedVkDebugUtilsMessengerEXT() = default;
    static VkResult create(const Managed<VkInstance>& instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDebugUtilsMessengerEXT>* pMessenger);
    virtual ~BasicManagedVkDebugUtilsMessengerEXT() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDebugUtilsMessengerEXT>"); };
    template <> const VkDebugUtilsMessengerEXT& get<VkDebugUtilsMessengerEXT>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkInstance>& get<Managed<VkInstance>>() const;
    template <> const Managed<VkDebugUtilsMessengerCreateInfoEXT>& get<Managed<VkDebugUtilsMessengerCreateInfoEXT>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
class BasicManagedVkDeferredOperationKHR
    : public BasicManaged<VkDeferredOperationKHR>
{
public:
    BasicManagedVkDeferredOperationKHR() = default;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    static VkResult create(const Managed<VkDevice>& device, const VkAllocationCallbacks* pAllocator, Managed<VkDeferredOperationKHR>* pDeferredOperation);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    virtual ~BasicManagedVkDeferredOperationKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDeferredOperationKHR>"); };
    template <> const VkDeferredOperationKHR& get<VkDeferredOperationKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

class BasicManagedVkDescriptorPool
    : public BasicManaged<VkDescriptorPool>
{
public:
    BasicManagedVkDescriptorPool() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorPool>* pDescriptorPool);
    virtual ~BasicManagedVkDescriptorPool() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDescriptorPool>"); };
    template <> const VkDescriptorPool& get<VkDescriptorPool>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkDescriptorPoolCreateInfo>& get<Managed<VkDescriptorPoolCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDescriptorSet
    : public BasicManaged<VkDescriptorSet>
{
public:
    BasicManagedVkDescriptorSet() = default;
    static VkResult allocate(const Managed<VkDevice>& device, const VkDescriptorSetAllocateInfo* pAllocateInfo, Managed<VkDescriptorSet>* pDescriptorSets);
    virtual ~BasicManagedVkDescriptorSet() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDescriptorSet>"); };
    template <> const VkDescriptorSet& get<VkDescriptorSet>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDescriptorPool>& get<Managed<VkDescriptorPool>>() const;
    template <> const Managed<VkDescriptorSetAllocateInfo>& get<Managed<VkDescriptorSetAllocateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDescriptorSetLayout
    : public BasicManaged<VkDescriptorSetLayout>
{
public:
    BasicManagedVkDescriptorSetLayout() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorSetLayout>* pSetLayout);
    virtual ~BasicManagedVkDescriptorSetLayout() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDescriptorSetLayout>"); };
    template <> const VkDescriptorSetLayout& get<VkDescriptorSetLayout>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkDescriptorSetLayoutCreateInfo>& get<Managed<VkDescriptorSetLayoutCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDescriptorUpdateTemplate
    : public BasicManaged<VkDescriptorUpdateTemplate>
{
public:
    BasicManagedVkDescriptorUpdateTemplate() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate);
    virtual ~BasicManagedVkDescriptorUpdateTemplate() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDescriptorUpdateTemplate>"); };
    template <> const VkDescriptorUpdateTemplate& get<VkDescriptorUpdateTemplate>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkDescriptorUpdateTemplateCreateInfo>& get<Managed<VkDescriptorUpdateTemplateCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};


class BasicManagedVkDevice
    : public BasicManaged<VkDevice>
{
public:
    BasicManagedVkDevice() = default;
    static VkResult create(const Managed<VkPhysicalDevice>& physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDevice>* pDevice);
    virtual ~BasicManagedVkDevice() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDevice>"); };
    template <> const VkDevice& get<VkDevice>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkPhysicalDevice>& get<Managed<VkPhysicalDevice>>() const;
    template <> const Managed<VkDeviceCreateInfo>& get<Managed<VkDeviceCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDeviceMemory
    : public BasicManaged<VkDeviceMemory>
{
public:
    BasicManagedVkDeviceMemory() = default;
    static VkResult allocate(const Managed<VkDevice>& device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDeviceMemory>* pMemory);
    virtual ~BasicManagedVkDeviceMemory() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDeviceMemory>"); };
    template <> const VkDeviceMemory& get<VkDeviceMemory>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkMemoryAllocateInfo>& get<Managed<VkMemoryAllocateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDisplayKHR
    : public BasicManaged<VkDisplayKHR>
{
public:
    BasicManagedVkDisplayKHR() = default;
    virtual ~BasicManagedVkDisplayKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDisplayKHR>"); };
    template <> const VkDisplayKHR& get<VkDisplayKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkPhysicalDevice>& get<Managed<VkPhysicalDevice>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkDisplayModeKHR
    : public BasicManaged<VkDisplayModeKHR>
{
public:
    BasicManagedVkDisplayModeKHR() = default;
    static VkResult create(const Managed<VkPhysicalDevice>& physicalDevice, const Managed<VkDisplayKHR>& display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDisplayModeKHR>* pMode);
    virtual ~BasicManagedVkDisplayModeKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkDisplayModeKHR>"); };
    template <> const VkDisplayModeKHR& get<VkDisplayModeKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDisplayKHR>& get<Managed<VkDisplayKHR>>() const;
    template <> const Managed<VkDisplayModeCreateInfoKHR>& get<Managed<VkDisplayModeCreateInfoKHR>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkEvent
    : public BasicManaged<VkEvent>
{
public:
    BasicManagedVkEvent() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkEvent>* pEvent);
    virtual ~BasicManagedVkEvent() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkEvent>"); };
    template <> const VkEvent& get<VkEvent>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkEventCreateInfo>& get<Managed<VkEventCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkFence
    : public BasicManaged<VkFence>
{
public:
    BasicManagedVkFence() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFence>* pFence);
    virtual ~BasicManagedVkFence() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkFence>"); };
    template <> const VkFence& get<VkFence>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkFenceCreateInfo>& get<Managed<VkFenceCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkFramebuffer
    : public BasicManaged<VkFramebuffer>
{
public:
    BasicManagedVkFramebuffer() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkFramebuffer>* pFramebuffer);
    virtual ~BasicManagedVkFramebuffer() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkFramebuffer>"); };
    template <> const VkFramebuffer& get<VkFramebuffer>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkFramebufferCreateInfo>& get<Managed<VkFramebufferCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkImage
    : public BasicManaged<VkImage>
{
public:
    BasicManagedVkImage() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImage>* pImage);
    virtual ~BasicManagedVkImage() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkImage>"); };
    template <> const VkImage& get<VkImage>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkImageCreateInfo>& get<Managed<VkImageCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkImageView
    : public BasicManaged<VkImageView>
{
public:
    BasicManagedVkImageView() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkImageView>* pView);
    virtual ~BasicManagedVkImageView() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkImageView>"); };
    template <> const VkImageView& get<VkImageView>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkImageViewCreateInfo>& get<Managed<VkImageViewCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkIndirectCommandsLayoutNV
    : public BasicManaged<VkIndirectCommandsLayoutNV>
{
public:
    BasicManagedVkIndirectCommandsLayoutNV() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout);
    virtual ~BasicManagedVkIndirectCommandsLayoutNV() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkIndirectCommandsLayoutNV>"); };
    template <> const VkIndirectCommandsLayoutNV& get<VkIndirectCommandsLayoutNV>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkIndirectCommandsLayoutCreateInfoNV>& get<Managed<VkIndirectCommandsLayoutCreateInfoNV>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkInstance
    : public BasicManaged<VkInstance>
{
public:
    BasicManagedVkInstance() = default;
    static VkResult create(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkInstance>* pInstance);
    virtual ~BasicManagedVkInstance() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkInstance>"); };
    template <> const VkInstance& get<VkInstance>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkInstanceCreateInfo>& get<Managed<VkInstanceCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPerformanceConfigurationINTEL
    : public BasicManaged<VkPerformanceConfigurationINTEL>
{
public:
    BasicManagedVkPerformanceConfigurationINTEL() = default;
    virtual ~BasicManagedVkPerformanceConfigurationINTEL() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPerformanceConfigurationINTEL>"); };
    template <> const VkPerformanceConfigurationINTEL& get<VkPerformanceConfigurationINTEL>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPhysicalDevice
    : public BasicManaged<VkPhysicalDevice>
{
public:
    BasicManagedVkPhysicalDevice() = default;
    virtual ~BasicManagedVkPhysicalDevice() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPhysicalDevice>"); };
    template <> const VkPhysicalDevice& get<VkPhysicalDevice>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkInstance>& get<Managed<VkInstance>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPipeline
    : public BasicManaged<VkPipeline>
{
public:
    BasicManagedVkPipeline() = default;
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    #endif // VK_ENABLE_BETA_EXTENSIONS
    static VkResult create(const Managed<VkDevice>& device, const Managed<VkPipelineCache>& pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkPipeline>* pPipelines);
    virtual ~BasicManagedVkPipeline() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPipeline>"); };
    template <> const VkPipeline& get<VkPipeline>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkComputePipelineCreateInfo>& get<Managed<VkComputePipelineCreateInfo>>() const;
    template <> const Managed<VkGraphicsPipelineCreateInfo>& get<Managed<VkGraphicsPipelineCreateInfo>>() const;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    template <> const Managed<VkRayTracingPipelineCreateInfoKHR>& get<Managed<VkRayTracingPipelineCreateInfoKHR>>() const;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    template <> const Managed<VkRayTracingPipelineCreateInfoNV>& get<Managed<VkRayTracingPipelineCreateInfoNV>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPipelineCache
    : public BasicManaged<VkPipelineCache>
{
public:
    BasicManagedVkPipelineCache() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineCache>* pPipelineCache);
    virtual ~BasicManagedVkPipelineCache() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPipelineCache>"); };
    template <> const VkPipelineCache& get<VkPipelineCache>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkPipelineCacheCreateInfo>& get<Managed<VkPipelineCacheCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPipelineLayout
    : public BasicManaged<VkPipelineLayout>
{
public:
    BasicManagedVkPipelineLayout() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPipelineLayout>* pPipelineLayout);
    virtual ~BasicManagedVkPipelineLayout() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPipelineLayout>"); };
    template <> const VkPipelineLayout& get<VkPipelineLayout>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkPipelineLayoutCreateInfo>& get<Managed<VkPipelineLayoutCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkPrivateDataSlotEXT
    : public BasicManaged<VkPrivateDataSlotEXT>
{
public:
    BasicManagedVkPrivateDataSlotEXT() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkPrivateDataSlotEXT>* pPrivateDataSlot);
    virtual ~BasicManagedVkPrivateDataSlotEXT() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkPrivateDataSlotEXT>"); };
    template <> const VkPrivateDataSlotEXT& get<VkPrivateDataSlotEXT>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkPrivateDataSlotCreateInfoEXT>& get<Managed<VkPrivateDataSlotCreateInfoEXT>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkQueryPool
    : public BasicManaged<VkQueryPool>
{
public:
    BasicManagedVkQueryPool() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkQueryPool>* pQueryPool);
    virtual ~BasicManagedVkQueryPool() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkQueryPool>"); };
    template <> const VkQueryPool& get<VkQueryPool>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkQueryPoolCreateInfo>& get<Managed<VkQueryPoolCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkQueue
    : public BasicManaged<VkQueue>
{
public:
    BasicManagedVkQueue() = default;
    virtual ~BasicManagedVkQueue() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkQueue>"); };
    template <> const VkQueue& get<VkQueue>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkRenderPass
    : public BasicManaged<VkRenderPass>
{
public:
    BasicManagedVkRenderPass() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass);
    static VkResult create(const Managed<VkDevice>& device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkRenderPass>* pRenderPass);
    virtual ~BasicManagedVkRenderPass() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkRenderPass>"); };
    template <> const VkRenderPass& get<VkRenderPass>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkRenderPassCreateInfo>& get<Managed<VkRenderPassCreateInfo>>() const;
    template <> const Managed<VkRenderPassCreateInfo2>& get<Managed<VkRenderPassCreateInfo2>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkSampler
    : public BasicManaged<VkSampler>
{
public:
    BasicManagedVkSampler() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSampler>* pSampler);
    virtual ~BasicManagedVkSampler() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkSampler>"); };
    template <> const VkSampler& get<VkSampler>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkSamplerCreateInfo>& get<Managed<VkSamplerCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkSamplerYcbcrConversion
    : public BasicManaged<VkSamplerYcbcrConversion>
{
public:
    BasicManagedVkSamplerYcbcrConversion() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSamplerYcbcrConversion>* pYcbcrConversion);
    virtual ~BasicManagedVkSamplerYcbcrConversion() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkSamplerYcbcrConversion>"); };
    template <> const VkSamplerYcbcrConversion& get<VkSamplerYcbcrConversion>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkSamplerYcbcrConversionCreateInfo>& get<Managed<VkSamplerYcbcrConversionCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};


class BasicManagedVkSemaphore
    : public BasicManaged<VkSemaphore>
{
public:
    BasicManagedVkSemaphore() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSemaphore>* pSemaphore);
    virtual ~BasicManagedVkSemaphore() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkSemaphore>"); };
    template <> const VkSemaphore& get<VkSemaphore>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkSemaphoreCreateInfo>& get<Managed<VkSemaphoreCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkShaderModule
    : public BasicManaged<VkShaderModule>
{
public:
    BasicManagedVkShaderModule() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkShaderModule>* pShaderModule);
    virtual ~BasicManagedVkShaderModule() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkShaderModule>"); };
    template <> const VkShaderModule& get<VkShaderModule>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkShaderModuleCreateInfo>& get<Managed<VkShaderModuleCreateInfo>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkSurfaceKHR
    : public BasicManaged<VkSurfaceKHR>
{
public:
    BasicManagedVkSurfaceKHR() = default;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    static VkResult create(const Managed<VkInstance>& instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    static VkResult create(const Managed<VkInstance>& instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    #endif // VK_USE_PLATFORM_DIRECTFB_EXT
    static VkResult create(const Managed<VkInstance>& instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
    static VkResult create(const Managed<VkInstance>& instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSurfaceKHR>* pSurface);
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
    virtual ~BasicManagedVkSurfaceKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkSurfaceKHR>"); };
    template <> const VkSurfaceKHR& get<VkSurfaceKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkInstance>& get<Managed<VkInstance>>() const;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    template <> const Managed<VkAndroidSurfaceCreateInfoKHR>& get<Managed<VkAndroidSurfaceCreateInfoKHR>>() const;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    template <> const Managed<VkDirectFBSurfaceCreateInfoEXT>& get<Managed<VkDirectFBSurfaceCreateInfoEXT>>() const;
    #endif // VK_USE_PLATFORM_DIRECTFB_EXT
    template <> const Managed<VkDisplaySurfaceCreateInfoKHR>& get<Managed<VkDisplaySurfaceCreateInfoKHR>>() const;
    template <> const Managed<VkHeadlessSurfaceCreateInfoEXT>& get<Managed<VkHeadlessSurfaceCreateInfoEXT>>() const;
    #ifdef VK_USE_PLATFORM_IOS_MVK
    template <> const Managed<VkIOSSurfaceCreateInfoMVK>& get<Managed<VkIOSSurfaceCreateInfoMVK>>() const;
    #endif // VK_USE_PLATFORM_IOS_MVK
    #ifdef VK_USE_PLATFORM_FUCHSIA
    template <> const Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>& get<Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>>() const;
    #endif // VK_USE_PLATFORM_FUCHSIA
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    template <> const Managed<VkMacOSSurfaceCreateInfoMVK>& get<Managed<VkMacOSSurfaceCreateInfoMVK>>() const;
    #endif // VK_USE_PLATFORM_MACOS_MVK
    #ifdef VK_USE_PLATFORM_METAL_EXT
    template <> const Managed<VkMetalSurfaceCreateInfoEXT>& get<Managed<VkMetalSurfaceCreateInfoEXT>>() const;
    #endif // VK_USE_PLATFORM_METAL_EXT
    #ifdef VK_USE_PLATFORM_GGP
    template <> const Managed<VkStreamDescriptorSurfaceCreateInfoGGP>& get<Managed<VkStreamDescriptorSurfaceCreateInfoGGP>>() const;
    #endif // VK_USE_PLATFORM_GGP
    #ifdef VK_USE_PLATFORM_VI_NN
    template <> const Managed<VkViSurfaceCreateInfoNN>& get<Managed<VkViSurfaceCreateInfoNN>>() const;
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    template <> const Managed<VkWaylandSurfaceCreateInfoKHR>& get<Managed<VkWaylandSurfaceCreateInfoKHR>>() const;
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    template <> const Managed<VkWin32SurfaceCreateInfoKHR>& get<Managed<VkWin32SurfaceCreateInfoKHR>>() const;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_XCB_KHR
    template <> const Managed<VkXcbSurfaceCreateInfoKHR>& get<Managed<VkXcbSurfaceCreateInfoKHR>>() const;
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    template <> const Managed<VkXlibSurfaceCreateInfoKHR>& get<Managed<VkXlibSurfaceCreateInfoKHR>>() const;
    #endif // VK_USE_PLATFORM_XLIB_KHR

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkSwapchainKHR
    : public BasicManaged<VkSwapchainKHR>
{
public:
    BasicManagedVkSwapchainKHR() = default;
    static VkResult create(const Managed<VkDevice>& device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchains);
    static VkResult create(const Managed<VkDevice>& device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkSwapchainKHR>* pSwapchain);
    virtual ~BasicManagedVkSwapchainKHR() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkSwapchainKHR>"); };
    template <> const VkSwapchainKHR& get<VkSwapchainKHR>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkSurfaceKHR>& get<Managed<VkSurfaceKHR>>() const;
    template <> const Managed<VkSwapchainCreateInfoKHR>& get<Managed<VkSwapchainCreateInfoKHR>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

class BasicManagedVkValidationCacheEXT
    : public BasicManaged<VkValidationCacheEXT>
{
public:
    BasicManagedVkValidationCacheEXT() = default;
    static VkResult create(const Managed<VkDevice>& device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkValidationCacheEXT>* pValidationCache);
    virtual ~BasicManagedVkValidationCacheEXT() override;
    template <typename T> inline const T& get() const { static_assert(false && "The requested object type cannot be accessed from a Managed<VkValidationCacheEXT>"); };
    template <> const VkValidationCacheEXT& get<VkValidationCacheEXT>() const;
    template <> const VkObjectType& get<VkObjectType>() const;
    template <> const Managed<VkDevice>& get<Managed<VkDevice>>() const;
    template <> const Managed<VkValidationCacheCreateInfoEXT>& get<Managed<VkValidationCacheCreateInfoEXT>>() const;

protected:
    class ControlBlock;
    std::shared_ptr<ControlBlock> mspControlBlock;
};

} // namespace detail
} // namespace vk
} // namespace dst
