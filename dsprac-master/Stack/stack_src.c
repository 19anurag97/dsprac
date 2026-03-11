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

int pop_stack(Stack *st){
    if (isEmpty(st))
    {
        printf("\nisEmpty");
        return -1;
    }
    st->top--;
    return st->arr[st->top + 1];
}

void peek_stack(Stack *st){
    if (isEmpty(st))
    {
        printf("\nisEmpty");
        return;
    }
    printf("\npeeked top-> %d", st->arr[st->top]);
}

void stack_sort(Stack *st){
    Stack tempStack;
    init_stack(&tempStack);

	while(!isEmpty(st)){
        int tmp = pop_stack(st);
	    while(!isEmpty(&tempStack) && tempStack.arr[tempStack.top] > tmp){
	        push_stack(st, pop_stack(&tempStack));
	    }
	    push_stack(&tempStack, tmp);
	}
	
	while(!isEmpty(&tempStack)){
	    push_stack(st, pop_stack(&tempStack));
	}
}

void display_stack(Stack *st){
    if (isEmpty(st))
    {
        printf("\nisEmpty");
        return;
    }
    printf("\nStack elements: ");
    for (int i = st->top; i >= 0; i--)
    {
        printf("%d ", st->arr[i]);
    }
}