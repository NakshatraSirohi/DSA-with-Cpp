#include <iostream>
using namespace std;

void address()
{
    int num = 5;
    cout << "num value = " << num << endl;
    cout << "num address = " << &num << endl;
}

void basics()
{
    int num = 5;
    int *ptr = &num;

    cout << "value of *ptr = " << *ptr << endl;
    cout << "value of num = " << num << endl;
    cout << "address of num = " << &num << endl;

    cout << "value of ptr = " << ptr << endl;
    cout << "address of ptr = " << &ptr << endl;
    cout << endl;

    cout << "size of num : " << sizeof(num) << endl;
    cout << "size of ptr : " << sizeof(ptr) << endl;
    cout << "size of *ptr : " << sizeof(*ptr) << endl;
    cout << "size of &ptr : " << sizeof(&ptr) << endl;
}

void nullPtr()
{
    // pointer(ptr) to int is created
    // and pointing to some garbage value
    // whose address is might not be in the range of program memory block
    int *ptr;
    cout << "printing *ptr : " << *ptr << endl;

    // this is better than above but causes SEGMENTATION FAULT
    // SEGMENTATION FAULT : means this memory does not exist
    int *p = 0;
    cout << "printing *p : " << *p << endl;
}

void example1()
{
    int num = 5;
    int a = num;
    a++;

    cout << "value of a = " << a << endl;
    cout << "address of a = " << &a << endl;

    cout << "value of num = " << num << endl;
    cout << "address of num = " << &num << endl;
}

void example2()
{
    int num = 5;
    int *p = &num;
    int a = *p;
    a++;

    cout << "value of a = " << a << endl;
    cout << "address of a = " << &a << endl;

    cout << "value of num = " << num << endl;
    cout << "address of num = " << &num << endl;

    cout << "value stored in *p = " << *p << endl;
    cout << "value of p = " << p << endl;
    cout << "address of p = " << &p << endl;
}

void example3()
{
    int num = 5;
    int *p = &num;
    (*p)++;

    cout << "value of num = " << num << endl;
    cout << "address of num = " << &num << endl;

    cout << "value stored in *p = " << *p << endl;
    cout << "value of p = " << p << endl;
    cout << "address of p = " << &p << endl;
}

void copyPtr()
{
    int num = 5;
    int *p = &num;
    int *q = p;

    // int *q = *p      [invalid, causes error]
    // int *q = &p      [invalid, causes error]
    // int *q = &*p     [equivalent to : int *q = p]

    cout << "value of num : " << num << endl;
    cout << "address of num : " << &num << endl;

    cout << "value stored in *p = " << *p << endl;
    cout << "value of p = " << p << endl;
    cout << "address of p = " << &p << endl;

    cout << "value stored in *q = " << *q << endl;
    cout << "value of q = " << q << endl;
    cout << "address of q = " << &q << endl;
}

void ptrArithematic()
{
    int num = 5;
    int *p = &num;

    (*p)++;
    cout << "*p value1 = " << *p << endl;

    *p = *p + 4;
    cout << "*p value2 = " << *p << endl;
}

void ptrArithematic2()
{
    int num = 5;
    int *p = &num;

    // WHAT HAPPEN?  (p = p + 1)

    cout << "address of p (before p++) : " << &p << endl;
    cout << "value of p (before p++) : " << p << endl;

    // (p = p + 1) : increases the bytes by 4 (int size = 4 byte)
    // (*p++) : *(p++)
    // gives a garbage value bcoz memory address is changed

    p = p + 1;

    cout << "*p value3 = " << *p << endl;

    cout << "address of p (after p++) : " << &p << endl;
    cout << "value of p (after p++) : " << p << endl;
}

int main()
{
    basics();
    return 0;
}