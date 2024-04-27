#include <iostream>
using namespace std;

// codestudio - First and Last Position of an Element In Sorted Array
// additional ques. - find total no. of occurrences of key ()

int firstOccur(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int firstIndex = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            firstIndex = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return firstIndex;
}

int lastOccur(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int lastIndex = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            lastIndex = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return lastIndex;
}

void method2(int arr[], int size, int key)
{
    // METHOD 2  >>  Bruteforce approach
    int firstIndex = -1, lastIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
            }
            lastIndex = i;
        }
        if ((firstIndex != -1) && (lastIndex != -1))
        {
            break;
        }
    }
    cout << "first and last index = " << firstIndex << " " << lastIndex << endl;
}

int main()
{
    // METHOD 1  ::  BS approach
    int arr[6] = {3, 3, 3, 3, 3, 4};

    int first = firstOccur(arr, 6, 3);
    int last = lastOccur(arr, 6, 3);

    cout << "first & last occurence index = " << first << " " << last << endl;

    // solution to additional question
    cout << "total occurences = " << (last - first + 1) << endl;

    return 0;
}
