#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void linked_traversal(struct node * head){
    struct node * ptr= head;
    do{
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);

}   

struct node * inserAtFirst(struct node * head, int data){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p= head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head = ptr;
    return head;
}

int main()
{
    struct node * head,*second, * third,*fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    // printf("\nEnter head: ");
   
   
    // scanf("%d",&a);
    head->data=56;
    head->next=second;

    // printf("\nEnter second: ");
    // scanf("%d",&b);
    second->data=24;
    second->next=third;

    // printf("\nEnter third: ");
    // scanf("%d",&c);
    third->data=438;
    third->next=fourth;

    fourth->data=82;
    fourth->next=head;

    linked_traversal(head);
    printf("\n\nAfter insertion...\n");
    head= inserAtFirst(head,58);
    linked_traversal(head);
    return 0;
}