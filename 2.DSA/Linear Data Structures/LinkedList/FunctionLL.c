# include <stdio.h>
# include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
//Function to dispaly
void display(Node** head)
{
    Node* temp=*head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
Node* new(int val)
{
    Node *new = (Node*)malloc(sizeof(Node));
    new->data = val;
    new->next = NULL;
    return new;
}
void insertAtEnd(Node**head,int data)
{
    Node*temp=new(data);
    if(*head==NULL)
    {
        *head=temp;
    }
    else
    {
        Node*temp1=*head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;   
    }
}
// void insertAtHead()
// {

// }
// void insertAtPosition()
// {

//}

int main()
{
    Node  *head = NULL;
    insertAtEnd(&head,10);
    display(&head);
    free(head);

}
    