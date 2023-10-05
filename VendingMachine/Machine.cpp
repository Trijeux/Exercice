#include "Machine.h"
#include <iostream>

Machine::Machine(std::string _name, int _nbCan, int _nbmoney) : Name(_name), NbCan(_nbCan), NbMoney(_nbmoney) {}


Machine::~Machine()
{
	std::cout << "La machine est detruite" << std::endl;
}


void Machine::Display()
{
	std::cout << "Dans la machine il y a " << NbCan << " canettes, " << NbMoney << "$ et " << Cakes.size() << " de gateau." << std::endl;
	std::cout << "Gout des gateau : " << std::endl;
	for (int n = 0; n < Cakes.size(); n++)
	{
		std::cout << Cakes[n].GetFlavour() << std::endl;
	}
}


void Machine::ReffilleCakes(int _nbCake, std::string _flavour)
{
	if (_nbCake > 0)
	{
		for (int n = 0; n < _nbCake; n++)
		{
			/*Cake genericeCake(_flavour);
			Cakes.push_back(genericeCake);*/

			Cakes.emplace_back(_flavour);
		}
	}
}

void Machine::TakeCakes(int _nbcake, std::string _flavour)
{
	int nbCakesDeleted = 0;

		for (std::vector<Cake>::iterator cake = Cakes.begin(); cake < Cakes.end();)
		{
			/*if(nbCakesDeleted >= _nbcake)
			{
				return;
			}*/

			if (nbCakesDeleted < _nbcake && _flavour == cake->GetFlavour())
			{
				cake = Cakes.erase(cake);
				nbCakesDeleted++;
			}
			else
			{
				cake++;
			}
		}
}