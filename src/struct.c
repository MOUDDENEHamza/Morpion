#include <stdio.h>
#include <stdlib.h>

#include "struct.h"

/*create the game board*/
void create_board(){
	int i;
	int j;

	b = malloc(sizeof(struct board));
	b->n = 3;
	b->p = 3;
	b->t = (int **) malloc(b->n * sizeof(int *));
	for (i = 0; i < b->n; i++){
		b->t[i] = (int *) malloc(b->p * sizeof(int));
	}

	for (i = 0; i < b->n; i++){
		for (j = 0; j < b->p; j++){
			b->t[i][j] = 0;
		}
	}

	return;
}

/*handle the box structure*/
void handle_player(void){
	p = malloc(sizeof(struct player));
	return;
}
