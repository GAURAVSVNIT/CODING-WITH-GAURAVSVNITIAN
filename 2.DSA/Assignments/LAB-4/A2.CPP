// Q2: Given an unsorted linked list of n nodes, remove duplicates from the list.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Node {
private:
    int data;
    Node *next;
    Node *prev;
public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    friend class LinkedList;
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
        head = NULL;
    }

    // Function to insert a new node at the end of the list
    void insert(int data) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
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

    // Function to remove duplicates from the linked list
    void removeDuplicates() {
        if (head == NULL) return;

        unordered_set<int> seen;
        Node *current = head;
        Node *prev = NULL;

        while (current != NULL) {
            if (seen.find(current->data) != seen.end()) {
                // Duplicate found, remove it
                prev->next = current->next;
                if (current->next != NULL) {
                    current->next->prev = prev;
                }
                delete current;
            } else {
                // Not a duplicate, add to the set
                seen.insert(current->data);
                prev = current;
            }
            current = prev->next;
        }
    }
};

int main() {
    LinkedList list;
    vector<int> elements;
    int n, data;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        list.insert(data);
    }
    cout<<"Linked List before removing duplicates: ";
    list.display();
    list.removeDuplicates();
    cout<<"Linked List after removing duplicates: ";
    list.display();
    return 0;
}