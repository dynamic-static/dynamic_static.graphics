
# CMake configuration for Dynamic_Static.Core/Tests

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_PATH ${SOURCE_DIRECTORY}Dynamic_Static/Core/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Main.cpp
    ${SOURCE_PATH}/Events.Tests.cpp
    ${SOURCE_PATH}/Events.Tests.inl
    ${SOURCE_PATH}/FileSystem/Path.Tests.cpp
    ${SOURCE_PATH}/Random.Tests.cpp
    ${SOURCE_PATH}/StringUtilities.Tests.cpp
    ${SOURCE_PATH}/Threads/Semaphore.Tests.cpp
    ${SOURCE_PATH}/Threads/ThreadPool.Tests.cpp
    ${SOURCE_PATH}/Threads/Worker.Tests.cpp
    ${SOURCE_PATH}/ToString.Tests.cpp
    ${SOURCE_PATH}/VectorUtilities.Tests.cpp
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY}
)

add_executable(
    Dynamic_Static.Core.Tests
    ${SOURCE_FILES}
)

target_link_libraries(
    Dynamic_Static.Core.Tests
    Dynamic_Static.Core
    ${DYNAMIC_STATIC_CORE_DEPENDENCIES}
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
