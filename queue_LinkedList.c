#include <stdio.h>
#include <stdlib.h>

struct node *f, *r;

struct node
{
    int data;
    struct node *next;
};

int isFull()
{

    return 0;
}

void LLtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nThe element is: %d", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("\nQueue is FUll...");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("\nThe queue is Empty...");
    }
    else
    {
        val = ptr->data;
        f = f->next;
        free(ptr);
    }
    return val;
}

int main()
{
    enqueue(334);
    enqueue(426);
    enqueue(35);
    enqueue(3);
    LLtraversal(f);
    printf("\nThe dequeue: %d", dequeue());
    LLtraversal(f);
    return 0;
}