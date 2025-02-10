// Q3: Write a C/C++ code to implement stack with all the operations defined in
// Q2 using Linked list.

#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
private:
    Node *top;
public:
    Stack() {
        top = NULL;
    }

    void push(int data) {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    bool isFull() {
        return false;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Stack stack;
    int choice, data;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> data;
                stack.push(data);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top element: " << stack.peek() << endl;
                break;
            case 4:
                stack.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}