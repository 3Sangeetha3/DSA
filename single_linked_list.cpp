#include <iostream>
#include <cstdlib>
using namespace std;
void create();
void display();
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
    display();
    return 0;
}
