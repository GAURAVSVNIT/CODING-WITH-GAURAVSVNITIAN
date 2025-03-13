// Question 1: Write a C/C++ code to evaluate the Postfix Expression // using Stack. // Example: // Input: 3425+ // Output: 22

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

// Node class for Stack (Linked List)
class Node {
public:
    double data;
    Node* next;

    // Constructor
    Node(double value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using Linked List
class Stack {
private:
    Node* topNode;
public:
    // Constructor
    Stack() { topNode = nullptr; }

    // Push element onto the stack
    void push(double value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop element from the stack
    double pop() {
        if (topNode == nullptr) {
            cout << "Stack underflow!" << endl;
            return 0;
        }
        double value = topNode->data;
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        return value;
    }

    // Peek top element
    double top() {
        if (topNode == nullptr) {
            cout << "Stack is empty!" << endl;
            return 0;
        }
        return topNode->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Function to evaluate postfix expression using Linked List Stack
double evaluatePostfix(string expression) {
    Stack stack;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) { // Operand, push to stack
            stack.push(stod(token));
        } else { // Operator, pop two operands and compute
            if (stack.isEmpty()) {
                cout << "Invalid Expression!" << endl;
                return 0;
            }
            double b = stack.pop();
            if (stack.isEmpty()) {
                cout << "Invalid Expression!" << endl;
                return 0;
            }
            double a = stack.pop();

            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") stack.push(a / b);
            else if (token == "^") stack.push(pow(a, b)); // Handle right-associativity
            else {
                cout << "Invalid operator: " << token << endl;
                return 0;
            }
        }
    }

    if (stack.isEmpty()) {
        cout << "Invalid Expression!" << endl;
        return 0;
    }
    return stack.pop(); // Final result
}

// Menu-driven function
void menu() {
    int choice;
    string expression;

    do {
        cout << "\nMenu:";
        cout << "\n1. Evaluate Postfix Expression";
        cout << "\n2. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore(); // To handle newline after choice input

        switch (choice) {
            case 1:
                cout << "Enter Postfix Expression (space-separated): ";
                getline(cin, expression);
                cout << "Result: " << evaluatePostfix(expression) << endl;
                break;
            case 2:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 2);
}

int main() {
    menu();
    return 0;
}
