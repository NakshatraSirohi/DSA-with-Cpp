#include <iostream>
using namespace std;

bool isSort(int arr[], int size)
{
    if (size == 1 || size == 0)
    {
        return 1;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        bool ans = isSort(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool res = isSort(arr, size);
    cout << "check = " << res << endl;
    return 0;
}