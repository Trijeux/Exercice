#include <iostream>

int main()
{
	std::string surname = "anthony barman";
	int m = 1;

	//mettre en majuscule la première lettre
	for (char c : surname)
	{
		if (m == 1)
		{
			m = 0;
			surname[c] = std::toupper(surname[c]);
		}
		if (c == ' ')
		{
			m = 1;
		}
	}
	std::cout << surname << std::endl;
}

