CC=gcc
CFLAGS=-I.
DEPS = tree_support.h
OBJ = Tree_src.o Tree_main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

RunTreeProgram: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)