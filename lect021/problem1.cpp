#include <iostream>
using namespace std;

#include <vector>

/*
---- EXPLANATION ----
Given array : [1, 2, 3, 4, 5, 6, 7]

Case 1:
Right rotation by 2 positions: [6, 7, 1, 2, 3, 4, 5]
The last two elements (6 and 7) move to the front.

Case 2:
Left rotation by 2 positions: [3, 4, 5, 6, 7, 1, 2]
The first two elements (1 and 2) move to the end.
*/

// leetcode - Rotate Array  (189)

void printVec(vector<int> v)
{
    cout << "printing elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void rotate()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    int n = v.size();
    vector<int> ans(n);

    int k = 3; // left rotation

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = v[i]; // logic --> notes
    }

    printVec(ans);
}

void rotate2()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    int k = 2; // left rotation

    while (k != 0)
    {
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
        k--;
    }

    printVec(vec);
}

int main()
{
    rotate();
    return 0;
}