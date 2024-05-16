#include <iostream>
using namespace std;

class Hero
{
public:
    int hp;
    static int timeTaken;

    static int random()
    {
        cout << "timetaken inside static func : ";
        return timeTaken;
    }
};

int Hero::timeTaken = 5;

int main()
{
    cout << "befoe (a) Hero::timeTaken = " << Hero::timeTaken << endl;

    Hero a;
    cout << "a.timeTaken = " << a.timeTaken << endl;

    Hero b;
    b.timeTaken = 10;
    cout << "after (b) Hero::timeTaken = " << Hero::timeTaken << endl;
    cout << "b.timeTaken = " << b.timeTaken << endl;

    cout << "static func call = " << Hero::random() << endl;

    return 0;
}