#include "InActionMain.h"
#include <iostream>

int main() 
{
	InActionMain inActionMain;

	try 
	{
		inActionMain.run();
	}
	catch (const std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}