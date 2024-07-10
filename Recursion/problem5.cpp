#include <iostream>
using namespace std;

#include <stack>

void remove(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }
    int tmp = s.top();
    s.pop();
    remove(s, k - 1);
    s.push(tmp);
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

    int k = (num.size() / 2) + 1;
    remove(num, k);

    cout << "middle position = " << k << endl;

    cout << "after : ";
    printStack(num);
    return 0;
}