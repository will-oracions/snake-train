#include "snake.h"


/*get a random number between 1 and map size*/

int random_pos(void)
{
    srand(time(NULL));
    int random;
    random = 1 + rand()*(TAILLE_LIGNE-1)/RAND_MAX;
    return random;
        
}

/*insert fruit in the map at a empty positon*/

Fruitz spawn_fruitz(Fruitz fruit, int map[][TAILLE_LIGNE])
{
    fruit.x = random_pos();
    fruit.y = random_pos();


    if (map[fruit.x][fruit.y] == 0)
    {
        map[fruit.x][fruit.y] = 6;
    }
    else 
    {
        while (map[coord_x][coord_y]!=0)
        {
            fruit.x = random_pos();
            fruit.y = random_pos();
        }
        map[fruit.x][fruit.y] = 6;
    }
    return fruit;
}

