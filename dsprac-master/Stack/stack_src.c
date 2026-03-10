#include "stack_support.h"

bool isEmpty(Stack *st){
    return (st->top == -1);
}

bool isFull(Stack *st){
    return (st->top == MAX_STACK_SIZE);
}

void init_stack(Stack *st){
    st->top = -1;
}

void push_stack(Stack *st, int data){
    if (isFull(st))
    {
        printf("\nisFull");
        return;
    }
    st->top++;
    st->arr[st->top] = data;
}

void pop_stack(Stack *st){
    if (isEmpty(st))
    {
        printf("\nisEmpty");
        return;
    }
    st->top--;
}

void peek_stack(Stack *st){
    if (isEmpty(st))
    {
        printf("\nisEmpty");
        return;
    }
    printf("\npeeked top-> %d", st->arr[st->top]);
}