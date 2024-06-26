#include <iostream>
using namespace std;

// codestudio - Reverse Linked List

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

// iterative solution
Node *iterativeReverse(Node *head)
{
    if ((head == NULL) || (head->next == NULL))
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// recursive solution
void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *recursiveReverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

int main()
{
    Node *node1 = new Node(3);
    Node *head = node1;
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    print(head);

    Node *res = iterativeReverse(head);
    print(res);

    return 0;
}