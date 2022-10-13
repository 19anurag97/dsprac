#include<stdio.h>

int main(){
    char x[40];
    static int i;
    int cnt=0;
    printf("\nEnter the mathematical expression:");
    scanf("%s", x);
    
    while(x[i] != '\0'){
        if(x[i] == '('){
            cnt++;
        }
        else if(x[i] == ')'){
            cnt--;
        }
        i++;
    }

    if (cnt == 0){
        printf("\nBalanced Parenthesis");
    }
    
    else{
        printf("\nNOT Balanced Parenthesis");
    }
    return 0;
}