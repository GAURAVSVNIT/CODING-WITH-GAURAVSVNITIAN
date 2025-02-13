// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Stack {
// private:
//     Node* top;

// public:
//     Stack() {
//         top = NULL;
//     }

//     void push(int data) {
//         Node* newNode = new Node(data);
//         if (top == NULL) {
//             top = newNode;
//         } else {
//             newNode->next = top;
//             top = newNode;
//         }
//     }

//     void pop() {
//         if (top == NULL) {
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//     }

//     int peek() {
//         if (top == NULL) {
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return top->data;
//     }

//     bool isEmpty() {
//         return top == NULL;
//     }

//     void display() {
//         if (top == NULL) {
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         Node* temp = top;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack stack;
//     int choice, data;

//     while (true) {
//         cout << "Menu:\n";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Peek\n";
//         cout << "4. Check if stack is empty\n";
//         cout << "5. Display\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter the value to push: ";
//                 cin >> data;
//                 stack.push(data);
//                 break;
//             case 2:
//                 stack.pop();
//                 break;
//             case 3:
//                 data = stack.peek();
//                 if (data != -1) {
//                     cout << "Top element: " << data << endl;
//                 }
//                 break;
//             case 4:
//                 if (stack.isEmpty()) {
//                     cout << "Stack is empty." << endl;
//                 } else {
//                     cout << "Stack is not empty." << endl;
//                 }
//                 break;
//             case 5:
//                 stack.display();
//                 break;
//             case 6:
//                 cout << "Exiting..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }

//     return 0;
// }




