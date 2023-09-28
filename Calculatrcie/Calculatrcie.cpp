// Libraries
#include <iostream>
#include "Operation.h"
char operation;


int main()
{
	std::cout << "Je suis la calculatrice inteligente!" << std::endl;

	
	// definition des nombre
	std::cout << "Veillez choisire votre 1er nombre" "\n";

	float c;
	std::cin >> c;

	std::cout << "Veillez choisire votre 2eme nombre" "\n";

	float d;
	std::cin >> d;

	// Choix de l'operation
	std::cout << "veiller choisir l'operation entre +, -, *, /, C pour la racine ou P pour la puissance" << std::endl;
	std::cin >> operation;

	// resulta
	if (operation == '+')
	{
		std::cout << "Voici le resulta" "\n";
		std::cout << add(c, d) << std::endl;
	}
	else if (operation == '-')
	{
		std::cout << "Voici le resulta" "\n";
		std::cout << sub(c, d) << std::endl;
	}
	else if (operation == '*')
	{
		std::cout << "Voici le resulta" "\n";
		std::cout << mult(c, d) << std::endl;
	}
	else if (operation == '/')
	{
		if (d == 0)
		{
			std::cout << "Vous etes un monstre vous avez esseye de me tuer" "\n";
		}
		else
		{
			std::cout << "Voici le resulta" "\n";
			std::cout << divi(c, d) << std::endl;
		}

	}
	else if (operation == 'C')
	{
		std::cout << "1er nombre = " << carrec(c) << std::endl;
		std::cout << "2eme nombre = " << carred(d) << std::endl;
	}
	else if (operation == 'P')
	{
		std::cout << pui(c, d);
	}
	else
	{
		std::cout << "Bug systeme extinction de l'humanite" "\n";
	}

	std::cin.ignore();

	return EXIT_SUCCESS;
}