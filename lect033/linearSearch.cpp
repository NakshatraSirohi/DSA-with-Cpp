#include <iostream>
using namespace std;

bool linearSearch(int *arr, int key, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    return linearSearch(arr + 1, key, size - 1);
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 11;

    bool res = linearSearch(arr, key, size);
    cout << "check = " << res << endl;
    return 0;
}