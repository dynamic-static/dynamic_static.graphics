
dst_add_external_project(
    target Dynamic_Static.System
    URL https://github.com/DynamicStatic/Dynamic_Static.System/archive/master.zip
    CMAKE_ARGS
        -DBUILD_TESTS=OFF
        -DBUILD_EXAMPLES=OFF
)

include("${Dynamic_Static.System.buildDirectory}/Dynamic_Static.System.package.cmake")

get_target_property(
    Dynamic_Static.System.includeDirectories
    Dynamic_Static.System
    INTERFACE_INCLUDE_DIRECTORIES
)

get_target_property(
    Dynamic_Static.System.linkLibraries
    Dynamic_Static.System
    INTERFACE_LINK_LIBRARIES
)

if ("${Dynamic_Static.System.linkLibraries}" STREQUAL "Dynamic_Static.System.linkLibraries-NOTFOUND")
    set(Dynamic_Static.System.linkLibraries "")
endif()

if (MSVC)
    set(Dynamic_Static.System.importedLocation
        "${Dynamic_Static.System.buildDirectory}/$(Configuration)/Dynamic_Static.System.lib"
    )
else()
    # TODO : Make sure this works generically for all build configurations...
    get_target_property(
        Dynamic_Static.System.importedLocation
        Dynamic_Static.System
        IMPORTED_LOCATION_NOCONFIG
    )
endif()

set(Dynamic_Static.System.linkLibraries
    "${Dynamic_Static.System.linkLibraries}"
    "${Dynamic_Static.System.importedLocation}"
)
