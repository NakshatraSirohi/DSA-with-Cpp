#include <iostream>
using namespace std;

#include <string>

// Function Overloading
class A
{
public:
    void sayHello()
    {
        cout << "Hello User1" << endl;
    }

    void sayHello(string s)
    {
        cout << "Hello User2" << endl;
    }

    void sayHello(char c)
    {
        cout << "Hello User3" << endl;
    }

    void sayHello(char c, int a)
    {
        cout << "Hello User4" << endl;
    }

    /*
    >> Generate Error of Function Overloading
    int sayHello(char c, int a)
    {
        cout << "Hello User4" << endl;
        return 1;
    }
    */
};

// Operator Overloading
class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int v1 = this->a;
        int v2 = obj.a;
        cout << "Output = " << (v2 - v1) << endl;
    }
};

int main()
{
    // Function Overloading
    A nan;
    nan.sayHello();
    nan.sayHello("ABC");
    nan.sayHello('A');
    nan.sayHello('A', 2);

    // Operator Overloading
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    return 0;
}