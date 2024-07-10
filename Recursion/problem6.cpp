#include <iostream>
using namespace std;

#include <stack>

void insert(stack<int> &s, int tmp)
{
    if (s.size() == 0)
    {
        s.push(tmp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, tmp);
    s.push(val);
}

void reverse(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }
    int last = s.top();
    s.pop();
    reverse(s);
    insert(s, last);
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> num;
    num.push(3);
    num.push(4);
    num.push(5);
    num.push(6);
    num.push(7);
    num.push(8);

    cout << "before : ";
    printStack(num);

    int size = num.size();
    reverse(num);

    cout << "after : ";
    printStack(num);

    return 0;
}