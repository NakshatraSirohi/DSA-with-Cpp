#include <iostream>
using namespace std;

#include <vector>

void printVec(vector<int> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void printVec2(vector<int> v)
{
    cout << "elements :";
    for (int i : v)
    {
        cout << " " << i;
    }
    cout << endl;
}

void func1()
{
    // unknown size : vector<datatype> name;
    vector<int> vec;

    // known size : vector<datatype> name(size, init_element);
    cout << "vector [v] ";
    vector<int> v(5, 1);
    printVec(v);
    cout << endl;

    // size and capacity
    for (int i = 11; i < 17; i++)
    {
        vec.push_back(i);
        printVec(vec);
        cout << "size : " << vec.size() << endl;
        cout << "capacity : " << vec.capacity() << endl;
        cout << endl;
    }
}

void func2()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // accessing elements by position
    cout << "element at 2nd index : " << vec.at(2) << endl;
    cout << "first element : " << vec.front() << endl;
    cout << "last element : " << vec.back() << endl;

    // pushing elements
    cout << "before pushing, ";
    printVec(vec);
    vec.push_back(0);
    cout << "after pushing, ";
    printVec(vec);

    // poping elements
    cout << "before popping, ";
    printVec(vec);
    vec.pop_back();
    cout << "after popping, ";
    printVec(vec);
}

void func3()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // clearing vector
    // clear only affects size but not the capacity
    cout << "size before clear : " << vec.size() << endl;
    cout << "capacity before clear : " << vec.capacity() << endl;
    vec.clear();
    cout << "size after clear : " << vec.size() << endl;
    cout << "capacity after clear : " << vec.capacity() << endl;
}

void func4()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    /*
    iterator extraction
    starting iterator : vec.begin()
    ending iterator : vec.end()
    */
}

void func5()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "original vector ";
    printVec(vec);

    // copying one vector to another
    // vector<datatype> newName(oldName);
    vector<int> copy(vec);
    cout << "copied vector ";
    printVec2(copy);
}

int main()
{
    func1();
    return 0;
}