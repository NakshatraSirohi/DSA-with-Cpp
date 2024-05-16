#include <iostream>
using namespace std;

// Copy Constructor : Copy members of one object to another

class Hero
{
public:
    char level;
    int hp;

    Hero(int hp, char level)
    {
        this->level = level;
        this->hp = hp;
    }

    void print()
    {
        cout << "hitpoint : " << this->hp << endl;
        cout << "level : " << this->level << endl;
    }
};

class Player
{
public:
    char level;
    int hp;

    Player(int hp, char level)
    {
        this->level = level;
        this->hp = hp;
    }

    // User-define Copy Constructor (Default Copy Constructor dies)
    Player(Player &temp)
    {
        cout << "UD Copy Constructor Called" << endl;
        this->hp = temp.hp;
        this->level = temp.level;
    }

    void print()
    {
        cout << "hitpoint : " << this->hp << endl;
        cout << "level : " << this->level << endl;
    }
};

int main()
{
    // creating normal object with parameterized constructor
    Hero Mona(70, 'A');
    cout << "Mona ----> " << endl;
    Mona.print();

    // copying Mona value to Jean
    Hero Jean(Mona);
    // Jean.hp = Mona.hp;
    // Jean.level = Mona.level;
    cout << "Jean ----> " << endl;
    Jean.print();

    Player soba(70, 'A');
    cout << "Soba ----> " << endl;
    soba.print();

    Player rimuru(soba);
    cout << "Rimuru ----> " << endl;
    rimuru.print();

    return 0;
}