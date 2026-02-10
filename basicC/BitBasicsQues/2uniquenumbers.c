// Find the two non-repeating elements in an array of repeating elements(twice)
// Unique Numbers 2

/*
1. xor all
2. rightmost sset bit of xorall num
   0000 1110   (14)
&  1111 0010   (-14)
-------------
   0000 0010   (which is 2)

3. divide two arrays depends on set/unset of rightmost bit
4. xor two arrays to get 2 unique num.
*/

#include <stdio.h>

int resut_of_xor(int a[], int size);
int divide_a_array(int *a1, int *a2, int a[], int size, int bit);

int main()
{
    int res=0;
    int set_bit=-1;
    int temp1[4]={0};
    int temp2[4]={0};
    int result[2]={0};
    int a[] = {2, 4, 7, 9, 2, 4};
    int size1 = 0;
    int size2 = 0;
    int size = sizeof(a)/sizeof(a[0]);
    res = resut_of_xor(a, size);
    printf("\nxor all of elements-> %d", res);
    
    //Get rightmost set bit.
    set_bit = res & (-res);
    printf("\nrightmost set bit-> %d", set_bit);
    
    //divide acc. to bit.
    divide_a_array(temp1, temp2, a, size, set_bit);
    
    
    //xor all both arrays to get 2unique elements.
    size1 = sizeof(temp1)/sizeof(temp1[0]);
    size2 = sizeof(temp2)/sizeof(temp2[0]);
    result[0] = resut_of_xor(temp1, size1);
    result[1] = resut_of_xor(temp2, size2);
    
    
    printf("\nUniq no.-> %d", result[0]);
    printf("\nUniq no.-> %d", result[1]);
    
    return 0;
}

int divide_a_array(int *a1, int *a2, int a[], int size, int bit)
{
    int c1=0;
    int c2=0;
    
    for (int i=0;i<size;i++)
    {
        if (a[i] & (1<<bit))
        {
            a1[c1]=a[i];
            c1++;
        }
        else
        {
            a2[c2]=a[i];
            c2++;
        }
    }
    printf("\nPrint arrays:\n");
    for (int i=0;i<c1;i++)
    {
        printf("\t %d", a1[i]);
    }
    printf("\nPrint arrays:\n");
    for (int i=0;i<c2;i++)
    {
        printf("\t %d", a2[i]);
    }
    
}

int resut_of_xor(int a[], int size)
{
    int xor_all=0;
    for (int i=0;i<size;i++)
    {
        xor_all = xor_all ^ a[i];
    }
    return xor_all;
}