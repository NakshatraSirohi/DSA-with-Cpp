#include <iostream>
using namespace std;
#include <math.h>

// binary to decimal conversion

int main()
{
    int n = 101;
    int ans = 0;
    int i = 0;

    while (n > 0)
    {
        int digit = n % 10;

        ans = ans + (digit * pow(2, i));

        n = n / 10;

        i++;
    }

    cout << "ans = " << ans << endl;

    return 0;
}