# include <iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};

class LinkedList{
    private:
    Node*head;
    public:
    LinkedList()
    {
        head=nullptr;
    }
    void insertAtBegin(int val)
    {
        Node* n=new Node(val);
        if(head==NULL)
        {
            head=n;
        }
        Node*temp=head;
        n->next=temp;
        head=n;
    }
    void insertAtPos(int pos,int val)
    {
        Node* n=new Node(val);
        if(pos==1)
        {
            insertAtBegin(val);
        }
        Node*temp=head;
        for(int i = 1; i < pos-1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        n->next = temp->next;
        temp->next = n;
    }
    void disp()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};