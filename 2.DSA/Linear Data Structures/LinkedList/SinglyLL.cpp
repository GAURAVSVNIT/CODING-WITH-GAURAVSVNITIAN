#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int position, int data) {
        if (position < 1) {
            cout << "Invalid position." << endl;
            return;
        }
        if (position == 1) {
            insertAtHead(data);
            return;
        }
        Node* newNode = new Node(data);
        Node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid position." << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void deleteAtFront() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtPosition(int position) {
        if (position < 1) {
            cout << "Invalid position." << endl;
            return;
        }
        if (position == 1) {
            deleteAtFront();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid position." << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp->next == NULL) {
            cout << "Invalid position." << endl;
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    int choice, data, position;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Insert at head\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete from end\n";
        cout << "5. Delete from front\n";
        cout << "6. Delete from position\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert at head: ";
                cin >> data;
                ll.insertAtHead(data);
                break;
            case 2:
                cout << "Enter the value to insert at end: ";
                cin >> data;
                ll.insertAtEnd(data);
                break;
            case 3:
                cout << "Enter the position to insert: ";
                cin >> position;
                cout << "Enter the value to insert: ";
                cin >> data;
                ll.insertAtPosition(position, data);
                break;
            case 4:
                ll.deleteAtEnd();
                break;
            case 5:
                ll.deleteAtFront();
                break;
            case 6:
                cout << "Enter the position to delete: ";
                cin >> position;
                ll.deleteAtPosition(position);
                break;
            case 7:
                ll.display();
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