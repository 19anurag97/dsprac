CC=gcc
CFLAGS=-I.
DEPS = stack_support.h
OBJ = stack_src.o stack_main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

RunStackProgram: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Target binary name
TARGET = RunStackProgram.exe

# Clean rule
clean:
	del /Q $(OBJ) $(TARGET)