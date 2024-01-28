#include <iostream>
using namespace std;

// BINARY SEARCH
// (condition :- applicable only on monotonic functions)
int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1; // if key not found
}

// correct method :- mid = start + (end-start)/2
int binarySearch2(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // if key not found
}

int main()
{
    // even size of array
    int even[8] = {2, 4, 6, 11, 22, 31, 33, 41};
    int key1 = 33;
    int size1 = 8;

    int evenIndex = binarySearch(even, size1, key1);
    cout << "index of key = " << evenIndex << endl;

    // odd size of array
    int odd[7] = {1, 3, 4, 6, 11, 12, 15};
    int key2 = 12;
    int size2 = 7;

    int oddIndex = binarySearch2(odd, size2, key2);
    cout << "index of key = " << oddIndex << endl;

    return 0;
}