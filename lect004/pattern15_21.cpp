#include <iostream>
using namespace std;

void pattern15()
{
    int n = 4;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        int a = 'A';
        while (c <= r)
        {
            char ch = (a + (n - r) + c - 1);
            cout << " " << ch;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern16()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        int x = r;
        while (c <= r)
        {
            while (x < n)
            {
                cout << " -";
                ++x;
            }
            cout << " *";
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern17()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int s = n - r;
        while (s > 0)
        {
            cout << " -";
            --s;
        }

        int c = 1;
        while (c <= r)
        {
            cout << " *";
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern18()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int k = n - r + 1;
        while (k > 0)
        {
            cout << " *";
            --k;
        }
        cout << endl;
        ++r;
    }
}

void pattern19()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int s = r - 1;
        while (s > 0)
        {
            cout << " -";
            --s;
        }

        int c = n;
        while (c >= r)
        {
            cout << " *";
            --c;
        }
        cout << endl;
        ++r;
    }
}

void pattern20()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int s = n - r;
        while (s > 0)
        {
            cout << " -";
            --s;
        }

        int x = 1;
        while (x <= r)
        {
            cout << " " << x;
            ++x;
        }

        int y = r - 1;
        while (y > 0)
        {
            cout << " " << y;
            --y;
        }

        cout << endl;
        ++r;
    }
}

void pattern21()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int c = n;
        while (c >= r)
        {
            cout << " " << (n - c + 1);
            --c;
        }

        int x = 1;
        while (x < r)
        {
            cout << " * *";
            ++x;
        }

        int z = n;
        while (z >= r)
        {
            cout << " " << (z - r + 1);
            --z;
        }

        cout << endl;
        ++r;
    }
}

int main()
{
    return 0;
}
