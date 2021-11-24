#include <stdio.h>

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionSort(int *a, int n)
{
    int indOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indOfMin])
            {
                indOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indOfMin];
        a[indOfMin] = temp;
    }
}

int main()
{
    int a[] = {2, 86, 22, 56, 51, 53};
    int n = 6;
    display(a, n);
    selectionSort(a, n);
    display(a, n);
    return 0;
}