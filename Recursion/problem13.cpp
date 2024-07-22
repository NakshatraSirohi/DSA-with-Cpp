#include <iostream>
using namespace std;

#include <string>
#include <vector>

void solve(int open, int close, string op, char ob, char cb)
{
    if ((open == 0) && (close == 0))
    {
        cout << op << endl;
        return;
    }

    if (open < close && open != 0)
    {
        string op1 = op;
        string op2 = op;

        op1.push_back(ob);
        op2.push_back(cb);

        solve(open - 1, close, op1, ob, cb);
        solve(open, close - 1, op2, ob, cb);
    }
    else if (open == close && open != 0)
    {
        op.push_back(ob);
        solve(open - 1, close, op, ob, cb);
    }
    else
    {
        op.push_back(cb);
        solve(open, close - 1, op, ob, cb);
    }
}

int main()
{
    char ob = '(', cb = ')';
    string s = "(";
    int open = 2, close = 3;

    solve(open, close, s, ob, cb);

    return 0;
}