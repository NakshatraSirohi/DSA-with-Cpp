#include <iostream>
using namespace std;
#include <algorithm>

// codestudio - Aggressive Cows

bool isPossible(int arr[], int size, int cows, int mid)
{
    int count = 1;
    int lastPos = arr[0];
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] - lastPos) >= mid)
        {
            count++;
            if (count == cows)
            {
                return 1;
            }
            lastPos = arr[i];
        }
    }
    return 0;
}

int binarySearch(int arr[], int size, int cows)
{
    int min = arr[0], max = arr[size - 1];
    int s = 0, e = max - min;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, size, cows, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    int size = 5;
    int cows = 2;
    cout << "ans = " << binarySearch(arr, size, cows) << endl;
    return 0;
}