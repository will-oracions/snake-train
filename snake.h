#include <stdio.h>
#include <stdlib.h>

#define SNAKE_SIZE 3

#define TAILLE_LIGNE 20

#define TAILLE_COLONNE 20

#define HEAD_X 10

#define HEAD_Y 10

    /*-----------------------------*/

    typedef enum
    {
        false,
        true
}Bool;

/*-----------------------------*/


/*-----------------------------*/

typedef struct Snake_Info
{
	int x;
	int y;

	struct Snake_Info *next;

}Snake_Info,*Snake;

/*-----------------------------*/


/*-----------------------------*/
typedef struct Fruits Fruitz;
struct Fruits
{
	int x;
	int y;
}*Frt;


/*-----------------------------*/

/*----------------------------Prototype fruitz.c--------------------------*/
int random_pos(void);
Fruitz spawn_fruitz(Fruitz fruit, int map[][TAILLE_COLONNE]);
/*------------------------------------------------------------------------*/


/*--------------------------Prototype map.c-------------------------------*/
void init_map(int map[][TAILLE_COLONNE]);
void display_map(int map[][TAILLE_COLONNE]);
Bool check_snake_pos(Snake snake, int map[][TAILLE_COLONNE]);

/*------------------------------------------------------------------------*/

/*---------------------------Prototype snake-body.c-----------------------*/

void insert_snake(int map[][TAILLE_COLONNE], Snake snake_element);
Snake new_snake(void);
Snake setup_head(void);
Snake setup_body(Snake snake_element);
void check_snake(Snake snak);



/*------------------------------------------------------------------------*/

