
# ==========================================
#   Copyright (c) 2018-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

find_package(Vulkan REQUIRED)
set(Vulkan.includeDirectories "${Vulkan_INCLUDE_DIRS}")
set(Vulkan.staticLibraries "${Vulkan_LIBRARIES}")
set(Vulkan.sdk.directory "${Vulkan.includeDirectories}/../")
