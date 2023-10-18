#include <iostream>
#include "Cake.h"
#include "Machine.h"

int main()
{
	bool Test1 = 0;
	bool Test2 = 1;
	do
	{
		do
		{
			Machine machineCantine("Cantine",25, 100);

			machineCantine.Display();

			machineCantine.ReffilleCakes(5, "Choco");
			machineCantine.ReffilleCakes(5, "Vanille");

			machineCantine.Display();

			machineCantine.TakeCakes(2, "Choco");
			machineCantine.TakeCakes(1, "Vanille");
	

			machineCantine.Display();
		}
		while (Test1);
		char Test;
		std::cout << "Veux tu recomencer" << std::endl;
		std::cin >> Test;
		if (Test == 'n')
		{
			Test2 = 0;
		}
	}
	while (Test2);
	std::cin.ignore();
}