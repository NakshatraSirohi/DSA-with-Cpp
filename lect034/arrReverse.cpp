#include <iostream>
using namespace std;

#include <string>

void reverseStr(char arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    char temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    reverseStr(arr, s + 1, e - 1);
}

void reverseStr2(string &str, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    reverseStr2(str, s, e);
}

int main()
{
    char arr[10] = "nakshatra";
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseStr3(arr, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    string name = "nick";
    int e = name.length() - 1;
    reverseStr2(name, 0, e);
    cout << name << endl;

    return 0;
}