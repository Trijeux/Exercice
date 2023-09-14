#include <iostream>

#define WIDTH 4
#define HEIGHT 4

int plateau[WIDTH * HEIGHT] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
};

int coffre[WIDTH * HEIGHT] = {
        0, 0, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
};

void draw_game()
{
    for (int row = 0; row < HEIGHT; row++)
    {
        for (int column = 0; column < WIDTH; column++)
        {
            int case_state = plateau[row * WIDTH + column];

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

void Recherche()
{
    for (int row = 0; row < HEIGHT; row++)
    {
        for (int column = 0; column < WIDTH; column++)
        {
            int case_state = coffre[row * WIDTH + column];

            if (case_state == 0)
            {
                std::cout << '-';
            }
            else
            {
                std::cout << 'o';
            }
        }
        std::cout << '\n';

    }
}

int ligne()
{
    //ligne x
    int x;

    //colone y
    int y;
    
    std::cout << "ligne 1-4" << std::endl;
    std::cin >> x;
	
    std::cout << "colone 1-4" << std::endl;
    std::cin >> y;

    int result = (y-1) * WIDTH + (x-1);

    std::cout << result << std::endl;

    return result;
}

int main()
{
    bool(treasurefound) = false;

	do
	{

		draw_game();
        ligne();

    } while (treasurefound == false);

    return EXIT_SUCCESS;
}