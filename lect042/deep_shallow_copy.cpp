#include <iostream>
using namespace std;

#include <cstring>

class hero
{
public:
    char name[100];
    int hp;

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setHp(int n)
    {
        hp = n;
    }
    void print()
    {
        cout << "[ Name: " << name << ", ";
        cout << "HP: " << hp << " ]" << endl;
    }
};

void shallow()
{
    hero one;
    one.hp = 100;
    char name[10] = "Neon";
    one.setName(name);

    hero two(one);

    cout << "Before Update" << endl;
    cout << "Hero ONE: ";
    one.print();

    cout << "Hero TWO: ";
    two.print();

    one.hp = 110;

    cout << "After Update" << endl;
    cout << "Hero ONE: ";
    one.print();

    cout << "Hero TWO: ";
    two.print();
}

int main()
{
    shallow();
    return 0;
}