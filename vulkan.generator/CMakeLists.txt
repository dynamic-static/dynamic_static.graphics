
# dynamic_static.graphics.vulkan.generator
set(generatorSourcePath "${CMAKE_CURRENT_LIST_DIR}/source/")
set(generatedIncludeDirectory "${CMAKE_CURRENT_BINARY_DIR}/generated/include/")
set(generatedIncludePath "${generatedIncludeDirectory}/dynamic_static/graphics/vulkan/")
set(generatedSourcePath "${CMAKE_CURRENT_BINARY_DIR}/generated/source/dynamic_static/graphics/vulkan/")
set(generatedIncludeFiles
    "${generatedIncludePath}/create-structure-copy.hpp"
    # "${generatedIncludePath}/destroy-structure-copy.hpp"
    # "${generatedIncludePath}/managed-handles.hpp"
)
set(generatedSourceFiles
    "${generatedSourcePath}/create-structure-copy.cpp"
    # "${generatedSourcePath}/destroy-structure-copy.cpp"
    # "${generatedSourcePath}/managed-handles.cpp"
)
DstAddGenerator(
    target dynamic_static.graphics.vulkan.generator
    folder dynamic_static.graphics
    linkLibraries dynamic_static.vk-xml-parser
    sourceFiles
        "${generatorSourcePath}/create-structure-copy-generator.hpp"
        "${generatorSourcePath}/destroy-structure-copy-generator.hpp"
        "${generatorSourcePath}/managed-handles-generator.hpp"
        "${generatorSourcePath}main.cpp"
    generatedFiles
        "${generatedIncludeFiles}"
        "${generatedSourceFiles}"
)
# TODO : Get rid of the need for transforming the genereated file lists...
list(TRANSFORM generatedIncludeFiles PREPEND "${CMAKE_CURRENT_BINARY_DIR}/")
list(TRANSFORM generatedSourceFiles PREPEND "${CMAKE_CURRENT_BINARY_DIR}/")
set(generatedIncludeFiles ${generatedIncludeFiles} PARENT_SCOPE)
set(generatedSourceFiles ${generatedSourceFiles} PARENT_SCOPE)
