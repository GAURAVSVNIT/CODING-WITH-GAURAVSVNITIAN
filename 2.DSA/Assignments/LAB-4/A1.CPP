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

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
        head = NULL;
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
    }

    // Function to display the linked list
    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to rotate the linked list by k nodes
    void rotate(int k) {
        if (head == NULL || k == 0) return;

        // Calculate the length of the list
        Node *temp = head;
        int length = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            length++;
        }

        // If k is greater than or equal to the length of the list, reassign k to k % length
        k = k % length;

        // If k is 0, no rotation is needed
        if (k == 0) return;

        // Find the k-th node
        temp = head;
        int count = 1;
        while (count < k && temp != NULL) {
            temp = temp->next;
            count++;
        }

        // Mark the k-th node
        Node *kthNode = temp;

        // Find the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Rotate the list
        temp->next = head;
        head = kthNode->next;
        kthNode->next = NULL;
    }
};

int main() {
    LinkedList list;
    int n, data, k;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> data;
        list.insertAtEnd(data);
    }

    cout << "Enter the number of nodes to rotate by: ";
    cin >> k;

    cout << "Linked list before rotating: ";
    list.display();

    list.rotate(k);

    cout << "Final linked list: ";
    list.display();

    return 0;
}
