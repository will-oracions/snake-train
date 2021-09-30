
/*-----------------------------*/
#include <stdio.h>
#include "snake.h"
/*-----------------------------*/

/*------------------------------------------------------------------------*/
Snake new_snake(void)
{
	return NULL;
}	

/*------------------------------------------------------------------------*/
/*-----------------------------*/

/*-----------------------------*/
	
/*------------------------------------------------------------------------*/
Bool verif_snake_info_empty(Snake s)
{	
	if(s == NULL)
	{
		return true;
	}
	else
		return false;
}

/*------------------------------------------------------------------------*/

/*-----------------------------*/

/*-----------------------------*/

/*------------------------------------------------------------------------*/
Snake init_snake(Snake s)
{
	s->x = HEAD_X;
	s->y = HEAD_Y;
	
	s->next = NULL;

	return s;
}
	
/*------------------------------------------------------------------------*/

Snake_M init_snake_mooves(Snake_M m)	
{
	m->up = false;
	m->dawn = false;
	m->right = false;
	m->left = false;

	return m;
}
	

/*------------------------------------------------------------------------*/
 Snake moove_head(Snake_M m, Snake s)
 {
	 if(m->right == true)
	 {
		(s->x)++;
	 }
	 if(m->left == true)
	 {
		 (s->x)--;
	 }
	 if(m->up == true)
	 {
		 (s->y)--;
	 }
	 if(m->dawn == true)
	 {
		 (s->y)++;
	 }

	 return s;
 }
 

int snake_lenght(Snake s)
{
	int len = 0;

	while( s->next->next != NULL)
	{
		len++;
		s = s->next;
	}

	return len;
}

Snake chase_head(Snake s)
{
	Snake_Info *tmp;
	tmp = s;

	int cmpt = 0;
	int len = snake_lenght(s);

	int i = len ;
        int icmpt = 0;

	while(cmpt <  len )
		
	{
		while(i > 0)
		{
			tmp = tmp->next;
			i--;
		}
		tmp->next->x = tmp->x;
		tmp->next->y = tmp->y;

		icmpt++;
		i = len - icmpt;
		
		tmp =s ;
		cmpt++;

	}
	tmp->next->x = tmp->x;
	tmp->next->y = tmp->y;

	return s;	
}
/*------------------------------------------------------------------------*/

Snake snake_grown_up(Snake s, Frt fruit)
{
	Snake_Info *tmp;
	tmp = s;


	if(s->x == fruit->x && s->y == fruit->y)
	{
		Snake_Info *New_Body = malloc(sizeof(New_Body));
		
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		New_Body->next = NULL;
		tmp->next = New_Body;

	}

	s = chase_head(s); 

	return s;

}




		

/*------------------------------------------------------------------------*/


