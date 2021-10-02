#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>

//gcc src/*.c -o bin/prog -I include -L lib -l SDL2
#ifndef __SNAKE__H__
#define __SNAKE__H__
	
        #define PY 800

        #define PX 800

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

	typedef struct Snake_Mooves
	{
		Bool up; // = 1
		Bool down;// = 2
		Bool right;// = 3
		Bool left;// = 4

	}Snake_Mooves, *Snake_M;
	
	
	/*-----------------------------*/
	typedef struct Snake_Info
	{
		int x;
		int y;
	
		struct Snake_Info *next;
	
	}Snake_Info, *Snake;
	/*-----------------------------*/
	
	/*-----------------------------*/

	typedef struct Fruits Fruitz;
	struct Fruits
        {
        	int x;
		int y;
	};

	/*----------------------------Prototype fruitz.c--------------------------*/
	int random_pos(void);
	Fruitz spawn_fruitz(Fruitz fruit, int map[][TAILLE_LIGNE]);
	/*------------------------------------------------------------------------*/
	
	
	/*--------------------------Prototype map.c-------------------------------*/
   
	void init_map(int map[][TAILLE_COLONNE]);
	void display_map(int map[][TAILLE_COLONNE]);
	Bool check_snake_pos(Snake snake, int map[][TAILLE_COLONNE]);
	void insert_snake(int map[][TAILLE_COLONNE], Snake snake_element);
		
	/*------------------------------------------------------------------------*/
	
	/*------------------------Prototype snake-body.c--------------------------*/
		
	Snake new_snake(void);
	Bool verif_snake_info_empty(Snake s);
	Snake_M init_snake_mooves(Snake_M m);	
	        
	int snake_lenght(Snake s);
	Snake moove_head(Snake_M m, Snake s);  
	Snake chase_head(Snake s);

	Snake snake_chase_head_and_grown_up(Snake s, Fruitz fruit);
	Snake setup_head(void);
	Snake setup_body(Snake snake_element);
	void check_snake(Snake snak);
	void clear_snake(Snake s);
	
	
	/*----------------------////////SDL/////////--------------------------------*/

	void SDL_ExitWithError(const char *message);
	void graphic_interface( Snake s, SDL_Renderer *renderer, int map[][TAILLE_LIGNE], int sizeOfSquarres);


	
#endif
