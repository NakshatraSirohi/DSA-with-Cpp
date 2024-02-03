#include <iostream>
using namespace std;

// codestudio - Count Ways To Reach The N-th Stairs

int stairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return (stairs(n - 1) + stairs(n - 2));
}

int main()
{
    int res = stairs(8);
    cout << res << endl;
    return 0;
}