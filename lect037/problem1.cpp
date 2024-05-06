#include <iostream>
using namespace std;

#include <vector>

// leetcode - subsets  (78)

void printVec(vector<vector<int>> v)
{
    cout << "elements :";
    for (const auto &innerVec : v)
    {
        cout << " {";
        for (int elem : innerVec)
        {
            cout << " " << elem;
        }
        cout << "} ";
    }
    cout << endl;
}

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);

    printVec(ans);
    return 0;
}