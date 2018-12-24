#ifndef _STRUCT_H_
#define _STRUCT_H_

/*I will create a structure to set up my board*/
struct board{
	int n;
	int p;
	int **t;
}*b;

/*I will create a structure to set up player's turn*/
struct player{
	int x;
        int y;
        int flag;
}*p;

/*create the game board*/
void create_board(void);

/*handle the box structure*/
void handle_player(void);

#endif
