#include <iostream>
using namespace std;

#include <deque>

/*
double-ended queues : push/pop possible from both ends
unlike array/vector it does not store elements in contiguous memory locations
it implement using multiple small static array and store elements in each and keep track of data from them
*/

void printDeq(deque<int> d)
{
    cout << "elements :";
    for (int i : d)
    {
        cout << " " << i;
    }
    cout << endl;
}

void func1()
{
    deque<int> d = {0, 9};

    cout << "before pushing ";
    printDeq(d);

    d.push_back(1);
    d.push_front(2);
    d.push_back(4);
    d.push_front(3);

    cout << "after pushing & before popping ";
    printDeq(d);

    d.pop_back();
    d.pop_front();

    cout << "after popping ";
    printDeq(d);
}

void func2()
{
    deque<int> d = {1, 2, 3, 4, 5};

    // size check
    cout << "size : " << d.size() << endl;

    // [ERROR] capacity invalid : d.capacity()

    // accessing elements
    cout << "element at 1st index = " << d.at(1) << endl;
    cout << "first element = " << d.front() << endl;
    cout << "last element = " << d.back() << endl;

    // empty checking
    cout << "is empty = " << d.empty() << endl;
}

void func3()
{
    deque<int> d = {1, 2, 3, 4, 5};

    /*
    staring iterator : deq.begin()
    ending iterator : dep.end()
    */

    cout << "-- BEFORE ERASING --" << endl;
    printDeq(d);
    cout << "size = " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    d.erase(d.end(), d.end() + 1);

    cout << "-- AFTER ERASING --" << endl;
    printDeq(d);
    cout << "size = " << d.size() << endl;

    /*
    after using erase the size will reduce
    but the capacity remains same
    */
}

int main()
{
    func3();
    return 0;
}