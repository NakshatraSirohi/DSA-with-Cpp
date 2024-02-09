#include <iostream>
using namespace std;

long long power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    long long ans = power(a, b / 2);

    if (b & 1)
    {
        return (a * ans * ans);
    }
    else
    {
        return (ans * ans);
    }
}

int main()
{
    int a = 2, b = 32;
    unsigned long long res = power(a, b);
    cout << res << endl;
    return 0;
}