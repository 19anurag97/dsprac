#ifndef STACK_SUPPORT_H
#define STACK_SUPPORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 10

typedef struct Stack{
    int arr[MAX_STACK_SIZE];
    int top;
}Stack;


/********** Function Declarations **********/
bool isEmpty(Stack *st); 
bool isFull(Stack *st);
void init_stack(Stack *st);
void push_stack(Stack *st, int data);
int pop_stack(Stack *st);
void peek_stack(Stack *st);
void display_stack(Stack *st);
void stack_sort(Stack *st);
#endif  //STACK_SUPPORT_H


