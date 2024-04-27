#include <iostream>
using namespace std;

int score = 10; // BAD PRACTICE : CAN BE ALTERED BY OTHER FUNCTIONS
// Instead use REFERENCE VARIABLE

void func1()
{
    cout << "func1() is called, score = " << score << endl;
    score++;
}

void func2()
{
    cout << "func2() is called, score = " << score << endl;
    score++;
}

void func3()
{
    cout << "func3() is called, score = " << score << endl;
    score++;
}

int main()
{
    func1();
    func2();
    func3();

    cout << "main() is called, score = " << score << endl;
    return 0;
}