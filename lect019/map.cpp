#include <iostream>
using namespace std;

#include <map>
#include <unordered_map>

// {key : value} pairs  -->  both ordered and unordered possible

void func1()
{
    // ordered map
    map<int, string> m;

    m[1] = "nick";
    m[4] = "program";
    m.insert({3, "sirohi"});

    cout << "printing key:value pairs (o_map) -->" << endl;
    for (auto i : m)
    {
        //.first = key & .second = value
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // creating an iterator
    auto itr = m.find(3);

    // print keys >= n
    cout << "printing key using iterator --> " << endl;
    for (auto i = itr; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    cout << endl;

    // checking for keys only
    cout << "finding key (4) = " << m.count(4) << endl;
    cout << "finding key (10) = " << m.count(10) << endl;
}

void func2()
{
    // unordered map
    unordered_map<int, string> um;

    um[1] = "nick";
    um[4] = "program";
    um.insert({3, "sirohi"});

    cout << "printing key:value pairs (u_map) -->" << endl;
    for (auto i : um)
    {
        //.first = key & .second = value
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

int main()
{
    func2();
    return 0;
}