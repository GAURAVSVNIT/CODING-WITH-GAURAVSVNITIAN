// Question 1: Write a C/C++ code to evaluate the Postfix Expression
// using Stack.
// Example:
// Input: 34*25*+
// Output: 22


#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
    Node(char data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
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

    char peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    bool isFull()
    {
        return false;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    int evaluatePostfix(string exp)
    {
        for (int i = 0; i < exp.length(); i++)
        {
            if (isdigit(exp[i]))
            {
                push(exp[i] - '0');
            }
            else
            {
                int val1 = peek();
                pop();
                int val2 = peek();
                pop();
                switch (exp[i])
                {
                case '+':
                    push(val2 + val1);
                    break;
                case '-':
                    push(val2 - val1);
                    break;
                case '*':
                    push(val2 * val1);
                    break;
                case '/':
                    push(val2 / val1);
                    break;
                }
            }
        }
        return peek();
    }
};