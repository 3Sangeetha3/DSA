///wap to create one binary search tree

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* create(int item)
{
    Node* node = new Node;
    node->data=item;
    node->left=NULL;
    node->right=NULL;
    return node;
}
Node* insert(Node* root, int item)
{
    if(root==NULL)  ///terminating condition for recursion
    {
        return create(item);
    }
    if(item<root->data)
    {
        root->left = insert(root->left,item);
    }
    else if(item > (root->data)){
        root->right = insert(root->right,item);
    }
    return root;
}
void display(Node *root)
{
    if(root==NULL)
    return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main()
{
    Node * root = NULL;
    root = insert(root,9);
    insert(root,6);
    insert(root,4);
    insert(root,14);
    insert(root,12);
    insert(root,5);
    insert(root,10);
    cout<<"Binary search tree created successfully..."<<endl;
    cout<<"In-order traverssal of BST is : ";
    display(root);
    return 0;
}