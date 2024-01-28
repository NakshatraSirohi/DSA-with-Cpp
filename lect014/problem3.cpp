#include <iostream>
using namespace std;

// leetcode - Sqrt(x)  (69)

// SQUARE ROOT USING BINARY SEARCH
long long int rootBS(long long int n)
{
    long long int s = 0;
    long long int e = n;
    long long int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}

// MORE PRECISE SQRT (sqrt using binary search)
double morePrecision(long long int n, int precision, long long int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        double j = ans;
        while ((j * j) < n)
        {
            ans = j;
            j = j + factor;
        }
    }
    return ans;
}

int main()
{
    long long int num = 173454352;
    long long int ans = rootBS(num);
    cout << "Square root using BS = " << ans << endl;

    int precision = 10;
    long long int tempSol = ans; // integer part of sqrt
    double ans2 = morePrecision(num, precision, tempSol);
    cout << "More precise sqrt = " << ans2 << endl;

    return 0;
}