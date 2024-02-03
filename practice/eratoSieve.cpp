#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 50;
    vector<bool> prime(n + 1, true); // Initialize all numbers as prime
    prime[0] = prime[1] = false;     // 0 and 1 are not prime

    int count = 0;

    for (int p = 2; p * p <= n; ++p)
    {
        if (prime[p])
        {
            // Mark all multiples of p as not prime
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            count++;
        }
    }

    cout << "Total count : " << count << endl;

    return 0;
}
