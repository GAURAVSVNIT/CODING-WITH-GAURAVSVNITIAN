# include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList {
private:
    Node *head;
public:

void insertAtHead(int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insertAtEnd(int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

void insertAtPosition(int position,int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        if (position == 1)
        {
            head = new_node;
            return;
        }
        else
        {
            cout << "Invalid position." << endl;
            return;
        }
    }
    if (position == 1)
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid position." << endl;
            return;
        }
    }
    if (temp == NULL)
    {
        cout << "Invalid position." << endl;
        return;
    }

}


