
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/model.hpp"

#if 0
#define TINYGLTF_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "tinygltf/tiny_gltf.h"
#endif

#include <iostream>
#include <string>

namespace dst {
namespace vk {

void Model::reset()
{
    *this = { };
}

void Model::load(const std::filesystem::path& filePath, Model* pModel)
{
    #if 0
    if (pModel) {
        pModel->reset();
        tinygltf::Model tinygltfModel;
        tinygltf::TinyGLTF loader;
        std::string err;
        std::string warn;
        bool success = false;
        if (filePath.extension() == ".bin") {
            success = loader.LoadBinaryFromFile(&tinygltfModel, &err, &warn, filePath.string());
        } else
        if (filePath.extension() == ".gltf") {
            success = loader.LoadASCIIFromFile(&tinygltfModel, &err, &warn, filePath.string());
        }
        if (!warn.empty()) {
            std::cout << "Warning loading glTF : " << filePath << '\n';
            std::cout << "    " << warn << '\n';
        }
        if (!err.empty()) {
            std::cout << "Error loading glTF : " << filePath << '\n';
            std::cout << "    " << err << '\n';
        }
        if (!success) {
            std::cout << "Failed to load glTF : " << filePath << '\n';
        }
        assert(warn.empty() && err.empty() && success && "TODO : Error handling");
        int b = 0;
    }
    #endif
}

} // namespace vk
} // namespace dst
