#include "stack_support.h"

int main() {
    Stack *s = (Stack *) malloc(sizeof(Stack));
    init_stack(s);
    push_stack(s, 989);
    push_stack(s, 11);
    push_stack(s, 12);
    push_stack(s, 2);
    push_stack(s, 12);
    push_stack(s, 111);
    display_stack(s);

    stack_sort(s);
    printf("\nSorted Stack elements: ");
    display_stack(s);
    // pop_stack(s);
    // pop_stack(s);
    // pop_stack(s);
    // pop_stack(s);
    // pop_stack(s);
    // peek_stack(s);
    
    free(s);

    return 0;
}