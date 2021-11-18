 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

struct stack{
    int size, top;
    char * arr;
};

int isEmpty(struct stack * ptr){
    if( ptr->top<0){
        return 1;
    }
    return 0;
}

char stackTop(struct stack * ptr){
    return ptr->arr[ptr->top];
}

int isFull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}

char pop(struct stack * ptr){
    char val= ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

void push(struct stack * ptr, char ch){
    ptr->top++;
    ptr->arr[ptr->top]=ch;
}

int precedence(char ch){
    if(ch=='*' || ch=='/')
        return 3;
    else if(ch=='+' || ch=='-')
        return 2;
    else 
        return 0;
    
}

int isOperator(char ch){
    if( ch=='+' || ch=='-' || ch=='*' || ch=='/' )
        return 1;
    return 0;
}
 
char * infToPost(char * infix){
    struct stack * sp = (struct stack * ) malloc ( sizeof( struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char * ) malloc (sp->size* sizeof(char));
    char * postfix = (char * ) malloc (((strlen(infix))+1 ) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

 int main()
 {
    char * exp="x-y/z-k*d";
    printf("postfix is %s",infToPost(exp));
    return 0;
 }