#include <stdio.h>

#ifndef __SNAKE__H__
#define __SNAKE__H__

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

	typedef struct Snake_Head_Info
	{
		Bool up;
		Bool dawn;
		Bool right;
		Bool left;

	}Snake_Head_Info, *Snake_M;
	
	
	/*-----------------------------*/
	typedef struct Snake_Info
	{
		int x;
		int y;
	
		struct Snake_Info *next;
	
	}Snake_Info, *Snake;
	/*-----------------------------*/
	
	
	/*-----------------------------*/
	typedef struct Fruitz
	{
		int x;
		int y;
	}Fruitz; 
	
	/*-----------------------------*/
	
	/*----------------------------Prototype fruitz.c--------------------------*/
	int random_pos(void);
	Fruitz spawn_fruitz(Fruitz fruit, int map[][TAILLE_LIGNE]);
	/*------------------------------------------------------------------------*/
	
	
	/*--------------------------Prototype map.c-------------------------------*/
	void init_map(int map[][TAILLE_LIGNE]);
	void display_map(int map[][TAILLE_LIGNE]);
	/*------------------------------------------------------------------------*/
	
	/*------------------------Prototype snake-body.c--------------------------*/
	Snake new_snake(void);
	Bool verif_snake_info_empty(Snake s);
        Snake_M init_snake_mooves(Snake_M m);	
	Snake init_snake(Snake s);
	Snake snake_grown_up(Snake s, Snake_M m, Fruitz *fruit);
	
	/*------------------------------------------------------------------------*/
#endif
