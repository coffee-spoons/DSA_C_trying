#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int  top;
    int * arr;
};

int isEmpty(struct stack * ptr)
{
    if (ptr->top < 0)
    {
        return 1;
    }
    // else
    // {

    //     return 0 ;
    // }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    // else
    // {

    //     return 0;
    // }
}

int main()
{
    struct stack * s=(struct stack *)malloc (sizeof(struct stack));
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    //pushing element manually
    // s->arr[0] = 3;
    // s->top++;
    int a;
    // a=isEmpty(s);
    a =0;

    //checking the stack is empty or not?
    if (a==0)
    {
        printf("\nthe stack is NOT EMPTY");
    }
    else
    {
        printf("\nThe stack is EMPTY");
    }
    //checking the stack is full or not?
    // if(isFull(s1)){
    //     printf("\nThe stack is FULL");
    // }
    // else{
    //     printf("\nThe stack is NOT FULL");
    // }
    return 0;
}