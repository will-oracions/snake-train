#include "snake.h"



int main(void)
{
    int map[TAILLE_COLONNE][TAILLE_LIGNE] = {0};
    srand(time(0));
    Bool over;

    Snake snak;
    snak = setup_head();
    snak = setup_body(snak);

    init_map(map);
    over = check_snake_pos(snak, map); 
    insert_snake(map, snak);
    Fruitz fruit = spawn_fruitz(fruit, map);
    display_map(map);
    if (over)
        //Affichage
        printf("Game Over");
    return 0;
}
