#ifndef Q1_H
#define Q1_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *link;
}node;

node *createll(int , node *);
node *reversell(node *);
int countnodes(node *);
node *insert_at_begin(node *);
node *insert_at_end(node *);
node *insert_at_middle(node *);
node *del_first(node *);
node *del_middle(node *);
node *del_last(node *);
node *del_at_pos(node *);
int search_elem(node *);

void displayll(node *);

/* SLLprobs.txt */
int sll_one(node *, int);
#endif