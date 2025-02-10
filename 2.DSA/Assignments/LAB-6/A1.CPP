// Q3: Write a C/C++ code to implement
// using Linked list and perform Infix to Postfix.

#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    char data;
    Node *next;
    Node(char data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
private:
    Node *top;
public:
    Stack() 
    {
        top = NULL;
    }

    void push(char data) 
    {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    char peek() {
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
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int precedence(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

string infixToPostfix(string infix) {
    Stack stack;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            postfix += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (!stack.isEmpty() && stack.peek() != '(') {
                postfix += stack.peek();
                stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.isEmpty() && precedence(c) <= precedence(stack.peek())) {
                postfix += stack.peek();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while (!stack.isEmpty()) {
        postfix += stack.peek();
        stack.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    return 0;
}

