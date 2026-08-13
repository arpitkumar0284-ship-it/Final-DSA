#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node* MakeNode(int x)
{
    node* p = new node;
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

node* BSTInsertion(node* root, int x)
{
    if(root == NULL)
    {
        return MakeNode(x);
    }

    if(x < root->data)
    {
        root->left = BSTInsertion(root->left, x);
    }
    else if(x > root->data)
    {
        root->right = BSTInsertion(root->right, x);
    }

    return root;
}

void InOrder(node* root)
{
    if(root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

int main()
{
    node* root = NULL;

    root = BSTInsertion(root, 50);
    root = BSTInsertion(root, 30);
    root = BSTInsertion(root, 70);
    root = BSTInsertion(root, 20);
    root = BSTInsertion(root, 40);
    root = BSTInsertion(root, 60);
    root = BSTInsertion(root, 80);

    cout << "Inorder Traversal: ";
    InOrder(root);

    return 0;
}