#include <iostream>
using namespace std;

// leetcode - Peak Index in a Mountain Array (852)

void method2(int arr[], int size)
{
    // METHOD 2  :: Two pointer approach
    int start = 0, end = size - 1;
    while (start < end)
    {
        if (arr[start] < arr[start + 1])
        {
            start++;
        }
        else if (arr[end] < arr[end - 1])
        {
            end--;
        }
    }
    cout << "element = " << arr[start];
}

int main()
{
    // METHOD 1  ::  BS approach
    int arr1[6] = {0, 1, 2, 3, 4, 1};
    int size = 6;
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (arr1[mid] < arr1[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    cout << "ans = " << start << endl;

    return 0;
}
