#ifndef _STRUCT_H_
#define _STRUCT_H_

/*I will create a structure to set up my board*/
struct board{
	int n;
	int p;
	int **t;
}*b;

/*create the game board*/
void create_board(void);

#endif
