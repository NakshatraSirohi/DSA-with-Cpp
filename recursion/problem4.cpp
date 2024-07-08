#include <iostream>
using namespace std;

#include <stack>

void insert(stack<int> &st, int tmp)
{
    int s = st.size();
    if ((s == 0) || (st.top() <= tmp))
    {
        st.push(tmp);
        return;
    }

    int val = st.top();
    st.pop();
    insert(st, tmp);
    st.push(val);
}

void sortStack(stack<int> &st)
{
    int s = st.size();

    if (s == 1)
    {
        return;
    }

    int tmp = st.top();
    st.pop();
    sortStack(st);
    insert(st, tmp);
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
    num.push(5);
    num.push(1);
    num.push(0);
    num.push(2);

    printStack(num);

    sortStack(num);
    printStack(num);

    return 0;
}