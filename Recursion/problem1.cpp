#include <iostream>
using namespace std;

// prints 1 to N
void ascending(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    ascending(n - 1);
    cout << n << " ";
}

// prints N to 1
void descending(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    descending(n - 1);
}

int main()
{
    int n = 10;

    ascending(n);
    cout << endl;

    descending(n);
    cout << endl;

    return 0;
}