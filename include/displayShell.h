#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct.h"

/*display the init bar*/
void display_init(void);

/*display the game board*/
void display_board(int *n, int *p, int **t);

/*display the player turn*/
void display_turn(int *turn, int *flag);

/*display the winner*/
void display_winner(int *turn);

/*display the init bar*/
void display_end(void);

#endif
