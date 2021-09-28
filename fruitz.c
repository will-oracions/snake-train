#include "snake.h"


/*get a random number between 1 and map size*/

int random_pos(void)
{
    srand(time(NULL));
    int rand;
    rand = 1 + rand()*(TAILLE_LIGNE-1)/RAND_MAX;
    return rand;
        
}

void spawn_fruitz(int map[][TAILLE_LIGNE])
{
    int coord_x;
    int coord_y;
    coord_x = random_pos();
    coord_y = random_pos();
    if (map[coord_x][coord_y] == 0)
    {
        map[coord_x][coord_y] = 6;
    }
    else 
    {
        while (map[coord_x][coord_y]!=0)
        {
            coord_x = random_pos();
            coord_y = random_pos();
        }
        map[coord_x][coord_y] = 6;
    }

}

