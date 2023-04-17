#include <stdio.h>

int main()
{
    char c = -2;
    unsigned char a = c;
    
    printf("\n%c", a);
    //undefined symbol.
    
    printf("\n%d", a);
    //0-2 = 254
    
    return 0;
}