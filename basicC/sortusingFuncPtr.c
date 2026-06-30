#include <stdio.h>

typedef void (*swap)(int*, int *);

void swapfunc(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void comparefunc(int *a, int *b, swap fn){
    if (*a > *b){
        fn(a, b);
    }
}

int main(){
    int a[] = {5,12,7,1,44,9,6,3};
    int max_s = sizeof(a)/sizeof(a[0]);

    printf("\n");
    for (int i=0;i<max_s;i++)
    {
        printf("\t%d", a[i]);
    }

    for (int i=0; i<max_s-1; i++)
    {
        for (int j=0; j<max_s-i-1; j++)
        {
            comparefunc(&a[j], &a[j+1], swapfunc);
        }
    }

    printf("\n");
    for (int i=0;i<max_s;i++)
    {
        printf("\t%d", a[i]);
    }

    return 0;
}