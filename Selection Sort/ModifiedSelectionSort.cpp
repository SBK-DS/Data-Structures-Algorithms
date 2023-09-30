#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// T(n) = O(n^2) --> Average Case
// T(n) = O(n^2) --> Best Case
void SelectionSort(int arr[], int size, int *steps)
{
    for(int i=0; i<size; i++)
    {
        int min=i;
        int max=i;
        for(int j=i; j<size; j++)
        {
            if(arr[min]>=arr[j])
            {
                min = j; 
                ++*steps;
            }
            else if(arr[min]<arr[j] && arr[max]<arr[j])
            {
                max = j; 
                ++*steps;
            }
        }
        cout << "min: " << arr[min] << "max: " << arr[max] << endl;
        swap(arr[size-1], arr[max]);
        swap(arr[i], arr[min]);
        --size;
        
    }
}

int main()
{
    int arr[10] = {1, 12, 90, 4, 9, 5, 19, 15, 18, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size is : " << size << endl;
    cout<<"Hello World" << endl;
    int steps = 0;
    SelectionSort(arr, size, &steps);
    cout << endl;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "steps: " << steps;
    return 0;
}
