#include <stdio.h>
#include <stdlib.h>
int main()
{
    char acBuffer1[10] = "aticle";
    char acBuffer2[10] = "world";
    char *pc1, *pc2;
    pc1 = acBuffer1; // Address of first element
    pc2 = acBuffer2; // Address of third element
    //Now we can compare the pointers if required.
    
    if( pc1 > pc2) // Legal statement
    {
        printf("\ncheck123");
    }
    return 0;
}