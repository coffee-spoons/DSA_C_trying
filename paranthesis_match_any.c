#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size, top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char value)
{
    if (isFull(ptr))
    {
        printf("\nStack is overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nthe stack is empty...");
        return -1;
    }
    else
    {
        char cal=ptr->arr[ptr->top ];
        ptr->top--;
        return cal;
    }
}

int match(char a, char b)
{
    if ((a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')'))
    {
        return 1;
    }
    return 0;
}

int paranthesisMatch(char *exp)
{
    struct stack *s;
    s->top = -1;
    s->size = 100;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped_char;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped_char = pop(s);
            if (!match(popped_char, exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *math = "(24{*}214(ciwi))";
    if (paranthesisMatch(math))
    {
        printf("\nThe paranthesis is balanced");
    }
    else
    {
        printf("\nThe paranthesis is not balanced");
    }
    return 0;
}