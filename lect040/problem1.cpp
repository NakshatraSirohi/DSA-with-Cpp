#include <iostream>
using namespace std;

#include <string>
#include <vector>

// leetcode - Letter Combination of a Phone Number  (17)

void printVec(vector<string> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

int main()
{
    string digits = "23";
    int index = 0;
    vector<string> ans;
    string output;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    if (digits.length() == 0)
    {
        printVec(ans);
    }

    solve(digits, output, index, ans, mapping);

    printVec(ans);

    return 0;
}