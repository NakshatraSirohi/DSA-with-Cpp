#include <iostream>
using namespace std;

// Works similar to the macro
inline int getMax1(int a, int b)
{
    return ((a > b) ? a : b);
}

int getMax2(int a, int b)
{
    return ((a > b) ? a : b);
}

int main()
{
    int a = 3, b = 4, ans;

    // Causes Function Call Overheads & Extra Memory Usage (reduces performance)
    ans = getMax2(a, b);
    cout << "getMax2() called, ans = " << ans << endl;

    // UPDATIONS
    a += 5;
    b += 2;

    // No function call overheads & No extra memory usage
    ans = getMax1(a, b);
    cout << "getMax1() called, ans = " << ans << endl;
    return 0;
}