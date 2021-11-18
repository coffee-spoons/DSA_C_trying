#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

int isEmpty(struct node * ptr){
    if (ptr==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct node * ptr){
    struct node * new_node=(struct node * )malloc(sizeof(struct node));
    if (new_node==NULL)   
    {
        return 1;
    }
    else{
        return 0;
    }
}

int pop(struct node ** ptr,int x){
    if(isEmpty(*ptr)){
        printf("\nStack is Empty...");
    }
    else{
    struct node * temp=*ptr;
    *ptr=(*ptr)->next;
    int data=temp->data;
    free(temp);
    return data;
    }
}
struct node * push(struct node * ptr, int data){
    if(isFull(ptr)){
        printf("\nThe stack is Full...");
        return ptr;
    }
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=ptr;
    ptr=new_node;
    return ptr;

}

void display(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node * top=NULL;
    top=push(top,45);
    top=push(top,732);
    top=push(top,747);
    top=push(top,48);
    top=push(top,285);
    top=push(top,59);
    display(top);
    printf("_________________");
    int a=pop(&top,59);
    display(top);
    return 0;
}