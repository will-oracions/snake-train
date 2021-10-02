#include "snake.h"



int main(int argc, char **argv)
{
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;

	int map[TAILLE_COLONNE][TAILLE_LIGNE] = {0};
	srand(time(0));
	
	//launch SDL
	/*-------------------------------------------------------------------------------*/

	if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
	{
		SDL_ExitWithError("Initialisation SDL");
	}
	
	/*-------------------------------------------------------------------------------*/
		
	// Creation of window and renderer	
	/*-------------------------------------------------------------------------------*/

	if( SDL_CreateWindowAndRenderer(PY, PX, 0, &window, &renderer) != 0)
	{
		SDL_ExitWithError("Impossible de creer la fenetre et le rendu! \n");
	}
	
	/*-------------------------------------------------------------------------------*/


	// Init game info	
	/*-------------------------------------------------------------------------------*/
	
	init_map(map);

	Snake_Info *snake = setup_head();
	snake = setup_body(snake);

	Snake_Mooves *boolMooves = malloc(sizeof(boolMooves));
	init_snake_mooves(boolMooves); 
	// default moove ---> right
	boolMooves->right = true;

	Fruitz fruit = spawn_fruitz( fruit, map);

	int current_time = 0;
	int previous_time = 0;
	
	
	/*-------------------------------------------------------------------------------*/

	// loop program
	/*-------------------------------------------------------------------------------*/

	SDL_bool launch_program = SDL_TRUE;
	SDL_Event event;

	while(launch_program)
	{
		current_time = SDL_GetTicks();

		if( current_time - previous_time > 300)
		{
			while(SDL_PollEvent(&event))
			{
				switch(event.type)
				{
					case SDL_KEYDOWN:
						
						switch(event.key.keysym.sym)
						{
							case SDLK_DOWN:
								if(boolMooves->up == false)
								{
									boolMooves = init_snake_mooves(boolMooves);	
									boolMooves->down = true;
									
								}
								continue;

							case SDLK_UP:
								if(boolMooves->down == false)
								{
									boolMooves = init_snake_mooves(boolMooves);	
									boolMooves->up = true;
								}
								continue;
								
							case SDLK_LEFT:
								if(boolMooves->right == false)
								{
									boolMooves = init_snake_mooves(boolMooves);	
									boolMooves->left = true;
								}
								continue;

							case SDLK_RIGHT:
								if(boolMooves->left == false)
								{
									boolMooves = init_snake_mooves(boolMooves);	
									boolMooves->right = true;
								}
								continue;
							default:
								continue;
								
						}
						continue;

					case SDL_QUIT:
						launch_program = SDL_FALSE;
						break;

					 default:
						break;

				}

			}
			
			/*-------------------------------------------------*/
			snake = moove_head(boolMooves, snake);		
			snake = snake_chase_head_and_grown_up(snake, fruit);

			init_map(map);

			insert_snake(map, snake);	

			if(snake->x == fruit.x && snake->y == fruit.y)
			{
				fruit = spawn_fruitz(fruit, map);
			}
			else
			{
				map[fruit.y][fruit.x] = 6;
			}

			graphic_interface(snake, renderer, map, 40);

			SDL_RenderPresent(renderer);
			SDL_RenderClear(renderer);

			previous_time = current_time;

			
		}

		else
		{
			SDL_Delay(300 - (current_time - previous_time));
		}
	}

	
	/*-------------------------------------------------------------------------------*/
	
	clear_snake(snake);	
	free(boolMooves);

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
    	SDL_Quit();	
	
	return 0;
}
