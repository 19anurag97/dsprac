#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = "insul";
    char *q = "iiiiaxyz";
    if (*p == *q)
    {
        printf("\ncheckok");
    }
    else
    {
        printf("\nerror");
    }
    return 0;
}