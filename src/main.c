#include <stdio.h>/*system library*/
#include "displayShell.h"
#include "struct.h"
#include "gameRule.h"
#include "input.h"

/*main function*/
int main(int argc, int *argv[]){
	/*initialize variable*/
	int turn = 0;
	int flag;
	int n;
	int p;

	/*display the init bar*/
	display_init();	
	
	/*create the game board*/
	create_board();

	/*display the game board*/
	display_board(&b->n, &b->p, b->t);

	while(1){
		if (win(&b->n, &b->p, b->t, &flag) == 0){
                        display_winner(&turn);//display the winner
                        break;
                }
		display_turn(&turn, &flag);//display the player turn
		put_flag(&n, &p);//put the flag in the choosen box
		if (available_move(&n, &p, b->t) == 1){
			continue;
		}
		update_board(&n, &p, b->t, &flag);
	        display_board(&b->n, &b->p, b->t);//display the game board
		turn += 1;
	}

	/*display the init bar*/
	display_end();

	return 0;
}
