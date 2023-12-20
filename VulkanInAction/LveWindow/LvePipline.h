#include <string>
#include <vector>

#include "LveDevice.h"

struct PiplineConfigInfo
{

};

class LvePipline
{
public:
    LvePipline(const std::string &vertFilepath, const std::string &fragFilePath, const PiplineConfigInfo &configInfo);

private:
    static std::vector<char> readFile(const std::string &filePath);

    void createGraphicsPipline(const std::string &vertFilepath, const std::string &fragFilepath, const PiplineConfigInfo &configInfo);

    LveDevice& lveDevice;
    VkPipeline graphicsPipline;
    VkShaderModule vertShaderModule;
    VkShaderModule fragShaderModule;
};