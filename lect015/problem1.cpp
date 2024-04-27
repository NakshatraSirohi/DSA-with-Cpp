#include <iostream>
using namespace std;

// codestudio - Allocate Books

bool isPossible(int arr[], int mid, int stud, int size)
{
    int i = 0;
    int studCount = 1;
    int pageSum = 0;

    if (stud > size)
    {
        return 0;
    }

    while (i < size)
    {
        if ((pageSum + arr[i]) <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studCount++;
            if ((studCount > stud) || (arr[i] > mid))
            {
                return 0;
            }
            pageSum = arr[i];
        }
        i++;
    }
    return 1;
}

int binarySearch(int arr[], int stud, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        max += arr[i];
    }

    int s = 0, e = max;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, mid, stud, size))
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
    int arr[4] = {5, 17, 100, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int stud = 4;

    cout << "ans = " << binarySearch(arr, stud, size) << endl;
    return 0;
}