#include <iostream>
using namespace std;

#include <string>

// leetcode - Remove All Occurrences of a Substring  (1910)

void removeOccur()
{
    string str = "daabcbaabcbc";
    string part = "abc";

    int n_str = str.length(), n_part = part.length();

    while ((n_str >= n_part) && (str.find(part) < n_str))
    {
        str.erase(str.find(part), n_part);
    }

    cout << str << endl;
}

int main()
{
    removeOccur();
    return 0;
}