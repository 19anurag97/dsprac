//Operating system uses Pointer Constants to interact with Hardware directly.
//Pointer constants

#include <stdio.h>
#include <stdint-gcc.h>
#include <stdlib.h>

void extract_str()//string,positon,return string
{
   char str[100], sstr[100];
   int pos, l, c = 0;
   

   printf("\n\nExtract a substring from a given string:\n");
   printf("--------------------------------------------\n");  
 
   printf("Input the string : ");
   fgets(str, sizeof str, stdin);
 
   printf("Input the position to start extraction :");
   scanf("%d", &pos);
   
   printf("Input the length of substring :");
   scanf("%d", &l);
 
   while (c < l) 
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';
   printf("The substring retrieve from the string is : %s\n\n", sstr);
}

int main()
{
    char x[2] = "12";
    printf("int %d\n\n", atoi(x));

    extract_str();
    return 0;
}