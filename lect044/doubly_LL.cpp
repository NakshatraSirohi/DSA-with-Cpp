#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "deleted : " << val << endl;
    }
};

// traversing
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// calculating length
int getLen(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(int d, Node *&head, Node *&tail)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(int d, Node *&head, Node *&tail)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(int d, int pos, Node *&tail, Node *&head)
{
    // inserting at start
    if (pos == 1)
    {
        insertAtHead(d, head, tail);
        return;
    }

    // traversing till (n-1)th position
    Node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at end
    if (temp->next == NULL)
    {
        insertAtTail(d, head, tail);
        return;
    }

    // inserting at n-th position
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int pos, Node *&head, Node *&tail)
{
    // starting node
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    // middle or last node
    else
    {
        Node *currNode = head;
        Node *prevNode = NULL;

        int count = 1;
        while (count < pos)
        {
            prevNode = currNode;
            currNode = currNode->next;
            count++;
        }

        currNode->prev = NULL;
        prevNode->next = currNode->next;

        // cases to handle tail
        if (currNode->next == NULL)
        {
            tail = prevNode;
        }
        else
        {
            currNode->next->prev = prevNode;
            currNode->next = NULL;
        }

        delete currNode;
    }
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout << "length is " << getLen(head) << endl;
    cout << endl;

    insertAtHead(11, head, tail);
    insertAtHead(12, head, tail);
    print(head);

    insertAtTail(13, head, tail);
    insertAtTail(14, head, tail);
    print(head);

    insertAtPosition(15, 3, tail, head);
    insertAtPosition(16, 5, tail, head);
    print(head);

    cout << "length is " << getLen(head) << endl;
    cout << endl;

    deleteNode(7, head, tail);
    print(head);
    cout << "tail->data : " << tail->data << endl;
    cout << "head->data : " << head->data << endl;
    cout << endl;

    deleteNode(3, head, tail);
    print(head);
    cout << "tail->data : " << tail->data << endl;
    cout << "head->data : " << head->data << endl;
    cout << endl;

    deleteNode(1, head, tail);
    print(head);
    cout << "tail->data : " << tail->data << endl;
    cout << "head->data : " << head->data << endl;

    return 0;
}