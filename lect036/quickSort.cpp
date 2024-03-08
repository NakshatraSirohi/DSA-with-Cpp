#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // placing pivot at it's right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // handling left & right part of array
    int i = s, j = e;
    while ((i < pivotIndex) && (j > pivotIndex))
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if ((i < pivotIndex) && (j > pivotIndex))
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // finding partition
    int p = partition(arr, s, e);

    // sorting left part
    quicksort(arr, s, p - 1);

    // sorting right part
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {4, 3, 2, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}