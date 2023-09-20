#include <iostream>
#include <random>

#define WIDTH 4
#define HEIGHT 4

//Tableau
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

int affichage_plateau[WIDTH * HEIGHT] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
};

//Dessin
void draw_game()
{
    for (int row = 0; row < HEIGHT; row++)
    {
        for (int column = 0; column < WIDTH; column++)
        {
            int case_state = affichage_plateau[row * WIDTH + column];
            if (case_state == 0)
            {
                std::cout << '-';
            }
            else if (case_state == 1)
            {
                std::cout << 'x';
            }
            else
            {
                std::cout << 'o';
            }
        }
        std::cout << '\n';
    }
}

////random
//void random()
//{
//   std::default_random_engine //nom variable
//}

//Cordonner
int ligne()
{
    //ligne x
    unsigned int x;

    //colonne y
    unsigned int y;
       
    std::cout << "ligne 1-4" << std::endl;
    std::cin >> x;
    if(x > 4) x = 4;
    
    std::cout << "colonne 1-4" << std::endl;
    std::cin >> y;
    if (y > 4) y = 4;

    return (x - 1) * WIDTH + (y - 1);
}

//Condition de Victoire
bool compar(int result)
{
    if (plateau[result] != coffre[result])
    {
        affichage_plateau[result] = 2;
        return true;
    }
	affichage_plateau[result] = 1;
    return false;

}

//Jeux
int main()
{
    bool(treasurefound);
    draw_game();
    do
    {
        treasurefound = compar(ligne());
        draw_game();
    }
	while (treasurefound == false);

    std::cout << "Tu as trouver le coffre" << std::endl;

    return EXIT_SUCCESS;
}