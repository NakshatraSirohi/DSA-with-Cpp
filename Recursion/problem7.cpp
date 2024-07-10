#include <iostream>
using namespace std;

#include <math.h>

int solve(int n, int k)
{
    int mid = pow(2, n - 1) / 2;
    if ((n == 1) && (k == 1))
    {
        return 0;
    }

    if (k <= mid)
    {
        return solve(n - 1, k);
    }
    else
    {
        return !(solve(n - 1, k - mid));
    }
}

int main()
{
    int n = 3, k = 4;
    int ans = solve(n, k);
    cout << "Answer = " << ans << endl;
    return 0;
}