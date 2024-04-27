#include <iostream>
using namespace std;

// codestudio - Pair Sum

void pairSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if ((x + arr[j]) == sum)
            {
                cout << "pair = " << x << "," << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = 5;

    pairSum(arr, size, sum);

    return 0;
}
