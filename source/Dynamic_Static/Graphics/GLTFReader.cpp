
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#include "Dynamic_Static/Graphics/GLTFReader.hpp"

#include "nlohmann/json.hpp"
using json = nlohmann::json;

#include <fstream>
#include <functional>
#include <vector>

#include <iostream>

namespace Dynamic_Static {
namespace Graphics {

    GLTFCache GLTFReader::read_file(const std::string& filePath)
    {
        std::ifstream file(filePath);
        json gltf;
        file >> gltf;
        //std::ofstream outFile(filePath + ".out");
        // std::cout << std::setw(4) << gltf;
        //outFile << std::setw(2) << gltf;

        auto asset = gltf.find("asset");

        std::vector<GLTFCache::Buffer> buffers;
        if (gltf.find("buffers") != gltf.end()) {
            for (auto& element : gltf.at("buffers")) {
                GLTFCache::Buffer buffer;
                buffer.byteLength = element.value<size_t>("byteLength", 0);
                buffer.uri        = element.value<std::string>("uri", std::string());
                buffers.push_back(buffer);
            }
        }

        std::vector<GLTFCache::BufferView> bufferViews;
        if (gltf.find("buffers") != gltf.end()) {
            for (auto& element : gltf.at("bufferViews")) {
                GLTFCache::BufferView bufferView;
                bufferView.buffer     = element.value<size_t>("buffer",     0);
                bufferView.byteLength = element.value<size_t>("byteLength", 0);
                bufferView.byteOffset = element.value<size_t>("byteOffset", 0);
                bufferView.byteStride = element.value<size_t>("byteStride", 0);
                bufferView.target     = element.value<size_t>("target ",    0);
                std::string name      = element.value<std::string>("name", std::string());
                bufferViews.push_back(bufferView);
            }
        }

        // auto accessors = gltf.at("accessors");
        // 
        // auto meshes = gltf.at("meshes");
        // 
        // auto nodes = gltf.at("nodes");
        // 
        // auto scenes = gltf.at("scenes");
        // 
        // auto scene = gltf.at("scene");
        // 
        // auto materials = gltf.at("materials");
        // 
        // auto images = gltf.at("images");
        // 
        // auto textures = gltf.at("textures");
        // 
        // auto shaders = gltf.at("shaders");
        // 
        // auto programs = gltf.at("programs");
        // 
        // auto techniques = gltf.at("techniques");
        // 
        // auto animations = gltf.at("animations");
        // 
        // auto samplers = gltf.at("samplers");


        int breaker = 0;

        return GLTFCache();
    }

} // namespace Graphics
} // namespace Dynamic_Static
