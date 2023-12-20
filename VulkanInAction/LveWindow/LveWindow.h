#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"
#include <string>

class LveWindow{
public:
    LveWindow(int width, int height, std::string windowName);
    ~LveWindow();
    void initWindow();
    bool shouldClose();
    void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);
private:
    GLFWwindow *windowInstance;
    std::string windowName = "Hello Vulkan!";
    const int windowWidth = 800;
    const int windowHeight = 600;
};
