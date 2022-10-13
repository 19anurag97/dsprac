// Write a program in C to 
//add two numbers using pointers.
#include <stdio.h>

void callbyref(int *, int *);

int main(){

    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    callbyref(&m, &n);

    return 0;
}

void callbyref(int *j, int *k){
    int sum=0;
    sum = *j+*k;
    printf("\nSum is : %d", sum);
}