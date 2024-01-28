#include <iostream>
using namespace std;

// Find the index of Pivot element in a rotated sorted array (Pivot Array)

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

int method2(int arr[], int size)
{
    // METHOD 2  ::  Two pointer approach
    int s = 0, e = size - 1;
    while (s < e)
    {
        if ((arr[s] >= arr[s + 1]) && (arr[e] <= arr[e - 1]))
        {
            return e;
        }
        else if (arr[s] < arr[s + 1])
        {
            s++;
        }
        else if (arr[e] > arr[e - 1])
        {
            e--;
        }
    }
    return s;
}

int method3(int arr[], int size)
{
    // METHOD 3  ::  Bruteforce approach
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] <= arr[i - 1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {7, 8, 9, 2, 3, 4};
    int size = 6;
    int indx = getPivot(arr, size);
    cout << "pivot element index = " << indx << endl;
    return 0;
}