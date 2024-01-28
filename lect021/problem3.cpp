#include <iostream>
using namespace std;

#include <vector>
#include <cmath>
#include <algorithm>

// codestudio - Sum Of Two Arrays by OMKAR

void printVec(vector<int> v)
{
    cout << "printing elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void sumArr()
{
    vector<int> num1 = {1, 2, 3, 5};
    vector<int> num2 = {5, 6, 3, 5, 4};
    vector<int> ans;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int x = num1[i];
        int y = num2[j];

        int sum = x + y + carry;

        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = num1[i] + carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = num2[j] + carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());

    printVec(ans);
}

void sumArr2()
{
    vector<int> num1 = {1, 2, 3, 5};
    vector<int> num2 = {5, 6, 3, 5, 4};
    vector<int> ans;

    int x = num1.size(), y = num2.size();
    int maxi = max(num1.size(), num2.size());

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < maxi; i++)
    {
        if (x != 0)
        {
            sum1 = (sum1 * 10) + num1[i];
            x--;
        }
        if (y != 0)
        {
            sum2 = (sum2 * 10) + num2[i];
            y--;
        }
    }

    int sum = sum1 + sum2;

    while (sum != 0)
    {
        int temp = sum % 10;
        ans.insert(ans.begin(), temp);
        sum /= 10;
    }

    printVec(ans);
}

int main()
{
    sumArr();
    return 0;
}