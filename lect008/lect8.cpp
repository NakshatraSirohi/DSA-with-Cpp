#include <iostream>
using namespace std;

/*
//SWITCH STATEMENT
int main()
{
    int num = 2;
    char ch = '1';
    switch(num) {
        case 1: cout << "first\n";
                break;

        case 2: cout << "second :\n";
                switch(ch) {
                    case '1': cout << "\tinside second => character\n";
                }
                break;

        default: cout << "default\n";
    }

    //basic calculator using switch
    int a, b;
    char operation;
    cout << "enter a & b = ";
    cin >> a >> b;
    cout << "enter operation : ";
    cin >> operation;

    switch( operation ) {
        case '+': cout << "ans = " << a+b << endl;
                    break;
        case '-': cout << "ans = " << a-b << endl;
                    break;
        case '*': cout << "ans = " << a*b << endl;
                    break;
        case '/': cout << "ans = " << a/b << endl;
                    break;
        default: cout << "invalid operation or values" << endl;
    }

    return 0;
}
*/

// FUNCTIONS
// func-1
int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// func-2
int rect_area()
{
    int a, b;
    cout << "enter a & b = ";
    cin >> a >> b;

    int ans = a * b;
    return ans;
}

// func-3
bool iseven()
{
    int a;
    cout << "enter a = ";
    cin >> a;

    // if last bit of any decimal num is "1" then it's odd else even
    // return (0 for odd) and (1 for even)
    if (a & 1)
    {
        return 0;
    }
    return 1;
}

// func-4
int fact(int n)
{
    int factor = 1;
    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
    }
    return factor;
}
int nCr(int n, int r)
{
    int numi = fact(n);
    int denom = fact(r) * fact(n - r);
    return (numi / denom);
}

// func-5
void printCounting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return; // return but with a null value (not necessary)
}

// func-6 : pass by value func
void dummy(int n)
{
    n++;
    cout << "value of n = " << n << endl;
}

int main()
{
    /*
    //using power() func
    int a, b;
    cout << "enter a & b = ";
    cin >> a >> b;

    int r1 = power(a, b);
    cout << "power : result-1 = " << r1 << endl;

    int c, d;
    cout << "enter a & b = ";
    cin >> c >> d;

    int r2 = power(c, d);
    cout << "power : result-2 = " << r2 << endl;
    */

    /*
    //using rect_area() func
    int r3 = rect_area();
    cout << "rect_area : result-1 = " << r3 << endl;

    int r4 = rect_area();
    cout << "rect_area : result-2 = " << r4 << endl;
    */

    /*
    //using iseven() func
    if(iseven()) {
        cout << "even num" << endl;
    }
    else {
        cout << "odd num" << endl;
    }
    */

    /*
    //using nCr() func and nested func fact()
    int n, r;
    cout << "enter n & r = ";
    cin >> n >> r;
    int ans = nCr(n ,r);
    cout << "ans = " << ans << endl;
    */

    /*
    //using printCounting() void func
    int n;
    cout << "enter n = ";
    cin >> n;
    printCounting(n);
    */

    // using func-6 (pass by value func)
    int n;
    cout << "enter value of n = ";
    cin >> n;
    dummy(n);
    cout << "n = " << n << endl;

    return 0;
}