///queue using the class object method
#include<iostream>
using namespace std;
class Queue
{
    private:
    int front,rear,maxsize;
    int a[100];
    public:
    Queue()
    {
        front = rear = -1;
        maxsize=5;
    }
    void insert(int x);
    void Delete();
    void display();
    void Exit()
    {
        cout<<"You are the exiting the program!!!"<<endl;
        exit(0);
    }
};
void Queue::insert(int x)
{
     if(rear==maxsize-1)
        cout<<"Queue Overflow."<<endl;
    else
    {
        if (front == -1)
        front++;
        rear++;
        a[rear]=x;
        cout<<"Inserted elemnt is : "<<a[rear]<<endl;
    }
}
void Queue::Delete()
{
    if(front == -1 || front>rear)
    cout<<"Queue underflow."<<endl;
    else
    {
        cout<<"Element deleted from the queue is "<<a[front]<<endl;
        front++;
    }
}
void Queue::display()
{
     if(front==-1)
    cout<<"Queue is empty."<<endl;
    else
    {
        cout<<"Queue elements are : ";
        for(int i=front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Queue q;
    int choice,x;
    cout<<"Enter your choice : "<<endl;
    cout<<"1) Insert the element in the queue."<<endl;
    cout<<"2) Delete the element from the queue."<<endl;
    cout<<"3) Display the elements in the queue."<<endl;        
    cout<<"4) exit from the queue."<<endl;
    do
    {
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the element you want to insert: "<<endl;
            cin>>x;
            q.insert(x);break;
            case 2:q.Delete();break;
            case 3:q.display();break;
            case 4:q.Exit();break;
            default:cout<<"Enter the valid choice."<<endl;
        }
    }
    while(choice!=4);
    return 0;
}
