#include <iostream>
#include "Cake.h"
#include "Machine.h"

int main()
{
	Machine machineCantine("Cantine",25, 100);

	machineCantine.Display();

	machineCantine.ReffilleCakes(5, "Choco");
	machineCantine.ReffilleCakes(5, "Vanille");

	machineCantine.Display();

	machineCantine.TakeCakes(2, "Choco");
	machineCantine.TakeCakes(1, "Vanille");
	

	machineCantine.Display();

	std::cin.ignore();
}