#include <iostream>
using namespace std;

// Access Modifiers : Private, Public, Protected

class Student
{
public:
    int age;
    char section;

private:
    int marks;
};

int main()
{
    Student Paul;

    // Assigning values
    Paul.age = 20;
    Paul.section = 'A';

    // Accessing values
    cout << "Age : " << Paul.age << endl;
    cout << "Section : " << Paul.section << endl;

    // ERROR : marks is a private member
    // cout << "Marks : " << Paul.marks << endl;

    return 0;
}