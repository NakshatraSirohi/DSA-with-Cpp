#include <iostream>
using namespace std;

#include <string>

// leetcode - Remove All Adjacent Duplicates In String  (1047)

void removeDuplicate(string s)
{
    string temp = "";
    int i = 0;

    while (i < s.length())
    {
        if (temp.empty() || s[i] != temp.back())
        {
            temp.push_back(s[i]);
        }
        else
        {
            temp.pop_back();
        }
        i++;
    }

    cout << temp << endl;
}

void removeDuplicate2(string s)
{
    // valid but TLE solution b'coz of O(n^2) complexity
    int n = s.length();
    int i = 0;
    while (i < n / 2)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                s.erase(j, 2);
            }
        }
        i++;
    }

    cout << s << endl;
}

int main()
{
    string str = "abbaca";
    removeDuplicate(str);
    return 0;
}