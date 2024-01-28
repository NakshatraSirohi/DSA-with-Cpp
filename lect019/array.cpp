#include <iostream>
using namespace std;

#include <array>

void func1()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // internal implementation is same as above array
    // array<datatype, size> name;
    array<int, 5> arr2 = {1, 2, 3, 4, 5};

    int size = arr2.size();

    cout << "printing elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << endl;
    }

    cout << "size = " << size << endl;
}

void func2()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // checking if array is empty or not
    cout << "checking empty or not : " << arr.empty() << endl;

    // returning element at n-th position
    cout << "element at 2nd position : " << arr.at(1) << endl;

    // returns first and last element in an array
    cout << "first element : " << arr.front() << endl;
    cout << "last element : " << arr.back() << endl;
}

int main()
{
    func1();
    return 0;
}