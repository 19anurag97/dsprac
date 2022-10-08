#include <stdio.h>
#include <stdlib.h>

void numtochar(int);
void reverse_str(char *, int);

int main(){    
    int num,temp;
    printf("\n Enter number\n");
    scanf("%d", &num);
    temp=num;
    numtochar(temp);
    return 0;
}

void numtochar(int temp){
    char *rem;
    rem = (char *)malloc(sizeof(char));
    static int i=0;
    while(temp != 0){
        *(rem + i) = (temp%10) + '0';
        temp = temp / 10;
        i++;
    }
    *(rem + i) = '\0';
    reverse_str(rem, i-1);
}

void reverse_str(char *rem, int i){
    int j=0;
    char *rev = (char *)malloc(sizeof(char));
    
    while (i>=0){
        *(rev + j) = *(rem + i);
        i--;
        j++;
    }
    *(rev + j) = '\0';

    printf("\nString is:");
    for (int i=0;*(rev+i)!='\0';i++){
        printf("%c",*(rev+i));
    }

    free(rem);
    free(rev);
}