#include<stdio.h>

int strcmpare(char str[], char str2[]);

int main(){
    char str[20], str2[20];
    printf("\n Enter string1:");
    scanf("%s", str);
    printf("\n Enter string2:");
    scanf("%s", str2);
    int value = strcmpare(str, str2);
    if (value==0){
        printf("\n Strings are equal");
    }
    else {
        printf("\n Strings are NOT equal");
    }
    return 0;
}

int strcmpare(char str[], char str2[]){
    int i=0, flag=0;
    while (str[i] != '\0' && str2[i] != '\0'){
        if (str[i] != str2[i]){
            flag = 1;
            return 1;
        }
        else{
            flag = 0;
            i++;
        }
    }
    return flag;
}

