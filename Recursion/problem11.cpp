#include <iostream>
using namespace std;

#include <string>

// char, not int, is essential: otherwise gcc unpacks to vectors of int!  Huge slowdown.
char ascii_toupper_char(char c)
{
    // ^ autovectorizes to PXOR: runs on more ports than paddb
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

    op1.push_back(ip[0]);

    char c = ascii_toupper_char(ip[0]);

    op2.push_back(c);
    ip.erase(ip.begin() + 0);

    permutation(ip, op1);
    permutation(ip, op2);
}

int main()
{
    string ip = "ab";
    string op = "";

    permutation(ip, op);
    return 0;
}
