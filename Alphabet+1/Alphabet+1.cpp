#include <iostream>

int main()
{
	std::string Word = "id rthr mtk dm dbqhstqd";
	int a = 0;

	for (char c : Word)
	{
		if (c == ' ')
		{
			std::cout << Word[a];
		}
		else
		{
			Word[a] = c + 1;
			std::cout << Word[a];
		}
		a++;
	}
}