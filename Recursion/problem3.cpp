#include <iostream>
using namespace std;

#include <vector>

void insert(vector<int> &v, int temp)
{
    int size = v.size();

    if ((size == 0) || (v[size - 1] <= temp))
    {
        v.push_back(temp);
        return;
    }

    int value = v[size - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(value);
}

void sortArray(vector<int> &v)
{
    int size = v.size();

    if (size == 1)
    {
        return;
    }

    int temp = v[size - 1];
    v.pop_back();
    sortArray(v);
    insert(v, temp);
}

void printArray(vector<int> v)
{
    int i = 0;
    while (v[i] != '\0')
    {
        cout << v[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {4, 3, 1, 2};
    sortArray(vec);
    printArray(vec);
    return 0;
}