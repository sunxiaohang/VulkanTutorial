#include "InActionMain.h"

void InActionMain::run()
{	
	while(!window.shouldClose())
	{
		glfwPollEvents();
	}
}