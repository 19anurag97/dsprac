#include <stdio.h>
#include <stdlib.h>

/*
    The size of a data type varies for different machines depending on the processor
    used (16-bit, 32-bit or 64-bit)
    
    Thus, the sizeof(int) is 2 bytes for a 16-bit machine and 4 bytes for a 32-bit and 64-bit machine.
    
    WORD SIZE ? : It determines how many bytes can be transferred 
    between CPU and memory in one memory "cycle".(Data bus size)
    
    The word size is the main determining factor in finding the size of the pointer.
    the size of a char pointer in a 32-bit processor is 4 bytes,
    while the size of a char pointer in a 16-bit processor is 2 bytes. 
    sizeof() pointer in 64 bit m/c is 8bytes.
*/

int main(int argc, char* argv[]){
    int a = 5;
    int arr_i[5] = {1,3,4,88,2};
    char arr[3] = {3, 5, 11};
    char* arrp = arr;
    
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arrp));//sizeof pointer in 4bytes?? 

    //find num of elements present in any array using sizeof() function.
    printf("no. of elements : %d\n", sizeof(arr)/sizeof(arr[0]));
    printf("no. of elements : %d\n", sizeof(arr)/sizeof(char));//similar to above.
    printf("no.of elements: %d\n", sizeof(arr_i)/sizeof(arr_i[0]));

    printf("what is sizeof(sizeof())) ???: %d\n", sizeof(sizeof(arr[0])));
}