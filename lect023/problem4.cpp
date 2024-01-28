#include <iostream>
using namespace std;

#include <vector>

// leetcode - Search a 2D Matrix  (74)

bool binarySearch(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0, e = (row * col) - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int nr = mid / col, nc = mid % col;
        int element = matrix[nr][nc];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 5;
    cout << "isfound = " << binarySearch(matrix, target) << endl;
    return 0;
}