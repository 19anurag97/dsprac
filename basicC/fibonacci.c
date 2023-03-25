/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//fibonacci 0 1 1 2 3 5 8
//print 10 fibseries starts from n.

void fibseries()//0
{
    int x[10];
    x[0]=0;
    x[1]=1;
    for (int i=2;i<10;i++)
    {
        x[i]=0;
        for(int j=i-2;j<i;j++)
        {
            x[i] += x[j];
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("\t%d", x[i]);    
    }
}

void fibseries1()
{
    int n1=0,n2=1,n3=0;
    int num=0, i=0;
    printf("\nMax limit of fibseries:");
    scanf("%d", &num);
    
    while (i < num) //0<10
    {
        if (i==0)
        {
            printf("\t%d", n1); 
        }
        
        if (i==1)
        {
            printf("\t%d", n2); 
        }
        
        else
        {
            n3 = n1 + n2;
            printf("\t%d", n3);
            n1 = n2;
            n2 = n3;
        }
        i++;
    }
    
}

void fibseries2(int n)          //using recursion.
{
    static int n3,n2=1,n1=0;
    while(n>0)
    {
        n3 = n1 + n2;
        printf("\t%d", n3);
        n1 = n2;
        n2 = n3;
        n--;
        return fibseries2(n);
    }
}

int main()
{
    int n=10;   //print 10 numbers.
    
    //fibseries();
    fibseries1();
    printf("\n\t%d \t%d", 0,1);
    fibseries2(n-2);
    return 0;
}
