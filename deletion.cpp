#include <iostream>
using namespace std;

class adt
{
public:
    int size, element, arr[50], index, index2;
    //function for displaying elements of an array

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ", ";
        }
        return;
    }

    //function for inserting an element in an array

    void insert()
    { //int *arr,int size, int index,int element){
        for (int i = size; i > index - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size++;
    }

    //function for deleting an element from an array

    void deletion_by_element()
    { //(int *arr, int size,int  element){
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                for (int j = i; j <= size-1; j++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
            }
        }
    }

    void deletion_by_index(){
        if(size==index2){

        }
        for(int i=index2;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
};

int main()
{
    adt sample;
    // int n,arr[50];
    cout << "\nEnter the nbumber of elements in array: ";
    cin >> sample.size;
    cout << "\nEnter the elements: ";

    //imnputting and displaying array

    for (int i = 0; i < sample.size; i++)
    {
        cin >> sample.arr[i];
    }
    sample.display();

    //inserting an element in an specified inddex

    cout << "\nEnter the index: ";
    cin >> sample.index;
    cout << "\nEnter the element: ";
    cin >> sample.element;
    sample.insert();
    sample.display();

    //deleting an element by finding the specific element from an array

    cout << "\nEnter the element need to remove or delete: ";
    cin >> sample.element;
    sample.deletion_by_element();
    sample.display();

    //deleting an element by finding the specific index from an array

    cout<<"\nEnter the index of the element you want to delete: ";
    cin>>sample.index2;
    sample.deletion_by_index();
    sample.display();

    return 0;
}