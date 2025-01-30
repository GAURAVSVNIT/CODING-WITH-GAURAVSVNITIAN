// Q1: Given a linked list of n nodes and an integer k, write a function to rotate the
// linked list counter clockwise by k nodes.
#include <iostream>
#include <vector>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    friend class LinkedList;
};

class LinkedList
{
private:
    Node *head;
public:
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void rotate(int k)
    {
        Node *temp = head;
        int count = 1;
        while (count < k && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            return;
        }
        Node *kthNode = temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
        head = kthNode->next;
        kthNode->next = NULL;
        cout << "Linked list after rotating by " << k << " nodes: ";
        display();
    }
};
int main()
{
    vector<int> v;
    int n, k;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter the value of k: ";
    cin >> k;
    LinkedList l;
    for (int i = 0; i < n; i++)
    {
        l.insert(v[i]);
    }
    cout << "Original linked list: ";
    l.display();
    l.rotate(k);

}

