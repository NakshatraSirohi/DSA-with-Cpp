#include <iostream>
using namespace std;

#include <vector>

// leetcode - Search a 2D Matrix II  (240)

bool binarySearch(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIdx = 0;
    int colIdx = col - 1;

    while ((rowIdx < row) && (colIdx >= 0))
    {
        int element = matrix[rowIdx][colIdx];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            rowIdx++;
        }
        else
        {
            colIdx--;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                  {2, 5, 8, 12, 19},
                                  {3, 6, 9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};
    int target = 31;
    cout << "isfound = " << binarySearch(matrix, target) << endl;
    return 0;
}