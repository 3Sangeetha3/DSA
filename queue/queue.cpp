/// The queue is FIFO
#include<iostream>
using namespace std;
int queue[10],maxsize=10,front=-1,rear=-1;
void Insert();
void Delete();
void display();
int main()
{
    int ch;
    cout<<"Enter your choice : "<<endl;
    cout<<"1) Insert the element in the queue."<<endl;
    cout<<"2) Delete the element from the queue."<<endl;
    cout<<"3) Display the elements in the queue."<<endl;
    cout<<"4) exit from the queue."<<endl;
    while(1)
    {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:Insert();break;
            case 2:Delete();break;
            case 3:display();break;
            case 4:exit(0);break;
            default:cout<<"Enter the valid choice."<<endl;
        }
    }
}
//inserting element is from rear and deleting element is from front 
///if Rear is maxsize -1, then the queue is overflowing.
///if no element is there in the queue and you want to insert the element, then both front and rear increases
///if element is there in the queue and you want to insert an element, then rear increases.
void Insert()
{
    int val;
    if(rear==maxsize-1)
        cout<<"Queue Overflow."<<endl;
    else
    {
        if (front == -1)
        front++;
        cout<<"Enter the element you want to insert."<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
///if front = -1 and rear = -1 and you want to delete the element, then it is an underflow condition.
///if element is there and you want to delete the element then front increases;
void Delete()
{
    if(front == -1 || front>rear)
    cout<<"Queue underflow."<<endl;
    else
    {
        cout<<"Element deleted from the queue is "<<queue[front]<<endl;
        front++;
    }
}
///if you inserted and deleted all the elements, then the front and rear are not -1, and it will not print "queue is empty", after deleting all the elements.
void display()
{
    if(front==-1)
    cout<<"Queue is empty."<<endl;
    else
    {
        cout<<"Queue elements are : ";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
