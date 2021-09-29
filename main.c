#include "snake.h"

int main(void)
{
     
    int map[TAILLE_COLONNE][TAILLE_LIGNE] = {0};
    int over_or_not;
    init_map(map);
    // Snake snake = new_snake();
    // Snake head = init_snake(snake);
    // over_or_not = check_snake_pos(head, map); 
    Fruitz fruit = spawn_fruitz(fruit, map);
    display_map(map);
    if (over_or_not == 1)
    {
        //Affichage
        printf("Game Over");
    }
    return 0;
}
    
    

