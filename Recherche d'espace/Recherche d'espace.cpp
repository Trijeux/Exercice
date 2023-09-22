#include <iostream>

int main()
{
	std::string surname = "anthony barman";
	int m = 1;
	int a = 0;

	//mettre en majuscule la première lettre
	for (char c : surname)
	{
		if (m == 1)
		{
			m = 0;
			surname[a] = std::toupper(surname[a]);
		}
		if (c == ' ')
		{
			m = 1;
		}
		a++;
	}
	std::cout << surname << std::endl;
}

