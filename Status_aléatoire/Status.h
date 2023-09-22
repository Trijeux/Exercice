#pragma once
#include <iostream>

enum Status
{
	None,
	Poisoned,
	Burned,
	Tired,
	Sleeping
};

void DisplayStatus(Status s)
{
	switch (s)
	{
	case Status::None:
		std::cout << "J'ai rien" << std::endl;
		break;
	case Status::Poisoned:
		std::cout << "Je suis Empoisonner" << std::endl;
		break;
	case Status::Burned:
		std::cout << "Je brule" << std::endl;
		break;
	case Status::Tired:
		std::cout << "Je suis fatiger" << std::endl;
		break;
	case Status::Sleeping:
		std::cout << "ZZZZZZZZZZZZ" << std::endl;
		break;
	default:
		break;
	}
}