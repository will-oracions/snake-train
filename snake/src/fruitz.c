#include "snake.h"


/*get a random number between 1 and map size*/

int random_pos(void)
{
    int random;
    random = 1 + rand() % (18); 
    return random;
        
}

/*insert fruit in the map at an empty positon*/

Fruitz spawn_fruitz(Fruitz fruit, int map[][TAILLE_LIGNE])
{
    fruit.x = random_pos();
    fruit.y = random_pos();


    if (map[fruit.y][fruit.x] == 0)
    {
        map[fruit.y][fruit.x] = 6;
        
    }
    else 
    {
        while (map[fruit.y][fruit.x]!=0)
        {
            fruit.x = random_pos();
            fruit.y = random_pos();
        }
        map[fruit.y][fruit.x] = 6;
    }
    return fruit;
}

