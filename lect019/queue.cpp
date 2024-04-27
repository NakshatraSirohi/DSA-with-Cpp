#include <iostream>
using namespace std;

#include <queue> //queues & priority_queues

// QUEUES :- FIFO type
void func1a()
{
    // [NOTE] compare with stack :: it's kind of reverse
    // printing queues
    queue<string> q;

    q.push("nak");
    q.push("SHA");
    q.push("tra");

    cout << "elements : ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // empty check
    cout << "is empty =  " << q.empty() << endl;
}

void func1b()
{
    queue<string> q;

    // each word is treated like an individual element
    // but not each letter
    q.push("nak");
    q.push("SHA");
    q.push("tra");

    cout << "top element before popping = " << q.front() << endl;
    cout << "size before popping = " << q.size() << endl;

    q.pop();
    cout << "top element after popping = " << q.front() << endl;
    cout << "size after popping = " << q.size() << endl;

    // empty check
    cout << "is empty =  " << q.empty() << endl;
}

// PRIORITY QUEUES :- MAX HEAP BASED
// [NOTE] : It's not sorted in any manner
// Default Priority Queue is MAX heap
void func2a()
{
    // maximum heap priority queue
    // max element comes out first
    // max element sbse uppar hoga baki sb elements kaise bhi ho skte hai
    priority_queue<int> maxHeap;

    maxHeap.push(1);
    maxHeap.push(6);
    maxHeap.push(3);
    maxHeap.push(5);

    int n = maxHeap.size();
    // size is saved in "n" because if we directly passed the argument in loop
    // then the size of queue will change in every iteration and it will cause error

    // printing max heap
    cout << "printing maxHeap = ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << maxHeap.top();
        maxHeap.pop();
    }
    cout << endl;

    // checking empty
    cout << "is empty maxHeap = " << maxHeap.empty() << endl;
}

void func2b()
{

    // minimum heap priority queue
    // min element comes out first
    // min element sbse uppar hoga baki sb elements kaise bhi ho skte hai
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(1);
    minHeap.push(0);
    minHeap.push(4);
    minHeap.push(2);

    int m = minHeap.size();
    // size is saved in "n" because if we directly passed the argument in loop
    // then the size of queue will change in every iteration and it will cause error

    // printing min heap
    cout << "printing minHeap = ";
    for (int i = 0; i < m; i++)
    {
        cout << " " << minHeap.top();
        minHeap.pop();
    }
    cout << endl;

    // checking empty
    cout << "is empty minHeap = " << minHeap.empty() << endl;
}

int main()
{
    func2b();
    return 0;
}