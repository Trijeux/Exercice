#include <iostream>

int main()
{
	const char* names[13] = 
	{
		"Elias",
		"Seb",
		"Sebatien",
		"Linus",
		"Maxence",
		"Maxime",
		"Adelina",
		"Jayson",
		"Matthieu",
		"Anthony",
		"Antoine",
		"Thomas",
	};


	for (int a = 0; a < 12; a++)
	{
		std::cout << "Name: " << names[a] << std::endl;
	}

	return EXIT_SUCCESS;
}