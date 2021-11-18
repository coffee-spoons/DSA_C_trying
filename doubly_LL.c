#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node * prev;
    int data;
    struct node * next;
};

void ll_traversal(struct node * head){
    int i=1;
    while (head!=NULL)
    {
        printf("\n%d. Element: %d",i,head->data);
        head=head->next;
        i++;
    }
    
}
void ll_traversal_reverse(struct node * last){
    int i=4;
    while (last!=NULL)
    {
        printf("\n%d. Element: %d",i,last->data);
        last=last->prev;
        i--;
    }
    
}

int main()
{
    struct node * head, * second, * third, * fourth;
    head= (struct node * )malloc(sizeof(struct node));
    second= (struct node * )malloc(sizeof(struct node));
    third= (struct node * )malloc(sizeof(struct node));
    fourth= (struct node * )malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=34;
    head->next=second;
    
    second->prev=head;
    second->data=23;
    second->next=third;

    third->prev=second;
    third->data=46;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=57;
    fourth->next=NULL;

    ll_traversal(head);
    printf("\n\n____________________________________\n\n\n");
    ll_traversal_reverse(fourth);

    return 0;
}