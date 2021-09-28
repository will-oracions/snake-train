     -------------------------------------------------SNAKE-----------------------------------------------------------------
                  
                         main.c ----- snake_body.c ---- fruitz.c ----- map.c ----- snake.h

	head_snake = 4
	body_snake = 3
	tail_snake = 2
	
	fruitz = 6
	
	border = 1
 	
	Snake.h:
	
	#define TAILLE_LIGNE 20
	#define TAILLE_COLONNE 20
	
	#define HEAD_X  10
	#define HEAD_Y 10


	map
----------------------------------------------------------------------

	void init_map(int map[][ligne]);  // faire bordure tab
	void display_map(int map[][ligne]); // afficher la map

----------------------------------------------------------------------
	
	fruitz

----------------------------------------------------------------------
	int random_pos(void); // donne  un chiffre au hasard
	void spawn_fruitz(int map[][ligne]); // verifie si placement du fruit n'est pas sur le serpent / place le fruit
	
        /help
	int posx = random_pos();
	int posy = random_pos();
	
	if(map[posy][posx] == 3 ou 2 etc...
	
----------------------------------------------------------------------
	
	snake_body.c  
----------------------------------------------------------------------
	[[13,3],[13,4]....]


typedef struct snake_info
{
	int x = ?;
	int y = ?;
	
	struct snake_info *next;
}
	sturct snake_info, *Snake 
	
	anvancer/tourner : 
	 -gauche
	 -droite
	 ...
	
	grandir:

	mourir:
----------------------------------------------------------------------
	
	
		