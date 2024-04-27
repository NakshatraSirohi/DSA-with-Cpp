#include <iostream>
using namespace std;

// DYNAMIC MEMORY ALLOCATION

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    // taking input the size of array
    int n;
    cout << "enter n : ";
    cin >> n;

    // heap is used for variable size array
    int *arr = new int[n];

    // taking input in the array
    for (int i = 0; i < n; i++)
    {
        cout << "input element " << i << " : ";
        cin >> arr[i];
    }

    int res = getSum(arr, n);

    cout << "result = " << res << endl;

    return 0;
}