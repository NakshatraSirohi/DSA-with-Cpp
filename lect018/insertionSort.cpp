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

// INSERTION SORT
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

// Using While-loop
void insertionSort2(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        while ((j >= 0) && (arr[j] > temp))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(arr, 7);
    printArr(arr, 7);
    return 0;
}