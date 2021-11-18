#include<stdio.h>

int liner_search(int arr[],int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int a[]={10,20,30,47,345,56,4568,679,34,23};
    int size=sizeof(a)/sizeof(int), ele=56;
    int ind=liner_search(a,size, ele);
    printf("\nThe element %d found at %d",ele,ind);
    return 0;
}