#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void printVec(vector<int> v)
{
    cout << "elements :";
    for (int i : v)
    {
        cout << " " << i;
    }
    cout << endl;
}

void func1()
{
    // BINARY SEARCH to check if "n" exists or not
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.push_back(8);

    cout << "checking if (3) exists = " << binary_search(v.begin(), v.end(), 3) << endl;
    cout << "lower bound = " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "upper bound = " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
}

void func2()
{
    // rotating vector by "n"
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.push_back(8);

    cout << "vector before rotate, ";
    printVec(v);

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "vector after rotate, ";
    printVec(v);
}

void func3()
{
    // sorting a vector
    // this sort is implemented using INTRO-SORT
    // INTRO-SORT is a combination of quick, heap, insertion sort
    vector<int> v = {1, 3, 5, 2, 4, 6};

    cout << "vector before sort, ";
    printVec(v);

    sort(v.begin(), v.end());
    cout << "vector after sort, ";
    printVec(v);
}

void func4()
{
    // finding minimum & maximum
    int a = 3, b = 5, c = 4;
    cout << "max = " << max(a, b) << endl;
    cout << "min = " << min(a, c) << endl;
    cout << endl;

    // swaping two elements
    cout << "before swap - a & b = " << a << " " << b << endl;
    swap(a, b);
    cout << "after swap - a & b = " << a << " " << b << endl;
    cout << endl;

    // reverse string
    string str = "abcde";
    cout << "before reverse : " << str << endl;

    reverse(str.begin(), str.end());
    cout << "after reversed : " << str << endl;
}

int main()
{
    func4();
    return 0;
}
