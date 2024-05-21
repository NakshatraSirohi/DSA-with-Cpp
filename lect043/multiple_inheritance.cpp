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

class B
{
public:
    void funcB()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
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
    obj2.funcB();

    C obj3;
    cout << endl;
    obj3.funcA();
    obj3.funcB();
    obj3.funcC();

    return 0;
}