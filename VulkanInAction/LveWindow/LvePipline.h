#include <string>
#include <vector>

class LvePipline{
public:
    LvePipline(const std::string& vertFilepath, const std::string& fragFilePath);
private:
    static std::vector<char> readFile(const std::string& filePath);

    void createGraphicsPipline(const std::string& vertFilepath, const std::string& fragFilepath); 
};