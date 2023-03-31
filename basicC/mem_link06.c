#define TOTAL_STR   5
#define STR_SIZE    14

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

struct node
{    
    char *data;    
    struct node *next;    
};
struct node *f = NULL;
struct node *r = NULL;

//function declarations
void enqueue(char *d);
void display(void);
void dequeue(void);

int main()
{
    int i=0;
    char choice = 'n';
    char ch[STR_SIZE];
    while (i<TOTAL_STR)
    {
        printf("\nEnter string to add in node.\n");
        scanf("%s", &ch);
        enqueue(ch);
        i++;
    }
    printf("\nData full.\n");
    display();
    printf("\nNeed to add more data?y/n\n");
    scanf("%s", &choice);
    while (choice == 'y')
    {
        dequeue();
        printf("\nEnter string to add in new node.\n");
        scanf("%s", &ch);
        enqueue(ch);
        printf("\nNeed to add more data?y/n\n");
        scanf("%s", &choice);
    }
    display();
    return 0;
}

void enqueue(char* d)			//Insert elements in Queue
{
    struct node *n;
    n = (struct node *)malloc(sizeof (struct node));    //null
    n->data = (char *)calloc(14, sizeof(char));
    strcpy(n->data, d);
    n->next = NULL;
    if ((r == NULL) && (f == NULL))
    {
      f = r = n;
      r->next = f;
    }
    else                //else if (r != end_memory)
    {
      r->next = n;
      r = n;
      n->next = f;
    }
    //else if(r == end_memory){ dequeue(); enqueue(ch)}
}

void dequeue()			// Delete an element from Queue
{
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
    {
        printf ("\nQueue is Empty");
    }
    else if (f == r)
    {
        f = r = NULL;
        free(t);
    }
    else
    {
        printf("\n else");
        f = f->next;
        r->next = f;
        free(t);
    }
}

void display()
{	
    // Print the elements of Queue
    printf ("\nPrint the elements of Queue");
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
    {
      printf ("\nQueue is Empty");
    }  
    else
    {
      do
      {
        printf ("\n%s", t->data);
        t = t->next;
      }
      while (t != f);
    }
}