#include <iostream>
using namespace std;

#include <stack>

void func1()
{
    // printing stacks
    stack<string> s;

    s.push("ohi");
    s.push("sir");
    s.push("ck");
    s.push("ni");

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // empty check
    cout << "is empty = " << s.empty() << endl;
}

// LIFO type
void func2()
{
    stack<string> s;

    // each word is treated like an individual element
    // but not each letter
    s.push("Nak");
    s.push("sha");
    s.push("tra");

    cout << "size before popping = " << s.size() << endl;
    cout << "top element before popping = " << s.top() << endl;

    s.pop();

    cout << "size after poping = " << s.size() << endl;
    cout << "top element after poping = " << s.top() << endl;

    // empty check
    cout << "is empty = " << s.empty() << endl;
}

int main()
{
    func1();
    return 0;
}