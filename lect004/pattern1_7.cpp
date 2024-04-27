#include <iostream>
using namespace std;

void pattern1()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << " " << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern2()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {

        int j = 0;
        while (j < n)
        {
            cout << " " << n - j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern3()
{
    int n = 3;
    int i = 1;
    while (i <= n)
    {

        int x = (i - 1) * n;
        int j = 1;
        while (j <= n)
        {
            cout << " " << j + x;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern4()
{
    int n = 5;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << " *";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

void pattern5()
{
    int n = 5;
    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << " " << row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

void pattern6()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {

        int c = 1;
        int y = r; // each row starts with row no. and then it increases by 1
        while (c <= r)
        {
            cout << " " << y;
            ++y;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern7()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {

        int c = 1;
        while (c <= r)
        {
            cout << " " << (r - c + 1);
            ++c;
        }
        cout << endl;
        ++r;
    }
}

int main()
{
    return 0;
}