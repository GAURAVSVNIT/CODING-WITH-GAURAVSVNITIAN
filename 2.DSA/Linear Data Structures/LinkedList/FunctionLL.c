# include <stdio.h>
# include <stdlib.h>
typedef struct Node
{
    int data;
    Node *next;
}Node;
//Function to dispaly
void display()
{

}
Node* new(int val)
{
    Node *new = (Node*)malloc(sizeof(Node));
    new->data = val;
    new->next = NULL;
    return new;
}
Node*insertAtEnd(Node*head,int data)
{
    Node*temp=new(data);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        Node*temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}
Node*insertAtHead()
{

}
Node*insertAtPosition()
{

}

int main()
{
    Node *head;
    insertAtHead(head,10);

}
    