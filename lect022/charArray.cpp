#include <iostream>
using namespace std;

#include <string>

// string : 1D char array that has last element as a null-char ('\0')
// null char : ASCII Value = 0 & used as a terminator

void func1()
{
    // INPUT OUTPUT OF STRING

    // Initialization of String
    char arr1[] = "Naksh";
    char arr2[10] = "Naksh";
    cout << "arr1 & arr2 : " << arr1 << " & " << arr2 << endl;

    // Initialization of Char-Array
    char arr3[] = {'N', 'a', 'k', 's', 'h', '\0'};
    char arr4[10] = {'N', 'a', 'k', 's', 'h', '\0'};

    cout << "arr3 & arr4 : " << arr3 << " & " << arr4 << endl;

    // Error will occur because of no null char specified
    char arr5[] = {'N', 'a', 'k', 's', 'h'};
    cout << "arr5 : " << arr5 << endl;
    cout << endl;

    // size input string se 1 jyada hona chaiye, kyuki '\0' end mei add hoga
    char name[20];

    // cin : stops execution on encountering <newline>, <space> or <tab>
    cout << "Enter name : ";
    cin >> name;

    cout << "Name is : " << name << endl;
}

void func2()
{
    // LENGTH & SIZE OF STRING
    char str[20] = "Nakshatra";

    int size = sizeof(str) / sizeof(str[0]);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    cout << "length of str : " << len << endl;
    cout << "size of str : " << size << endl;
}

// REVERSE OF STRING >> PROBLEM-1

int main()
{
    func1();
    return 0;
}
