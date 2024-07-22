#include <iostream>
using namespace std;

#include <string>

char ascii_toupper_char(char c)
{
    return ('a' <= c && c <= 'z') ? c ^ 0x20 : c;
}

void permutation(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    char c = ascii_toupper_char(ip[0]);

    if (c == ip[0])
    {
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        permutation(ip, op1);
    }
    else
    {
        op1.push_back(ip[0]);
        op2.push_back(c);
        ip.erase(ip.begin() + 0);

        permutation(ip, op1);
        permutation(ip, op2);
    }
}

int main()
{
    string ip = "a1b2";
    string op = "";

    permutation(ip, op);
    return 0;
}
