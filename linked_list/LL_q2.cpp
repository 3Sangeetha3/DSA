#include <iostream>
using namespace std;
//wap to accept 5 students rool number & marks , let max mark is 100.tAsk is to print all the roll num's of the student, who have secured more than 60% of the marks.

void create();
void display();
struct link 
{
    int roll;
    int mark;
    link *next;
};
link * start = NULL;
link * node;
link * current;
void create()
{
    cout<<"Enter 5 students roll and mark : ";
    for(int i=0;i<5;i++)
    {
        node = new link;
        cin>>node->roll;
        cin>>node->mark;
        node->next = NULL;
        if(start == NULL)
        {
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = node;
        }
    }
}
void display()
{
    struct link *ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->mark>=60)
        {
            cout<<ptr->roll<<" ";
        }
        ptr=ptr->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}