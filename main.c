#include "snake.h"

int main(void)
{
     
    int map[TAILLE_COLONNE][TAILLE_LIGNE] = {0};
    init_map(map);
    Fruitz fruit = spawn_fruitz(fruit, map);
    display_map(map);
    return 0;
}
    
    

