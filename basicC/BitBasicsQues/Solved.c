#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

void Unset_Last_Set_Bit(int i);
void Power_Of_Num24816(int num);
void count_set_bits(int num);
void upper_to_lower_case(void);
void lower_to_upper_case(void);
void Swap_Using_BitMan(void);

int main()
{
    int i = 8;
    if (i & (1<<3))
    {
        printf("\nith bit set");
    }
    else
    {
        printf("\nnot set");
    }
    int bit = 2;
    i |= (1<<bit);
    printf("\nith bit set, %d", i);

    i = i & ~(1<<bit);
    printf("\nith bit cleared, %d", i);

    Unset_Last_Set_Bit(166);
    Power_Of_Num24816(16);

    //toggle ith bit.
    i ^= (1<<0);//9
    printf("\ntoggled bit, %d", i);

    //find Rightmost/Lowest-order set bit.
    int bit_pos = i & (-i);
    printf("\nLowest-order set bit in %d, %d", i, bit_pos);

    count_set_bits(i);
    upper_to_lower_case();
    lower_to_upper_case();
    Swap_Using_BitMan();

    return 0;
}

void Swap_Using_BitMan(void)
{
    char ax = 'X';
    char ay = 'Y';
    printf("\nBefore ax = %c, ay = %c", ax, ay);
    ax = ax^ay;
    ay = ax^ay;
    ax = ax^ay;
    printf("\nAfter ax = %c, ay = %c", ax, ay);
}

void lower_to_upper_case(void)
{
    int i=0;
    char *first = "anurag";
    char second[7] = {0};
    while (*(first+i) != '\0')
    {
        *(second+i) = *(first+i) - (char)('a'-'A');
        i++;
    }
    *(second+i) = '\0';
    printf("\nString LtoU-> %s", second);
}

void upper_to_lower_case(void)
{
    char *first = "ANURAG";
    char second[7] = {0};
    int i=0;
    while(*(first+i) != '\0')
    {
        *(second+i) = *(first+i) + (char)32;
        i++;
    }
    *(second+i) = '\0';
    printf("\nString UtoL-> %s", second);
}

void count_set_bits(int num)
{
    //count set bits in num
    int cnt=0;
    for (int j=0;j<31;j++)
    {
        if (num & (1<<j))
        {
            cnt++;
        }
    }
    printf("\ncount set bits in i, %d", cnt);
}

void Power_Of_Num24816(int num)
{
    //Power Of 2
    if ((num & (num-1)) == 0)
    {
        printf("\npower of 2, %d", num);
    }
    else
    {
        printf("\nNOT power of 2, %d", num);
    }
    
    // Power of 4
    // Most power of 2 are power of 4, but some are not like:8,32,128,.... etc but when divided by 3
    // they give 1 as a remainder.
    if (((num & (num-1)) == 0) && (num%3) == 1)
    {
        printf("\npower of 4, %d", num);
    }
    else
    {
        printf("\nNOT power of 4, %d", num);
    }
    
    // Power of 8
    // Most power of 2 are power of 8, but some are not like:32,128,.... etc 
    // The number has its only set a bit at position 0 or 3 or 6 or .... 30 [For a 32-bit number]. 
    // To check the position of its set bit we can use a mask (0xB6DB6DB6)16 (10110110110110110110110110110110)2.
    if (((num & (num-1)) == 0) && !(num & 0xb6db6db6))
    {
        printf("\npower of 8, %d", num);
    }
    else
    {
        printf("\nNOT power of 8, %d", num);
    }

    // Power of 16
    double res = log(num) / log(16);
    if (res == floor(res))
    {
        printf("\npower of 16, %d", num);
    }
    else
    {
        printf("\nNOT power of 16, %d", num);
    }
}

//n = n & (n - 1);
void Unset_Last_Set_Bit(int i)         
{
    i = i & (i-1);
    printf("\nLast set bit cleared, %d", i);
    i=1;
    if (i & (1<<0))
    {
        printf("\nodd, %d", i);
    }
    else
    {
        printf("\neven, %d", i);
    }
    // int last_set_bit = 31;
    // int bit_pos = -1;
    // while(last_set_bit >= 0)
    // {
    //     if (i & (1 << last_set_bit))
    //     {
    //         bit_pos = last_set_bit;
    //     }
    //     last_set_bit--;
    // }
    // if (bit_pos >= 0)
    // { 
    //    i = i & ~(1<<bit_pos);
    //    printf("\nLast set bit cleared, %d", i);
    // }
    // else{
    //     printf("\nNo set bit", i);
    // }
}