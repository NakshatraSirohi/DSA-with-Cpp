#include <iostream>
using namespace std;

// defining a macro
#define PI 3.14159

// arithematics can't be performed on the macro within block of a code

int main()
{
    int r = 5;

    // this takes 8 bytes of memory address (affects performance)
    double pi = 3.14159;
    double area1 = pi * r * r;

    // no extra space for PI (macro)
    double area2 = PI * r * r;

    cout << "area1 is : " << area1 << endl;
    cout << "area2 is : " << area2 << endl;

    return 0;
}