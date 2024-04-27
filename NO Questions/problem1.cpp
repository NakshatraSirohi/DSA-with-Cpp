#include <iostream>
using namespace std;

void printArr(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int arr[4][4] = {{1, 0, 1, 1},
                     {0, 1, 0, 0},
                     {1, 1, 0, 1},
                     {0, 0, 1, 0}};

    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);
    int i = 0;

    printArr(arr, r, c);

    while (i < r)
    {
        int p1 = 0, p2 = c - 1;

        while (p1 <= p2)
        {
            if (arr[i][p1] == arr[i][p2])
            {
                int tmp1 = arr[i][p1] ^ 1;
                arr[i][p1] = tmp1;
                arr[i][p2] = tmp1;
            }
            p1++;
            p2--;
        }

        i++;
    }

    printArr(arr, r, c);
    return 0;
}