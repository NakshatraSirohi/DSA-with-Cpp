#include <iostream>
using namespace std;

#include <string>
#include <vector>

void solve(int n, int ones, int zeroes, string op)
{
    if (n == 0)
    {
        cout << op << endl;
        return;
    }

    if (ones > zeroes)
    {
        string op1 = op;
        string op2 = op;

        op1.push_back('1');
        op2.push_back('0');

        solve(n - 1, ones + 1, zeroes, op1);
        solve(n - 1, ones, zeroes + 1, op2);
    }
    else
    {
        string op1 = op;
        op1.push_back('1');
        solve(n - 1, ones + 1, zeroes, op1);
    }
}

// just reduced few line of codes, logic is still same
void solve2(int n, int ones, int zeroes, string op)
{
    if (n == 0)
    {
        cout << op << endl;
        return;
    }

    string op1 = op;
    op1.push_back('1');
    solve2(n - 1, ones + 1, zeroes, op1);

    if (ones > zeroes)
    {
        string op2 = op;
        op2.push_back('0');
        solve2(n - 1, ones, zeroes + 1, op2);
    }
}

int main()
{
    solve(2, 1, 0, "1");
    return 0;
}