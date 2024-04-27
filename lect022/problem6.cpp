#include <iostream>
using namespace std;

#include <string>

// codestudio - Replace Spaces

void replaceSpace()
{
    string str = "This is a test.";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '@40';
        }
    }
    cout << str << endl;
}

int main()
{
    replaceSpace();
    return 0;
}