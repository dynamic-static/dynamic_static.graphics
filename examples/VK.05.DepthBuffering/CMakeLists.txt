
# CMake configuration for Example.VK.05.DepthBuffering

set(INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(INCLUDE_FILES
)

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Main.cpp
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")

set(TARGET Example.VK.05.DepthBuffering)
add_executable(${TARGET} ${INCLUDE_FILES} ${SOURCE_FILES})
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET} Dynamic_Static.Graphics)
set_target_properties(${TARGET} PROPERTIES FOLDER Examples)
add_dependencies(${TARGET} Dynamic_Static.Graphics)
