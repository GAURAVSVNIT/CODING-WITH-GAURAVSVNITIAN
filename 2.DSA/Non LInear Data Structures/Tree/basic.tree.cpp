# include<bits/stdc++.h>
using namespace std;

// Full binary tree
// If all nodes have either 0 or 2 children
// Complete Binary Tree
// If all are filled except the last level and all nodes are as left as possible
// Perfect Binary Tree
// If all nodes are filled and all leaves are at the same level
// Balanced Binary Tree
// If the height of left and right subtrees differ by at most 1 (Height of tree at most log(n))
// Degenerate Binary Tree
// If all nodes have only one child

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

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 
}
