GCC = gcc
GIT = git
ADD = add .
COMMIT = commit -m "release"
PUSH = push
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

git : 
	$(GIT) $(ADD) && $(GIT) $(COMMIT) && $(GIT) $(PUSH)

clean : 
	rm $(EXEC) $(LIB)/*.o
