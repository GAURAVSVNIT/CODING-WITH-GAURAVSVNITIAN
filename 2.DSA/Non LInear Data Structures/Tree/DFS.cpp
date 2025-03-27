#include <bits/stdc++.h>
using namespace std;
// DFS (Depth First Search)
// Preorder Traversal
// Inorder Traversal
// Postorder Traversal

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }   
};

// Root -> Left -> Right
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Left -> Root -> Right
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Left -> Right -> Root
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int product(Node * root)
{
    if (root == NULL)
        return 1;
    return root->data * product(root->left) * product(root->right);
}
int level(Node * root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}
int main()
{
    struct Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->right = new Node(1); 

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}