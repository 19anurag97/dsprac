#include <stdio.h>
#include <stdbool.h>

union
{
    unsigned long x;
    int d;
    char f;
    bool qw;
}un;
//sizeof union is equal to the highest data type of union.

struct student
{
    union 
    {
        int a;
        char b;
        float c;
    }at;
    
}st[16];
//size of array of structure :-> total structures * (union data type highest); 

int main()
{
    printf("\nsize of structure(in un) : %ld", sizeof(st));
    printf("\nsize of union : %ld", sizeof(un));
    
    st[0].at.b = 'C';
    printf("\nsize of structure(in un) : %ld", sizeof(st));
    
    printf("\nsize of union : %c", st[0].at.b);
    return 0;
}
