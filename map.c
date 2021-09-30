#include "snake.h"

/* Death of Snake */

int check_snake_pos(Snake snake,int map[][TAILLE_COLONNE])
{
    if (map[snake->x][snake->y] != 0 && map[snake->x][snake->y] != 6)
    {
        return 1;
    }
    return 0;
        
}

/*Create Border*/

void init_map(int map[][TAILLE_COLONNE])
{
    int i;
    int j;
    i = 0;
    while (i < TAILLE_LIGNE)
    {
        j = 0;
        while (j < TAILLE_COLONNE)
        {
            if (i == 0)
            {
                map[i][j] = 1;
            }
            else if (i == TAILLE_LIGNE - 1)
            {
                map[i][j] = 1;
            }           
            else if (j == 0)
            {
                map[i][j] = 1;
            }
            else if (j == TAILLE_COLONNE - 1)
            {
                map[i][j] = 1;
            }
            else 
            {
                map[i][j] = 0;
            }
            j++;
        }
        i++;
    }
}

/*Display map all element */

void display_map(int map[][TAILLE_LIGNE])
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (i < TAILLE_LIGNE)
    {
        j = 0;
        while (j < TAILLE_COLONNE)
        {
            printf("%i", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

