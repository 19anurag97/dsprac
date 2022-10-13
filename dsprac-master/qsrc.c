#include "q1.h"
/*create linklinst take 2 parameters first no. of nodes,
second is tmp pointer pointing to head. Head should be previously initialised.*/

node *createll(int n, node *tmp) {
    int i=0;
    node *start = (node*) malloc (sizeof(node));
    printf("\nStart node data\n");
    scanf("%d", &start->info);
    start->link = NULL;
    tmp = start;
    node *newnode;
    for (i=2;i<=n;i++){
    
        newnode = (node *) malloc (sizeof(node));
        printf("\nNew node data\n");
    
        scanf("%d", &newnode->info);
        newnode->link = NULL;

        tmp->link = newnode;
        tmp = tmp->link;
    }
 return start;    
}
/* reverse singly linklist */
node *reversell(node *start){
    node *prev, *ptr, *next;
    prev = NULL;
    ptr = start;
    while (ptr != NULL){
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
}

int countnodes(node *start){
    node *ptr;
    int count = 1;//not expecting a single node only(> 1 node in linklist)
    ptr = start;
    while (ptr->link != NULL){
        ptr = ptr->link;
        count++;
    }
    printf("\n No. of nodes are %d", count);
    return count;
}

/*insert at middle*/
node *insert_at_middle(node *start){
    node *ptr, *newnode;
    ptr = start;
    newnode = (node *) malloc (sizeof(node));
    printf("\nEnter the num to add: \n");
    scanf("%d", &newnode->info);
    int i=0, midpos=0;
    midpos = countnodes(start)/2;
    printf("%d", midpos);
    for (i=1;i<midpos;i++){
        ptr = ptr->link;
    }
    newnode->link = ptr->link;
    ptr->link = newnode;
    return start;
}

/* insert at beginning */
node *insert_at_begin(node *start){
    node *ptr =  (node *) malloc (sizeof(node));//need to allocate new memory to add num.
    printf("\nEnter num to add:\n");
    scanf("%d", &ptr->info);
    ptr->link = start;
    start = ptr;
    return start;
}

node *insert_at_end(node *start){
    node *newnode =  (node *) malloc (sizeof(node));//need to allocate new memory to add num.
    node *ptr;
    ptr = start;
    printf("\nEnter num to add:\n");
    scanf("%d", &newnode->info);
    newnode->link = NULL;
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = newnode;
    return start;
}

/*delete first element*/
node *del_first(node *start){
    node *ptr;
    ptr = start;
    start = ptr->link;
    ptr->link = NULL;
    return start;
}

/*delete middle element*/
node *del_middle(node *start){
    node *ptr, *temp;
    ptr = start;
    int i=0;
    int midpos = countnodes(start)/2;//2
    for (i=1;i<midpos;i++){
        ptr = ptr->link;
    }
    temp = ptr;
    temp = temp->link;
    ptr->link = temp->link;
    temp->link = NULL;
 
    return start;
}

/*delete last */
node *del_last(node *start){
    
    node *ptr, *prev;
    ptr = start;
    while (ptr->link != NULL){
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = NULL;

    return start;
}

/* delete at a given position */
node *del_at_pos(node *start){
    node *ptr, *prev;
    ptr = start;
    int pos=0, i=0;
    printf("\n Enter the position:  ");
    scanf("%d", &pos);//4 , 3
    for (i=1;i<pos;i++){
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = ptr->link;
    free(ptr);    
    return start;
}

/* Search element */
int search_elem(node *start){
    node *ptr;
    ptr = start;
    int elem = 0, cnt = 1;
    printf("\n Enter element to search: ");
    scanf("%d", &elem);
    while (ptr != NULL){
        if (ptr->info == elem){
            return cnt;
        }
        else {
            ptr = ptr->link;
            cnt++;
        }
    }
    printf("\nElement does not exist in LL\n");
    return 999;
}

/* check question on "SLLprobs.txt" */
int sll_one(node *start, int key){
    if (start == NULL){
        return 0;
    }

    if (start->info == key){
        return 1+sll_one(start->link, key);
    }

    else 
        return sll_one(start->link, key);
}

/*display linklist*/

void displayll(node *start){
    node *tmp;
    tmp = start;
    while (tmp != NULL){
        printf("\ninfo: %d\n", tmp->info);
        tmp = tmp->link;
    }
}
