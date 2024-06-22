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

void insertion(Node *&tail, int element, int d)
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

    insertion(tail, 4, 3);
    print(tail);

    insertion(tail, 3, 5);
    print(tail);

    insertion(tail, 5, 7);
    print(tail);

    insertion(tail, 5, 6);
    print(tail);

    insertion(tail, 3, 4);
    print(tail);

    deletion(tail, 3);
    print(tail);

    deletion(tail, 6);
    print(tail);

    deletion(tail, 4);
    print(tail);

    deletion(tail, 7);
    print(tail);

    deletion(tail, 5);
    print(tail);

    return 0;
}