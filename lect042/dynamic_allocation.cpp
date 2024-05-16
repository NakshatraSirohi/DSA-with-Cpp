#include <iostream>
using namespace std;

// Allocating objects dynamically

class player
{
public:
    char name[100];
    int hp;
};

int main()
{
    // heap allocation
    player *Paul = new player;

    (*Paul).hp = 50;

    cout << "*HP : " << (*Paul).hp << endl;
    cout << "->HP : " << Paul->hp << endl;

    return 0;
}