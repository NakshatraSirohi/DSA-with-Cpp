#include <iostream>
using namespace std;

#include <vector>

// leetcode - Check if Array is Sorted and Rotated  (1752)

void printVec(vector<int> v)
{
    cout << "printing elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void check()
{
    vector<int> vec = {3, 4, 2, 5, 1, 2};
    int n = vec.size(), peak = 0;

    // counting number of sudden breaks in the values of an array
    // pivot array only contain 1 sudden break
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] > vec[i])
        {
            peak++;
        }
        if (peak > 1)
        {
            break;
        }
    }

    // if array is sorted only
    if (vec[n - 1] > vec[0])
    {
        peak++;
    }

    // (peak<1) : if all the elements are same
    cout << "boolean = " << (peak <= 1) << endl;
}

int main()
{
    check();
    return 0;
}