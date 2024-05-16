#include <iostream>
using namespace std;

class memo
{
public:
    int hp;
    int lvl;
    char stat;
};

int main()
{
    memo a;
    a.hp = 100;
    a.lvl = 10;
    a.stat = 'C';

    memo b;
    b.hp = 200;
    b.lvl = 14;
    b.stat = 'B';

    /*
    copy assignment operator (=) :-
    copies the values of right side member into the left side member
    */
    a = b;

    cout << "a.hp = " << a.hp << endl;
    cout << "a.lvl = " << a.lvl << endl;
    cout << "a.stat = " << a.stat << endl;

    return 0;
}