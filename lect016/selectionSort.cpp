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

// SELECTION SORT
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i;

        // (j=i) : from the start of array "i" number of elements are sorted
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

// Slightly Optimized Selection Sort
void selectionSort2(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i;

        // if arr[i] <= arr[i+1] then they are already sorted
        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
        else
        {
            // (j=i) : from the start of array "i" number of elements are sorted
            for (int j = i + 1; j < size; j++)
            {
                if (arr[minIndex] > arr[j])
                {
                    minIndex = j;
                }
            }
        }

        if (minIndex != i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main()
{
    int arr1[6] = {9, 7, 3, 6, 1, 2};
    int size = 6;
    selectionSort2(arr1, size);
    printArr(arr1, size);
    return 0;
}