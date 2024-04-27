#include <iostream>
using namespace std;
#include <math.h>
#include <climits>

// leetcode - Complement of Base 10 Integer  (1009)

void complementInt(int n)
{
    int x = n, mask = 0;

    if (n == 0)
    { // edge case
        cout << "ans = " << 1 << endl;
    }

    else
    {
        while (x != 0)
        {
            mask = (mask << 1) | 1;
            x = x >> 1;
        }
        int ans = (~n) & mask;
        cout << "ans = " << ans << endl;
    }
}

int main()
{
    complementInt(9);
    return 0;
}