#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct 
{
    int a;      //4
    char x;     //1
    char s[10]; //8
    int *p;     //8
    short sh;   //2
}thing;

int main()
{
    int i=0;
    thing t = {0, 'X', "anuragbi", &i, 2};
    printf("\n%d", sizeof(t));
    return 0;
}