#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void BubbleSort(int arr[], int size, int *steps)  // T(n) = O(n^2)
{
    if (size < 0)
    {
        return;
    }
        for(int i=0; i<size-1; i++) // runs N times
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                ++*steps;
            }
        }
    BubbleSort(arr, size-1, steps);
}

int main()
{
    int arr[10] = {1, 12, 90, 4, 9, 5, 19, 15, 18, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size is : " << size << endl;
    cout<<"Hello World" << endl;
    int steps = 0;
    BubbleSort(arr, size, &steps);
    cout << endl;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "steps: " << steps;
    return 0;
}
