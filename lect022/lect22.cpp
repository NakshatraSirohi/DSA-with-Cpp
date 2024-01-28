#include <iostream>
using namespace std;
#include <string>

int str_len(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse_str(char name[], int len)
{
    int start = 0;
    int end = len - 1;

    while (end > start)
    {
        swap(name[start++], name[end--]);
    }
}

char toLower(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        return ch;
    }
    else
    {
        char x = ch - 'A';
        char y = x + 'a';
        return y;
    }
}

bool palindrome(char name[], int len)
{
    int e = len - 1;
    int s = 0;

    while (e > s)
    {
        if (toLower(name[s]) != toLower(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }

    return true;
}

void strg()
{
    // major difference between strings and character arrays
    string str = "Helllo";
    str[3] = '\0';

    char str1[10] = "Helllo";
    str1[3] = '\0';

    cout << "String = " << str << endl;
    cout << "Char array = " << str1 << endl;
}

int main()
{
    char name[15] = "nakshatra";

    // cout << "Enter your name = ";
    // cin >> name;
    // cout << "Your name is = " << name << endl;

    int len = str_len(name);
    // cout << "length of name = " << len << endl;

    // reverse_str(name, len);
    // cout << "reverse of name = " << name << endl;

    // cout <<"check palindrome = " << palindrome(name, len) << endl;

    /*
    default delimiter is '\n'
    cin.getline (char* s, streamsize n, char delim );   -->  for char arrays
    cin.getline (istream& is, string& str, char delim); -->  for strings
    */
    /*
    char str1[256];
    cin.getline(str1, 256);
    cout << "your name1 is : " << str1 << endl;

    string str2 = "";
    getline(cin, str2);
    cout << "your name2 is : " << str2 << endl;
    */

    string test = "my name is nakshatra sirohi";
    string rep = "/";
    test.replace(10, 3, rep);
    int x = test.find("yy");
    cout << test << x << endl;

    return 0;
}