#include <iostream>
using namespace std;

#include <vector>

// codestudio : Reverse The Array by DHRUV SHARMA
// swap elements after the m-th position

void printVec(vector<int> v)
{
    int n = v.size();
    cout << "printing elements :";
    for (int i = 0; i < n; i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void reverseVec(vector<int> v, int m)
{
    int n = v.size();

    int s = m + 1, e = n - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    printVec(v);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    reverseVec(vec, 1);
    return 0;
}