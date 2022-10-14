#include <stdio.h>

void ptr_derefer();

void main(){
    int a = 16;
    int *p = &a;
    printf("pointer value(de-referencing) %d\n", *p);
    *p = 17;//we can change the value of variable using pointer.
    printf("value changed, pointer value(de-referencing) %d\n", *p);
    printf("value of a  :  %d\n", a);

    /* read access violation (error)

    p = 17;//p is pointing to address 17 in memory.(invalid memory)
    printf("pointer value(de-referencing) %d\n", *p);
    //address 17 is at very low address.
    //such type of address is read protected by OS. 
    */
    ptr_derefer();   
}

void ptr_derefer(){
    int arr[] = {1,44,121,89};
    //different ways of accessing.
    printf("array ptr subscript %d\n", arr[0]);
    printf("array ptr subscript %d\n", arr[1]);

    printf("array ptr subscript %d\n", *(2+arr));
    printf("array ptr subscript %d\n", *(arr+1));
    
    printf("array ptr subscript %d\n", 1[arr]);
    printf("array ptr subscript %d\n", 2[arr]);
}