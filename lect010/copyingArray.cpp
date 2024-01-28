#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // copying an array
    int arr3[7] = {1, 2, 3, 4, 5, 6, 5};
    int n = 7, ans = 0;

    int arr[7];
    copy(arr3, arr3 + n, arr);

    printArray(arr3, 7);
    printArray(arr, 7);

    return 0;
}
