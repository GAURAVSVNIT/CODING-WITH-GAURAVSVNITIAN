// Q1: Write a C/C++ program to implement a circular linked list with the
// following operations:
// a) Insert an element at a specific position specified by the user.
// b) Insert an element at the beginning of the list
// c) Insert an element at the end of the list.
// d) Delete an element from a specific position specified by the user.
// e) Delete the first element from the list.
// f) Delete the last element from the list.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class CircularLinkedList {
private:
    Node *head;
public:

void display() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

void insertAtPosition(int position, int new_data) {
    Node *new_node = new Node(new_data);
    if (head == NULL) {
        head = new_node;
        head->next = head;
        return;
    }
    if (position == 1) {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        head = new_node;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void insertAtBeginning(int new_data) {
    Node *new_node = new Node(new_data);
    if (head == NULL) {
        head = new_node;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(int new_data) {
    Node *new_node = new Node(new_data);
    if (head == NULL) {
        head = new_node;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
}

void deleteAtPosition(int position) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    if (position == 1) {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        if (temp == head) {
            delete head;
            head = NULL;
            return;
        }
        temp->next = head->next;
        delete head;
        head = temp->next;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
    Node *del_node = temp->next;
    temp->next = del_node->next;
    delete del_node;
}

void deleteFirst() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    if (temp == head) {
        delete head;
        head = NULL;
        return;
    }
    temp->next = head->next;
    delete head;
    head = temp->next;
}

void deleteLast() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }
    Node *del_node = temp->next;
    temp->next = head;
    delete del_node;
}

};

int main() {
    CircularLinkedList list;
    int choice, data, position;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Insert at a specific position\n";
        cout << "2. Insert at the beginning\n";
        cout << "3. Insert at the end\n";
        cout << "4. Delete from a specific position\n";
        cout << "5. Delete the first element\n";
        cout << "6. Delete the last element\n";
        cout << "7. Display the list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the position to insert: ";
                cin >> position;
                cout << "Enter the value to insert: ";
                cin >> data;
                list.insertAtPosition(position, data);
                break;
            case 2:
                cout << "Enter the value to insert at the beginning: ";
                cin >> data;
                list.insertAtBeginning(data);
                break;
            case 3:
                cout << "Enter the value to insert at the end: ";
                cin >> data;
                list.insertAtEnd(data);
                break;
            case 4:
                cout << "Enter the position to delete: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            case 5:
                list.deleteFirst();
                break;
            case 6:
                list.deleteLast();
                break;
            case 7:
                list.display();
                break;
            case 8:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}