#include <iostream>
using namespace std;

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
    }
};

void insertAtHead(Node *&head, int data)
{
    // new node created
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
}

void insertAtTail(Node *&tail, int data)
{
    Node *node2 = new Node(data);
    tail->next = node2;
    tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    // inserting at starting
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;

    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void printLL(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int pos, Node *&head)
{
    // deleting first node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // deleting any middle or last node
    else
    {
        Node *current = head;
        Node *previous = NULL;

        int count = 1;
        while (count < pos)
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    Node *node1 = new Node(10);
    cout << "Data = " << node1->data << endl;
    cout << "Next = " << node1->next << endl;
    cout << "node1 = " << node1 << endl;
    cout << endl;

    Node *head = node1;
    Node *tail = node1;
    printLL(head);
    cout << endl;

    cout << "head = " << head << endl;
    cout << "tail = " << tail << endl;
    cout << endl;

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    printLL(head);

    insertAtTail(tail, 18);
    insertAtTail(tail, 20);
    printLL(head);

    insertAtPosition(head, tail, 3, 11);
    insertAtPosition(head, tail, 4, 9);
    printLL(head);
    cout << endl;

    cout << "head = " << head << endl;
    cout << "tail = " << tail << endl;
    cout << endl;

    deleteNode(1, head);
    printLL(head);

    return 0;
}