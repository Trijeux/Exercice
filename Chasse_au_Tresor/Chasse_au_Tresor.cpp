#include <iostream>


char linge;

int cases[4 * 4] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
};

void draw_game()
{
    int a = 0;


    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            int case_state = cases[a++];

            if (case_state == 0)
            {
                std::cout << '-';
            }
            else
            {
                std::cout << 'x';
            }
        }
        std::cout << '\n';

    }
}

int ligne()
{
    //largeur w
    int w = 4;

    //ligne x
    int x;

    //colone y
    int y;

    std::cout << "ligne 1-4" << std::endl;
    std::cin >> x;
    std::cout << "colone 1-4" << std::endl;
    std::cin >> y;

    int result((y-1) * w + (x-1));

    std::cout << result << std::endl;

    return result;
}

int main()
{

    draw_game();
    ligne();

    return EXIT_SUCCESS;
}