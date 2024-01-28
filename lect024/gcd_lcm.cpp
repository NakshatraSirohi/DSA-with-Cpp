#include <iostream>
using namespace std;

// GCD AND LCM
// lcm(a,b) * gcd(a,b) = a*b

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    return a;
}

int gcd1(int a, int b)
{
    int res = 0;

    for (int i = 1; (i <= a) && (i <= b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            res = i;
        }
    }

    return res;
}

int gcd2(int a, int b)
{
    while ((a != 0) && (b != 0) && (a != b))
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    return a;
}

int main()
{
    int a = 72, b = 24;
    int ans1 = gcd1(b, a);
    cout << "gcd = " << ans1 << endl;
    return 0;
}