#include <iostream>
using namespace std;

// geeksforgeeks - Maximum Occuring Character

void maxOccuringChar(char arr[])
{
    int ans[26] = {0};
    int n = 0;
    while (arr[n] != '\0')
    {
        // considering uppercase and lowercase same
        if ((arr[n] >= 'a') && (arr[n] <= 'z'))
        {
            int diff = arr[n] - 'a';
            ans[diff] += 1;
        }
        else if ((arr[n] >= 'A') && (arr[n] <= 'Z'))
        {
            int diff = arr[n] - 'A';
            ans[diff] = ans[diff] + 1;
        }
        n++;
    }

    // finding index of maximum element in ans[] array
    int maxi = ans[0];
    int indx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (ans[i] > maxi)
        {
            maxi = ans[i];
            indx = i;
        }
    }

    char res = 'a' + indx;
    cout << "ans = " << res << endl;
}

int main()
{
    char testcase[] = "output";
    maxOccuringChar(testcase);
    return 0;
}