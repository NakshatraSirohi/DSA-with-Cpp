#include <iostream>
using namespace std;

#include <set>

// both ORDERED & UNORDERED set are possible
// ordered set is bit slower than unordered set
// we can either push or pull elements (no modification possible)

void printSet(set<int> s)
{
    cout << "elements :";
    for (int i : s)
    {
        cout << " " << i;
    }
    cout << endl;
}

void func1()
{
    // ordered & unique elements
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    printSet(s);
}

void func2()
{
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    cout << "before erase ";
    printSet(s);

    // creating an iterator
    // s.begin() for starting & s.end() for ending
    set<int>::iterator itr = s.begin();
    // increasing iterator value by 2
    itr++;
    itr++;
    // now iterator value is 2 (ie. it will erase 3rd element)

    s.erase(itr);

    cout << "after erase ";
    printSet(s);
}

void func3()
{
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    // x.count(n) : basically gives the counting of an element
    // but in case of sets, each element have unique occurrence
    // so here, x.count(n) : tells if a numbers is present or not
    cout << "is (-5) present = " << s.count(-5) << endl;
}

void func4()
{
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    // this gives the iterator of an element
    set<int>::iterator itr = s.find(-1);

    // printing element >= n
    // if above itr is empty (element do not exits) then nothing will be printed
    cout << "printing itr = ";
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    func4();
    return 0;
}