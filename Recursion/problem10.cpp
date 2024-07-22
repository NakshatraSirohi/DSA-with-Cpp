#include <iostream>
using namespace std;

#include <string>

void permutation(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(' ');
    op1.push_back(ip[0]);

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    permutation(ip, op1);
    permutation(ip, op2);
}

int main()
{
    string ip = "abc";
    string op = "";

    op.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    permutation(ip, op);
    return 0;
}
