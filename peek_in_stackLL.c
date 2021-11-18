#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void stackTraverese(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nElement is: %d", ptr->data);
        ptr = ptr->next;
    }
}

int peek(int pos, struct node *top)
{
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr !=  NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int isEmpty(struct node * ptr){
    if(ptr==NULL){
        return 1;
    }
    else{ return 0;}
}

int isFull(struct node * ptr){
    struct node * n= (struct node * )malloc(sizeof(struct node));
    if(n==NULL){ return 1;  }
    else{return 0;}
}

struct node * push(struct node * ptr,int new_data){
    if(isFull(ptr)){ return ptr;}
    else{
        struct node * new_node=(struct node * )malloc ( sizeof(struct node));
        new_node->data=new_data;
        new_node->next=ptr;
        ptr=new_node;
        return ptr;
    }
}

struct node *  pop(struct node * ptr){
    struct node * new_node=ptr->next;
    free(ptr);
    return new_node;       
}

int main()
{   
    struct node * top=NULL;
    top=push(top,45);
    top=push(top,37);
    top=push(top,2645);
    top=push(top,73);
    top=push(top,4585);
    top=push(top,47);
    top=push(top,3736);
    stackTraverese(top);
    printf("\n______________________________________");
    top=pop(top);
    stackTraverese(top);
    // printf("\nThe peeked element is %d", peek(3,top));
    return 0;
}