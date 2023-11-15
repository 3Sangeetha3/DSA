/******************************************************************************
WAP Create a link list and display it
*******************************************************************************/
#include <iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start=NULL; // link *start=NULL;
struct link *current;    // link *current;
struct link *node;      //link *node;
void create()
{
    int n,i;
    cout<<"How many Nodes U want to create: ";
    cin>>n;
    cout<<"Enter the Elements :";
    for(i=0;i<n;i++)
    {
       // node=(struct link *)malloc(sizeof(struct link));
	node=new link();
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
void display(link *&ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    display(ptr->next); // first move forword
    cout<<ptr->data;    //then print from the last
    
}
int main()   
{
    create();
    display(start);
    return 0;
}