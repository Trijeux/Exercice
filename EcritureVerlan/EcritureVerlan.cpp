#include <iostream>

int main()
{

    std::string Word = "erutirce ne lun sius eJ";
    int a = Word.length();

    for (int i = 0; i < Word.length() + 1; ++i)
    {
        std::cout << Word[a];
        --a;
    }
}
