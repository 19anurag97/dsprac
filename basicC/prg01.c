//arrayofstructs
#include <stdio.h>
#include <stdint-gcc.h>

void func(int);
void func1(char, char);

void func(int x)
{
    printf("\nvalue : %d", x);
}

void func1(char x, char y)
{
    printf("\nchar values : %c    %c", x, y);
}

struct mystruct
{
    int x;
    int y;
};

union myunion
{
    int a;
    char x;
};

struct employee
{
	int	 emp_id;
	int	 name_len;
	char name[0];
};


int main()
{
    void (*ptr)(int) = func;
    void (*ptr1)(char, char) = func1;

    union myunion u;
    u.a = 9;
    u.x = 1;
    u.a = 66;    //last value assigned will remain in both.

    struct mystruct ar[10];
    ar[0].x = 5;
    ar[0].y = 8;
    ar[1].x = 88;
    ar[1].y = 55;

    for (int i=0; i<2; i++)
    {
        printf("\n structure values %d are\n %d    %d", i, ar[i].x, ar[i].y);
    }

    printf("\n union values are\n %d    %c", u.a, u.x); //it will show value assigned last.

    ptr(10);
    ptr(2);

    ptr1('A', 'B');
    return 0;
}