//in progress
#include <stdio.h>
#include <stdlib.h>

void dectobin(int decnum);

int main(){

    int decnum;
    printf("\n Enter decimal num:");
    scanf("%d", &decnum);
    dectobin(decnum);
    return 0;
}

void dectobin(int a){
    static int i;
    int *rem;
    rem = (int *)malloc(sizeof(int));
    while(a > 0){
        *(rem + i) = a % 2;
        a = a / 2;
        i++;
    }
    
    printf("\n Binary num is:\n");
    for (int j=i-1; j>=0; j--){
        printf("%d", *(rem + j));
    }
    free(rem);
}
    //a = dec / 2;//(10/2->0, 5/2->1, 4/2->0, 2/2->0)