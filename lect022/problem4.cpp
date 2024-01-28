#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

// leetcode - Reverse Words in a String II  (186)

void printVec(vector<char> v)
{
    int n = v.size(), i = 0;

    cout << "printing : ";
    while (i < n)
    {
        cout << v[i];
        i++;
    }
    cout << endl;
}

void wordRev()
{
    // without allocating extra space
    vector<char> arr = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e', '\0'};

    /*
    original : the sky is blue
    reverse each word : str2 -- eht yks si eulb
    result : reverse str2 -- blue is the sky
    */

    int size = arr.size();
    int a = 0, i = 0;
    while (i < size)
    {
        if ((arr[i] == ' ') || (arr[i] == '\0'))
        {
            int s = a, e = i - 1;
            while (s <= e)
            {
                swap(arr[s], arr[e]);
                s++;
                e--;
            }
            a = i + 1;
        }
        i++;
    }
    reverse(arr.begin(), arr.end());
    printVec(arr);
}

void wordRev2()
{
    //  using extra space
    vector<char> arr = {'s', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e', '\0'};
    vector<char> ans;

    // have to add the space otherwise first word will not be pushed to ans
    arr.insert(arr.begin(), ' ');

    int n = arr.size() - 1;
    int m = n, p = n;

    while (p >= 0)
    {
        int x = p + 1;
        if (arr[p] == ' ')
        {
            while (x <= m)
            {
                ans.push_back(arr[x]);
                x++;
            }
            m = p - 1;
            ans.push_back(' ');
        }
        p--;
    }
    printVec(ans);
}

int main()
{
    wordRev();
    return 0;
}