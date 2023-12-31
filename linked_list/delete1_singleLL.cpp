//wap to delete a node at the beginning of the linked list.

#include <iostream>
#include <cstdlib>
using namespace std;
void create();
void display();
void Delete();
struct link
{
    int data;
    link *next;
};
struct link *start = NULL;
struct link *node;
struct link *current;
void create()
{
    int n;
    cout<<"Enter how many nodes you want ot craete : ";
    cin>>n;
    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++)
    {
        node=(struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = current->next;
        }
    }
}
void Delete()
{
    if (start != NULL) // Check if list is not empty
    {
        link* ptr = start;
        start = start->next; // Update start to point to the next node
        delete ptr; // Delete the first node
    }
    else
    {
        cout << "List is empty. Nothing to delete." << endl;
    }
}

void display()
{
    struct link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    create();
    Delete();
    display();
    return 0;
}
