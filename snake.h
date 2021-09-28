#include <stdio.h>
#include <stdlib.h>


#define TAILLE_LIGNE 20

#define TAILLE_COLONNE 20

#define HEAD_X 10

#define HEAD_Y 10

/*----------------------------Prototype fruitz.c--------------------------*/
int random_pos(void);
void spawn_fruitz(int map[][TAILLE_LIGNE]);
/*------------------------------------------------------------------------*/


void init_map(int map[][TAILLE_LIGNE]);
void display_map(int map[][TAILLE_LIGNE]);


