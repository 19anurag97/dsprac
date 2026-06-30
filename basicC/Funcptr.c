
#include <stdio.h>

//Instead of writing int (*)(int, int) everywhere, you use Fptr.
typedef int (*Fptr)(int, int);

int sum(int x, int y)
{
    return x+y;
}

int multiply(int x, int y)
{
    return x*y;
}

int sayHello(int a, int b)
{
    printf("\nHello %d Hello %d", a, b);
    return 0;
}

int callSquare(int a, int b)
{
    if (a>b)
    {
        return a*a;
    }
    else {
        return b*b;
    }
}


//This allows you to write generic functions (mystery) that can apply different operations (sum, multiply, etc.).
int mystery(int a, int b, Fptr fn)
{
    return (*fn)(a, b);
}

//Create an array of funtion pointer and choose at runtime.
Fptr arrayFptr[5] = {sum, multiply, sayHello, callSquare};
//int (*fptr[5])(int, int) = {};


int main()
{
    //int (*fn)(int, int);
    //fn = sum;
    int opt=0;
    
    printf("\n call func pointer %d\n", mystery(10, 14, multiply));
    
    
    printf("\n Enter option (0-3): ");
    scanf("%d", &opt);
    
    printf("\ncall func pointer depends upon funcPointer: %d\n", mystery(10, 14, arrayFptr[opt]));
    return 0;
}