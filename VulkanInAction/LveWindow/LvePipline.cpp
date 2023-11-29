#include "LvePipline.h"
#include <fstream>
#include <stdexcept>
#include <iostream>

LvePipline::LvePipline(const std::string& vertFilepath, const std::string& fragFilePath)
{
    createGraphicsPipline(vertFilepath, fragFilePath);
}

std::vector<char> LvePipline::readFile(const std::string& filePath)
{
    std::ifstream file{filePath, std::ios::ate | std::ios::binary};
    if(!file.is_open())
    {
        throw std::runtime_error("failed to open file: " + filePath);
    }
    size_t fileSize = static_cast<size_t>(file.tellg());
    std::vector<char> buffer(fileSize);

    file.seekg(0);
    file.read(buffer.data(), fileSize);

    file.close();
    return buffer;
}

void LvePipline::createGraphicsPipline(const std::string& vertFilepath, const std::string& fragFilepath)
{
    auto vertCode = readFile(vertFilepath);
    auto fragCode = readFile(fragFilepath);

    std::cout << "vertcode size is: " << vertCode.size() << std::endl;
    std::cout << "fragcode size is: " << fragCode.size() << std::endl;
}
