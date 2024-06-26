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

void insertAtTail(Node *&tail, int data)
{
    Node *node2 = new Node(data);
    tail->next = node2;
    tail = node2;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    // insertion at starting
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // traversing upto (n-1)th position
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // insertion at ending
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // insertion at nth position
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

// deletion using position
void positionDelete(int pos, Node *&head)
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

// deletion using data/value
void valueDelete(int value, Node *&head)
{
    // deleting first node
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // deleting any other node
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    cout << "node1->data = " << node1->data << endl;
    cout << "node1->next = " << node1->next << endl;
    cout << "node1 = " << node1 << endl;
    cout << endl;

    Node *head = node1;
    Node *tail = node1;

    cout << "head->next = " << head->next << endl;
    cout << "head->data = " << head->data << endl;
    cout << "head = " << head << endl;
    cout << endl;

    cout << "tail->next = " << tail->next << endl;
    cout << "tail->data = " << tail->data << endl;
    cout << "tail = " << tail << endl;
    cout << endl;

    printLL(head);
    cout << endl;

    // inserting elements
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

    // deleting elements
    positionDelete(1, head);
    printLL(head);

    positionDelete(3, head);
    printLL(head);

    valueDelete(12, head);
    printLL(head);

    valueDelete(18, head);
    printLL(head);

    return 0;
}