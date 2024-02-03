#include <iostream>
using namespace std;

int power(int b, int n)
{
    if (b == 0)
        return 1;

    int smallerProblem = power(b - 1, n);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int power2(int b, int n)
{
    if (b == 0)
        return 1;

    return n * power(b - 1, n);
}

int main()
{
    int res = power(3, 5);
    cout << "res = " << res << endl;
    return 0;
}