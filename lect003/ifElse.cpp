#include <iostream>
using namespace std;

// if-else ladder
int main()
{
    int n;
    cout << "enter value of n = ";
    cin >> n;

    // checking +ve or -ve number
    if (n > 0)
    {
        cout << "N is positive" << endl;
    }
    else if (n < 0)
    {
        cout << "N is negative" << endl;
    }
    else
    {
        cout << "N is zero" << endl;
    }

    return 0;
}