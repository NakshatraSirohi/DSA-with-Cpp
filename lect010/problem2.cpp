#include <iostream>
using namespace std;

// codestudio - Find Unique

int unique(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 1, 2};
    int size = 5;
    int ans = unique(arr, size);

    cout << "ans is " << ans << endl;

    return 0;
}
