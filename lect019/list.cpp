#include <iostream>
using namespace std;

#include <list>

void printList(list<int> l)
{
    cout << "elements :";
    for (int i : l)
    {
        cout << " " << i;
    }
    cout << endl;
}

void func1()
{
    list<int> l = {0, 9};

    // defining size and initialize with element
    // list<datatype> name(size, init_element);
    list<int> n(5, 10);
    cout << "list [n] ";
    printList(n);
    cout << endl;

    cout << "before pushing ";
    printList(l);

    // accessible from both ends
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    cout << "after pushing & before popping ";
    printList(l);

    l.pop_back();
    l.pop_front();

    cout << "after popping ";
    printList(l);
}

void func2()
{
    list<int> l = {0, 1, 2, 3, 4, 5};

    /*
    starting iterator : l.begin()
    ending iterator : l.end()
    */

    cout << "-- BEFORE ERASING --" << endl;
    cout << "size = " << l.size() << endl;
    printList(l);

    l.erase(l.begin());

    cout << "-- AFTER ERASING --" << endl;
    cout << "size = " << l.size() << endl;
    printList(l);
}

void func3()
{
    list<int> l = {0, 1, 2, 3, 4, 5};
    cout << "original list ";
    printList(l);

    // copying list : list<datatype> newName(oldName);
    list<int> copy(l);
    cout << "copied list ";
    printList(copy);

    // empty check
    cout << "is empty : " << copy.empty() << endl;
}

int main()
{
    func1();
    return 0;
}