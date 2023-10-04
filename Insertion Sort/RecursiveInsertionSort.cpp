#include <iostream>

using namespace std;


// T(n) = O(n^2) --> Average Case
// T(n) = O(n) --> Best Case
void InsertionSort(int arr[], int i, int size, int *steps)
{
    if (i >= size)
    {
        return;
    }
    int temp, j;
    temp = arr[i];
    j = i-1;
    while(j >=0 && arr[j]>temp)
    {
        arr[j+1] = arr[j];
        j = j-1;
        ++*steps;
    }
    arr[j+1] = temp;
    
    InsertionSort(arr, ++i, size, steps);
   
   
}

int main()
{
    int arr[10] = {1, 12, 90, 4, 9, 5, 19, 15, 18, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
        cout << "Size is : " << size << endl;
        cout<<"Hello World" << endl;
        int steps = 0;
    InsertionSort(arr, 1, size, &steps);
    cout << endl;
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl << "steps: " << steps;
        return 0;
}
