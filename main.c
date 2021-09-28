#include "snake.h"
void init_map(int map[][TAILLE_LIGNE]);
void display_map(int map[][TAILLE_LIGNE]);
int main(void)
{
    int map[TAILLE_COLONNE][TAILLE_LIGNE] = {0};
    init_map(map);
    display_map(map); 
    return 0;
}
    
    

