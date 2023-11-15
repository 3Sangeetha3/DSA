/******************************************************************************
WAP to count the Number of even elements present in the Singly link list
*******************************************************************************/
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
void create()
{
    int n,i;
    cout<<"How many Nodes U want to create: ";
    cin>>n;
    cout<<"Enter the Elements :";
    for(i=0;i<n;i++)
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
void count()
{
    struct link *ptr=start;
    int ctr=0;
    while(ptr!=NULL)
    {
        
        if(ptr->data % 2==0)
        {
            ctr++;
        }
        ptr=ptr->next;
        
    }
    if(ctr>0)
        cout<<"Number of Even Elements are :"<<ctr;
    else
        cout<<"no even elements present";
   
}
int main()   
{
    create();
    count();
    return 0;
}