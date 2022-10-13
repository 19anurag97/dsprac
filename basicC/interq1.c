/*
    memory allocation for the structure is in stack.
    take student details and create,update and delete. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct student_details{
    char name[20];
    int marks;
    int rollnum;
}stu;

void create(int, stu s[]);
void update(int, stu s[]);
//void delete();
void display(int, stu s[]);

int main(){
    
    int n,i;
    printf("\n Enter number of students: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > MAX){
        exit(1);
    }
    stu s[n];
    printf("\n Enter details of students ");
    create(n, s);
    printf("\n Display details of students ");
    display(n, s);
    printf("\n Update details of students placed at position 1: ");
    update(1, s);
    printf("\n Display details of students ");
    display(n, s);
    return 0;
}

void create(int n, stu p[]){
    for (int i=0;i<n;i++){
        printf("\n Student: %d ", i+1);
        //strcpy(p[i].name, "RAJ");
        scanf("%s", &p[i].name);
        scanf("%d", &p[i].marks);
        scanf("%d", &p[i].rollnum);
        //scanf("%s", s[i].name);
    }
}

void display(int n, stu p[]){
    for (int i=0;i<n;i++){
        printf("\n Student: %d \n", i+1);
        printf("\nname -> %s", p[i].name);
        printf("\nmarks -> %d", p[i].marks);
        printf("\nrollnumber -> %d", p[i].rollnum);
    }
}

void update(int a, stu p[]){
    printf("\n Update Student placed at posn: %d ", a+1);
        //strcpy(p[i].name, "RAJ");
    scanf("%s", &p[a].name);
    scanf("%d", &p[a].marks);
    scanf("%d", &p[a].rollnum);
}