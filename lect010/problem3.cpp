#include <iostream>
using namespace std;

// codestudio - Duplicate In Array

int duplicate(int arr[], int n)
{
    int ans = 0;

    // XORing all elements of array
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    // XORing [1 to n-1] all numbers with ans
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 5};
    int size = 7;
    int ans = duplicate(arr, size);

    cout << "ans is " << ans << endl;

    return 0;
}
