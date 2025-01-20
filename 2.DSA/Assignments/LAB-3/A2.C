//Write a program in C to insert a new node at the beginning of a Singly
// Linked List.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    int n;
    printf("Enter the value of node 1: ");   
    scanf("%d", &n);

    int i;
    printf("Enter the value of new node: ");
    scanf("%d", &i);

    struct Node *head = NULL;
    head = createNode(n);
    insertAtBeginning(&head, i);
    return 0;
}