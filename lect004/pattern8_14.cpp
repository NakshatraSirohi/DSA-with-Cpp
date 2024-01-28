#include <iostream>
using namespace std;

void pattern8()
{
    int n = 4;
    int r = 1;
    while (r <= n)
    {

        // typecasting is used
        int a = 'A';
        char ch = r + a - 1;

        int c = 1;
        while (c <= n)
        {
            cout << " " << ch;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern9()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {

        int a = 'A';
        int c = 1;
        while (c <= n)
        {
            char ch = (a + c - 1);
            cout << " " << ch;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern10()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int a = 'A';
        int x = (n) * (r - 1);
        int c = 1;

        while (c <= n)
        {
            char ch = (a + c - 1) + x;
            cout << " " << ch;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern11()
{
    int n = 5;
    int r = 1;
    int x = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            cout << " " << x;
            ++x;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern12()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            cout << " " << (r + c - 1);
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern13()
{
    int n = 5;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            int a = 'A';
            char ch = (a + r + c - 2);
            cout << " " << ch;
            ++c;
        }
        cout << endl;
        ++r;
    }
}

void pattern14()
{
    int n = 4;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            cout << " " << (n - r + c);
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
