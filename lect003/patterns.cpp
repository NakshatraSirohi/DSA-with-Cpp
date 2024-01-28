#include <iostream>
using namespace std;

void pattern1()
{
    int p = 5;
    int i = 1;
    while (i <= p)
    {

        int j = 1;
        while (j <= p)
        {
            cout << " *";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern2()
{
    int s = 5;
    int k = 1;
    while (k <= s)
    {

        int l = 1;
        while (l <= s)
        {
            cout << " " << k;
            l = l + 1;
        }
        cout << endl;
        k = k + 1;
    }
}

// patterns
int main()
{
    pattern1();
    pattern2();

    return 0;
}