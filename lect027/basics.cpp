#include <iostream>
using namespace std;

void func1()
{
    // double pointer
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
}

void update1()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "---- BEFORE UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
    cout << endl;

    // anything changes ?  (UPDATION)
    ptr2 = ptr2 + 1;

    cout << "---- AFTER UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
}

void update2()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "---- BEFORE UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
    cout << endl;

    // anything changes ?  (UPDATION)
    *ptr2 = *ptr2 + 1;

    cout << "---- AFTER UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
}

void update3()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "---- BEFORE UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
    cout << endl;

    // anything changes ?  (UPDATION)
    **ptr2 = **ptr2 + 1;

    cout << "---- AFTER UPDATION ----" << endl;
    cout << "value of i = " << i << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;

    cout << "printing ptr = " << ptr << endl;
    cout << "printing *ptr = " << *ptr << endl;
    cout << "printing &ptr = " << &ptr << endl;
    cout << endl;

    cout << "printing ptr2 = " << ptr2 << endl;
    cout << "printing *ptr2 = " << *ptr2 << endl;
    cout << "printing &ptr2 = " << &ptr2 << endl;
    cout << "printing **ptr2 = " << **ptr2 << endl;
}

int main()
{
    update3();
    return 0;
}