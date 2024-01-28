#include <iostream>
using namespace std;

void checkPrime(int n)
{
    bool isprime = 1;
    for (int x = 2; x < n; x++)
    {
        if (n % x == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (n <= 1)
    {
        cout << "not defined" << endl;
    }
    else if (isprime == 0)
    {
        cout << "not a prime num" << endl;
    }
    else
    {
        cout << "prime num" << endl;
    }
}

int main()
{
    checkPrime(4);
    return 0;
}