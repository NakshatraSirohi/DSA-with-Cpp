#include <iostream>
using namespace std;

void createRefVar()
{
    // creating a reference variable
    int i = 5;
    int &j = i;

    cout << "initially, i = " << i << endl;

    i++;
    cout << "after i++, i = " << i << endl;

    j++;
    cout << "after j++, i = " << i << endl;
}

void update1(int n)
{
    n++;
}
void update2(int &n)
{
    n++;
}

void useOfRefVar()
{
    // use of reference variable (why we need it?)
    int n = 5;

    cout << "before update1(), n = " << n << endl;
    update1(n);
    cout << "after update1(), n = " << n << endl;
    cout << endl;

    cout << "before update2(), n = " << n << endl;
    update2(n);
    cout << "after update2(), n = " << n << endl;
}

/*
>> Not a good practice [CAUSES ERROR]
int &func(int n)
{
    int num = n;
    int &ans = num;
    return ans;
}

int *func1(int n)
{
    int *ptr = &n;
    return ptr;
}
*/

int main()
{
    useOfRefVar();
    return 0;
}