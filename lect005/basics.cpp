#include <iostream>
using namespace std;

void bitOperator()
{
    // bitwise operators
    int a = 5;
    int b = 7;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    cout << "(5 << 1) = " << (5 << 1) << endl;
    cout << "(5 >> 2) = " << (5 >> 2) << endl;
}

void prePost()
{
    int x = 5;
    int preIncrement = ++x;  // Pre-increment
    int postIncrement = x++; // Post-increment

    cout << "After pre-increment, x = " << x << " and preIncrement = " << preIncrement << endl;
    cout << "After post-increment, x = " << x << " and postIncrement = " << postIncrement << endl;
}

void breakStatement()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        if (i == 5)
        {
            break;
        }
        else
        {
            cout << " " << i << endl;
        }
    }
}

void continueStatement()
{
    for (int i = 1; i < 4; i++)
    {
        cout << "Hello" << endl;
        continue;
        cout << "World"; // this will be skipped in every iteration
    }
}

void sumUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum is " << sum << endl;
}

void varScope()
{

    // variable and scope
    int a = 3, b = 5;
    cout << "a, b = " << a << " " << b << endl;

    if (true)
    {
        int b = 7;
        cout << "a, b (inside if) = " << a << " " << b << endl;
    }

    a = 9;
    cout << "a, b (outside if) = " << a << " " << b << endl;
}

int main()
{
    prePost();
    return 0;
}