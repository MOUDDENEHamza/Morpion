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
	b->t = (char **) malloc(b->n * sizeof(char *));
	for (i = 0; i < b->n; i++){
		b->t[i] = (char *) malloc(b->p * sizeof(char));
	}
	
	for (i = 0; i < b->n; i++){
		for (j = 0; j < b->p; j++){
			b->t[i][j] = '.';
        	}
	}

	return;
}
