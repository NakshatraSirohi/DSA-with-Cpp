#include <iostream>
using namespace std;

class A
{
public:
    void speak()
    {
        cout << "A is speaking" << endl;
    }
};

class B : public A
{
public:
    void speak()
    {
        cout << "B is speaking" << endl;
    }
};

int main()
{
    B obj;
    obj.speak();
    return 0;
}