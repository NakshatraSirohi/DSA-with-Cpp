#include <iostream>
using namespace std;

// question - Swap Alternate Element of an Array
void printArray(int arr[], int size)
{
    cout << "printing array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternate_swap(int arr[], int n)
{
    int start = 0, end = 1;

    while (end < n)
    {
        // swapping using 3rd variables
        /*
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        */

        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    alternate_swap(arr1, 6);
    printArray(arr1, 6);

    int arr2[5] = {1, 2, 3, 4, 5};
    alternate_swap(arr2, 5);
    printArray(arr2, 5);

    return 0;
}
