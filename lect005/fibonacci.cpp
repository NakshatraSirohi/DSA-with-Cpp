#include <iostream>
using namespace std;

void fibo(int n)
{
    int a = 0, b = 1;
    cout << "fib : " << a << " " << b;
    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << " " << next;

        // first transfer value of (b to a) then (next to b)
        a = b;
        b = next;
    }
}

int main()
{
    fibo(10);
    return 0;
}