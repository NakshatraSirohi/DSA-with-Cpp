#include <iostream>
using namespace std;

// cout & datatypes
int main()
{
    std::cout << "Hello World 1" << endl;
    cout << "Hello World 2\n";
    cout << "Hello World 3";
    cout << " 456" << endl;

    // int a = "a";  produce an error bcoz of double quotes
    // characters are only written in single quote
    int a = 'a';
    cout << "int a = " << a << endl;

    char b = 98;
    cout << "char b = " << b << endl;

    // char c = 123499;
    // cout << "char c = " << c  << endl;

    unsigned int x = 112;
    unsigned int y = -112; // only stored +ve values
    cout << "x and y = " << x << " " << y << endl;

    return 0;
}