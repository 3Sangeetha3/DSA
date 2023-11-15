//wap to insert one node at the beginnning of the single linked list

#include <iostream>
#include <cstdlib>
using namespace std;
void create();
void display();
void insert();
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
void insert()
{
    cout<<"Enter the element you want to insert: ";
    node = new link;
    cin>>node->data;
    node->next = start;
    start = node;
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
    insert();
    display();
    return 0;
}
