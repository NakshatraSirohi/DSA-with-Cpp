#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (key == arr[mid])
    {
        return 1;
    }
    else if (key > arr[mid])
    {
        int ns = mid + 1;
        return binarySearch(arr, ns, e, key);
    }
    else
    {
        int ne = mid - 1;
        return binarySearch(arr, s, ne, key);
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 11;

    bool res = binarySearch(arr, 0, size, key);
    cout << "check = " << res << endl;
    return 0;
}