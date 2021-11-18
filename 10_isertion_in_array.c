#include <stdio.h>

void input(int * arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    return;
}

void insert(int *arr,int size, int place, int ins){
    for (int i = (size-1); i > place-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[place]=ins;
    return;
}

int main()
{
    int array[50];
    int index, n,element;
one:
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    if (n > 50)
    {
        printf("\nEnter less than 50.");
        goto one;
    }
    input(array, n);  // inputting elements
    display(array, n); //displaying elements

    printf("\nEnter the element: ");
    scanf("%d",&element);
    printf("\nEnter the index: ");
    scanf("%d",&index);

    insert(array,n,index,element);
    n++;
    display(array,n);
    return 0;
}