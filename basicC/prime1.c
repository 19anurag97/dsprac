/*
Find the maximum prime no. in array and the next highest prime number in it also.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int primenum(int x);
void display(int a[]);
int pr_higharr(int a[]);

void main()
{
    int pr_high = 0;
    int arr[10] = {9, 12, 3, 112, 59, 46, 21, 11, 13, 17};
    display(arr);
    pr_high = pr_higharr(arr);

    //primenum(97);
}

int pr_higharr(int a[10])
{
    static int temp[10];
    int max = 0, check = 0, cnt = 0, prime_cnt = 0;
    while (cnt < 10)
    {
        check = primenum(a[cnt]);
        if (check == 0)
        {
            prime_cnt++;
            temp[cnt] = a[cnt];
        }
        else
        {
            temp[cnt] = 0;
        }
        cnt++;
    }
    printf("\nTotal prime no. in array = %d\n", prime_cnt);
    display(temp);
    cnt = 0;
    while (cnt < 10)
    {
        if (max < temp[cnt])
        {
            max = temp[cnt];
        }
        cnt++;
    }
    printf("\nmax prime no. in array = %d\n", max);
    max++;
    while (primenum(max))
    {
        max++;
    }
    printf("\nNext highest prime no. in array = %d\n", max);
}

void display(int a[])
{
    for (int i=0;i<10;i++)
    {
        printf("\n%d", a[i]);
    }
}

int primenum(int x)
{
    int fl=0;
    if (x<3)
    {
        printf("\nPRIME\n");
    }
    else
    {
        for (int i=2;i<9;i++)
        {
            if(x % i == 0)
            {
                if (x == i)
                {
                    continue;
                }
                else
                {
                    fl=1;
                    break;
                }
            }
            else
            {
                fl = 0;
            }
        }
        if (fl==1)
        {
            //printf("\nnot prime\n");
            return fl;
        }
        else
        {
            //printf("\nPRIME\n");
            return fl;
        }
    }
}