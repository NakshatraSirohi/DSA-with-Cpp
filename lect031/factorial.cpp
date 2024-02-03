#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 2)
        return 2;

    int smallerProblem = fact(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int fact2(int n)
{
    // base case
    if (n == 2)
        return 2;

    return n * fact(n - 1);
}

int fact3(int n)
{
    // no base case --> SEGMENTATION FAULT ERROR
    // Bcoz of Function Call Stack overflow by the indefinite fact3() calling it self
    // if (n == 2)
    //    return 2;

    return n * fact(n - 1);
}

int main()
{
    int res = fact(5);
    cout << "res = " << res << endl;
    return 0;
}