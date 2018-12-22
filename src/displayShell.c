#include <stdio.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*display the init bar*/
void init(){
	
	printf("\n****************************************************************************************\n");
	printf("\n\t\t\t\t     "GREEN"MORPION"RESET"\n");
printf("\n****************************************************************************************\n");

	return;
}

/*display the game board*/
void display_board(int n, int p, char **board){
	int i;
	int j;
	
	printf("\n\t\t-------------------------------------------------\n");
	for (i = 0; i < n; i++){
		printf("\t\t|");
		for (j = 0; j < p; j++){
			printf("\t%c\t|", board[i][j]);
		}
		printf("\n\t\t-------------------------------------------------\n");
	}
	
	return;
}

/*display the end bar*/
void end(){
	
	printf("\n****************************************************************************************\n");
	printf("\n\t\t\t\t      "GREEN"GOODBYE!"GREEN"\n");
	printf("\n\t\t\t\t\t"GREEN"END"RESET"\n");
        printf("\n****************************************************************************************\n");
	

	return;
}
