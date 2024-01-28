#include <iostream>
using namespace std;

#include <string>
#include <algorithm>

// leetcode - Valid Palindrome  (125)

bool isPalindrome(string s)
{
    // using predefined functions from library
    string q = "";
    for (char c : s)
    {
        if (std::isalnum(c))
        {
            q += std::tolower(c);
        }
    }
    string p = q;
    std::reverse(p.begin(), p.end());
    return p == q;
}

int main()
{
    char arr[50] = "c1 O$d@eeD o1c";

    cout << "ans = " << isPalindrome(arr);
    return 0;
}