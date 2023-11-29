#include "Framework.h"
#include <iostream>

int main() 
{
	Framework framework;

	try 
	{
		framework.run();
	}
	catch (const std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}