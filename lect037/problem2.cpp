#include <iostream>
using namespace std;

#include <string>
#include <vector>

// codestudio - Subsequences of String

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

void solve(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        if ((output.length() > 0))
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

int main()
{
    string str = "abc";
    int n = str.length();

    string output = "";
    vector<string> ans;
    int index = 0;
    solve(str, output, index, ans);

    printVec(ans);

    return 0;
}