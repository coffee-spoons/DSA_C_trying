#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void linked_traversal(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }    
}

struct node * deleteAtBegin(struct node * head){
    struct node * ptr =head;
    head=head->next;
    free(ptr);
    return head;
}

struct node * deleteAtIndex(struct node * head, int index){
    struct node * p =head; 
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    int i =0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr=p->next ;   
    p->next=ptr->next;
    free(ptr);
    return head;
}

struct node * deleteAtLast(struct node * head){
    struct node * p =head;
    struct node * q =head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    free(q);
    p->next=NULL;
    return head;    
}

int main()
{
    struct node * head,*second, * third,*fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
   
    head->data=56;
    head->next=second;

    second->data=24;
    second->next=third;

    third->data=438;
    third->next=fourth;

    fourth->data=82;
    fourth->next=NULL;
    printf("\nlist before deleting");
    linked_traversal(head);
    // head= deleteAtBegin(head);
    // linked_traversal(head);

    // head= deleteAtBegin(head);
    // head= deleteAtIndex(head, 2);
    head= deleteAtLast(head);
    printf("\nlist after deleting");
    linked_traversal(head);
    
    return 0;
}