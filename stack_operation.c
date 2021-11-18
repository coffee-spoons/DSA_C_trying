#include <stdio.h>
#include <stdlib.h>

struct stack_operation
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack_operation *ptr)
{
    if (ptr->top == -1 || ptr->top < 0)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack_operation *ptr)
{
    if (ptr->top == (ptr->size) - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack_operation *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("\nthe stack is overflow.\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(struct stack_operation *ptr)
{
    if (!isFull(ptr))
    {
        printf("\nYour Stack is full.");
    }
    else
    {
        int data;
        data = ptr->arr[ptr->top];
        if (ptr->top = 0)
        {
            ptr->top = -1;
        }
        else
        {
            ptr->top--;
        }
        return data;
    }
}

int peek(struct stack_operation * ptr, int index){
    int arin= ptr->top-index+1;
    if(arin  <0 ){
        printf("\nThe value is invalid.");
    }
    else{
        return ptr->arr[arin];
    }
}

int main()
{
    struct stack_operation *s = (struct stack_operation *)malloc(sizeof(struct stack_operation));
    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // printf("Before pushing  ->  %d\n", isEmpty(s));
    // printf("Before pushing  ->  %d\n", isFull(s));
    push(s, 74);
    push(s, 456);
    push(s, 5);
    push(s, 64);
    push(s, 568);
    push(s, 678);
    push(s, 58);
    push(s, 75);
    push(s, 35);
    push(s, 25); // pushed 10 elements
    // printf("After pushing  ->  %d\n", isEmpty(s));
    // printf("After pushing  ->  %d\n", isFull(s));

    // printf("\nPopped %d from the stack.", pop(s));
    // int ind;
    // printf("\nEnter the index: ");
    // scanf("%d",&ind);

        for (int position = 1; position <= s->top+1; position++)
        {
        printf("\nElement at index %d is: %d",position,peek(s,position));
        }
        
    return 0;
}