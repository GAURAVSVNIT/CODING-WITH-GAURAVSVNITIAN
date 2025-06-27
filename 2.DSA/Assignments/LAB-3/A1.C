// 1. Write a program in C to create and display a Singly link list.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    LinkedList list;
    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        list.append(value);
    }

    cout << "The linked list is: ";
    list.display();

    return 0;
}
