#include <iostream>
using namespace std;

// codestudio - Painter's Partition Problem

bool isPossible(int arr[], int painters, int mid, int size)
{
    int count = 1;
    int sum = 0;

    if (painters > size)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if ((sum + arr[i]) <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            if ((count > painters) || (arr[i] > mid))
            {
                return 0;
            }
            sum = arr[i];
        }
    }
    return 1;
}

int binarySearch(int arr[], int painters, int size)
{
    int ans = -1;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        max += arr[i];
    }

    int s = 0, e = max;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, painters, mid, size))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[4] = {5, 5, 5, 5};
    int size = 4;
    int painters = 2;
    cout << "ans = " << binarySearch(arr, painters, size) << endl;
    return 0;
}