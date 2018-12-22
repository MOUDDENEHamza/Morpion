#include <stdio.h>/*system library*/
#include "displayShell.h"
#include "struct.h"

/*main function*/
int main(int argc, int *argv[]){
	
	/*display the init bar*/
	init();	
	
	/*create the game board*/
	create_board();

	/*display the game board*/
	display_board(b->n, b->p, b->t);

	/*display the init bar*/
	end();

	return 0;
}
