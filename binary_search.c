#include <stdio.h>

int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    high = size - 1;
    low = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
    return -1;
}
 
int main()
{
    int a[] = {1, 4, 6, 7, 9, 23, 34, 45, 67, 89,99};
    int size = 11;// = sizeof(a) / sizeof(int);
    int ele;
    scanf("%d", &ele);
    printf("\nEnter the element need to search: ");
    int ind = binary_search(a, size, ele);
    printf("\nThe element %d found at %d", ele, ind);
    return 0;
}