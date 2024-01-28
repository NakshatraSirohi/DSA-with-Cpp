#include <iostream>
using namespace std;

#include <vector>

void linearSearch(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int r = 0, c = 0;
    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                temp = 1;
                r = i;
                c = j;
                break;
            }
        }
    }

    if (temp)
    {
        cout << "target is founded at : " << r << ", " << c << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 5;
    linearSearch(matrix, target);
    return 0;
}