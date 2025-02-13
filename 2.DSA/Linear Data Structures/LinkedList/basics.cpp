#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node*next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
 Node* next;//pointer to next node
            temp = temp->next;
    }
}
void displayrecursive(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->value<<" ";
    displayrecursive(head->next);
} 
int size(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
} 
int main()
{
    Node a(10); //OR// Node* a = new Node(10);
    Node b(21); //OR// Node* b = new Node(10);
    Node c(29); //OR// Node* c = new Node(10);
    Node d(25); //OR// Node* d = new Node(10);
    //forming linked list
    a.next = &b; //OR//a->next = b;
    b.next = &c; //OR//b->next = c;
    c.next = &d; //OR//c->next = d;
    cout<<a.value<<" "<<a.next->value<<" "<<a.next->next->value<<" "<<a.next->next->next->value<<endl;
    //printing linked list
   display(&a);
   cout<<endl;
   displayrecursive(&a);
   cout<<size(&a);
    return 0;
}