#include <iostream>
using namespace std;

// time complexity is O(log n)
long long power(long long base, long long exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    long long res = 1;
    while (exponent > 0)
    {
        if (exponent & 1)
        {
            res *= base;
        }
        base *= base;
        exponent >>= 1;
    }

    return res;
}

int main()
{
    long long base = 11;
    long long exponent = 10;
    long long res = power(base, exponent);

    cout << "res : " << res << endl;
    return 0;
}
