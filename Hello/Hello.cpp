#include <iostream>
#include <string>

#define TAILLE_TEXT 50
#define TAILLE_VOYELLE 7

std::string SurName;
int Age;
std::string status = "vieux";

int main()
{
	//présentation
	std::cout << "Bonjour, quel est ton prenom et ton nom avec un espace" << std::endl;
	std::getline(std::cin, SurName);


	std::cout << "J'aimerais aussi savoir ton age" << std::endl;
	std::cin >> Age;

	if (Age < 25)
	{
		status = "jeune";
	}

	std::cout << "Bienvenu dans mon programe " << SurName << " tu as " << Age << " donc tu es " << status << " mais c'est pas pour etre mechant." << std::endl;

	std::cin.ignore();

}

