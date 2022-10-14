#include <stdio.h>
#include <string.h>

//mem commands reflect changes inside main()
//because they perform functions in memory.

void cmp(int [], int []);
void cmp_size(int [], short int []);
void copy_elements(int [], int []);
void mem_set(int []);
void findbyte(int[]);

void main(){
    int arr1[] = {3, 3};//4bytes//0011 0010
    int arr2[] = {3, 3};
    short int arr3[] = {3, 3};//2bytes//01 10
    int arr4[] = {6, 0};//4bytes//0110

    cmp(arr1, arr2);//works ok.
    cmp_size(arr1, arr3);
    cmp_size(arr4, arr3);
    //you can compare int vs short int, but result will be different array.

    copy_elements(arr1, arr4);
    mem_set(arr1);
    findbyte(arr2);
}

void cmp(int arrx[], int arry[]){
/*  warning: implicit declaration of function 'memcmp'
    SOLVED.
    You forgot to #include <string.h>, which contains the declaration of memcmp.

    int memcmp(const void *str1, const void *str2, size_t n)
    
    str1 − This is the pointer to a block of memory.
    str2 − This is the pointer to a block of memory.
    n − This is the number of bytes to be compared.
*/
    if (memcmp(arrx, arry, 2* sizeof(int)) == 0){
        printf("\n Similar arrays");
    }
    else{
        printf("\n different arrays");
    }
}

void cmp_size(int arrx[], short int arry[]){
    if (memcmp(arrx, arry, 2* sizeof(short int)) == 0){
        printf("\n Similar arrays");
    }
    else{
        printf("\n different arrays");
    }
}

void copy_elements(int arrx[], int arry[]){
/*
    The C library function 
    void *memcpy(void *dest, const void *src, size_t n) 
    copies n characters from memory area src to memory area dest.

    arrx = {3, 3}
    arry = {6, 0}
    result arrx[0] arrx[1] = {6, 0}
*/
    memcpy(arrx, arry, 2*sizeof(int));
    printf("\n arrx %d  %d ", arrx[0], arrx[1]);
    printf("\n arry %d  %d ", arry[0], arry[1]);
}

void mem_set(int arrx[]){
/*
    The C library function void *memset(void *str, int c, size_t n) copies 
    the character c (an unsigned char)to the first n characters of the 
    string pointed to, by the argument str.
*/
    printf("\n before memset() %d  %d ", arrx[0], arrx[1]);
    memset(arrx, 0, 2*sizeof(int));
    printf("\n after memset() %d  %d ", arrx[0], arrx[1]);

    int temp[] = {1,3,5};
    printf("\n temp[], before memset() %d  %d  %d", temp[0], temp[1], temp[2]);
    
    memset(temp, 1, 3*sizeof(int));
    printf("\n temp[], after memset() %d  %d  %d", temp[0], temp[1], temp[2]);
    //gibberish values printed??
    printf("\n temp[], after memset() %08x  %08x  %08x", temp[0], temp[1], temp[2]);
    /*  
        why 01010101 ...????
        memset set every byte of your array to 1 not every int element.
        For things that are not bytes, though, the simplest way to initialize
        all of them is just to explicitly initialize all of them.
        memset allows you to fill individual bytes as memory and you are trying to set integer values 
        (maybe 4 or more bytes.) Your approach will only work on the number 0 and -1 
        as these are both represented in binary as 00000000 or 11111111.
    */
    memset(temp, -1, 3*sizeof(int));
    printf("\n set to -1 ,temp[], after memset() %d  %d  %d", temp[0], temp[1], temp[2]);

    char str[50];
    printf("\nMemset() check\n");
    strcpy(str, "practicefromcodevault");
    puts(str);
    memset(str, '%', 9);
    puts(str);
}

void findbyte(int arrx[]){
/*
    void *memchr(const void *str, int c, size_t n)
    
    str − This is the pointer to the block of memory where the search is performed.
    c − This is the value to be passed as an int, but the function performs a byte per byte 
    search using the unsigned char conversion of this value.
    n − This is the number of bytes to be analyzed.

    arrx[] = {3, 3} 0 0 0 3 0 0 0 3
    byte 0 and 3 present.

*/
    if (memchr(arrx, 3, sizeof(int) * 2) != NULL){
        printf("\nbyte exists");
    }
    else{
        printf("\nbyte doesn't exists");
    }
}