// Libraries
#include <iostream>
#include "operation.h"
char operation;
char virgule;


int main()
{
	std::cout << "Je suis la calculatrice inteligente!" "\n" "Est ce que le nombre est a virgule ou pour faire un racine carre (si non une divition sera arrondi)" "\n" "Oui = y Non = n" "\n";
	std::cin >> virgule;



	if (virgule == 'n')
	{
		// definition des nombre
		std::cout << "Veillez choisire votre 1er nombre" "\n";

		int a;
		std::cin >> a;

		std::cout << "Veillez choisire votre 2eme nombre" "\n";

		int b;
		std::cin >> b;

		// Choix de l'operation
		std::cout << "veiller choisir l'operation entre +, -, *, /" "\n";
		std::cin >> operation;

		// resulta
		if (operation == '+')
		{
			std::cout << "Voici le resulta" "\n";
			std::cout << add(a, b) << std::endl;
		}
		else if (operation == '-')
		{
			std::cout << "Voici le resulta" "\n";
			std::cout << sub(a, b) << std::endl;
		}
		else if (operation == '*')
		{
			std::cout << "Voici le resulta" "\n";
			std::cout << mult(a, b) << std::endl;
		}
		else if (operation == '/')
		{
			if (b == 0)
			{
				std::cout << "Vous etes un monstre vous avez esseye de me tuer" "\n";
			}
			else
			{
				std::cout << "Voici le resulta" "\n";
				std::cout << divi(a, b) << std::endl;
			}

		}
		else
		{
			std::cout << "Bug systeme extinction de de l'humanite" "\n";
		}
	}
	else if(virgule == 'y')
	{
		// definition des nombre
		std::cout << "Veillez choisire votre 1er nombre" "\n";

		float c;
		std::cin >> c;

		std::cout << "Veillez choisire votre 2eme nombre" "\n";

		float d;
		std::cin >> d;

		// Choix de l'operation
		std::cout << "veiller choisir l'operation entre +, -, *, / ou C pour la racine carre du 1er chiffre" "\n";
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
			std::cout << "Voici le resulta" "\n";
			std::cout << carre(c) << std::endl;
		}
		else
		{
			std::cout << "Bug systeme extinction de de l'humanite" "\n";
		}
	}
	else
	{
		std::cout << "Bug systeme extinction de de l'humanite" "\n";
	}

	return EXIT_SUCCESS;
}