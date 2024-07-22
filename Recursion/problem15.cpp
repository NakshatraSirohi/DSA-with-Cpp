#include <iostream>
using namespace std;

#include <string>
#include <vector>

void solve(vector<int> v, int k, int index)
{
    if (v.size() == 1)
    {
        cout << v[0] << endl;
        return;
    }

    index = (index + k) % v.size();
    v.erase(v.begin() + index);

    solve(v, k, index);
}

int main()
{
    int n = 40;

    int k = 7;
    k = k - 1;

    int index = 0;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    solve(v, k, index);
    return 0;
}