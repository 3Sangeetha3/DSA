//wap to find the location of one element from the single linked list.
#include<iostream>
#include<cstdlib>
using namespace std;
void create();
void display();
void search();
struct link 
{
    int data;
    link *next;
};
link * start = NULL;
link * current;
link *node;
void create()
{
    int n,i;
    cout<<"Enter the number of nodes you want to create: ";
    cin>>n;
    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++)
    {
        node = new link;        //node = (struct link *)malloc(sizeof(struct link));  ---->  dynamic memory allocation
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start = node;
            current = node;
        }
        else{
            current->next=node;         //linking two nodes
            current = node;              //mopving current to next position
        }
    }
}
void display()
{
    struct link *ptr;
    ptr = start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    //search();
}
void search()
{
    int no,ctr=0,flag = 0;
    cout<<"Enter the number you want to search: ";
    cin>>no;
    struct link *ptr = start;
    while(ptr!=NULL)
    {
        if(ptr->data==no)
        {
            flag = 1;
            break;
        }
        ctr++;
        ptr=ptr->next;
    }
    if(flag == 0)
    {
        cout<<"Element not found ! ";
    }
    else{
        cout<<"Element found at position: "<<ctr+1<<endl;
        cout<<"Element found at the index: "<<ctr;
    }
}
int main()
{
    create();
    display();
    search();
    return 0;
}