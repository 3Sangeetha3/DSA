
//wap to create a binary tree using linked list
#include<iostream>
using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
};
Node* create(char val) /// using Node* because because return type is a structure
{
    Node* newnode = new Node;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void display(Node* root)
{
    if(root==NULL)
    return;
    
    cout<<root->data;
    display(root->left);
    display(root->right);
}
int main()
{
    Node* root = create('A');//create a root
    root->left=create('B');
    root->left->left=create('D');
    root->right=create('C');
    root->right->left=create('E');
    root->right->right=create('F');
    root->right->left->left=create('G');
    cout<<"Binary tree created successfully !"<<endl;
    cout<<"Pre order traversal is : ";
    display(root);

}