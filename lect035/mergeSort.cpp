#include <iostream>
using namespace std;

void mergeArr(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating 2 new arrays using heap memory
    int *first = new int[len1];
    int *second = new int[len2];

    // copying values
    int mainArrIdx = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIdx++];
    }

    mainArrIdx = mid + 1;
    for (int j = 0; j < len2; j++)
    {
        second[j] = arr[mainArrIdx++];
    }

    // merge 2 sorted arrays
    int idx1 = 0, idx2 = 0;
    mainArrIdx = s;

    while ((idx1 < len1) && (idx2 < len2))
    {
        if (first[idx1] < second[idx2])
        {
            arr[mainArrIdx++] = first[idx1++];
        }
        else
        {
            arr[mainArrIdx++] = second[idx2++];
        }
    }

    while (idx1 < len1)
    {
        arr[mainArrIdx++] = first[idx1++];
    }

    while (idx2 < len2)
    {
        arr[mainArrIdx++] = second[idx2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // sorting left part
    mergeSort(arr, s, mid);

    // sorting right part
    mergeSort(arr, mid + 1, e);

    // merging sorted arrays
    mergeArr(arr, s, e);
}

int main()
{
    int arr[5] = {4, 3, 2, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}