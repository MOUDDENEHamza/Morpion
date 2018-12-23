#include <stdio.h>
#include <string.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET "\x1B[0m"

/*display the init bar*/
void display_init(void){
	
	printf(CYAN"\n****************************************************************************************\n"RESET);
	printf("\n\t\t\t\t     "GREEN"MORPION"RESET"\n");
printf(CYAN"\n****************************************************************************************\n"RESET"\ninit...\n");

	return;
}

/*display the game board*/
void display_board(int *n, int *p, int **t){
	int i;
	int j;
	

	printf("\n\n\t\t-------------------------------------------------\n");
	for (i = 0; i < *n; i++){
		printf("\t\t|");
		for (j = 0; j < *p; j++){
			if (t[i][j] == 0){
				printf("\t.\t|");
			}
			if (t[i][j] == 1){
                                printf("\t"BLUE"X"RESET"\t|");
                        }
			if (t[i][j] == 2){
                                printf("\t"RED"O"RESET"\t|");
                        }
		}
		printf("\n\t\t-------------------------------------------------\n");
	}
	printf(CYAN"\n----------------------------------------------------------------------------------------\n"RESET);

	return;
}

/*display the player turn*/
void display_turn(int *turn, int *flag){
	if (*turn % 2 == 0){//display the player1's turn
		printf("\n"MAGENTA"turn  :"RESET" player %d.\n", (*turn % 2) + 2);
		*flag = 2;
	
	}

	else {//display the player2's turn
		printf("\n"MAGENTA"turn  :"RESET" player %d.\n", *turn % 2);
		*flag = 1;
	}
	
	return;
}

/*display the winner*/
void display_winner(int *turn){
	if (*turn % 2 == 0){
		printf("\nthe player 2 win.\n");
	}
	else{
		printf("\nthe player 1 win.\n");
        }
	return;
}


/*display the end bar*/
void display_end(void){
	printf(CYAN"\n****************************************************************************************\n"RESET);
	printf("\n\t\t\t\t      "GREEN"GOODBYE!"GREEN"\n");
	printf("\n\t\t\t\t\t"GREEN"END"RESET"\n");
        printf(CYAN"\n****************************************************************************************\n"RESET);	
	return;
}
