#include <iostream>
using namespace std;

#include <string>

// leetcode - Permutation in String  (567)

bool checkEqual(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool permutation(string s1, string s2)
{
    // character count array for s1
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int idx = s1[i] - 'a';
        count1[idx]++;
    }

    // traverse s2 in window of size of s1.length() and compare it
    // to do this make a character count array for s2
    int i = 0;
    int count2[26] = {0};
    // running for 1st window
    while (i < s1.length() && i < s2.length())
    {
        int idx = s2[i] - 'a';
        count2[idx]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return 1;
    }

    // process the rest of the window of size s2.length()
    while (i < s2.length())
    {
        char newChar = s2[i];
        int idx = newChar - 'a';
        count2[idx]++;

        // first window size
        char oldChar = s2[i - s1.length()];
        idx = oldChar - 'a';
        count2[idx]--;

        // check everytime, (kya pta str equal ho gyi ho)
        if (checkEqual(count1, count2))
        {
            return 1;
        }

        i++;
    }

    return 0;
}

int main()
{

    string s1 = "ab";
    string s2 = "eidbaooo";
    int res = permutation(s1, s2);

    cout << "ans = " << res << endl;
    return 0;
}