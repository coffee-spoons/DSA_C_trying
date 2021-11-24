#include<stdio.h>
#include<stdlib.h>

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int * a, int n){
    int key,j;
    for (int i = 1; i <= n-1; i++)
    {
        key = a[i];
        j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
    int a[] = {2, 86, 22, 56, 51, 53};
    int n = 6;
    display(a,n);
    insertionSort(a,n);
    display(a,n);

    return 0;
}