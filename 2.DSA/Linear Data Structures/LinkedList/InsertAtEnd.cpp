#include <iostream>

using namespace std;
class Node //User defined data type
{
public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class LinkedList // User defined data structure
{
    public:
    Node*head;
    Node*tail;
    int size;
    LinkedList()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    
    void insertAtEnd(int data)
    {
        Node*temp=new Node(data);
        if(head==NULL && tail==NULL && size==0)
        {
            head=tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insertAtEnd(Node* head,int data)
    {
        Node*temp=new Node(data);
        while (head->next!=NULL)
        {
            head=head->next;
        }
        head->next=temp;
        size++;

    }
};
int main()
{
    Node*head;
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();   //10
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();
    cout<<ll.size;
    ll.insertAtEnd(head,40);
    

    return 0;  
}