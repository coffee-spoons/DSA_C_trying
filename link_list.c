#include<stdio.h>
#include<stdlib.h>

struct link_list
{
    char name[30];
    int roll;
    struct link_list * next;
};

void traverse(struct link_list *ptr){
    while (ptr!=NULL)
    {
        printf("\nThe name of student is: %s",ptr->name);
        printf("\nRoll number is: %d",ptr->roll);
        ptr=ptr->next;
    }
}

int main()
{
    struct link_list *head1;
    struct link_list *head2;
    struct link_list *head3;
    struct link_list *head4;
    struct link_list *head5;
    int a,b,c,d,e;
    char a1[30],a2[30],a3[30],a4[30],a5[30];

    head1=(struct link_list *)malloc(sizeof(struct link_list));
    head2=(struct link_list *)malloc(sizeof(struct link_list));
    head3=(struct link_list *)malloc(sizeof(struct link_list));
    head4=(struct link_list *)malloc(sizeof(struct link_list));
    head5=(struct link_list *)malloc(sizeof(struct link_list));

    printf("\nEnter the name and roll no of student: ");
    scanf("%c",a1[30]);
    scanf("%d",&a);
    

    printf("\nEnter the name and roll no of student: ");
    scanf("%c",a2[30]);
    scanf("%d",&b);
    
    printf("\nEnter the name and roll no of student: ");
    scanf("%c",a3[30]);
    scanf("%d",&c);
    
    printf("\nEnter the name and roll no of student: ");
    scanf("%c",a4[30]);
    scanf("%d",&d);
    
    printf("\nEnter the name and roll no of student: ");
    scanf("%c",a5[30]);
    scanf("%d",&e);

    // head1->name=a1[30];
    head1->roll=a;
    head1->next=head2;
    // head1->name=a1[30];
    head2->roll=a;
    head2->next=head3;
    // head1->name=a1[30];
    head3->roll=a;
    head3->next=head4;
    // head1->name=a1[30];
    head4->roll=a;
    head4->next=head5;
    // head1->name=a1[30];
    head5->roll=a;
    head5->next=NULL;

    traverse(head1);
    
    return 0;
}