#include <iostream>
#include <thread>

#define Studente 12

int main()
{
	const char* Names[Studente] =
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

	for (int i = 0; i < Studente; ++i)
	{
		srand(time(0));
		int idxRandom = rand() % 10;

		std::cout << "Name: " << Names[idxRandom] << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}


	/*for (int a = 0; a < 12; a++)
	{
		std::cout << "Name: " << Names[a] << std::endl;
	}*/

	std::cin.ignore();

	return EXIT_SUCCESS;
}