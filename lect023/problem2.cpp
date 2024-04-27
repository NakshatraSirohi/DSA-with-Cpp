#include <iostream>
using namespace std;

#include <vector>

// leetcode - Spiral Matrix  (54)
void printVec(vector<int> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void printSpiral()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = 3, col = 4;

    vector<int> vec;
    int count = 0, total = row * col;

    int startCol = 0, startRow = 0;
    int endCol = col - 1, endRow = row - 1;

    while (count < total)
    {
        // printing starting row
        for (int i = startCol; (count < total) && (i <= endCol); i++)
        {
            vec.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        // printing ending column
        for (int i = startRow; (count < total) && (i <= endRow); i++)
        {
            vec.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        // printing ending row
        for (int i = endCol; (count < total) && (i >= startCol); i--)
        {
            vec.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        // printing starting column
        for (int i = endRow; (count < total) && (i >= startRow); i--)
        {
            vec.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }

    printVec(vec);
}

int main()
{
    printSpiral();
    return 0;
}