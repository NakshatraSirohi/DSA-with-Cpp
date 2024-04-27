#include <iostream>
using namespace std;

int main()
{
    char arr[15] = "nakshatra";

    cout << "Before null char added : " << arr << endl;
    cout << "Word after null char : " << int(arr[12]) << endl;

    arr[4] = '\0';

    cout << "After null char added : " << arr << endl;
    cout << "Word after null char : " << arr[6] << endl;
    cout << "Word after null char : " << int(arr[4]) << endl;

    return 0;
}