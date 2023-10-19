///AVL tree program
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    int height;
};
int findheight(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    //return max(findheight(root->left),findheight(root->right))+1;   
    return root->height;
}
Node* leftRotate(Node* root)
{
    Node* x = root->right;
    Node* y = x->left;

    x->left = root;
    root->right = y;

    root->height = max(findheight(root->left),findheight(root->right))+1;
    x->height = max(findheight(x->left),findheight(x->right))+1;

    return x;   
}
Node* rightRotate(Node* root)
{
    Node* x = root->left;
    Node* y = x->right;

    x->right = root;
    root->left = y;

    root->height = max(findheight(root->left),findheight(root->right))+1;
    x->height = max(findheight(x->left),findheight(x->right))+1;

    return x;   
}
Node* create(int item)
{
    Node* newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 1;
    return newnode;
}

int getbalance(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return findheight(root->left) - findheight(root->right);
}
Node* insert(Node* root, int item)
{
    if(root == NULL)
    {
        return create(item);
    }
    if(item<root->data)
    {
        root->left = insert(root->left,item);
    }
    else if(item>root->data)
    {
        root->right = insert(root->right,item);
    }
    return root;

    root->height = findheight(root);
    root->height = 1 + max(findheight(root->left),findheight(root->right));

    int bf = getbalance(root);

    //LL case
    if(bf>1 && item<root->left->data)
    {
        return rightRotate(root);
    }
    //RR case
    else if(bf<-1 && item>root->right->data)
    {
        return leftRotate(root);
    }
    //LR case
    else if(bf>1 && item>root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    //RL case
    else if(bf<-1 && item<root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
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
    Node* root = NULL;
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter all the elements of AVL Tree : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root = insert(root, a[i]);
    }
    cout<<"AVL Tree created successfully.....";
    cout<<"\nInorder traversal : ";
    display(root);
    return 0;
}