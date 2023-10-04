#include <iostream>

using namespace std;

// T(n) = O(n^2) --> Average Case
// T(n) = O(n^2) --> Best Case
int BinarySearch(int arr[], int size, int num, int *steps)
{
    int index = size/2;
    while(index > 0 || index < size)
    {
        if(arr[index] == num)
        {
            return index;
        }
        if(arr[index] > num)
        {
            index = index/2;
        }
        if(arr[index] < num)
        {
            index = (index+size)/2;
        }
    }
}

int main()
{
    int arr[10] = {1, 5, 6, 19, 23, 40, 54, 65, 71};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size is : " << size << endl;
    int steps = 0;
    int index = BinarySearch(arr, size, 19, &steps);
    cout << "index : " << index;
    return 0;
}
