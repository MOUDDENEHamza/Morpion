GCC = gcc
INCLUDE = -I ../include
SRC = displayShell.c struct.c gameRule.c input.c main.c
OBJ= $(SRC:.c=.o)
LIB = ../lib
EXEC = ./../bin/main

all : compile run

sdl : sdl.c
	gcc sdl.c `sdl-config --cflags --libs` -lSDL2_ttf -lSDL_image -o sdl
	./sdl
	

compile : $(SRC)
	$(GCC) $(INCLUDE) -c $(SRC)
	$(GCC) -o $(EXEC) $(OBJ)
	mv $(OBJ) $(LIB)

run : $(EXEC)
	$(EXEC)

clean : 
	rm $(EXEC) $(LIB)/*.o
