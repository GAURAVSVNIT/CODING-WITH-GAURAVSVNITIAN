// 1. Write a program in C to create and display a Singly link list.

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
    printf("Enter the Number  of node : ");
    scanf("%d", &n);

    int data[n];
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
    return 0;
}