#include <stdio.h>
#include "input.h"
#include "struct.h"

#define RED "\x1B[31m"
#define RESET "\x1B[0m"

/*input the line where you want to put your flag*/
void input_x(int *x, int *n){
	while(1){
		printf("\nenter the line : ");
		scanf("%d", x);
		if (*x < 0 || *x >= *n){
			printf("\n"RED"ERROR :"RESET" out of range, please try again.\n");
			continue;
		} 
		return;
	}
}

/*input the column where you want to put your flag*/
void input_y(int *y, int *p){
        while(1){
                printf("\nenter the column : ");
                scanf("%d", y);
                if (*y < 0 || *y >= *p){
                        printf("\n"RED"ERROR :"RESET" out of range, please try again.\n");
                        continue;
                }
                return;
        }
}
