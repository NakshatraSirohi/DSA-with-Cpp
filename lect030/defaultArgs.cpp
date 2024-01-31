#include <iostream>
using namespace std;

/*
>> default arguments condition :-
    this always starts from rightmost formal arguments

>> This will cause error b'coz "start" has no default value and its rightmost
    void printArr(int arr[], int n = 0, int start) {}

>> No error occurs
    void printArr(int arr[], int n, int start = 0) {}
*/

void printArr(int arr[], int n, int start = 0)
{
    cout << "printing element of array : ";
    for (int i = start; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int start = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size, start);
    return 0;
}