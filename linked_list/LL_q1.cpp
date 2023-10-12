//WAP accept the elements in link list , print the elements until you get negative number stop printing the elements

#include<iostream>
using namespace std;
void create();
void display();
struct Node
{
    int data;
    Node *next;
};
Node * start = NULL;
Node * current;
Node * node;
void create()
{
    int n;
    cout<<"Enter how mnay nodes you want to create : ";
    cin>>n;
    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++)
    {
        node = new Node;
        cin>>node->data;
        node->next = NULL;
        if(start == NULL)
        {
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = node;
        }
    }
}
void display()
{
    struct Node *ptr = start;
    while (ptr != NULL) {
        if (ptr->data < 0) {
            ptr = ptr->next;
            continue;
        }
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}