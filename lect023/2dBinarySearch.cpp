#include <iostream>
using namespace std;

#include <vector>

void binarySearch(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0, e = (row * col) - 1;

    int temp = 0, r, c;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int nr = mid / col, nc = mid % col;
        int element = matrix[nr][nc];

        if (element == target)
        {
            temp = 1;
            r = nr;
            c = nc;
            break;
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

    if (temp)
    {
        cout << "target founded at : " << r << ", " << c << endl;
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
    binarySearch(matrix, target);
    return 0;
}