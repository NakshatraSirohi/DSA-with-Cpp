#include <iostream>
using namespace std;
#include <math.h>

// leetcode - Number of 1 Bits  (191)

int setBitsCount(u_int32_t n)
{
    int ans = 0;

    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            ans++;
        }
        n = n >> 1;
    }

    return ans;
}

int setBitsCount2(u_int32_t n)
{
    int ans = 0;

    while (n != 0)
    {
        n = n & (n - 1);
        ans++;
    }

    return ans;
}

int main()
{
    u_int32_t n = 0b10110101;

    int res = setBitsCount2(n);
    cout << "ans = " << res << endl;

    return 0;
}