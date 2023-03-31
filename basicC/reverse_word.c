/*
Reverse words in a given string.
Input:
    S = i.like.this.program.very.much
Output: 
    much.very.program.this.like.i
Explanation: 
    After reversing the whole
    string(not individual words), the input
    string becomes
    much.very.program.this.like.i

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ** alloc_mem(int);
void free_mem(char **, int);
void reversearray_print(char **, int);

int main()
{
    int i=0,cnt=0,tmp_cnt=0,w_cnt=0;
    char temp[10];
    char *s = "i.like.this.program.very.much";

    while(*(s+i) != '\0')
    {
        if (*(s+i) == '.')
        {
            cnt++;
        }
        i++;
    }
    cnt++;
    printf("\nTotal words\n%d", cnt);

    char **st = alloc_mem(cnt);         //memory allocated for each word.

    i=0;
    while(*(s+i) != '\0')
    {
        if (*(s+i) == '.')
        {
            temp[tmp_cnt] = '\0';
            tmp_cnt=0;
            //save in **
            strcpy(st[w_cnt], temp);
            memset(temp, '\0', 10);
            w_cnt++;
        }
        else
        {
            temp[tmp_cnt] = *(s+i);
            tmp_cnt++;
        }
        i++;
    }
    strcpy(st[w_cnt], temp);
    for (int k=0;k<cnt;k++)
    {
        printf("\n%s", st[k]);
    }

    reversearray_print(st, cnt);

    free_mem(st, cnt);                  //memory freed for each ptr allocated.
    return 0;
}

void reversearray_print(char **str, int t_cnt)
{  
    t_cnt--;
    while (t_cnt >= 0) //str[t_cnt] != NULL)
    {
        printf("\nreverse:\t%s", str[t_cnt]);
        t_cnt--;     
    }
}

char **alloc_mem(int cnt)
{
    char **str = (char **)malloc(cnt * sizeof(char *));
    for (int i=0;i<cnt;i++)
    {
        str[i] = (char *)malloc(10 * sizeof(char));
    }      //string length 10  
    return str;  
}

void free_mem(char **st, int cnt)
{
    for (int i=0;i<cnt;i++)
    {
        free(st[i]);
    }
    free(st);
}