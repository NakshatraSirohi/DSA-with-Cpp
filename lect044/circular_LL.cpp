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

void print(Node *tail)
{
    // if list is empty
    if (tail == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void valueInsert(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // list is non-empty & assuming that the element exists
    else
    {
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }

        Node *temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void positionInsert(Node *&tail, int data, int pos)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    // if list is not empty
    else
    {
        Node *curr = tail;
        int count = 2;
        while (count < pos)
        {
            curr = curr->next;
            count++;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletion(Node *&tail, int value)
{
    // list is empty
    if (tail == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    // list is non-empty & assuming that the element exists
    else
    {
        Node *prev = tail;
        Node *current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;

        // single node case
        if (current == prev)
        {
            tail = NULL;
        }

        // nodes >= 2 case
        if (tail == current)
        {
            tail = prev;
        }

        current->next = NULL;
        delete current;
    }
}

int main()
{
    Node *tail = NULL;

    // value insertion
    valueInsert(tail, 4, 3);
    print(tail);
    cout << "tail->data : " << tail->data << endl;
    cout << endl;

    valueInsert(tail, 3, 5);
    print(tail);
    cout << "tail->data : " << tail->data << endl;
    cout << endl;

    // positional insertion
    positionInsert(tail, 6, 2);
    print(tail);
    cout << "tail->data : " << tail->data << endl;
    cout << endl;

    positionInsert(tail, 8, 4);
    print(tail);
    cout << "tail->data : " << tail->data << endl;
    cout << endl;

    positionInsert(tail, 2, 1);
    print(tail);
    cout << "tail->data : " << tail->data << endl;
    cout << endl;

    // value deletion
    deletion(tail, 6);
    print(tail);
    cout << endl;

    deletion(tail, 3);
    print(tail);
    cout << endl;

    deletion(tail, 8);
    print(tail);

    return 0;
}