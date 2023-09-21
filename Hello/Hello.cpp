#include <cctype>
#include <iostream>
#include <string>

#define TAILLE_TEXT 50
#define TAILLE_VOYELLE 7

std::string surname;
int age;
std::string status = "vieux";
bool m = 1;
const std::string space = " ";

int main()
{
	//présentation
	std::cout << "Bonjour, quel est ton prenom et ton nom avec un espace" << std::endl;
	std::getline(std::cin, surname);


	std::cout << "J'aimerais aussi savoir ton age" << std::endl;
	std::cin >> age;

	if (age < 25)
	{
		status = "jeune";
	}

	std::cout << "Bienvenu dans mon programe " << surname << " tu as " << age << " donc tu es " << status << " mais c'est pas pour etre mechant." << std::endl;

}

