
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

/*------------------------------------------------------------------------*/

Snake snake_grown_up(Snake s, Snake_M m, Fruitz *fruit)
{
	Snake_Info *tmp;
	tmp = s;


	if(s->x == fruit->x && s->y == fruit->y)
	{
		if(s->next == NULL)
		{
			if(m->up == true)
			{
				s->next->y = (s->y)--;
			}
			else if (m->dawn == true)
			{
				s->next->y = (s->y)++;
			}
			else
			{
				s->next->y = s->y;
			}

			if(m->right == true)
			{
				s->next->x = (s->x)--;
			}

			else if (m->left == true)
			{
				
				s->next->x = (s->x)++;
			}
			
			return s;
			
		}

         	while(tmp->next->next != NULL)
		{
			tmp = tmp->next;
		}

		if(tmp->next->x == (tmp->x)+1)
		{
			tmp->next->next->x = (tmp->next->x)+2;
		}

	       else if(tmp->next->x == (tmp->x)-1)
		{
			tmp->next->next->x = (tmp->next->x)-2;
		}

		else
		{
			tmp->next->next->x = tmp->x;
		}


		if(tmp->next->y == (tmp->y) - 1)
		{
			tmp->next->next->y = (tmp->next->y)-2;
		}

		else if(tmp->next->y == (tmp->y) + 1)
		{
			tmp->next->next->y = (tmp->next->y)+2;
		}		

		else
		{
			tmp->next->next->y = tmp->y;
		}

	}

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
