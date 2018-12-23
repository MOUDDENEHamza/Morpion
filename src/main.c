#include <stdio.h>/*system library*/
#include "displayShell.h"
#include "struct.h"
#include "gameRule.h"
#include "input.h"

/*main function*/
int main(int argc, int *argv[]){
	/*initialize variable*/
	int turn = 1;
	int flag;
	int n;
	int p;

	display_init();//display the init bar.
	create_board();///create the game board.
	display_board(&b->n, &b->p, b->t);//display the game board.
	while(1){
		display_turn(&turn, &flag);//display the player turn
		put_flag(&n, &p);//put the flag in the choosen box
		if (available_move(&n, &p, b->t) == 1){//check if the choosen move is available.
			continue;
		}
		update_board(&n, &p, b->t, &flag);//update the board game.
	        display_board(&b->n, &b->p, b->t);//display the game board.
		if (win(&b->n, &b->p, b->t, &flag) == 0){//check if the current player won.
                        display_winner(&turn);//display the winner
                        break;
                }
		if (win(&b->n, &b->p, b->t, &flag) == -1){//check if there is no winner.
                        break;
                }
		turn += 1;
	}
	display_end();//display the init bar.

	return 0;
}
