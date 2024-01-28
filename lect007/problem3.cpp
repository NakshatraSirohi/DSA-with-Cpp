#include <iostream>
using namespace std;
#include <math.h>
#include <climits>

// leetcode - Power of Two  (231)
// only for positive numbers (n>=0)

void twosPower(int n)
{
    // bruteforce method
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            cout << "true" << endl;
            break;
        }

        else
        {
            cout << "false" << endl;
            break;
        }
    }
}

void twosPower2(int n)
{
    // binary approach
    int set_bit = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            set_bit += 1;
        }
        n = n >> 1;
    }

    if (set_bit == 1)
    {
        cout << "true" << endl;
    }

    else
    {
        cout << "false" << endl;
    }
}

void twosPower3(int n)
{
    int temp = 1;
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            temp = 0;
            break;
        }

        n /= 2;
    }

    if (n <= 0)
    {
        cout << "not sure" << endl;
    }
    else if (temp)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{
    twosPower3(-1);
    return 0;
}