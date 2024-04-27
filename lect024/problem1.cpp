#include <iostream>
using namespace std;

#include <vector>

// leetcode - Count Primes  (204)

bool checkPrime2(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrime2(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (checkPrime2(i))
        {
            count++;
        }
    }
    return count;
}

int countPrime(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            // mark all the multiple of a prime num as false
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    return count;
}

int main()
{
    int ans = countPrime(10);
    cout << "ans = " << ans << endl;
    return 0;
}