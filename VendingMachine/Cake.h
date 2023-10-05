#pragma once
#include <string>

class Cake
{
	std::string Flavour;


public:
	Cake(std::string _flavour);

	std::string GetFlavour() { return Flavour; }
};

