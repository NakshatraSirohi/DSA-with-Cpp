#include <iostream>
using namespace std;
#include <climits>

// codestudio - Intersection Of Two Sorted Arrays

void intersection1(int arr1[], int arr2[], int n, int m)
{
    // bruteforce approach
    for (int i = 0; i < n; i++)
    {
        int elem = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (elem == arr2[j])
            {
                cout << "ans1 = " << elem << endl;
                arr2[j] = INT_MIN;
            }
        }
    }
}

void intersection2(int arr1[], int arr2[], int n, int m)
{
    // two pointer approach
    int i = 0, j = 0;
    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            cout << "ans2 = " << arr1[i] << endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 4};
    int arr2[3] = {3, 4, 5};
    int n = 5, m = 3;

    intersection2(arr1, arr2, n, m);

    return 0;
}
