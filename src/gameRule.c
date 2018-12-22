#include <stdio.hprintf("%d\n", cpt);
>
#include "gameRule.h"
#include "struct.h"

#define RED "\x1B[31m"
#define RESET "\x1B[0m"

/*checks if the move in the chosen box is available*/
int available_move(int *n, int *p, int **t){
	
	if (t[*n][*p] != 0){
		printf("\n"RED"ERROR"RESET" : the choosen box is not empty.\n");
		return 1;
	}
	return 0;
}

/*update board by puting the flag in the choosen box*/
void update_board(int *n, int *p, int **t, int *flag){
	t[*n][*p] = *flag;
	return;
}

/*check if the current player has win*/
int win(int *n, int *p, int **t, int *flag){
	int i;
	int j;
	int cpt = 0;

	for (i = 0; i < *n; i++){//check the line.
		for (j = 0; j < *p; j++){
			if (t[i][j] == *flag){
				cpt += 1;
			}	
		}	
		if (cpt == 3){
			printf("%d\n", cpt);
			printf("1\n");
			return 0;
		}	
		cpt = 0;
	}

	for (i = 0; i < *n; i++){//check the column.
                for (j = 0; j < *p; j++){
                        if (t[j][i] == *flag){
                                cpt += 1;
                        }
                }
                if (cpt == 3){
			printf("%d\n", cpt);
			printf("2\n");
                        return 0;
                }
                cpt = 0;
        }

	for (i = 0; i < *n; i++){//check the diagonal ascending.
		if (t[i][i] == *flag){
                        cpt += 1;
                }
	 	if (cpt == 3){
			printf("%d\n", cpt);
			printf("3\n");
                        return 0;
                }
        }

        for (i = 0; i < *n; i++){//check the diagonal downward.
		if (t[(*n - 1) - 1][i] == *flag){
                       	cpt += 1;
		}
               	if (cpt == 3){
			printf("%d\n", cpt);
			printf("4\n");
                       	return 0;
               	}
	}

	for (i = 0; i < *n; i++){//check if there are any empty box.
                for (j = 0; j < *p; j++){
                        if (t[i][j] == 0){
				return 1;
                        }
                }
        }

	return 1;
	
}
