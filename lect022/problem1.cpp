#include <iostream>
using namespace std;

#include <string>

// leetcode - Reverse String  (344)

int lengthString(char arr[])
{
    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }
    return len;
}

void reverseStr()
{
    char arr[20] = "Nakshatra";
    int s = 0, e = lengthString(arr) - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    cout << "reversed str : " << arr << endl;
}

int main()
{
    reverseStr();
    return 0;
}