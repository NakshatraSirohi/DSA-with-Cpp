#include <iostream>
using namespace std;

// codestudio - Reverse List in K Groups

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "deleted : " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    // new node created
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *solve(Node *head, int k, int len, int cur_len)
{
    if (head == NULL)
        return NULL;

    Node *curr = head;
    Node *nxt = NULL;
    Node *prev = NULL;
    int count = 0;

    if (len - cur_len - k < 0)
        return head;

    while (curr != NULL && count < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        count++;
        cur_len++;
    }

    if (nxt != NULL)
    {
        head->next = solve(nxt, k, len, cur_len);
    }

    return prev;
}

Node *kReverse(Node *head, int k)
{
    int len = 0;
    Node *curr = head;

    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }

    return solve(head, k, len, 0);
}

int main()
{
    Node *node1 = new Node(3);
    Node *head = node1;
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 11);
    insertAtHead(head, 13);
    print(head);

    Node *ans = kReverse(head, 4);
    print(ans);

    return 0;
}