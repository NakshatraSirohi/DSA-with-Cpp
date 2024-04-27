#include <iostream>
using namespace std;

#include <vector>

// leetcode - Move Zeroes  (283)

void printVec(vector<int> v)
{
    cout << "printing elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void moveZero()
{
    // two pointer approach
    vector<int> vec = {0, 1, 0, 3, 12};

    int nonZero = 0; // non zero value index
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i])
        {
            swap(vec[i], vec[nonZero]);
            nonZero++;
        }
    }

    printVec(vec);
}

void moveZero2()
{
    // bruteforce method
    vector<int> vec = {0, 1, 0, 3, 12, 0, 0};

    int n = vec.size();
    vector<int> v2(n, 0);

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i])
        {
            v2.insert(v2.begin() + j, vec[i]);
            v2.pop_back();
            j++;
        }
    }

    printVec(v2);
}

int main()
{
    moveZero();
    return 0;
}