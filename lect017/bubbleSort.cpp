#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << "printing array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// BUBBLE SORT
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        // (size-i) : from the ending of array "i" number of elements are sorted
        for (int j = 1; j < (size - i); j++)
        {

            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

// Slightly Optimized Bubble Sort
void bubbleSort2(int arr[], int size)
{
    bool swapped = false;
    for (int i = 0; i < (size - 1); i++)
    {
        // (size-i) : from the ending of array "i" number of elements are sorted
        for (int j = 1; j < (size - i); j++)
        {

            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                swapped = true;
            }
        }

        if (not(swapped))
        {
            break;
        }
    }
}

int main()
{
    int arr1[6] = {10, 1, 7, 6, 14, 9};
    int size = 6;
    bubbleSort(arr1, size);
    printArr(arr1, size);
    return 0;
}