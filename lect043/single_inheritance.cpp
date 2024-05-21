#include <iostream>
using namespace std;

#include <string>

// SINGLE INHERITANCE
class Human
{
public:
    int height;
    int age;
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male Vikram;

    // Inherated functions
    Vikram.age = 10;
    Vikram.height = 5;
    cout << "Vikram age = " << Vikram.age << endl;
    cout << "Vikram height = " << Vikram.height << endl;

    // Not inherated functions
    Vikram.color = "Brown";
    cout << "Vikram color = " << Vikram.color << endl;

    Vikram.sleep();

    return 0;
}