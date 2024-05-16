#include <iostream>
using namespace std;

// importing classes from different files
#include "class_import.cpp"

// NON EMPTY CLASS
class Hero
{
    // properties of Hero class
    int hp;
};

// EMPTY CLASS
class Empty
{
    // no properties
};

int main()
{
    // creation of object of Hero class
    Hero hp1;

    // cout << "Data stored in Object = " << Hero.hp1() << endl;
    cout << "Size of Object hp1 = " << sizeof(hp1) << endl;

    // object creation in Empty class
    Empty x;
    cout << "Size of Object in Empty = " << sizeof(x) << endl;

    // from 'class_import.cpp' file
    player paul;
    cout << "Size of Player object = " << sizeof(paul) << endl;

    return 0;
}