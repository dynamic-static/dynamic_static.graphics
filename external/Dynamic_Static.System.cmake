# 
# dst_add_external_project(
#     target Dynamic_Static.System
#     URL https://github.com/DynamicStatic/Dynamic_Static.System/archive/master.zip
#     CMAKE_ARGS
#         -DBUILD_TESTS=OFF
#         -DBUILD_EXAMPLES=OFF
# )
# 
# include("${Dynamic_Static.System.buildDirectory}/Dynamic_Static.System.package.cmake")
# 
# get_target_property(
#     Dynamic_Static.System.includeDirectories
#     Dynamic_Static.System
#     INTERFACE_INCLUDE_DIRECTORIES
# )
# 
# get_target_property(
#     Dynamic_Static.System.linkLibraries
#     Dynamic_Static.System
#     INTERFACE_LINK_LIBRARIES
# )
# 
# if ("${Dynamic_Static.System.linkLibraries}" STREQUAL "Dynamic_Static.System.linkLibraries-NOTFOUND")
#     set(Dynamic_Static.System.linkLibraries "")
# endif()
# 
# if (MSVC)
#     set(Dynamic_Static.System.importedLocation
#         "${Dynamic_Static.System.buildDirectory}/$(Configuration)/Dynamic_Static.System.lib"
#     )
# else()
#     # TODO : Make sure this works generically for all build configurations...
#     get_target_property(
#         Dynamic_Static.System.importedLocation
#         Dynamic_Static.System
#         IMPORTED_LOCATION_NOCONFIG
#     )
# endif()
# 
# set(Dynamic_Static.System.linkLibraries
#     "${Dynamic_Static.System.linkLibraries}"
#     "${Dynamic_Static.System.importedLocation}"
# )
# 



#==========================================
#    Copyright 2011-2018 Dynamic_Static
#        Patrick Purcell
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

if(NOT TARGET Dynamic_Static.System)
    if(SDK_BUILD)
        set(Dynamic_Static.System.projectDirectory
            "$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.System/"
        )
    else()
        set(Dynamic_Static.System.projectDirectory
            "${CMAKE_CURRENT_LIST_DIR}/Dynamic_Static.System/"
        )
    endif()
    add_subdirectory(
        "${Dynamic_Static.System.projectDirectory}"
        "${CMAKE_BINARY_DIR}/external/Dynamic_Static.System/"
    )
endif()
