#include <iostream>
using namespace std;
#include <climits>

// only used to print int type arrays
void printArray(int arr[], int size)
{
    cout << "printing array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
int main()
{
    int num[15];
    cout << "in num value at 13th index = " << num[13] << endl;

    int arr[3] = {2,4,6};
    cout << "in arr value at 2nd position = " << arr[1] << endl;

    int xarr[12] = {5, 7};
    cout << "printing xarr elements = ";
    int n = 12;
    for(int i=0; i<n; i++) {
        cout << xarr[i] << " ";
    }
    cout << endl;
    cout << endl;

    //array using func
    int fourth[10] = {0};
    printArray(fourth, 10);

    char ch[3] = {'a', 'b', 'c'};
    int a = 3;
    cout << "printing array ch = ";
    for(int i=0; i<a; i++) {
        cout << ch[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

// printing max & min value of an array
int getMin(int num[], int n)
{
    int min = num[0];

    for (int i = 1; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = num[0];

    for (int i = 1; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

/*
int main()
{
    int size = 5;
    int num[100];

    for(int i=0; i<size; i++) {
        cout << "enter elements = ";
        cin >> num[i];
    }

    cout << "Max value = " << getMax(num, size) << endl;
    cout << "Min value = " << getMin(num, size) << endl;

    return 0;
}
*/

// array update using void func
void update(int arr[], int n)
{
    cout << "inside the func" << endl;

    // updating array's first element
    arr[0] = 120;

    // printing array
    cout << "printing in void func" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
int main() {
    int arr[3] ={5, 6, 7};

    //using update func to update the array
    update(arr, 3);

    //printing array
    cout << "printing in main func" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

// linear search
bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

/*
int main()
{
    int arr[10] = {5, -4, -8, 6, 7, 2, 3, 11, 16, 18};

    //check if input value is present or not
    int key;
    cout << "enter the key = ";
    cin >> key;

    bool ans = search(arr, 10, key);

    if(ans) {
        cout << "key is present" << endl;
    }
    else {
        cout << "key is absent" << endl;
    }
    return 0;
}
*/

// reverse an array
void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    reverse(arr1, 5);
    printArray(arr1, 5);

    int arr2[6] = {5, 6, 7, 8, 9, 0};
    reverse(arr2, 6);
    printArray(arr2, 6);

    return 0;
}