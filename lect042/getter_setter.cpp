#include <iostream>
using namespace std;

// Getter and Setter Functions to Access Private Members

class Student
{
private:
    char section;
    int marks;

public:
    int age;

    // all the getter and setter func must be inside the public modifier
    void setSection(char sec)
    {
        section = sec;
    }

    char getSection()
    {
        return section;
    }

    void setMarks(int num)
    {
        marks = num;
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student layla;

    // Assigning and Accessing value of Public Member
    layla.age = 20;
    cout << "Age : " << layla.age << endl;

    // Assigning and Accessing value of Private Member
    layla.setSection('A');
    layla.setMarks(95);

    cout << "Section : " << layla.getSection() << endl;
    cout << "Marks : " << layla.getMarks() << endl;

    return 0;
}