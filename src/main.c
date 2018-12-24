#include <stdio.h>/*system library*/
#include "displayShell.h"
#include "struct.h"
#include "gameRule.h"
#include "input.h"

/*main function*/
int main(int argc, int *argv[]){
	/*initialize variable*/
	int turn = 1;

	display_init();//display the init bar.
	create_board();///create the game board.
	handle_player();//handle the box structure.
	display_board(&b->n, &b->p, b->t);//display the game board.
	while(1){
		display_turn(&turn, &p->flag);//display the player turn
		input_x(&p->x, &b->n);//input the line where you want to put your flag.
		input_y(&p->y, &b->p);//input the column where you want to put your flag.
		if (available_move(&p->x, &p->y, b->t) == 1){//check if the choosen move is available.
			continue;
		}
		update_board(&p->x, &p->y, b->t, &p->flag);//update the board game.
		display_board(&b->n, &b->p, b->t);//display the game board.
		if (win(&b->n, &b->p, b->t, &p->flag) == 0){//check if the current player won.
			display_winner(&turn);//display the winner
			break;
		}
		if (win(&b->n, &b->p, b->t, &p->flag) == -1){//check if there is no winner.
			break;
		}
		turn += 1;
	}
	display_end();//display the init bar.

	return 0;
}
