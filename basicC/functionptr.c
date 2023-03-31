#include <stdio.h>

void recur_func();

int main()
{
    void (*ptr)() = recur_func;
    ptr();
    //recur_func();
    return 0;
}

void recur_func()
{
    static int i;
    if (i<10)
    {
        printf("\n\t%d", i);
        i++;
        recur_func();
    }
        
    else 
        ;
}