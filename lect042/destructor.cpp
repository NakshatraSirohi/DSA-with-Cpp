#include <iostream>
using namespace std;

class Hero
{
public:
    int hp;

    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    // static - auto call to destructor
    Hero a;

    // dynamic
    Hero *b = new Hero();
    // manual call to destructor
    delete b;

    return 0;
}