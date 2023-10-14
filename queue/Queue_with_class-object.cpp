/// queue using the class object method
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
    q.display();
    q.Delete();
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.display();
    q.insert(6);
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    return 0;
}
