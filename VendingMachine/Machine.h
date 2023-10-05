#pragma once
#include <vector>

#include "Cake.h"

class Machine
{
	std::vector<Cake> Cakes;
	std::string Name;
	int NbCan;
	int NbMoney;

public:
	Machine(std::string _name, int _nbCan, int _nbmoney);
	~Machine();


	void Display();

	int getNbCakes() { return Cakes.size(); }

	void ReffilleCakes(int _nbCake, std::string _flavour);
	void TakeCakes(int _nbcake, std::string _flavour);
};
