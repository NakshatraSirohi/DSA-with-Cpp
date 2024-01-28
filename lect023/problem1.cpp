#include <iostream>
using namespace std;

// codestudio - Print Like A Wave
void printWave()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = 3, col = 4;

    for (int i = 0; i < col; i++)
    {
        if (i & 1)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << " " << arr[j][i];
            }
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << " " << arr[j][i];
            }
        }
    }
}
int main()
{
    printWave();
    return 0;
}