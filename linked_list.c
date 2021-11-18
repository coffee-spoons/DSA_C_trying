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

struct node * insertAtBegin(struct node * head, int data ){
    struct node * ptr=( struct node *) malloc( sizeof(struct node *));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insertAtIndex(struct node * head, int data, int index){
    struct node * ptr=(struct node* )malloc(sizeof(struct node*));
    struct node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node* insertAtEnd(struct node * head, int data){
    struct node * ptr= (struct node *)malloc(sizeof(struct node ));
    ptr->data=data;
    struct node * p=head;
    while (ptr->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node * insertAfterNode(struct node * head, struct node * prevNode, int data){
    struct node * ptr = (struct node * )malloc(sizeof(struct node ));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}


int main()
{
    struct node * head,*second, * third,*fourth;  
    int a,b,c;  

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
    fourth->next=NULL;
    linked_traversal(head);
    printf("\n_____________________________________________\n\n");

    head =insertAtBegin(head, 67);
    linked_traversal(head);
    printf("\n_____________________________________________\n\n");

    head=insertAtIndex(head, 90, 2);
    linked_traversal(head);
    printf("\n_____________________________________________\n\n");

    head =insertAtEnd(head,34);
    linked_traversal(head);
    printf("\n_____________________________________________\n\n");

    head= insertAfterNode(head,third,56);
    linked_traversal(head);
    return 0;
}