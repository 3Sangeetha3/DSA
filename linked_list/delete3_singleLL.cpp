//wap to delete a particular number form the linked list.

#include <iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start=NULL;
struct link *current;
struct link *node;
int n;
void create()
{
    cout<<"How many nodes u want to create : ";
    cin>>n;
    cout<<"Enter all elements : ";
    for(int i=0;i<n;i++)
    {
        node=(struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start=node;
            current=node;
        }
        else
        {
            current->next=node;
            current=node;
        }
    }
}
void delete1()
{
    int no;
    cout<<"Enter the number u want to delete : ";
    cin>>no;
    struct link *ptr=start;
    current=ptr->next;
    if(ptr->data==no)
    {
        start=ptr->next;
    }
    else
    {
        while(current!=NULL)
        {
            if(current->data==no)
            {
                break;
            }
            ptr=ptr->next;
            current=current->next;
        }
        if(current!=NULL)
        ptr->next=current->next;
    }
}
void display()
{
    if(current==NULL)
    {
        cout<<"Element not Found ";
    }
    else
    {
        struct link *ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}
int main()
{
    create();
    delete1();
    display();
    return 0;
}