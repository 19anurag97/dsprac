#include <stdio.h>
/*
Quick Sort: Hoarse's Algorithm
In place sorting algorithm -> dont require additional space.
In Hoarse algo:2 pointer based approach.
*/

void Print(int a[], int N){
    //Print the array:
    printf("\n");
    for (int i=0; i<N; i++){
        printf("\t%d", a[i]);
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high){
    int i=low-1,j=high+1;
    int Pivot=a[low];
    printf("\nPivot:index [%d]", Pivot);
    while(1){
        do{
            i++;
        }while(a[i]<Pivot);
        
        do{
            j--;
        }while(a[j]>Pivot);
        
        if (i>=j) break;
        
        swap(&a[i], &a[j]);
    }
    return j;
}


void quickSort(int a[], int low, int high){
    if (low < high){
        Print(a, 7); //debug
        int P = partition(a, low, high);
        quickSort(a, low, P);
        quickSort(a, P+1, high);
    }
}

int main()
{
    int a[] = {22,3,6,9,16,11,8};
    int N = sizeof(a)/sizeof(a[0]);
    quickSort(a, 0, N-1);
    
    //Print(a, N);
    
    return 0;
}

/*
	22	3	6	9	16	11	8
Pivot:index [22]
	8	3	6	9	16	11	22
Pivot:index [8]
	6	3	8	9	16	11	22
Pivot:index [6]
	3	6	8	9	16	11	22
Pivot:index [8]
	3	6	8	9	16	11	22
Pivot:index [9]
	3	6	8	9	16	11	22
Pivot:index [16]
*/