///wap to delete a node from the binary search tree

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node *right;
};
Node* create(int item)
{
    Node* newnode = new Node;
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
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
    {
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
Node* deleteNode(Node* root, int item)
{
    if(root==NULL)
    return root;
    if(item<root->data)
    {
        root->left = deleteNode(root->left, item);
        return root;
    }
    else if(item>root->data)
    {
        root->right = deleteNode(root->right, item);
        return root;
    }
    //we found the element we want to delete
    //we will be at the node which we want to delete
    // if one child
    if(root->left==NULL) // right is there for root
    {
        Node * temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right == NULL)    //left is there for root
    {
        Node * temp = root->left;
        delete root;
        return temp;
    }
    else{
        //the root having 2 child
        //find the inorder successor
        Node * succParent = root;
        Node * succ = root->right;
        while(succ->left!=NULL)
        {
            succParent = succ;
            succ = succ->left;
        }
        if(succParent == root)
        {
            succParent->right = succ->right;
        }
        else{
            succParent->left = succ->right;
        }
        root->data = succ->data;
        delete succ;
        return root;
    }
}
int main()
{
    Node* root = NULL;  
    // root = insert(root,14);
    // insert(root,7);
    // insert(root,28);
    // insert(root,21);
    // insert(root,10);
    // insert(root,29);
    // insert(root,5);
    // insert(root,15);
    // insert(root,72);
    // insert(root,13);
    int r;
    cout<<"Enter the range : ";
    cin>>r;
    int a[r];
    cout<<"Enter all elements of BST : ";
    for(int i =0;i<r;i++)
    {
        cin>>a[i];
        root = insert(root, a[i]);
    }
    cout<<"Binary search tree successsfully .... "<<endl;
    cout<<"In-order traversal is : ";
    display(root);

    //delete
    int n;
    cout<<"\nEntere the number you want to delete : ";
    cin>>n;
    root = deleteNode(root,n);
    cout<<"In-order traversal is : ";
    display(root);
}