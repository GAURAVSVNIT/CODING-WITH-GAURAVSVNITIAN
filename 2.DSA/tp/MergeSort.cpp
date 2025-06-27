#include<iostream>
using namespace std;

// void merge()
// {

// }
// void mergeSort(int arr[],int l,int r)
// {
//     if(l<r)
//     {
//         int m;
//         m=l+(r-l)/2;
//         mergeSort(arr,l,m);
//         mergeSort(arr,m+1,r);
//         merge()

//     }

// }
// int main()
// {
    //     int arr[]={1,2,3,5,8,7,1,2,4,777,4,5,4,3,333,21}
    
    // }
int c = 0;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
int size(Node*root)
{   
        if(root==NULL) return 0;
        return 1+size(root->left)+size(root->right);
}
int main()
{
    Node* a= new Node(2);
    Node* b= new Node(5);
    Node* c= new Node(3);
    Node* d= new Node(24);
    Node* e= new Node(4);
    Node* f= new Node(5);
    Node* g= new Node(56);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<size(a);
    // cout<<c<<endl;


}