// Q4: Write a C/C++ program to implement doubly linked list with the
// following function
// (i) insertAtFirst(&head, new_data): This function should insert the new
// data/element at the beginning of the linked list.
// (ii) insertAtEnd(&head, new_data): This function should insert the new
// data/element at the end of the linked list
// (iii) insertAtMiddle(&head, new_data): This function should insert the new
// data/element at the middle of the linked list
// (iv) insertAfterNode(&head, given_node, new_data): This function should
// insert the new data/element after the given node in the linked list.
// Example: Suppose, you want to insert 60 after node 40 in the given linked
// list 10 → 20 → 30 → 40 → 50, the updated linked list will be
// 10 → 20 → 30 → 40 → 60 → 50\
// (v) display(&head): This function should display the content of the linked list

#include <iostream>
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

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
        head = NULL;
    }

    // Function to insert a new node at the beginning of the list
    void insertAtFirst(int new_data) {
        Node *new_node = new Node(new_data);
        new_node->next = head;
        new_node->prev = NULL;
        if (head != NULL) {
            head->prev = new_node;
        }
        head = new_node;
    }

    // Function to insert a new node at the end of the list
    void insertAtEnd(int new_data) {
        Node *new_node = new Node(new_data);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

    // Function to insert a new node in the middle of the list
    void insertAtMiddle(int new_data) {
        if (head == NULL) {
            insertAtFirst(new_data);
            return;
        }
        Node *slow = head;
        Node *fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *new_node = new Node(new_data);
        new_node->next = slow->next;
        new_node->prev = slow;
        if (slow->next != NULL) {
            slow->next->prev = new_node;
        }
        slow->next = new_node;
    }

    // Function to insert a new node after a given node
    void insertAfterNode(int given_node_data, int new_data) {
        Node *temp = head;
        while (temp != NULL && temp->data != given_node_data) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Given node not found in the list." << endl;
            return;
        }
        Node *new_node = new Node(new_data);
        new_node->next = temp->next;
        new_node->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = new_node;
        }
        temp->next = new_node;
    }

    // Function to display the linked list
    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int choice, data, given_node_data;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Insert in the middle\n";
        cout << "4. Insert after a given node\n";
        cout << "5. Display the list\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert at the beginning: ";
                cin >> data;
                list.insertAtFirst(data);
                break;
            case 2:
                cout << "Enter the value to insert at the end: ";
                cin >> data;
                list.insertAtEnd(data);
                break;
            case 3:
                cout << "Enter the value to insert in the middle: ";
                cin >> data;
                list.insertAtMiddle(data);
                break;
            case 4:
                cout << "Enter the value of the given node: ";
                cin >> given_node_data;
                cout << "Enter the value to insert after the given node: ";
                cin >> data;
                list.insertAfterNode(given_node_data, data);
                break;
            case 5:
                list.display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}