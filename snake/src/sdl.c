#include "snake.h"


/*-------------------------------------------------------------------------------*/

void SDL_ExitWithError(const char *message)
{
	SDL_Log("ERREUR : %s > %s/n", message, SDL_GetError());
	SDL_Quit();
	exit(EXIT_FAILURE);
}

/*-------------------------------------------------------------------------------*/

void graphic_interface( Snake s, SDL_Renderer *renderer, int map[][TAILLE_LIGNE], int sizeOfSquarres)
{
	int i = 0;
	int j = 0;

	for( i = 0; i < TAILLE_COLONNE; i++)
	{
		for(j = 0 ; j < TAILLE_LIGNE; j++)
		{
			if(map[i][j] == 1)
			{
				if(SDL_SetRenderDrawColor(renderer, 13, 13, 13, SDL_ALPHA_OPAQUE) != 0)
				{
					SDL_ExitWithError("Impossible de changer la couleur pour le rendu ");
				}
			}

			if(map[i][j] == 0)
			{

				if(SDL_SetRenderDrawColor(renderer, 22, 6, 66, SDL_ALPHA_OPAQUE) != 0)
				{
					SDL_ExitWithError("Impossible de changer la couleur pour le rendu ");
				}
			}

			if(map[i][j] == 3)
			{

				if(SDL_SetRenderDrawColor(renderer, 18, 194, 31, SDL_ALPHA_OPAQUE) != 0)
				{
					SDL_ExitWithError("Impossible de changer la couleur pour le rendu ");
				}
			}
			if(map[i][j] == 6)
			{

				if(SDL_SetRenderDrawColor(renderer, 250, 0, 31, SDL_ALPHA_OPAQUE) != 0)
				{
					SDL_ExitWithError("Impossible de changer la couleur pour le rendu ");
				}
			}


			SDL_Rect squarre;
			squarre.x = 40*j;
			squarre.y = 40*i;
			squarre.w = 40;
			squarre.h = 40;

			if(SDL_RenderFillRect(renderer, &squarre) != 0)
			{
				SDL_ExitWithError("Impossible de dessiner le rectangle");
			}
		}
	}
}


/*-------------------------------------------------------------------------------*/



/*-------------------------------------------------------------------------------*/
