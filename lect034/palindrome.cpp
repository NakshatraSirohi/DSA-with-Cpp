#include <iostream>
using namespace std;

#include <string>

bool checkPalindrome(string &str, int s, int e)
{
    if (e <= s)
    {
        return 1;
    }
    if (str[s] != str[e])
    {
        return 0;
    }
    return checkPalindrome(str, s + 1, e - 1);
}

int main()
{
    string test = "nitinm";
    int e = test.length() - 1;

    if (checkPalindrome(test, 0, e))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}