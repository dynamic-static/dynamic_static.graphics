
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

#include <iostream>

static std::string create_tab(
    int tabCount = 0,
    int tabWidth = 4
)
{
    return std::string(tabCount * tabWidth, ' ');
}

template <typename T>
static std::string array_to_string(T* values, size_t count)
{
    std::string str;
    for (size_t i = 0; i < count; ++i) {
        str += std::to_string(values[i]);
        if (i < count - 1) {
            str += ", ";
        }
    }
    return str;
}

std::string vk_device_size_to_string(VkDeviceSize size)
{
    VkDeviceSize B = size;
    double MB = B / 1000000.0;
    double GB = MB / 1000.0;
    return std::to_string(B) + " B = " + std::to_string(MB) + " MB = " + std::to_string(GB) + " GB";
}

std::string sample_count_flags_to_string(VkSampleCountFlags sampleCountFlags)
{
    std::string str;
    if (sampleCountFlags & VK_SAMPLE_COUNT_1_BIT) str += "1 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_2_BIT) str += "2 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_4_BIT) str += "4 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_8_BIT) str += "8 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_16_BIT) str += "16 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_32_BIT) str += "32 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_64_BIT) str += "64 | ";
    if (!str.empty()) {
        str = str.substr(0, str.size() - 3);
    }
    return "{ VK_SAMPLE_COUNT " + str + " }";
}

