/******************************************************************************

WAP to Create Two link list and display separately.

*******************************************************************************/
#include <iostream>
using namespace std;
struct link
{
    int data;
    link* next;
};
link *start1=NULL,*start2=NULL,*current,*node;
void create(link *&start)
{
   int n;
    cout<<"how many nodes u want to create ";
    cin>>n;
    cout<<"Enter all elements ";
    for(int i=0;i<n;i++)
    {
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
void display(struct link *&start)
{
    link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data << " ";
        ptr=ptr->next;
    }
    cout << endl;
}
int main()
{
    cout<<"create the 1st link list: "<<endl;
    create(start1);
    cout<<"create the 2nd link list: "<<endl;
    create(start2);
    cout<<"Elements of linked list one: "<<endl;
    display(start1);
    cout<<"Elements of linked list two: "<<endl;
    display(start2);
    return 0;
}