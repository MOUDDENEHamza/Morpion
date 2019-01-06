GCC = gcc
INCLUDE = -I include
SRC = src/displayShell.c src/gameRule.c src/input.c src/struct.c src/main.c
OBJ= $(SRC:.c=.o)
LIB = lib
EXEC = bin/main

all : compile run

compile : $(SRC)
	$(GCC) $(INCLUDE) -c $(SRC)
	$(GCC) -o $(EXEC) *.o
	mv *.o $(LIB)

run : $(EXEC)
	$(EXEC)

clean : 
	rm $(EXEC) $(LIB)/*.o
