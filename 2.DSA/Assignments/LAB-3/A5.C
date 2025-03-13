// 5. Write a C program that converts a singly linked list into an array and
// returns it.

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure

struct Node {
    int data;
    struct Node *next;
};

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

struct Node* createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    int n;
    printf("Enter the Number  of node : ");
    scanf("%d", &n);

    int *data = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    struct Node *head = NULL;
    struct Node *temp = NULL;
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = createNode(data[i]);
            temp = head;
        }
        else
        {
            temp->next = createNode(data[i]);
            temp = temp->next;
        }
    }
    
    printf("The linked list is: ");
    display(head);
    
    // Convert the linked list to an array
    int *arr = (int *)malloc(n * sizeof(int));
    struct Node *current = head;
    for (int i = 0; i < n; i++) {
        arr[i] = current->data;
        current = current->next;
    }
    
    printf("The array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(data);
    free(arr);
    return 0;
}
