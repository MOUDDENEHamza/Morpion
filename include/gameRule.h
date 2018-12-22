#ifndef _GAMERULE_H_
#define _GAMERULE_H_

#include "struct.h"

/*checks if the move in the chosen box is available*/
int available_move(int *n, int *p, int **t);

/*update board by puting the flag in the choosen box*/
void update_board(int *n, int *p, int **t, int *flag);

/*check if the current player has win*/
int win(int *n, int *p, int **t, int *flag);

#endif
