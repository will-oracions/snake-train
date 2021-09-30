#include "snake.h"
/*-----------------------------*/

Snake new_snake(void)
{
    return NULL;
}

/*------------------------------------------------------------------------*/

Snake setup_head(void)
{

    Snake_Info *head;
    head = malloc(sizeof(*head));
    if (head == NULL)
    {
        printf("ERROR");
        exit(EXIT_FAILURE);
    }

    head->x = HEAD_X;
    head->y = HEAD_Y;

    head->next = NULL;

    return head;
}

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
    while (s->next->next != NULL)
    {
        s = s->next;
        len++;
    }
    return len;
}

Snake setup_body(Snake snake_element)
{
    Snake_Info *body;
    body = malloc(sizeof(body));
    if (body == NULL)
    {
       printf("ERROR");
       exit(EXIT_FAILURE);
    }
    body->x = HEAD_X - 1;
    body->y = HEAD_Y;

    Snake_Info *body1;
    body1 = malloc(sizeof(*body1));
    if (body1 == NULL)
    {
       printf("ERROR");
       exit(EXIT_FAILURE);
    }
    
    body1->x = HEAD_X - 2;
    body1->y = HEAD_Y;
   
    body1->next = NULL;
    
    body->next = body1;
    
    snake_element->next = body;

    return snake_element;
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

Snake snake_grown_up(Snake s, Fruitz fruit)
{
	Snake_Info *tmp;
	tmp = s;


	if(s->x == fruit.x && s->y == fruit.y)
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
/*-----------------------------*/

void check_snake(Snake snak)
{
    if(snak == NULL)
        printf("list empty");
    while (snak != NULL)
    {
        printf("%d",snak->y);
        snak = snak->next;
    }
}


/*-----------------------------*/
	
/*------------------------------------------------------------------------*/

/*-----------------------------*/

/*-----------------------------*/

/*------------------------------------------------------------------------*/
	
/*------------------------------------------------------------------------*/

/*------------------------------------------------------------------------*/

/*------------------------------------------------------------------------*/

