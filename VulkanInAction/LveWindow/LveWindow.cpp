#include "LveWindow.h"

LveWindow::LveWindow(int w, int h, std::string name):windowWidth{w}, windowHeight{h}, windowName(name)
{
    initWindow();
}

void LveWindow::initWindow()
{
    glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	windowInstance = glfwCreateWindow(windowWidth, windowHeight, windowName.c_str(), nullptr, nullptr);
}

bool LveWindow::shouldClose()
{
    return glfwWindowShouldClose(windowInstance);
}

LveWindow::~LveWindow()
{
    glfwDestroyWindow(windowInstance);
	glfwTerminate();
}