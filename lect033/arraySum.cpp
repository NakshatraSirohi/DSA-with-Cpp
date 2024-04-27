#include <iostream>
using namespace std;

int arrSum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int remainingPart = arrSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = arrSum(arr, size);
    cout << "sum = " << res << endl;
    return 0;
}