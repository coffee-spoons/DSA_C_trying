#include<stdio.h>
#include<stdlib.h>

struct node
{
    char name[30];
    int roll;
    struct node * next;
};

void traverse(struct node * head){
    while (head!=NULL)
    {
        printf("\nName-> %c, ", head->name);
        printf("\nRoll-> %d, ", head->roll);
        head=head->next;
    }    
}

int main()
{
    struct node * head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node * second;
    second= (struct node *)malloc(sizeof(struct node));
    struct node * third;
    third= (struct node *)malloc(sizeof(struct node));
    struct node * forth;
    forth= (struct node *)malloc(sizeof(struct node));

    head->name[30]="Anuj";
    head->roll=34;
    head->next=second;

    second->name[30]="Ram";
    second->roll=45;
    second->next=third;

    third->name[30]="Jay";
    third->roll=72;
    third->next=forth;

    forth->name[30]="Uranius";
    forth->roll=62;
    forth->next=NULL;

    traverse(head);
    return 0;
}