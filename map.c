#include "snake.h"

/* Death of Snake */

Bool check_snake_pos(Snake snake, int map[][TAILLE_COLONNE])
{
    if (map[snake->y][snake->x] != 0 && map[snake->y][snake->x] != 6)
    {
        return true;
    }
    return false;
        
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

/* Initialise snake in the map */

void insert_snake(int map[][TAILLE_COLONNE], Snake snake_element)
{
    
    while (snake_element != NULL)
    {
        if (map[snake_element->y][snake_element->x] == 0)
        {
            map[snake_element->y][snake_element->x] = 3;
        }
        snake_element = snake_element->next;
        
    }
}
