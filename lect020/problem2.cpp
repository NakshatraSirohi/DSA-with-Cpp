#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

// leetcode - Merge Sorted Array  (88)

void printVec(vector<int> v)
{
    cout << "printing elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void mergeVec()
{
    // two pointer approach
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8};

    int n = arr1.size(), m = arr2.size(), p = n + m;
    vector<int> arr3(p, 0);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        // firstly value assigned to the index then it increases
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

    printVec(arr3);
}

void mergeVec2()
{
    // two pointer approach

    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6, 8};
    vector<int> v3;

    int a = v1.size(), b = v2.size();
    int mini = min(a, b);
    int s1 = 0, s2 = 0;

    while ((s1 < mini) || (s2 < mini))
    {
        if (v1[s1] < v2[s2])
        {
            v3.push_back(v1[s1]);
            s1++;
        }
        else if (v1[s1] > v2[s2])
        {
            v3.push_back(v2[s2]);
            s2++;
        }
        else
        {
            v3.push_back(v1[s1]);
            v3.push_back(v2[s2]);
            s1++;
            s2++;
        }
    }

    if (a > b)
    {
        int temp = a - b;
        for (int i = 0; i < temp; i++)
        {
            v3.push_back(v1[a - temp + i]);
        }
    }
    else if (a < b)
    {
        int temp = b - a;
        for (int i = 0; i < temp; i++)
        {
            v3.push_back(v2[b - temp + i]);
        }
    }

    printVec(v3);
}

int main()
{
    mergeVec();
    return 0;
}