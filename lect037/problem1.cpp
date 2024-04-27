#include <iostream>
using namespace std;

#include <vector>

// leetcode - subsets  (78)

void printVec(vector<vector<int>> v)
{
    int size = v.size();
    cout << "elements :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << v[i];
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

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3};
    vector<vector<int>> res = subsets(vec);
    printVec(res);
    return 0;
}