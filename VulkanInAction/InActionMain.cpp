#include "InActionMain.h"

void InActionMain::run()
{	
	LveWindow window{800, 600, "Hello!"};
	while(!window.shouldClose())
	{
		glfwPollEvents();
	}
}