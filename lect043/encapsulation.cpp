#include <iostream>
using namespace std;

/*
by only using getter functions we can make a class read only
because if no setter is implimented the value can not be changed
we can only access the value using getter function
*/

class Stud
{
private:
    int age = 5;
    int height = 10;

public:
    void getAge()
    {
        cout << "Age is " << age << endl;
    }
};

int main()
{
    Stud Neon;
    Neon.getAge();
    return 0;
}