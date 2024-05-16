#include <iostream>
using namespace std;

/*
Whenever, user defines a constructor then the default constructor dies
And only UD constructor can be accessed
*/

class Hero
{
public:
    int level;

    // user defined constructor
    Hero()
    {
        cout << "constructor is called" << endl;
    }
};

class Player
{
public:
    int hp;

    // Parameterized constructor
    Player(int hp)
    {
        cout << "this-> addr : " << this << endl;
        this->hp = hp;
    }
};

int main()
{
    // Hero class
    cout << "start" << endl;

    Hero ronin;
    Hero *diluc = new Hero;

    cout << "end" << endl;

    // Player class
    Player nemo(10);

    cout << "Addr of nemo : " << &nemo << endl;
    cout << "HP of nemo : " << nemo.hp << endl;

    return 0;
}