#include <iostream>
using namespace std;

void arrBasics()
{
    // basics of array
    int arr[5] = {9, 8, 7, 6, 5};

    cout << "value of array 1st element : " << arr[0] << endl;
    cout << "address of array 1st element : " << arr << endl;
    cout << "address of array 1st element : " << &arr[0] << endl;
    cout << "address of array 1st element : " << &arr << endl;

    // address is increased by 4 bytes in a contiguous manner, for each element bcoz it's int array
    cout << endl;
    cout << "value of array 2nd element : " << arr[1] << endl;
    cout << "address of array 2nd element : " << &arr[1] << endl;

    cout << "value of array 3rd element : " << arr[2] << endl;
    cout << "address of array 3rd element : " << &arr[2] << endl;

    cout << "value of array 4th element : " << arr[3] << endl;
    cout << "address of array 4th element : " << &arr[3] << endl;

    cout << "value of array 5th element : " << arr[4] << endl;
    cout << "address of array 5th element : " << &arr[4] << endl;
}

void arrBasics2()
{
    // accessing elements from array
    int arr[5] = {9, 8, 7, 6, 5};

    cout << "value of *arr : " << *arr << endl;
    cout << "value of array 1st element : " << arr[0] << endl;
    cout << "address of array 1st element : " << &arr << endl;
    cout << endl;

    cout << "value of (*arr+1) : " << (*arr + 1) << endl;
    cout << "value of *(arr+1) : " << *(arr + 1) << endl;
    cout << "value of (*arr)++ : " << (*arr)++ << endl;
    cout << endl;

    // FORMULA : arr[i] = *(arr+i)
    // FORMULA : i[arr] = *(i+arr)
    cout << "2nd element using arr[1] : " << arr[1] << endl;
    cout << "2nd element using *(arr+1) : " << *(arr + 1) << endl;
    cout << "2nd element using 1[arr] : " << 1 [arr] << endl;
    cout << "2nd element using *(1+arr): " << *(1 + arr) << endl;
}

void intArrPtr()
{
    // creating a pointer to array
    int arr[5] = {9, 8, 7, 6, 5};
    int *ptr = &arr[0];

    cout << "sizeof(arr) : " << sizeof(arr) << endl;
    cout << "sizeof(*arr) : " << sizeof(*arr) << endl;
    cout << "sizeof(&arr) : " << sizeof(&arr) << endl;
    cout << endl;

    cout << "sizeof(ptr) : " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr) : " << sizeof(*ptr) << endl;
    cout << "sizeof(&ptr) : " << sizeof(&ptr) << endl;
}

void intArrPtr2()
{
    int arr[5] = {3, 4, 5, 6, 7};
    // arr = arr + 1     [ERROR]

    int *p = &arr[0];
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << endl;

    p = p + 1;
    cout << "(p = p + 1) then p = " << p << endl;
    cout << "after that *p = " << *p << endl;
    cout << endl;

    (*p)++;
    cout << "(*p)++ then *p = " << *p << endl;
    cout << "after that p = " << p << endl;
}

int main()
{
    intArrPtr2();
    return 0;
}