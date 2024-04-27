#include <iostream>
using namespace std;

// codestudio - Check If The String Is A Palindrome

int lengthString(char arr[])
{
    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }
    return len;
}

bool isAlphaNum(char c)
{
    if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)) || ((c >= 48) && (c <= 57)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char lowercase1(char c)
{
    char temp;
    if ((c >= 65) && (c <= 90))
    {
        int diff = c - 'A';
        temp = 'a' + diff;
    }
    else
    {
        return c;
    }
    return temp;
}

bool isPalindrome(char arr[])
{
    // without using any extra space
    // two pointer approach
    int s = 0, e = lengthString(arr) - 1;
    char x, y;
    while (s <= e)
    {
        x = lowercase1(arr[s]);
        y = lowercase1(arr[e]);
        if (isAlphaNum(x) && isAlphaNum(y))
        {
            if (x == y)
            {
                s++;
                e--;
            }
            else
            {
                return 0;
            }
        }
        else if (!isAlphaNum(x))
        {
            s++;
        }
        else if (!isAlphaNum(y))
        {
            e--;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome2(char arr[])
{
    // copying old string to new string having only alphanumeric-lowercase values
    // two pointer approach
    char ans[50];
    int n = 0, m = 0;
    while (arr[n] != '\0')
    {
        if (isAlphaNum(arr[n]))
        {
            ans[m] = lowercase1(arr[n]);
            m++;
        }
        n++;
    }
    ans[m] = '\0';

    int s = 0, e = m - 1;
    while (s <= e)
    {
        if (ans[s] != ans[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

int main()
{
    char arr[50] = "c1 O$d@eeD o1c";

    cout << "ans = " << isPalindrome2(arr);
    return 0;
}