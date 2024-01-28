#include <iostream>
using namespace std;
#include <math.h>

// decimal to binary conversion

int main()
{
    int n = 5;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1; // give last bit of n

        ans = ans + (bit * pow(10, i));

        n = (n >> 1); // equivalent to n/2

        i++;
    }

    cout << "ans = " << ans << endl;

    return 0;
}