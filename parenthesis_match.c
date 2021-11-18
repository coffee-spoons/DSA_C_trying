#include<stdio.h>
#include<stdlib.h>

struct stack_
{
    int top, size;
    char * arr;
};

int isEmpty(struct stack_ * ptr){
    if( ptr->top==-1){ return 1;}
    return 0;
}
int isFull(struct stack_ * ptr){
    if(ptr->top==ptr->size-1){return 1;}
    return 0;
}

void push(struct stack_ * ptr, char wo){
    if(isFull(ptr)){
        printf("\nThe stack is overflow...");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=wo;
    }
}

void pop(struct stack_ * ptr){
    if(isEmpty(ptr)){
        // return 0;
    }
    else{
        // ptr->arr[ptr->top];
        ptr->top--;

    }
}

int parenthesisMatch(char *exp){
    struct stack_ * sp;
    sp->size=100;
    sp->top=-1;
    sp->arr =(char *)malloc(sp->size* sizeof(char)); 

    for (int  i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    return 1;
}



int main()
{
    char * exp="(8*9";
    if( parenthesisMatch(exp)){
        printf("\nthe paranthesis is amtching...");
    }
    else{
        printf("\nThe paranthesis is not matching...");
    }
    return 0;
}