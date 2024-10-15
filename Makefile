OBJECTS = Main.o 2DLattice.o spin.o
EXEC = test
FLAGS = -Wall
CC = g++

all: $(OBJECTS)
	$(CC) $(FLAGS) -o $(EXEC) $(OBJECTS)
