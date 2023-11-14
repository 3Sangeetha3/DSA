//WAP accept the elements in link list , once u get negative number stop accepting and print all elements

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
    cout<<"Elements the elements: ";
        do
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
        }while(node->data>0);
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
