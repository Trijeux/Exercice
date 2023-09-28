#include <iostream>

int main()
{
	std::string SurName = "anthony barman";

	const std::string Vowel = "aeiouy";
	int NbVowel = 0;

	for (char c : SurName)
	{
		if (Vowel.find(tolower(c)) != std::string::npos)
		{
			NbVowel++;
		}
	}
	std::cout << SurName << " : " << std::endl;

	std::cout << "Il y a " << NbVowel << " voyelle dans ton nom" << std::endl;

	std::cin.ignore();

	return 0;
}
