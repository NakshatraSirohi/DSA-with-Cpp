#include <iostream>
using namespace std;

void prints(int *p)
{
    cout << "printing p = " << p << endl;
    cout << "printing &p = " << &p << endl;
    cout << "printing *p = " << *p << endl;
}

void update(int *p)
{
    p = p + 1;
    cout << "inside update : " << p << endl;
}

void update1(int *p)
{
    // *p = *p + 1;
    (*p)++;
}

void arrSum(int *arr, int n)
{
    // CAUSE ERROR BUT RETURNS THE SIZE OF POINTER OF PASSED ARRAY ie. 8 Bytes
    // int siz = sizeof(arr);
    // cout << "sizeof(arr) : " << siz << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "sum of arr = " << sum << endl;
}

int main()
{
    /*
    int n = 5;
    prints(&n);
    cout << endl;

    int x = 6;
    cout << "org value of x : " << x << endl;
    cout << "before calling update(x), x : " << x << endl;
    update(&x);
    cout << "after calling update(x), x : " << x << endl;
    cout << endl;

    cout << "before calling update1(x), x : " << x << endl;
    update1(&x);
    cout << "after calling update1(x), x : " << x << endl;
    */

    int arr[5] = {1, 2, 3, 4, 5};
    arrSum(arr, 5);
    arrSum(arr + 2, 3);
    return 0;
}