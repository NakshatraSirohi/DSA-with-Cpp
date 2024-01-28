#include <iostream>
using namespace std;

int main()
{
    // find sum of numbers upto including "d"
    int d;
    cout << "enter d = ";
    cin >> d;

    // while loop
    int j = 1;
    int sum1 = 0;
    while (j <= d)
    {
        sum1 = sum1 + j;
        j = j + 1;
    }
    cout << "Sum1 = " << sum1 << endl;

    // for loop
    int sum2 = 0;
    for (int i = 0; i <= d; i++)
    {
        sum2 += i;
    }
    cout << "Sum2 = " << sum2 << endl;

    return 0;
}