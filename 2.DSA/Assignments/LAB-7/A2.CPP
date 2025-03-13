// Question 2: Implement a queue using a linked list with two pointers:
// front and rear. Elements can only be inserted via the rear pointer and
// deleted via the front pointer. The queue has the following basic
// operation:
// • enqueue() – Insert an element in the queue.
// • dequeue() – Remove the element from the queue.
// • peek() – Return the element at the front node of the queue
// • isFull() – Validates if the queue is full or not.
// • isEmpty() – Checks if the queue is empty.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL; // Initialize front and rear to NULL
    }

    void enqueue(int data)
    {
        Node *new_node = new Node(data);
        if (isEmpty()) // If queue is empty, both front and rear should point to the new node
        {
            front = rear = new_node;
            return;
        }
        rear->next = new_node;
        rear = new_node;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        if (front == NULL) // If queue becomes empty, rear should also be NULL
        {
            rear = NULL;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    bool isFull() // A linked list-based queue is never full (unless memory is exhausted)
    {
        return false;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    int choice;

    do
    {
        cout << "\nEnter the operation you want to perform:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. isFull\n";
        cout << "5. isEmpty\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter the data you want to insert: ";
            cin >> data;
            q.enqueue(data);
            break;
        }
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << "Element at the front of the queue is: " << q.peek() << endl;
            break;
        case 4:
            cout << "Queue is full: " << q.isFull() << endl;
            break;
        case 5:
            cout << "Queue is empty: " << q.isEmpty() << endl;
            break;
        case 6:
            q.display();
            break;
        case 7:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
