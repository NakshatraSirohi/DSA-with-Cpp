#include <iostream>
using namespace std;

// MULTIPLE INHERITANCE
class A
{
public:
    void funcA()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Class B" << endl;
    }
};

class C : public A
{
public:
    void funcC()
    {
        cout << "Class C" << endl;
    }
};

int main()
{
    A obj1;
    obj1.funcA();

    B obj2;
    cout << endl;
    obj2.funcA();
    obj2.funcB();

    C obj3;
    cout << endl;
    obj3.funcA();
    obj3.funcC();

    return 0;
}