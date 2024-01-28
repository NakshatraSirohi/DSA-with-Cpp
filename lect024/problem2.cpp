#include <iostream>
using namespace std;

// codestudio - Modular Exponentiation
int modExp(int a, int b, int m)
{
    int res = 1;
    while (b > 0)
    {
        // 1LL is used for type-casting into LONG LONG
        if (b & 1)
        {
            res = (1LL * (res) * (a % m)) % m;
        }

        a = (1LL * (a % m) * (a % m)) % m;

        // bitwise are more faster than normal math operations
        // (n>>1) == n/2
        b = b >> 1;
    }
    return res;
}

int main()
{
    int ans = modExp(4, 3, 10);
    cout << "ans = " << ans << endl;
    return 0;
}