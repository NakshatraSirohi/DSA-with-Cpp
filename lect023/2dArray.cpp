#include <iostream>
using namespace std;

#include <climits>
#include <vector>

void printArr(int arr[][3], int rows, int cols)
{
    // by default columns are constant, ie cols=3
    cout << "---- printing elements ----" << endl;
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

void printVec(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();

    cout << "--- printing ---" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << v[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void func1()
{
    // INPUT-OUTPUT

    // taking input row wise
    cout << "input elements in arr[2][3]" << endl;
    int arr[2][3];
    int rows = 2, cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input column wise
    cout << "input elements in arr2[2][3]" << endl;
    int arr2[2][3];
    int rows2 = 2, cols2 = 3;
    for (int i = 0; i < cols2; i++)
    {
        for (int j = 0; j < rows2; j++)
        {
            cin >> arr2[j][i];
        }
    }

    // default input is row wise
    int arr3[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows3 = 2, cols3 = 3;
    int arr4[2][3] = {1, 2, 3, 4, 5, 6};
    int rows4 = 2, cols4 = 3;

    printArr(arr, rows, cols);
    printArr(arr2, rows2, cols2);
    printArr(arr3, rows3, cols3);
    printArr(arr4, rows4, cols4);
}

void isPresent()
{
    // return element index if present
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3, target = 4;
    int i, j, found = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                found = 1;
                break;
            }
        }
    }
    if (found)
    {
        cout << "found at index = " << i << ", " << j << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void rowSum()
{
    // find sum of individual rows
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of row " << i << " = " << sum << endl;
    }
}

void largestRowSum()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3, idx = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            idx = i;
        }
    }
    cout << "max sum is " << maxSum << endl;
    cout << "and row is " << idx << endl;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    printVec(matrix);
    return 0;
}