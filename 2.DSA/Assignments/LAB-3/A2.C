// Write a program in C to insert a new node at the beginning of a Singly Linked List.

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to display the linked list
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

int main() {
    int n, i;
    struct Node *head = NULL;

    // Prompt the user to enter the value of the first node
    printf("Enter the value of node 1: ");
    scanf("%d", &n);
    head = createNode(n);

    // Prompt the user to enter the value of the new node to be inserted at the beginning
    printf("Enter the value of new node: ");
    scanf("%d", &i);
    insertAtBeginning(&head, i);

    // Display the linked list
    display(head);

    return 0;
}