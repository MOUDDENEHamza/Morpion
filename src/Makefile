GCC = gcc
INCLUDE = -I ../include
SRC = displayShell.c struct.c main.c
OBJ= $(SRC:.c=.o)
EXEC = ./main

all : compile run

compile : $(SRC)
	$(GCC) $(INCLUDE) -c $(SRC)
	$(GCC) -o $(EXEC) $(OBJ)

run : $(EXEC)
	$(EXEC)

clean : 
	rm $(EXEC) $(OBJ)
