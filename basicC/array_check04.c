/*
    1)sort
    2)low to high indexing.
    3)
    2,3,4,
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void enter_array(int [], int);
void sort_array(int [], int);
void swap_arr(int *, int *);
void swap_arr1(int *, int *);
void display(int [], int);

int main()
{
    int arr[5];
    int *new_arr = NULL;
    int size = sizeof(arr)/sizeof(arr[0]);
    enter_array(arr, size);
    sort_array(arr, size);
    display(arr, size);
    return 0;
}

void enter_array(int arr[], int size)
{
    for (int i=0;i<size;i++)    //enter array
    {
        printf("\nARRAY element [%d]", i+1);
        scanf("\n%d", &arr[i]);
    }
}

void swap_arr(int *p, int *q)
{
    int temp=0;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swap_arr1(int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}

void sort_array(int n_arr[], int size)          //ascend
{
    for (uint8_t i = 0; i < (size-1); i++)
    {
        for (uint8_t j = 0; j < (size-i-1); j++)
        {
            if (n_arr[j] > n_arr[j+1])
            {
                swap_arr1(&n_arr[j], &n_arr[j+1]);
            }
        }
    }
}

void display(int n_arr[], int size)
{
    printf("\n Sorted array\n");
    for (uint8_t j = 0; j < size; j++)
    {
        printf("\nElement[%d]: %d", j+1, n_arr[j]);
    }
}