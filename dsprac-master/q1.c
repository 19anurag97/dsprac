#include "q1.h"

node *start, *tmp, *rev, *newst;

int main() {
    int n;
    printf("\nInput no. of data\n");
    scanf("%d", &n);
    start = createll(n, tmp);
    displayll(start);
    /*rev = reversell(start);
    printf("\n Display in reverse order");
    displayll(rev);
    printf("\n Count nodes");
    countnodes(rev);
    printf("\nInsert at beginning\n");
    start = insert_at_begin(start);
    displayll(start);
    printf("\nInsert at END\n");
    start = insert_at_end(start);
    displayll(start);
    printf("\nInsert at middle\n");
    start = insert_at_middle(start);
    displayll(start);
    printf("\nDelete at first\n");
    start = del_first(start);
    displayll(start);
    printf("\nDelete middle\n");
    start = del_middle(start);
    displayll(start);
    printf("\nDelete last\n");
    start = del_last(start);
    displayll(start);
    printf("\nSearch Element\n");
    int x = search_elem(start);
    printf("\nElement at node : %d", x);
    printf("\nDelete info at given position\n");
    start = del_at_pos(start);
    displayll(start);*/
    printf("\n Count occurrence of Key in linklist.\n");
    int key=0;
    printf("\nEnter Key\n");
    scanf("%d", &key);
    int x = sll_one(start, key);
    printf("\nOccurrences are : %d", x);

    return 0;
}


