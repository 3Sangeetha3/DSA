//wap to insert node at th particular position of the single linked list.

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
    int po;
    node = new link;
    cout<<"Enter the num you want insert and position: ";
    cin>>node->data;
    cin>>po;
    link * ptr = start;
    current = ptr->next;
    for(int i=1;i<=po-2;i++)
    {
        ptr=ptr->next;
        current = current ->next;
    }
    ptr->next = node;
    node->next = current;
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
