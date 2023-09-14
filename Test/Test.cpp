#include <iostream>

int plateau[4 * 4] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
};

void draw_game()
{
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            int case_state = plateau[row * 4 + column];

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

int main()
{
    draw_game();
    plateau[0] = 1;
    draw_game();
}