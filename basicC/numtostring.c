#include <stdio.h>
//convert int to string in C.
int main(){
    int a = 93552,temp=a;
    char str[] = "";
    
    if (a<0){
        temp = -temp;
    }
    
    int i=0,cnt=0;
    while (temp != 0)
    {
        str[i++] = temp%10 + '0';//"2321"
        cnt++;
        temp = temp/10;//123//12//1//0
    }
    if (a<0){
        str[i++] = '-';
        cnt++;
    }
    
    str[i] = '\0';
    printf("\nLen of str: %d", cnt);
    printf("\nstr ->  %s", str);
    
    
    //reverse a string.
    i=0;
    char tmp[10];
    //cnt--;//4 index
    
    for(int j=cnt-1; j>=0; j--)
    {
        tmp[i++] = str[j];
    }
    tmp[i] = '\0';
    printf("\nstr ->  %s", tmp);
    
}