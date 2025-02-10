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

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

string InfixToPostfix(string infix)
{
    Stack s;
    string postfix="";
    for (int i = 0; i < infix.length() ; i++)
    {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!s.isEmpty() && s.peek() != '(')
            {
                postfix += s.peek();
                s.pop();
            }
            if (!s.isEmpty())
            {
                s.pop();
            }
        }
        else
        {
            while (!s.isEmpty() && precedence(infix[i]) <= precedence(s.peek()))
            {
                postfix += s.peek();
                s.pop();
            }
            s.push(infix[i]);
        }
        
    }
    
}
