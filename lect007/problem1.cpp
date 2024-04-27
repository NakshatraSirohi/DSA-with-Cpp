#include <iostream>
using namespace std;
#include <math.h>
#include <climits>

// leetcode - Reverse Integer  (07)

int numReverse(int n)
{
    int ans = 0;

    while (n != 0)
    {
        if ((INT_MIN / 10 > ans) || (ans > INT_MAX / 10))
        {
            cout << "ans = " << 0 << endl;
        }
        ans = (ans * 10) + (n % 10);
        n /= 10;
    }

    return ans;
}

int numReverse2(int x)
{
    long ans = 0;

    while (x != 0)
    {
        ans = (ans * 10) + (x % 10);
        x /= 10;
    }

    if ((INT_MIN > ans) || (ans > INT_MAX))
    {
        return 0;
    }

    return int(ans);
}

int main()
{
    int n = 983247;
    int res = numReverse(n);
    cout << "reversed num : " << res << endl;
    return 0;
}