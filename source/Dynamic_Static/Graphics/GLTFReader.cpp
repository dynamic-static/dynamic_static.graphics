
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/GLTFReader.hpp"
#include "Dynamic_Static/Core/FileSystem.hpp"

#include "external/json.hpp"

#include <fstream>
#include <functional>
#include <vector>

#include <iostream>

namespace Dynamic_Static {
    namespace Graphics {

        GLTFCache GLTFReader::read_file(const std::string& filePath)
        {
        //     using json = nlohmann::json;
        // 
        //     std::ifstream file(filePath);
        //     json gltf;
        //     file >> gltf;
        // 
        //     std::string rootPath = dst::Path::directory_name(filePath);
        // 
        //     auto asset = gltf.find("asset");
        //     
        // 
        //     std::vector<GLTFCache::Buffer> buffers;
        //     if (gltf.find("buffers") != gltf.end()) {
        //         for (auto& element : gltf.at("buffers")) {
        //             GLTFCache::Buffer buffer;
        //             auto byteLength = element.value<size_t>("byteLength", 0);
        //             auto uri = element.value<std::string>("uri", std::string());
        //             GLTFCache::Buffer buffer(byteLength);
        //             std::ifstream binary(dst::Path::combine(rootPath, uri), std::ios::binary);
        //             binary.read(reinterpret_cast<char*>(buffer.data()), buffer.size());
        //             buffers.push_back(buffer);
        //         }
        //     }
        // 
        //     std::vector<GLTFCache::BufferView> bufferViews;
        //     if (gltf.find("bufferViews") != gltf.end()) {
        //         for (auto& element : gltf.at("bufferViews")) {
        //             auto stride = element.value<size_t>("byteStride", 0);
        //             auto target     = element.value<size_t>("target",     0);
        //             std::string name = element.value<std::string>("name", std::string());
        // 
        //             uint8_t* buffer = buffers[element.value<size_t>("buffer", 0)].data;
        //             auto bytes = gsl::span<uint8_t>(
        //                 buffer + element.value<size_t>("byteOffset", 0),
        //                          element.value<size_t>("byteLength", 0)
        //             );
        // 
        //             // bufferViews.push_back(bufferView);
        //         }
        //     }
        // 
        //     // auto accessors = gltf.at("accessors");
        //     // 
        //     // auto meshes = gltf.at("meshes");
        //     // 
        //     // auto nodes = gltf.at("nodes");
        //     // 
        //     // auto scenes = gltf.at("scenes");
        //     // 
        //     // auto scene = gltf.at("scene");
        //     // 
        //     // auto materials = gltf.at("materials");
        //     // 
        //     // auto images = gltf.at("images");
        //     // 
        //     // auto textures = gltf.at("textures");
        //     // 
        //     // auto shaders = gltf.at("shaders");
        //     // 
        //     // auto programs = gltf.at("programs");
        //     // 
        //     // auto techniques = gltf.at("techniques");
        //     // 
        //     // auto animations = gltf.at("animations");
        //     // 
        //     // auto samplers = gltf.at("samplers");
        // 
            return GLTFCache();
        }

    } // namespace Graphics
} // namespace Dynamic_Static
#endif
