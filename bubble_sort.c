/******************************************
 * This program is for adaptive bubble sorting
 * ***************************************/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int *a, int n)
{
    int isSort = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                isSort = 1;
            }
        }
        if (isSort == 0)
        {

            return;
        }
    }
}

int main()
{
    int a[] = {2, 86, 22, 56, 51, 53};
    int n = 6;
    display(a, 6);
    bubbleSort(a, 6);

    display(a, 6);

    return 0;
}