int main()
{
    auto instance = dst::vk::create<dst::vk::Instance>();
    const auto& physicalDevices = instance->get_physical_devices();
    std::cout << "VkPhysicalDevice(s) : " << physicalDevices.size() << std::endl;
    for (const auto& physicalDevice : physicalDevices) {
        int tab = 1;
        std::cout << "===============================================================================" << std::endl;
        std::cout << create_tab(tab++) << physicalDevice.get_name() << std::endl;
        const auto& properties = physicalDevice.get_properties();
        dst::Version apiVersion {
            VK_VERSION_MAJOR(properties.apiVersion),
            VK_VERSION_MINOR(properties.apiVersion),
            VK_VERSION_PATCH(properties.apiVersion)
        };
        dst::Version driverVersion {
            VK_VERSION_MAJOR(properties.driverVersion),
            VK_VERSION_MINOR(properties.driverVersion),
            VK_VERSION_PATCH(properties.driverVersion)
        };
        std::cout << create_tab(tab++) << "Properties -" << std::endl;
        std::cout << create_tab(tab) << "apiVersion    : " << apiVersion.to_string() << std::endl;
        std::cout << create_tab(tab) << "driverVersion : " << driverVersion.to_string() << std::endl;
        std::cout << create_tab(tab) << "vendorID      : " << std::to_string(properties.vendorID) << std::endl;
        std::cout << create_tab(tab) << "deviceID      : " << std::to_string(properties.deviceID) << std::endl;
        std::cout << create_tab(tab--) << "deviceType    : " << std::to_string(properties.deviceType) << std::endl;
        std::cout << std::endl;
        const auto& sparseProperties = properties.sparseProperties;
        std::cout << create_tab(tab++) << "Sparse Properties -" << std::endl;
        std::cout << create_tab(tab) << "residencyStandard2DBlockShape            : " << sparseProperties.residencyStandard2DBlockShape << std::endl;
        std::cout << create_tab(tab) << "residencyStandard2DMultisampleBlockShape : " << sparseProperties.residencyStandard2DMultisampleBlockShape << std::endl;
        std::cout << create_tab(tab) << "residencyStandard3DBlockShape            : " << sparseProperties.residencyStandard3DBlockShape << std::endl;
        std::cout << create_tab(tab) << "residencyAlignedMipSize                  : " << sparseProperties.residencyAlignedMipSize << std::endl;
        std::cout << create_tab(tab--) << "residencyNonResidentStrict               : " << sparseProperties.residencyNonResidentStrict << std::endl;
        std::cout << std::endl;
        const auto& limits = properties.limits;
        std::cout << create_tab(tab++) << "Limits -" << std::endl;
        std::cout << create_tab(tab) << "maxImageDimension1D                            : " << limits.maxImageDimension1D << std::endl;
        std::cout << create_tab(tab) << "maxImageDimension2D                            : " << limits.maxImageDimension2D << std::endl;
        std::cout << create_tab(tab) << "maxImageDimension3D                            : " << limits.maxImageDimension3D << std::endl;
        std::cout << create_tab(tab) << "maxImageDimensionCube                          : " << limits.maxImageDimensionCube << std::endl;
        std::cout << create_tab(tab) << "maxImageArrayLayers                            : " << limits.maxImageArrayLayers << std::endl;
        std::cout << create_tab(tab) << "maxTexelBufferElements                         : " << limits.maxTexelBufferElements << std::endl;
        std::cout << create_tab(tab) << "maxUniformBufferRange                          : " << limits.maxUniformBufferRange << std::endl;
        std::cout << create_tab(tab) << "maxStorageBufferRange                          : " << limits.maxStorageBufferRange << std::endl;
        std::cout << create_tab(tab) << "maxPushConstantsSize                           : " << limits.maxPushConstantsSize << std::endl;
        std::cout << create_tab(tab) << "maxMemoryAllocationCount                       : " << limits.maxMemoryAllocationCount << std::endl;
        std::cout << create_tab(tab) << "maxSamplerAllocationCount                      : " << limits.maxSamplerAllocationCount << std::endl;
        std::cout << create_tab(tab) << "bufferImageGranularity                         : " << limits.bufferImageGranularity << std::endl;
        std::cout << create_tab(tab) << "sparseAddressSpaceSize                         : " << limits.sparseAddressSpaceSize << std::endl;
        std::cout << create_tab(tab) << "maxBoundDescriptorSets                         : " << limits.maxBoundDescriptorSets << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorSamplers                  : " << limits.maxPerStageDescriptorSamplers << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorUniformBuffers            : " << limits.maxPerStageDescriptorUniformBuffers << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorStorageBuffers            : " << limits.maxPerStageDescriptorStorageBuffers << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorSampledImages             : " << limits.maxPerStageDescriptorSampledImages << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorStorageImages             : " << limits.maxPerStageDescriptorStorageImages << std::endl;
        std::cout << create_tab(tab) << "maxPerStageDescriptorInputAttachments          : " << limits.maxPerStageDescriptorInputAttachments << std::endl;
        std::cout << create_tab(tab) << "maxPerStageResources                           : " << limits.maxPerStageResources << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetSamplers                       : " << limits.maxDescriptorSetSamplers << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetUniformBuffers                 : " << limits.maxDescriptorSetUniformBuffers << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetUniformBuffersDynamic          : " << limits.maxDescriptorSetUniformBuffersDynamic << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetStorageBuffers                 : " << limits.maxDescriptorSetStorageBuffers << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetStorageBuffersDynamic          : " << limits.maxDescriptorSetStorageBuffersDynamic << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetSampledImages                  : " << limits.maxDescriptorSetSampledImages << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetStorageImages                  : " << limits.maxDescriptorSetStorageImages << std::endl;
        std::cout << create_tab(tab) << "maxDescriptorSetInputAttachments               : " << limits.maxDescriptorSetInputAttachments << std::endl;
        std::cout << create_tab(tab) << "maxVertexInputAttributes                       : " << limits.maxVertexInputAttributes << std::endl;
        std::cout << create_tab(tab) << "maxVertexInputBindings                         : " << limits.maxVertexInputBindings << std::endl;
        std::cout << create_tab(tab) << "maxVertexInputAttributeOffset                  : " << limits.maxVertexInputAttributeOffset << std::endl;
        std::cout << create_tab(tab) << "maxVertexInputBindingStride                    : " << limits.maxVertexInputBindingStride << std::endl;
        std::cout << create_tab(tab) << "maxVertexOutputComponents                      : " << limits.maxVertexOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationGenerationLevel                 : " << limits.maxTessellationGenerationLevel << std::endl;
        std::cout << create_tab(tab) << "maxTessellationPatchSize                       : " << limits.maxTessellationPatchSize << std::endl;
        std::cout << create_tab(tab) << "maxTessellationControlPerVertexInputComponents : " << limits.maxTessellationControlPerVertexInputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationControlPerVertexOutputComponents: " << limits.maxTessellationControlPerVertexOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationControlPerPatchOutputComponents : " << limits.maxTessellationControlPerPatchOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationControlTotalOutputComponents    : " << limits.maxTessellationControlTotalOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationEvaluationInputComponents       : " << limits.maxTessellationEvaluationInputComponents << std::endl;
        std::cout << create_tab(tab) << "maxTessellationEvaluationOutputComponents      : " << limits.maxTessellationEvaluationOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxGeometryShaderInvocations                   : " << limits.maxGeometryShaderInvocations << std::endl;
        std::cout << create_tab(tab) << "maxGeometryInputComponents                     : " << limits.maxGeometryInputComponents << std::endl;
        std::cout << create_tab(tab) << "maxGeometryOutputComponents                    : " << limits.maxGeometryOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxGeometryOutputVertices                      : " << limits.maxGeometryOutputVertices << std::endl;
        std::cout << create_tab(tab) << "maxGeometryTotalOutputComponents               : " << limits.maxGeometryTotalOutputComponents << std::endl;
        std::cout << create_tab(tab) << "maxFragmentInputComponents                     : " << limits.maxFragmentInputComponents << std::endl;
        std::cout << create_tab(tab) << "maxFragmentOutputAttachments                   : " << limits.maxFragmentOutputAttachments << std::endl;
        std::cout << create_tab(tab) << "maxFragmentDualSrcAttachments                  : " << limits.maxFragmentDualSrcAttachments << std::endl;
        std::cout << create_tab(tab) << "maxFragmentCombinedOutputResources             : " << limits.maxFragmentCombinedOutputResources << std::endl;
        std::cout << create_tab(tab) << "maxComputeSharedMemorySize                     : " << limits.maxComputeSharedMemorySize << std::endl;
        std::cout << create_tab(tab) << "maxComputeWorkGroupCount[3]                    : " << array_to_string(limits.maxComputeWorkGroupCount, 3) << std::endl;
        std::cout << create_tab(tab) << "maxComputeWorkGroupInvocations                 : " << limits.maxComputeWorkGroupInvocations << std::endl;
        std::cout << create_tab(tab) << "maxComputeWorkGroupSize[3]                     : " << array_to_string(limits.maxComputeWorkGroupSize, 3) << std::endl;
        std::cout << create_tab(tab) << "subPixelPrecisionBits                          : " << limits.subPixelPrecisionBits << std::endl;
        std::cout << create_tab(tab) << "subTexelPrecisionBits                          : " << limits.subTexelPrecisionBits << std::endl;
        std::cout << create_tab(tab) << "mipmapPrecisionBits                            : " << limits.mipmapPrecisionBits << std::endl;
        std::cout << create_tab(tab) << "maxDrawIndexedIndexValue                       : " << limits.maxDrawIndexedIndexValue << std::endl;
        std::cout << create_tab(tab) << "maxDrawIndirectCount                           : " << limits.maxDrawIndirectCount << std::endl;
        std::cout << create_tab(tab) << "maxSamplerLodBias                              : " << limits.maxSamplerLodBias << std::endl;
        std::cout << create_tab(tab) << "maxSamplerAnisotropy                           : " << limits.maxSamplerAnisotropy << std::endl;
        std::cout << create_tab(tab) << "maxViewports                                   : " << limits.maxViewports << std::endl;
        std::cout << create_tab(tab) << "maxViewportDimensions[2]                       : " << array_to_string(limits.maxViewportDimensions, 2) << std::endl;
        std::cout << create_tab(tab) << "viewportBoundsRange[2]                         : " << array_to_string(limits.viewportBoundsRange, 2) << std::endl;
        std::cout << create_tab(tab) << "viewportSubPixelBits                           : " << limits.viewportSubPixelBits << std::endl;
        std::cout << create_tab(tab) << "minMemoryMapAlignment                          : " << limits.minMemoryMapAlignment << std::endl;
        std::cout << create_tab(tab) << "minTexelBufferOffsetAlignment                  : " << limits.minTexelBufferOffsetAlignment << std::endl;
        std::cout << create_tab(tab) << "minUniformBufferOffsetAlignment                : " << limits.minUniformBufferOffsetAlignment << std::endl;
        std::cout << create_tab(tab) << "minStorageBufferOffsetAlignment                : " << limits.minStorageBufferOffsetAlignment << std::endl;
        std::cout << create_tab(tab) << "minTexelOffset                                 : " << limits.minTexelOffset << std::endl;
        std::cout << create_tab(tab) << "maxTexelOffset                                 : " << limits.maxTexelOffset << std::endl;
        std::cout << create_tab(tab) << "minTexelGatherOffset                           : " << limits.minTexelGatherOffset << std::endl;
        std::cout << create_tab(tab) << "maxTexelGatherOffset                           : " << limits.maxTexelGatherOffset << std::endl;
        std::cout << create_tab(tab) << "minInterpolationOffset                         : " << limits.minInterpolationOffset << std::endl;
        std::cout << create_tab(tab) << "maxInterpolationOffset                         : " << limits.maxInterpolationOffset << std::endl;
        std::cout << create_tab(tab) << "subPixelInterpolationOffsetBits                : " << limits.subPixelInterpolationOffsetBits << std::endl;
        std::cout << create_tab(tab) << "maxFramebufferWidth                            : " << limits.maxFramebufferWidth << std::endl;
        std::cout << create_tab(tab) << "maxFramebufferHeight                           : " << limits.maxFramebufferHeight << std::endl;
        std::cout << create_tab(tab) << "maxFramebufferLayers                           : " << limits.maxFramebufferLayers << std::endl;
        std::cout << create_tab(tab) << "framebufferColorSampleCounts                   : " << sample_count_flags_to_string(limits.framebufferColorSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "framebufferDepthSampleCounts                   : " << sample_count_flags_to_string(limits.framebufferDepthSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "framebufferStencilSampleCounts                 : " << sample_count_flags_to_string(limits.framebufferStencilSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "framebufferNoAttachmentsSampleCounts           : " << sample_count_flags_to_string(limits.framebufferNoAttachmentsSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "maxColorAttachments                            : " << limits.maxColorAttachments << std::endl;
        std::cout << create_tab(tab) << "sampledImageColorSampleCounts                  : " << sample_count_flags_to_string(limits.sampledImageColorSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "sampledImageIntegerSampleCounts                : " << sample_count_flags_to_string(limits.sampledImageIntegerSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "sampledImageDepthSampleCounts                  : " << sample_count_flags_to_string(limits.sampledImageDepthSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "sampledImageStencilSampleCounts                : " << sample_count_flags_to_string(limits.sampledImageStencilSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "storageImageSampleCounts                       : " << sample_count_flags_to_string(limits.storageImageSampleCounts) << std::endl;
        std::cout << create_tab(tab) << "maxSampleMaskWords                             : " << limits.maxSampleMaskWords << std::endl;
        std::cout << create_tab(tab) << "timestampComputeAndGraphics                    : " << limits.timestampComputeAndGraphics << std::endl;
        std::cout << create_tab(tab) << "timestampPeriod                                : " << limits.timestampPeriod << std::endl;
        std::cout << create_tab(tab) << "maxClipDistances                               : " << limits.maxClipDistances << std::endl;
        std::cout << create_tab(tab) << "maxCullDistances                               : " << limits.maxCullDistances << std::endl;
        std::cout << create_tab(tab) << "maxCombinedClipAndCullDistances                : " << limits.maxCombinedClipAndCullDistances << std::endl;
        std::cout << create_tab(tab) << "discreteQueuePriorities                        : " << limits.discreteQueuePriorities << std::endl;
        std::cout << create_tab(tab) << "pointSizeRange[2]                              : " << array_to_string(limits.pointSizeRange, 2) << std::endl;
        std::cout << create_tab(tab) << "lineWidthRange[2]                              : " << array_to_string(limits.lineWidthRange, 2) << std::endl;
        std::cout << create_tab(tab) << "pointSizeGranularity                           : " << limits.pointSizeGranularity << std::endl;
        std::cout << create_tab(tab) << "lineWidthGranularity                           : " << limits.lineWidthGranularity << std::endl;
        std::cout << create_tab(tab) << "strictLines                                    : " << limits.strictLines << std::endl;
        std::cout << create_tab(tab) << "standardSampleLocations                        : " << limits.standardSampleLocations << std::endl;
        std::cout << create_tab(tab) << "optimalBufferCopyOffsetAlignment               : " << limits.optimalBufferCopyOffsetAlignment << std::endl;
        std::cout << create_tab(tab) << "optimalBufferCopyRowPitchAlignment             : " << limits.optimalBufferCopyRowPitchAlignment << std::endl;
        std::cout << create_tab(tab--) << "nonCoherentAtomSize                            : " << limits.nonCoherentAtomSize << std::endl;
        std::cout << std::endl;
        const auto& features = physicalDevice.get_features();
        std::cout << create_tab(tab++) << "Features -" << std::endl;
        std::cout << create_tab(tab) << "robustBufferAccess                      : " << features.robustBufferAccess << std::endl;
        std::cout << create_tab(tab) << "fullDrawIndexUint32                     : " << features.fullDrawIndexUint32 << std::endl;
        std::cout << create_tab(tab) << "imageCubeArray                          : " << features.imageCubeArray << std::endl;
        std::cout << create_tab(tab) << "independentBlend                        : " << features.independentBlend << std::endl;
        std::cout << create_tab(tab) << "geometryShader                          : " << features.geometryShader << std::endl;
        std::cout << create_tab(tab) << "tessellationShader                      : " << features.tessellationShader << std::endl;
        std::cout << create_tab(tab) << "sampleRateShading                       : " << features.sampleRateShading << std::endl;
        std::cout << create_tab(tab) << "dualSrcBlend                            : " << features.dualSrcBlend << std::endl;
        std::cout << create_tab(tab) << "logicOp                                 : " << features.logicOp << std::endl;
        std::cout << create_tab(tab) << "multiDrawIndirect                       : " << features.multiDrawIndirect << std::endl;
        std::cout << create_tab(tab) << "drawIndirectFirstInstance               : " << features.drawIndirectFirstInstance << std::endl;
        std::cout << create_tab(tab) << "depthClamp                              : " << features.depthClamp << std::endl;
        std::cout << create_tab(tab) << "depthBiasClamp                          : " << features.depthBiasClamp << std::endl;
        std::cout << create_tab(tab) << "fillModeNonSolid                        : " << features.fillModeNonSolid << std::endl;
        std::cout << create_tab(tab) << "depthBounds                             : " << features.depthBounds << std::endl;
        std::cout << create_tab(tab) << "wideLines                               : " << features.wideLines << std::endl;
        std::cout << create_tab(tab) << "largePoints                             : " << features.largePoints << std::endl;
        std::cout << create_tab(tab) << "alphaToOne                              : " << features.alphaToOne << std::endl;
        std::cout << create_tab(tab) << "multiViewport                           : " << features.multiViewport << std::endl;
        std::cout << create_tab(tab) << "samplerAnisotropy                       : " << features.samplerAnisotropy << std::endl;
        std::cout << create_tab(tab) << "textureCompressionETC2                  : " << features.textureCompressionETC2 << std::endl;
        std::cout << create_tab(tab) << "textureCompressionASTC_LDR              : " << features.textureCompressionASTC_LDR << std::endl;
        std::cout << create_tab(tab) << "textureCompressionBC                    : " << features.textureCompressionBC << std::endl;
        std::cout << create_tab(tab) << "occlusionQueryPrecise                   : " << features.occlusionQueryPrecise << std::endl;
        std::cout << create_tab(tab) << "pipelineStatisticsQuery                 : " << features.pipelineStatisticsQuery << std::endl;
        std::cout << create_tab(tab) << "vertexPipelineStoresAndAtomics          : " << features.vertexPipelineStoresAndAtomics << std::endl;
        std::cout << create_tab(tab) << "fragmentStoresAndAtomics                : " << features.fragmentStoresAndAtomics << std::endl;
        std::cout << create_tab(tab) << "shaderTessellationAndGeometryPointSize  : " << features.shaderTessellationAndGeometryPointSize << std::endl;
        std::cout << create_tab(tab) << "shaderImageGatherExtended               : " << features.shaderImageGatherExtended << std::endl;
        std::cout << create_tab(tab) << "shaderStorageImageExtendedFormats       : " << features.shaderStorageImageExtendedFormats << std::endl;
        std::cout << create_tab(tab) << "shaderStorageImageMultisample           : " << features.shaderStorageImageMultisample << std::endl;
        std::cout << create_tab(tab) << "shaderStorageImageReadWithoutFormat     : " << features.shaderStorageImageReadWithoutFormat << std::endl;
        std::cout << create_tab(tab) << "shaderStorageImageWriteWithoutFormat    : " << features.shaderStorageImageWriteWithoutFormat << std::endl;
        std::cout << create_tab(tab) << "shaderUniformBufferArrayDynamicIndexing : " << features.shaderUniformBufferArrayDynamicIndexing << std::endl;
        std::cout << create_tab(tab) << "shaderSampledImageArrayDynamicIndexing  : " << features.shaderSampledImageArrayDynamicIndexing << std::endl;
        std::cout << create_tab(tab) << "shaderStorageBufferArrayDynamicIndexing : " << features.shaderStorageBufferArrayDynamicIndexing << std::endl;
        std::cout << create_tab(tab) << "shaderStorageImageArrayDynamicIndexing  : " << features.shaderStorageImageArrayDynamicIndexing << std::endl;
        std::cout << create_tab(tab) << "shaderClipDistance                      : " << features.shaderClipDistance << std::endl;
        std::cout << create_tab(tab) << "shaderCullDistance                      : " << features.shaderCullDistance << std::endl;
        std::cout << create_tab(tab) << "shaderFloat64                           : " << features.shaderFloat64 << std::endl;
        std::cout << create_tab(tab) << "shaderInt64                             : " << features.shaderInt64 << std::endl;
        std::cout << create_tab(tab) << "shaderInt16                             : " << features.shaderInt16 << std::endl;
        std::cout << create_tab(tab) << "shaderResourceResidency                 : " << features.shaderResourceResidency << std::endl;
        std::cout << create_tab(tab) << "shaderResourceMinLod                    : " << features.shaderResourceMinLod << std::endl;
        std::cout << create_tab(tab) << "sparseBinding                           : " << features.sparseBinding << std::endl;
        std::cout << create_tab(tab) << "sparseResidencyBuffer                   : " << features.sparseResidencyBuffer << std::endl;
        std::cout << create_tab(tab) << "sparseResidencyImage2D                  : " << features.sparseResidencyImage2D << std::endl;
        std::cout << create_tab(tab) << "sparseResidencyImage3D                  : " << features.sparseResidencyImage3D << std::endl;
        std::cout << create_tab(tab) << "sparseResidency2Samples                 : " << features.sparseResidency2Samples << std::endl;
        std::cout << create_tab(tab) << "sparseResidency4Samples                 : " << features.sparseResidency4Samples << std::endl;
        std::cout << create_tab(tab) << "sparseResidency8Samples                 : " << features.sparseResidency8Samples << std::endl;
        std::cout << create_tab(tab) << "sparseResidency16Samples                : " << features.sparseResidency16Samples << std::endl;
        std::cout << create_tab(tab) << "sparseResidencyAliased                  : " << features.sparseResidencyAliased << std::endl;
        std::cout << create_tab(tab) << "variableMultisampleRate                 : " << features.variableMultisampleRate << std::endl;
        std::cout << create_tab(tab--) << "inheritedQueries                        : " << features.inheritedQueries << std::endl;
        std::cout << std::endl;
        const auto& memoryProperties = physicalDevice.get_memory_properties();
        std::cout << create_tab(tab++) << "Memory Properties -" << std::endl;
        std::cout << create_tab(tab++) << "memoryTypeCount : " << memoryProperties.memoryTypeCount << std::endl;
        for (uint32_t i = 0; i < memoryProperties.memoryTypeCount; ++i) {
            std::cout << create_tab(tab++) << "heapIndex : " << memoryProperties.memoryTypes[i].heapIndex << std::endl;
            auto flags = memoryProperties.memoryTypes[i].propertyFlags;
            if (flags) {
                std::cout << create_tab(tab++) << "propertyFlags -" << std::endl;
                if (flags & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)     std::cout << create_tab(tab) << "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT" << std::endl;
                if (flags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)     std::cout << create_tab(tab) << "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT" << std::endl;
                if (flags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)    std::cout << create_tab(tab) << "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT" << std::endl;
                if (flags & VK_MEMORY_PROPERTY_HOST_CACHED_BIT)      std::cout << create_tab(tab) << "VK_MEMORY_PROPERTY_HOST_CACHED_BIT" << std::endl;
                if (flags & VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT) std::cout << create_tab(tab) << "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT" << std::endl;
                --tab;
            }
            std::cout << std::endl;
            --tab;
        }
        --tab;
        std::cout << create_tab(tab++) << "memoryHeapCount : " << memoryProperties.memoryHeapCount << std::endl;
        for (size_t i = 0; i < memoryProperties.memoryHeapCount; ++i) {
            std::cout << create_tab(tab++) << "size : " << vk_device_size_to_string(memoryProperties.memoryHeaps[i].size) << std::endl;
            auto flags = memoryProperties.memoryHeaps[i].flags;
            if (flags) {
                std::cout << create_tab(tab++) << "flags -" << std::endl;
                if (flags & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT) std::cout << create_tab(tab) << "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT" << std::endl;
                if (flags & VK_MEMORY_HEAP_MULTI_INSTANCE_BIT) std::cout << create_tab(tab) << "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT" << std::endl;
                --tab;
            }
            std::cout << std::endl;
            --tab;
        }
        --tab;
        --tab;
    }
    return 0;
}
