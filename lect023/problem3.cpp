#include <iostream>
using namespace std;

#include <vector>

// leetcode - Rotate Image  (48)

void printArr(int arr[][3], int row, int col)
{
    cout << "---- printing ----" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}

void rotateImage()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3] = {0};

    int row = 3, col = 3;
    int n = 0;
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            ans[j][n] = arr[i][j];
        }
        n++;
    }

    printArr(ans, row, col);
}

int main()
{
    rotateImage();
    return 0;
}