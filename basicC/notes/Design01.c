#include <stdio.h>

typedef enum {int_type, char_type} dataType; 

typedef struct {
    dataType tp;
    void *ptr;
}genericType;

int main() {
    int a = 239;
    char c = 'A';

    genericType g1 = {int_type, &a};
    genericType g2 = {char_type, &c};

    if (g1.tp == int_type) {
        printf("\nDeref int: %d", (*(int *)(g1.ptr)));
    }

    if (g2.tp == char_type) {
        printf("\nDeref char: %c", (*(char *)(g2.ptr)));
    }
    return 0;
}
//Can only deref a pointer if data type is known when casting it.
//Initialization: Always initialize pointers to NULL to avoid accidental dereference.
//Type safety: Casting must match the actual type stored.