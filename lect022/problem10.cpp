#include <iostream>
using namespace std;

#include <string>
#include <vector>

// leetcode - String Compression  (443)

void printVec(vector<char> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << ", " << v[i];
    }
    cout << endl;
}
void printVec2(vector<int> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << ", " << v[i];
    }
    cout << endl;
}

void strCompress(vector<char> chars)
{
    int i = 0;
    int ansIdx = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while ((j < n) && (chars[j] == chars[i]))
        {
            j++;
        }
        chars[ansIdx] = chars[i];
        ansIdx++;

        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIdx] = ch;
                ansIdx++;
            }
        }

        i = j;
    }

    cout << "size = " << ansIdx << endl;
}

int main()
{
    vector<char> str = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a',
                        'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b',
                        'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    strCompress(str);
    return 0;
}