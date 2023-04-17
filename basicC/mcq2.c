#include <stdio.h>

int main()
{
    void hello1();  //function prototype.
    void hello2();
    
    void (*func_ptr)() = &hello2;
    (*func_ptr)();
    func_ptr();

    return 0;
}

/*
If we remove bracket, then the expression “void (*fun_ptr)(int)” 
becomes “void *fun_ptr(int)” which is declaration of a function that returns void pointer.

Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
*/

void hello1()
{
    printf("Hello1 Worldsadad");
}

void hello2()
{
    printf("\nhello2  Hello");
}