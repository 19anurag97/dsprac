
#include <stdio.h>

int main()
{
    const int m = 22;
    int *ptr = NULL;
    ptr = &m;
    (*ptr)++;  //Modifying a const object through a non-const pointer is undefined behavior.
    printf("\n Deref %d\n", *((int *)ptr));
    
    //above code will run with warning, here we are changing the value of const pointer.
    
    //below code will not run.
    const int *ptr_n = &m;
    (*ptr_n)++;  //Modifying a const object through a const pointer will give us an error.
                 //increment of read-only location ‘*ptr_n’
    printf("\n Deref %d\n", *((int *)ptr_n));
    
    return 0;
}