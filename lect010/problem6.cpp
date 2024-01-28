#include <iostream>
using namespace std;

// question - Sort 0 1

void printArray(int arr[], int size)
{
    cout << "printing array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int n)
{
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        { // cond - (arr[i]==1 && arr[j]==0 && i<j)
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    // two pointer approach
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    int l = 8;

    sort01(arr, l);
    printArray(arr, l);

    return 0;
}
