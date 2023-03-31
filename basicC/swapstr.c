#include <stdio.h>
#include <string.h>

void swap_str(char **, char **);
void pointer_arith();
void string_pointer();
void mani_str1();

int main()
{
    // pointer_arith();
    string_pointer();    
    return 0;
}

void string_pointer()
{
    char *x = "valueofx-check1";
    char *y = "hellofrom-y";
    char *z = "hellofrom-z";

    printf("\nvalue of x before swap    :%s", x);
    swap_str(&x, &y);
    printf("\nvalue of x after swap     :%s", x);
    //mani_str1();
}

void pointer_arith()
{
    int a=3,b=9,c=0;
    int j[6] = {5,1,3,9,6,12};

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = j;

    c = *(++ptr3) + *(ptr3++);//1+1
    printf("\nno.==%d", c);
    c = *(++ptr3) + *(ptr3++);//9+9
    printf("\nno.==%d", c);
    c = *(++ptr3) + *(ptr3++);//12+12
    printf("\nno.==%d", c);
}

void swap_str(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void mani_str1()
{
    char *x = "check1";
    char y[] = "hello";
    char z[20];
    //char *z; this will not work, it is a string literal(constant).
    //char z[]; this will not work, space not allocated.
    strcpy(z, x);
    printf("\nz=%s", z);
}