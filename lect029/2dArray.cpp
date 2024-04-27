#include <iostream>
using namespace std;

int main()
{
    // n = rows, m = columns
    int n, m;
    cout << "enter n & m : ";
    cin >> n >> m;

    // creating an array of (int*) of n-rows in heap
    // array contains pointer
    int **arr = new int *[n];

    // creating array of m-columns for each row pointer
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[m];
    }

    // taking input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter element " << i << "-" << j << " : ";
            cin >> arr[i][j];
        }
    }

    // printing array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }

    // releasing memory of heap
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}