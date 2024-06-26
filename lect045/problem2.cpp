#include <iostream>
using namespace std;

// codestudio - Middle of Linked List

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

// Approach 1
int getLen(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *findMiddle(Node *head)
{
    int len = getLen(head);
    int ans = (len / 2) + 1;

    Node *temp = head;
    // ans>1 : bcoz temp is already pointing at 1st element
    while (ans > 1)
    {
        temp = temp->next;
        ans--;
    }
    return temp;
}

// Approach 2
Node *findMiddle2(Node *head)
{
    // empty list or single node
    if ((head == NULL) || (head->next == NULL))
    {
        return head;
    }

    // if 2 node exists
    if (head->next->next == NULL)
    {
        return head->next;
    }

    // nodes more than 2
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }
    return slow;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    insertAtHead(head, 3);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    print(head);

    Node *ans = findMiddle(head);
    cout << ans->data << endl;

    Node *ans2 = findMiddle2(head);
    cout << ans2->data << endl;

    return 0;
}