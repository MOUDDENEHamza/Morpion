#include <stdio.h>
#include "gameRule.h"
#include "struct.h"

#define RED "\x1B[31m"
#define RESET "\x1B[0m"

/*checks if the move in the chosen box is available*/
int available_move(int *n, int *p, int **t){
	if (t[*n][*p] != 0){// if the choosen box is not empty.
		printf("\n"RED"ERROR"RESET" : the choosen box is not empty.\n");
		return 1;
	}
	return 0;
}

/*update board by puting the flag in the choosen box*/
void update_board(int *n, int *p, int **t, int *flag){
	t[*n][*p] = *flag;//update the board with the correct flag.
	return;
}

/*check if the current player has win*/
int win(int *n, int *p, int **t, int *flag){
	/*initialize variables*/
	int i;
	int j;
	int cpt = 0;

	for (i = 0; i < *n; i++){//check if there is the same flag in the same line.
		for (j = 0; j < *p; j++){
			if (t[i][j] == *flag){
				cpt += 1;
			}	
		}	
		if (cpt == 3){
			printf("\nthere is the same flag in the line %d.\n", i + 1);
			return 0;
		}	
		cpt = 0;
	}

	for (i = 0; i < *n; i++){//check if there is the same flag in the same column.
		for (j = 0; j < *p; j++){
			if (t[j][i] == *flag){
				cpt += 1;
			}
		}
		if (cpt == 3){
			printf("\nthere is the same flag in the column %d.\n", i + 1);
			return 0;
		}
		cpt = 0;
	}

	for (i = 0; i < *n; i++){//check if there is the same flag in the diagonal ascending.
		if (t[i][i] == *flag){
			cpt += 1;
		}
		if (cpt == 3){
			printf("\nthere is the same flag in the ascending diagonal.\n");
			return 0;
		}
	}

	cpt = 0;
	for (i = 0; i < *n; i++){//check if there is the same flag in the diagonal downward.
		if (t[i][(*n - 1) - i] == *flag){
			cpt += 1;
		}
		if (cpt == 3){
			printf("\nthere is the same flag in the downward diagonal.\n");
			return 0;
		}
	}

	for (i = 0; i < *n; i++){//check if there are not an empty box.
		for (j = 0; j < *p; j++){
			if (t[i][j] != 0){
				cpt += 1;
			}
			if (cpt == *n * *p){
				printf("\nDraw.\n");
				return -1;
			}
		}
	}

	return 1;
}
