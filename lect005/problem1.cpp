#include <iostream>
using namespace std;
#include <math.h>

// leetcode - Subtract the Product and Sum of Digits of an Integer  (1281)

int productSum(int n)
{
    int pro = 1, sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        pro *= digit;
        sum += digit;
        n = n / 10;
    }

    return (pro - sum);
}

int main()
{
    int n = 2435;
    int res = productSum(n);
    cout << "ans = " << res << endl;

    return 0;
}