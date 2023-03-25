#include <stdio.h>
#include <stdint.h>
/*

By using bitfields inside a structure, we can limit the range of datatypes.
uint8_t Range is : 2^8 = 256

Example:
uint8_t x:3;
ptr->x = 76; //binary -> 0100 1100

when we print value of (ptr->x) = 4,
why because bitfields limited to 3
4 binary -> 0100
limit 3 -> 100

*/

typedef struct thisismystruct
{
    uint8_t x:3;    //256->8
    char y;
}h1;

h1 hello;
h1 *ptr=NULL;

int main()
{
    ptr = &hello;
    ptr->x = 76;
    printf("\ncheck sizeofstruct    %ld", sizeof(ptr));
    printf("\nprint value    %d", ptr->x);
    return 0;
}
