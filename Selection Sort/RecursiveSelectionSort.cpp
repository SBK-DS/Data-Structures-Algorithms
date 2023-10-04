#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int FindMinIndex(int arr[], int i, int size, int *steps) 
{
    int min=i;
        
    for(int j=i; j<size; j++)
    {
        if(arr[min]>arr[j])
        {
            min = j; 
            ++*steps;
        }
    }
    
    return min;
}

// T(n) = O(n^2) --> Average Case
// T(n) = O(n^2) --> Best Case
void SelectionSort(int arr[], int i, int size, int *steps)
{
        if( i >= size )
        {
            return;
        }
        
        int min = FindMinIndex(arr, i, size, steps);
        swap(arr[i], arr[min]);
        SelectionSort(arr, ++i, size, steps);
}

int main()
{
    int arr[10] = {1, 12, 90, 4, 9, 5, 19, 15, 18, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size is : " << size << endl;
    cout<<"Hello World" << endl;
    int steps = 0;
    SelectionSort(arr, 0, size, &steps);
    cout << endl;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "steps: " << steps;
    return 0;
}
