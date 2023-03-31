//Longest Perfect Piece
// SUBARRAY

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//functions:
void enter_array(int [], int);
int max_return(int [], int);
void modify_newht(int [], int);

int main()
{
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int max=0;
    int ht[10] = {1,1,1,1,1,1,1,1,1,1};

    enter_array(arr, size);
    max = max_return(arr, size);

    for (int i=0;i<size;i++)        //change ht elements.
    {
        if ((arr[i] == max) || arr[i] == (max-1))           //2!=8 
        {
            ;
        }
        else
        {
            ht[i] = 0;
        }
    }

    modify_newht(ht, size);
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

int max_return(int arr[], int size)
{
    int rmax = 0;
    for (int i=0;i<size;i++) //find max mii
    {
        if (rmax < arr[i])
        {
            rmax = arr[i];       
        }
    }
    return rmax;
}

void modify_newht(int ht[], int size)
{
    int max1=0;
    int flag1=0, k=0;
    int new_ht[10];
    memset(new_ht, 0, 10*sizeof(new_ht[0]));
    
    for (int i=0;i<10;i++)
    {
        if (ht[i] == 1 && flag1 == 0)
        {
            new_ht[k] += 1; 
        }

        else if (ht[i] == 1 && flag1 == 1)
        {
            k++;
            new_ht[k] += 1;
            flag1 = 0; 
        }

        else if (ht[i] != 1)
        {
            flag1 = 1;
            continue;        
        }
        else;
    }
    for (int i = 0; i < size; i++)
    {
        printf("\nnewht elements: %d", new_ht[i]);
    }
    
    max1 = max_return(new_ht, size);
    printf("\nlength is: %d", max1);
}