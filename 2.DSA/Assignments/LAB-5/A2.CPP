// Q2: Write a C/C++ code to implement stack with following operations using
// array.
// a) create () = Create a stack.
// b) push() = Pushing (storing) an element on the stack
// c) pop() = Removing (accessing) an element from the stack.
// d) peek() = Get the top data element of the stack, without removing it
// e) isFull() = Check if stack is full.
// f) isEmpty() = Check whether the stack is empty, and return true or false.

#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;
public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full." << endl;
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of stack: ";
    cin >> capacity;
    Stack stack(capacity);
    int choice, data;

    while (true) {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Exit" << endl;
        cout << "5. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
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
                exit(0);

            case 5:
                stack.display();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}