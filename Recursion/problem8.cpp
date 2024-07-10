#include <iostream>
using namespace std;

void solve(int disk, int source, int destination, int helper)
{
    if (disk == 1)
    {
        cout << "Moving disk " << disk << " from tower " << source << " to " << destination << endl;
        return;
    }

    solve(disk - 1, source, helper, destination);
    cout << "Moving disk " << disk << " from tower " << source << " to " << destination << endl;

    solve(disk - 1, helper, destination, source);
}

int main()
{
    int disk = 3;
    int s = 1, h = 2, d = 3;
    solve(disk, s, d, h);
    return 0;
}