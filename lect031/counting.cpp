#include <iostream>
using namespace std;

int printCounting(int n)
{
    cout << " " << n;

    if (n == 0)
        return 0;

    return printCounting(n - 1);
}

int printCounting2(int n)
{
    if (n == 0)
        return 0;

    cout << " " << n;

    return printCounting(n - 1);
}

int printCounting3(int n)
{
    if (n == 0)
        return 0;

    return printCounting(n - 1);

    cout << " " << n;
}

int main()
{
    cout << "printCounting() :";
    printCounting(10);
    cout << endl;

    cout << "printCounting2() :";
    printCounting2(10);
    cout << endl;

    cout << "printCounting3() :";
    printCounting3(10);
    cout << endl;

    return 0;
}