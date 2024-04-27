#include <iostream>
using namespace std;

// codestudio - Search in a Rotated Sorted Array

// RETURNS INDEX OF PIVOT ELEMENT
int getPivot(int arr[], int size)
{
    // METHOD 1  ::  BS approach
    int s = 0, e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[0] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

// BINARY SEARCHING BASED ON PIVOT POSITION
int binarySearch(int arr[], int s, int e, int key)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] <= key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {7, 8, 9, 2, 3, 4};
    int size = 6;
    int pos = getPivot(arr, size);

    int key = 7, found = -1;
    if ((key >= arr[pos]) && (key <= arr[size - 1]))
    {
        found = binarySearch(arr, pos, size - 1, key);
    }
    else
    {
        found = binarySearch(arr, 0, pos, key);
    }
    cout << "found at : " << found << endl;

    return 0;
}