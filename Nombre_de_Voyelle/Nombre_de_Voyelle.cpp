#include <iostream>

int main()
{
	std::string surname = "anthony barman";

	const std::string vowels = "aeiouy";
	int nbvowels = 0;

	for (char c : surname)
	{
		if (vowels.find(tolower(c)) != std::string::npos)
		{
			nbvowels++;
		}
	}
	std::cout << "Il y a " << nbvowels << " voyelle dans ton nom" << std::endl;

	std::cin.ignore();

	return 0;
}
