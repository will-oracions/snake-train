#include "snake.h"

/*Create Border*/

void init_map(int map[][TAILLE_LIGNE])
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (i <= TAILLE_COLONNE)
    {
        j = 0;
        while (j <= TAILLE_LIGNE)
        {
            if (i == 0)
            {
                map[i][j] = 1;
            }
            if (i == TAILLE_COLONNE)
            {
                map[i][j] = 1;
            }           
            if (j == 0)
            {
                map[i][j] = 1;
            }
            if (j == TAILLE_LIGNE)
            {
                map[i][j] = 1;
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
    while (i <= TAILLE_COLONNE)
    {
        j = 0;
        while (j <= TAILLE_LIGNE)
        {
            printf("%i", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

