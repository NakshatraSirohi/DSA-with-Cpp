#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    if (size == 1 || size == 0)
    {
        return;
    }

    int min_idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[min_idx] < arr[i])
        {
            min_idx = i;
        }
    }
    swap(arr[min_idx], arr[size - 1]);

    bubbleSort(arr, size - 1);
}

void bubbleSort2(int arr[], int size)
{
    if (size == 1 || size == 0)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, size - 1);
}

int main()
{
    int arr[10] = {2, 3, 6, 4, 1, 8, 9, 0, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}