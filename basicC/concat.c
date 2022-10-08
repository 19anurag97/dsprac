#include <stdio.h>
#define MAX 20

//char *fgets(char *str, int size, FILE *stream)
//char concat_string();

int main(){
    
    int i=0;
    char str1[MAX], str2[MAX];
    printf("\n Enter string1:");
    scanf("%s", str1);
    //fgets(str1, MAX, stdin);

    printf("\n Enter string2:");
    scanf("%s", str2);
    //fgets(str2, MAX, stdin);

    for (i=0; str1[i] != '\0'; i++);
    printf("value of i is: %d", i);
    
    for (int j=0; str2[j] != '\0'; j++){
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';

    printf("\n The concatenated string is: %s", str1);
    return 0;
}