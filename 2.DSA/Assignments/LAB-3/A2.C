// Write a program in C to insert a new node at the beginning of a Singly Linked List.

#include <iostream>// Write a program in C to insert a new node at the beginning of a Singly Linked List.
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

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    // Insert at a given position (1-based index)
    void insertAtPosition(int val, int position) {
        if (position <= 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Position out of range. Inserting at end." << endl;
            insertAtEnd(val);
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete at beginning
    void deleteAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted from beginning." << endl;
    }

    // Delete at end
    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Last node deleted." << endl;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;

        delete temp->next;
        temp->next = nullptr;
        cout << "Node deleted from end." << endl;
    }

    // Delete at a specific position
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (position <= 1) {
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp->next != nullptr; i++)
            temp = temp->next;

        if (temp->next == nullptr) {
            cout << "Position out of range. Nothing to delete." << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        cout << "Node deleted at position " << position << "." << endl;
    }

    // Display linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to clean memory
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
    LinkedList list;

    int firstVal;
    cout << "Enter the value of node 1: ";
    cin >> firstVal;
    list.insertAtEnd(firstVal);  // create initial node

    int begVal;
    cout << "Enter the value to insert at beginning: ";
    cin >> begVal;
    list.insertAtBeginning(begVal);

    int endVal;
    cout << "Enter the value to insert at end: ";
    cin >> endVal;
    list.insertAtEnd(endVal);

    int midVal, pos;
    cout << "Enter the value to insert in between: ";
    cin >> midVal;
    cout << "Enter the position (starting from 1): ";
    cin >> pos;
    list.insertAtPosition(midVal, pos);

    cout << "\nThe linked list is: ";
    list.display();

    // Perform Deletion Operations
    list.deleteAtBeginning();
    list.deleteAtEnd();
    cout << "Enter position to delete: ";
    cin >> pos;
    list.deleteAtPosition(pos);

    cout << "\nThe linked list after deletions is: ";
    list.display();

    return 0;
}